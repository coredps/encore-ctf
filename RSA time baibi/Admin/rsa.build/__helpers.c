// This file contains helper functions that are automatically created from
// templates.

#include "nuitka/prelude.h"

extern PyObject *callPythonFunction( PyObject *func, PyObject **args, int count );


PyObject *CALL_FUNCTION_WITH_ARGS1( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 1; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 1 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 1; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 1 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 1 * sizeof(PyObject *) );
            memcpy( python_pars + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 1 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 1 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 1; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 1 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 1 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 1 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 1 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (1 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 1 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (1 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 1 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 1, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            1
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 1 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS2( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 2; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 2 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 2; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 2 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 2 * sizeof(PyObject *) );
            memcpy( python_pars + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 2 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 2 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 2; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 2 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 2 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 2 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 2 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (2 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 2 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (2 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 2 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 2, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            2
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 2 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS3( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 3; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 3 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 3; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 3 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 3 * sizeof(PyObject *) );
            memcpy( python_pars + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 3 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 3 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 3; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 3 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 3 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 3 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 3 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (3 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 3 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (3 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 3 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 3, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            3
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 3 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS4( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 4; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 4 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 4; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 4 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 4 * sizeof(PyObject *) );
            memcpy( python_pars + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 4 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 4 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 4; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 4 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 4 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 4 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 4 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (4 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 4 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (4 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 4 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 4, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            4
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 4 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS5( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 5; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 5 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 5; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 5 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 5 * sizeof(PyObject *) );
            memcpy( python_pars + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 5 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 5 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 5; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 5 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 5 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 5 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 5 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (5 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 5 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (5 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 5 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 5, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            5
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 5 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS6( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 6; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 6 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 6; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 6 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 6 * sizeof(PyObject *) );
            memcpy( python_pars + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 6 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 6 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 6; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 6 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 6 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 6 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 6 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (6 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 6 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (6 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 6 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 6, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            6
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 6 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_METHOD_WITH_ARGS1( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 1; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    1
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );
            return CALL_FUNCTION_WITH_ARGS1(
                descr,
                args
            );
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS1( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    1
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS1( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS1( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS2( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 2; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    2
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );
            return CALL_FUNCTION_WITH_ARGS2(
                descr,
                args
            );
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS2( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    2
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS2( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS2( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS3( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 3; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    3
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );
            return CALL_FUNCTION_WITH_ARGS3(
                descr,
                args
            );
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS3( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    3
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS3( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS3( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS4( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 4; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    4
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );
            return CALL_FUNCTION_WITH_ARGS4(
                descr,
                args
            );
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS4( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    4
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS4( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS4( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS4(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS4(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}
/* Code to register embedded modules for meta path based loading if any. */

#include "nuitka/unfreezing.h"

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
MOD_INIT_DECL( Crypto );
MOD_INIT_DECL( Crypto$Cipher );
MOD_INIT_DECL( Crypto$Cipher$AES );
MOD_INIT_DECL( Crypto$Cipher$DES );
MOD_INIT_DECL( Crypto$Cipher$DES3 );
MOD_INIT_DECL( Crypto$Cipher$blockalgo );
MOD_INIT_DECL( Crypto$Hash );
MOD_INIT_DECL( Crypto$Hash$HMAC );
MOD_INIT_DECL( Crypto$Hash$MD5 );
MOD_INIT_DECL( Crypto$Hash$SHA );
MOD_INIT_DECL( Crypto$Hash$SHA256 );
MOD_INIT_DECL( Crypto$Hash$hashalgo );
MOD_INIT_DECL( Crypto$Protocol );
MOD_INIT_DECL( Crypto$Protocol$KDF );
MOD_INIT_DECL( Crypto$PublicKey );
MOD_INIT_DECL( Crypto$PublicKey$RSA );
MOD_INIT_DECL( Crypto$PublicKey$_RSA );
MOD_INIT_DECL( Crypto$PublicKey$_slowmath );
MOD_INIT_DECL( Crypto$PublicKey$pubkey );
MOD_INIT_DECL( Crypto$Random );
MOD_INIT_DECL( Crypto$Random$Fortuna );
MOD_INIT_DECL( Crypto$Random$Fortuna$FortunaAccumulator );
MOD_INIT_DECL( Crypto$Random$Fortuna$FortunaGenerator );
MOD_INIT_DECL( Crypto$Random$Fortuna$SHAd256 );
MOD_INIT_DECL( Crypto$Random$OSRNG );
MOD_INIT_DECL( Crypto$Random$OSRNG$fallback );
MOD_INIT_DECL( Crypto$Random$OSRNG$nt );
MOD_INIT_DECL( Crypto$Random$OSRNG$posix );
MOD_INIT_DECL( Crypto$Random$OSRNG$rng_base );
MOD_INIT_DECL( Crypto$Random$_UserFriendlyRNG );
MOD_INIT_DECL( Crypto$Random$random );
MOD_INIT_DECL( Crypto$Util );
MOD_INIT_DECL( Crypto$Util$Counter );
MOD_INIT_DECL( Crypto$Util$_number_new );
MOD_INIT_DECL( Crypto$Util$asn1 );
MOD_INIT_DECL( Crypto$Util$number );
MOD_INIT_DECL( Crypto$Util$py21compat );
MOD_INIT_DECL( Crypto$Util$py3compat );
MOD_INIT_DECL( Crypto$pct_warnings );
MOD_INIT_DECL( __main__ );
static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] =
{
    { (char *)"Crypto", MOD_INIT_NAME( Crypto ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"Crypto.Cipher", MOD_INIT_NAME( Crypto$Cipher ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"Crypto.Cipher.AES", MOD_INIT_NAME( Crypto$Cipher$AES ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.Cipher.DES", MOD_INIT_NAME( Crypto$Cipher$DES ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.Cipher.DES3", MOD_INIT_NAME( Crypto$Cipher$DES3 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.Cipher.blockalgo", MOD_INIT_NAME( Crypto$Cipher$blockalgo ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.Hash", MOD_INIT_NAME( Crypto$Hash ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"Crypto.Hash.HMAC", MOD_INIT_NAME( Crypto$Hash$HMAC ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.Hash.MD5", MOD_INIT_NAME( Crypto$Hash$MD5 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.Hash.SHA", MOD_INIT_NAME( Crypto$Hash$SHA ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.Hash.SHA256", MOD_INIT_NAME( Crypto$Hash$SHA256 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.Hash.hashalgo", MOD_INIT_NAME( Crypto$Hash$hashalgo ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.Protocol", MOD_INIT_NAME( Crypto$Protocol ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"Crypto.Protocol.KDF", MOD_INIT_NAME( Crypto$Protocol$KDF ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.PublicKey", MOD_INIT_NAME( Crypto$PublicKey ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"Crypto.PublicKey.RSA", MOD_INIT_NAME( Crypto$PublicKey$RSA ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.PublicKey._RSA", MOD_INIT_NAME( Crypto$PublicKey$_RSA ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.PublicKey._slowmath", MOD_INIT_NAME( Crypto$PublicKey$_slowmath ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.PublicKey.pubkey", MOD_INIT_NAME( Crypto$PublicKey$pubkey ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.Random", MOD_INIT_NAME( Crypto$Random ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"Crypto.Random.Fortuna", MOD_INIT_NAME( Crypto$Random$Fortuna ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"Crypto.Random.Fortuna.FortunaAccumulator", MOD_INIT_NAME( Crypto$Random$Fortuna$FortunaAccumulator ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.Random.Fortuna.FortunaGenerator", MOD_INIT_NAME( Crypto$Random$Fortuna$FortunaGenerator ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.Random.Fortuna.SHAd256", MOD_INIT_NAME( Crypto$Random$Fortuna$SHAd256 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.Random.OSRNG", MOD_INIT_NAME( Crypto$Random$OSRNG ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"Crypto.Random.OSRNG.fallback", MOD_INIT_NAME( Crypto$Random$OSRNG$fallback ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.Random.OSRNG.nt", MOD_INIT_NAME( Crypto$Random$OSRNG$nt ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.Random.OSRNG.posix", MOD_INIT_NAME( Crypto$Random$OSRNG$posix ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.Random.OSRNG.rng_base", MOD_INIT_NAME( Crypto$Random$OSRNG$rng_base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.Random._UserFriendlyRNG", MOD_INIT_NAME( Crypto$Random$_UserFriendlyRNG ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.Random.random", MOD_INIT_NAME( Crypto$Random$random ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.Util", MOD_INIT_NAME( Crypto$Util ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"Crypto.Util.Counter", MOD_INIT_NAME( Crypto$Util$Counter ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.Util._number_new", MOD_INIT_NAME( Crypto$Util$_number_new ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.Util.asn1", MOD_INIT_NAME( Crypto$Util$asn1 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.Util.number", MOD_INIT_NAME( Crypto$Util$number ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.Util.py21compat", MOD_INIT_NAME( Crypto$Util$py21compat ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.Util.py3compat", MOD_INIT_NAME( Crypto$Util$py3compat ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Crypto.pct_warnings", MOD_INIT_NAME( Crypto$pct_warnings ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"__main__", MOD_INIT_NAME( __main__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { NULL, NULL, 0, 0, 0 }
};

void setupMetaPathBasedLoader( void )
{
    static bool init_done = false;

    if ( init_done == false )
    {
        registerMetaPathBasedUnfreezer( meta_path_loader_entries );
        init_done = true;
    }
}
