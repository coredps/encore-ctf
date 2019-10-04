/* Generated code for Python source for module 'Crypto.Util.py21compat'
 * created by Nuitka version 0.5.28.2
 *
 * This code is in part copyright 2017 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The _module_Crypto$Util$py21compat is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$Util$py21compat;
PyDictObject *moduledict_Crypto$Util$py21compat;

/* The module constants used, if any. */
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain___revision__;
extern PyObject *const_dict_empty;
extern PyObject *const_str_digest_10c675d39d154a59cf6207a839b0661f;
static PyObject *const_str_plain_isinstance;
static PyObject *const_str_plain_False;
extern PyObject *const_str_plain___module__;
static PyObject *const_dict_05767f8689d27e4257ea8eaf4e888ec8;
static PyObject *const_tuple_int_pos_1_int_0_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain___all__;
static PyObject *const_list_str_plain_object_list;
static PyObject *const_str_digest_479b647ae2877baaa3d5cadadb047ac7;
static PyObject *const_str_plain_object;
static PyObject *const_str_plain__builtin_type_map;
extern PyObject *const_tuple_type_int_type_long_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_62ae7e56c07b9dd4e0f7d8de33c8a890;
static PyObject *const_str_digest_f764cf16e6260d1b677d4f87db8f7f1b;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_int_pos_5_tuple_type_int_type_long_tuple_tuple;
static PyObject *const_str_plain_True;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_obj;
static PyObject *const_str_plain___builtin__;
static PyObject *const_list_str_plain_True_str_plain_False_list;
extern PyObject *const_str_digest_74ba315069266703540e145c62869e9e;
static PyObject *const_list_str_plain_isinstance_list;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_obj_str_plain_t_str_plain_typ_tuple;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_get;
static PyObject *const_str_plain_typ;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_isinstance = UNSTREAM_STRING( &constant_bin[ 116662 ], 10, 1 );
    const_str_plain_False = UNSTREAM_STRING( &constant_bin[ 33433 ], 5, 1 );
    const_dict_05767f8689d27e4257ea8eaf4e888ec8 = _PyDict_NewPresized( 6 );
    PyDict_SetItem( const_dict_05767f8689d27e4257ea8eaf4e888ec8, (PyObject *)&PyList_Type, (PyObject *)&PyList_Type );
    PyDict_SetItem( const_dict_05767f8689d27e4257ea8eaf4e888ec8, (PyObject *)&PyString_Type, (PyObject *)&PyString_Type );
    PyDict_SetItem( const_dict_05767f8689d27e4257ea8eaf4e888ec8, (PyObject *)&PyLong_Type, (PyObject *)&PyLong_Type );
    PyDict_SetItem( const_dict_05767f8689d27e4257ea8eaf4e888ec8, (PyObject *)&PyInt_Type, (PyObject *)&PyInt_Type );
    PyDict_SetItem( const_dict_05767f8689d27e4257ea8eaf4e888ec8, (PyObject *)&PyTuple_Type, (PyObject *)&PyTuple_Type );
    PyDict_SetItem( const_dict_05767f8689d27e4257ea8eaf4e888ec8, (PyObject *)&PyUnicode_Type, (PyObject *)&PyUnicode_Type );
    assert( PyDict_Size( const_dict_05767f8689d27e4257ea8eaf4e888ec8 ) == 6 );
    const_tuple_int_pos_1_int_0_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_int_0_tuple, 0, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_int_0_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    const_list_str_plain_object_list = PyList_New( 1 );
    const_str_plain_object = UNSTREAM_STRING( &constant_bin[ 4534 ], 6, 1 );
    PyList_SET_ITEM( const_list_str_plain_object_list, 0, const_str_plain_object ); Py_INCREF( const_str_plain_object );
    const_str_digest_479b647ae2877baaa3d5cadadb047ac7 = UNSTREAM_STRING( &constant_bin[ 116672 ], 31, 0 );
    const_str_plain__builtin_type_map = UNSTREAM_STRING( &constant_bin[ 116703 ], 17, 1 );
    const_str_digest_62ae7e56c07b9dd4e0f7d8de33c8a890 = UNSTREAM_STRING( &constant_bin[ 116720 ], 58, 0 );
    const_str_digest_f764cf16e6260d1b677d4f87db8f7f1b = UNSTREAM_STRING( &constant_bin[ 116778 ], 116, 0 );
    const_tuple_int_pos_5_tuple_type_int_type_long_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_5_tuple_type_int_type_long_tuple_tuple, 0, const_int_pos_5 ); Py_INCREF( const_int_pos_5 );
    PyTuple_SET_ITEM( const_tuple_int_pos_5_tuple_type_int_type_long_tuple_tuple, 1, const_tuple_type_int_type_long_tuple ); Py_INCREF( const_tuple_type_int_type_long_tuple );
    const_str_plain_True = UNSTREAM_STRING( &constant_bin[ 33375 ], 4, 1 );
    const_str_plain___builtin__ = UNSTREAM_STRING( &constant_bin[ 116894 ], 11, 1 );
    const_list_str_plain_True_str_plain_False_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_True_str_plain_False_list, 0, const_str_plain_True ); Py_INCREF( const_str_plain_True );
    PyList_SET_ITEM( const_list_str_plain_True_str_plain_False_list, 1, const_str_plain_False ); Py_INCREF( const_str_plain_False );
    const_list_str_plain_isinstance_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_isinstance_list, 0, const_str_plain_isinstance ); Py_INCREF( const_str_plain_isinstance );
    const_tuple_str_plain_obj_str_plain_t_str_plain_typ_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_obj_str_plain_t_str_plain_typ_tuple, 0, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    PyTuple_SET_ITEM( const_tuple_str_plain_obj_str_plain_t_str_plain_typ_tuple, 1, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    const_str_plain_typ = UNSTREAM_STRING( &constant_bin[ 22235 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_obj_str_plain_t_str_plain_typ_tuple, 2, const_str_plain_typ ); Py_INCREF( const_str_plain_typ );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Crypto$Util$py21compat( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_fce4494c4bf6f7f8efda88ab7ae4b246;
static PyCodeObject *codeobj_e18c5a792d9f321da5edcb8679326265;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_62ae7e56c07b9dd4e0f7d8de33c8a890;
    codeobj_fce4494c4bf6f7f8efda88ab7ae4b246 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_479b647ae2877baaa3d5cadadb047ac7, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_e18c5a792d9f321da5edcb8679326265 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isinstance, 73, const_tuple_str_plain_obj_str_plain_t_str_plain_typ_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_Crypto$Util$py21compat$$$function_1_isinstance(  );


// The module function definitions.
static PyObject *impl_Crypto$Util$py21compat$$$function_1_isinstance( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[ 0 ];
    PyObject *par_t = python_pars[ 1 ];
    PyObject *var_typ = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_e18c5a792d9f321da5edcb8679326265 = NULL;

    struct Nuitka_FrameObject *frame_e18c5a792d9f321da5edcb8679326265;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e18c5a792d9f321da5edcb8679326265, codeobj_e18c5a792d9f321da5edcb8679326265, module_Crypto$Util$py21compat, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e18c5a792d9f321da5edcb8679326265 = cache_frame_e18c5a792d9f321da5edcb8679326265;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e18c5a792d9f321da5edcb8679326265 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e18c5a792d9f321da5edcb8679326265 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain___builtin__ );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___builtin__ );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "__builtin__" );
        exception_tb = NULL;

        exception_lineno = 74;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_t;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = (PyObject *)&PyTuple_Type;
    frame_e18c5a792d9f321da5edcb8679326265->m_frame.f_lineno = 74;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_cond_value_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_isinstance, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 74;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain___builtin__ );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___builtin__ );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "__builtin__" );
        exception_tb = NULL;

        exception_lineno = 76;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_isinstance );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_obj;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain__builtin_type_map );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__builtin_type_map );
    }

    if ( tmp_called_instance_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_builtin_type_map" );
        exception_tb = NULL;

        exception_lineno = 76;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_t;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = par_t;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_e18c5a792d9f321da5edcb8679326265->m_frame.f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, call_args );
    }

    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 76;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_e18c5a792d9f321da5edcb8679326265->m_frame.f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_iter_arg_1 = par_t;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            exception_lineno = 79;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_3 );
    {
        PyObject *old = var_typ;
        var_typ = tmp_assign_source_3;
        Py_INCREF( var_typ );
        Py_XDECREF( old );
    }

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain___builtin__ );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___builtin__ );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "__builtin__" );
        exception_tb = NULL;

        exception_lineno = 80;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_isinstance );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_7 = par_obj;

    CHECK_OBJECT( tmp_args_element_name_7 );
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain__builtin_type_map );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__builtin_type_map );
    }

    if ( tmp_called_instance_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_builtin_type_map" );
        exception_tb = NULL;

        exception_lineno = 80;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_9 = var_typ;

    CHECK_OBJECT( tmp_args_element_name_9 );
    tmp_args_element_name_10 = var_typ;

    CHECK_OBJECT( tmp_args_element_name_10 );
    frame_e18c5a792d9f321da5edcb8679326265->m_frame.f_lineno = 80;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_args_element_name_8 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_get, call_args );
    }

    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 80;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    frame_e18c5a792d9f321da5edcb8679326265->m_frame.f_lineno = 80;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 80;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain_True );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_True );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "True" );
        exception_tb = NULL;

        exception_lineno = 81;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain_False );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_False );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "False" );
        exception_tb = NULL;

        exception_lineno = 82;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e18c5a792d9f321da5edcb8679326265 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e18c5a792d9f321da5edcb8679326265 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e18c5a792d9f321da5edcb8679326265 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e18c5a792d9f321da5edcb8679326265, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e18c5a792d9f321da5edcb8679326265->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e18c5a792d9f321da5edcb8679326265, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e18c5a792d9f321da5edcb8679326265,
        type_description_1,
        par_obj,
        par_t,
        var_typ
    );


    // Release cached frame.
    if ( frame_e18c5a792d9f321da5edcb8679326265 == cache_frame_e18c5a792d9f321da5edcb8679326265 )
    {
        Py_DECREF( frame_e18c5a792d9f321da5edcb8679326265 );
    }
    cache_frame_e18c5a792d9f321da5edcb8679326265 = NULL;

    assertFrameObject( frame_e18c5a792d9f321da5edcb8679326265 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py21compat$$$function_1_isinstance );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    Py_XDECREF( var_typ );
    var_typ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    Py_XDECREF( var_typ );
    var_typ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py21compat$$$function_1_isinstance );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_Crypto$Util$py21compat$$$function_1_isinstance(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py21compat$$$function_1_isinstance,
        const_str_plain_isinstance,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e18c5a792d9f321da5edcb8679326265,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Util$py21compat,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Crypto$Util$py21compat =
{
    PyModuleDef_HEAD_INIT,
    "Crypto.Util.py21compat",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#if PYTHON_VERSION >= 300
extern PyObject *metapath_based_loader;
#endif
#if PYTHON_VERSION >= 330
extern PyObject *const_str_plain___loader__;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( Crypto$Util$py21compat )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto$Util$py21compat );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.Util.py21compat: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.Util.py21compat: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initCrypto$Util$py21compat" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto$Util$py21compat = Py_InitModule4(
        "Crypto.Util.py21compat",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Crypto$Util$py21compat = PyModule_Create( &mdef_Crypto$Util$py21compat );
#endif

    moduledict_Crypto$Util$py21compat = MODULE_DICT( module_Crypto$Util$py21compat );

    CHECK_OBJECT( module_Crypto$Util$py21compat );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_74ba315069266703540e145c62869e9e, module_Crypto$Util$py21compat );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___module__ = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_value_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    struct Nuitka_FrameObject *frame_fce4494c4bf6f7f8efda88ab7ae4b246;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_f764cf16e6260d1b677d4f87db8f7f1b;
    UPDATE_STRING_DICT0( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_62ae7e56c07b9dd4e0f7d8de33c8a890;
    UPDATE_STRING_DICT0( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_10c675d39d154a59cf6207a839b0661f;
    UPDATE_STRING_DICT0( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain___revision__, tmp_assign_source_4 );
    tmp_assign_source_5 = PyList_New( 0 );
    UPDATE_STRING_DICT1( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );
    tmp_name_name_1 = const_str_plain_sys;
    tmp_globals_name_1 = (PyObject *)moduledict_Crypto$Util$py21compat;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_assign_source_6 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    assert( tmp_assign_source_6 != NULL );
    UPDATE_STRING_DICT1( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_6 );
    tmp_name_name_2 = const_str_plain___builtin__;
    tmp_globals_name_2 = (PyObject *)moduledict_Crypto$Util$py21compat;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_assign_source_7 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    assert( tmp_assign_source_7 != NULL );
    UPDATE_STRING_DICT1( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain___builtin__, tmp_assign_source_7 );
    // Frame without reuse.
    frame_fce4494c4bf6f7f8efda88ab7ae4b246 = MAKE_MODULE_FRAME( codeobj_fce4494c4bf6f7f8efda88ab7ae4b246, module_Crypto$Util$py21compat );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_fce4494c4bf6f7f8efda88ab7ae4b246 );
    assert( Py_REFCNT( frame_fce4494c4bf6f7f8efda88ab7ae4b246 ) == 2 );

    // Framed code:
    // Tried code:
    tmp_unused = GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain_True );

    if (unlikely( tmp_unused == NULL ))
    {
        tmp_unused = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_True );
    }

    if ( tmp_unused == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "True" );
        exception_tb = NULL;

        exception_lineno = 41;

        goto try_except_handler_1;
    }

    tmp_unused = GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain_False );

    if (unlikely( tmp_unused == NULL ))
    {
        tmp_unused = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_False );
    }

    if ( tmp_unused == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "False" );
        exception_tb = NULL;

        exception_lineno = 41;

        goto try_except_handler_1;
    }

    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_fce4494c4bf6f7f8efda88ab7ae4b246 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_fce4494c4bf6f7f8efda88ab7ae4b246, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_fce4494c4bf6f7f8efda88ab7ae4b246, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_NameError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_iter_arg_1 = const_tuple_int_pos_1_int_0_tuple;
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_1 );
    assert( tmp_assign_source_8 != NULL );
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;

    // Tried code:
    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_9 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }



        exception_lineno = 43;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_10 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }



        exception_lineno = 43;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;

    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_11 );
    UPDATE_STRING_DICT0( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain_True, tmp_assign_source_11 );
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_12 );
    UPDATE_STRING_DICT0( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain_False, tmp_assign_source_12 );
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_left_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_1 == NULL ))
    {
        tmp_left_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 44;

        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = LIST_COPY( const_list_str_plain_True_str_plain_False_list );
    tmp_assign_source_13 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_13 );
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 40;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_fce4494c4bf6f7f8efda88ab7ae4b246->m_frame) frame_fce4494c4bf6f7f8efda88ab7ae4b246->m_frame.f_lineno = exception_tb->tb_lineno;

    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py21compat );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    // Tried code:
    tmp_unused = GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain_object );

    if (unlikely( tmp_unused == NULL ))
    {
        tmp_unused = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_object );
    }

    if ( tmp_unused == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "object" );
        exception_tb = NULL;

        exception_lineno = 50;

        goto try_except_handler_4;
    }

    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_fce4494c4bf6f7f8efda88ab7ae4b246 );
    if ( exception_keeper_tb_4 == NULL )
    {
        exception_keeper_tb_4 = MAKE_TRACEBACK( frame_fce4494c4bf6f7f8efda88ab7ae4b246, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != 0 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_fce4494c4bf6f7f8efda88ab7ae4b246, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_NameError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;

        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_15 = const_str_digest_74ba315069266703540e145c62869e9e;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_15 );
    outline_0_var___module__ = tmp_assign_source_15;

    // Tried code:
    tmp_outline_return_value_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = outline_0_var___module__;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py21compat );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_5:;
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    goto outline_result_1;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py21compat );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_14 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_14;

    // Tried code:
    tmp_compare_left_3 = const_str_plain___metaclass__;
    tmp_compare_right_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_1 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_key_name_1 = const_str_plain___metaclass__;
    tmp_assign_source_16 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto try_except_handler_6;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    // Tried code:
    tmp_outline_return_value_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain___metaclass__ );

    if (unlikely( tmp_outline_return_value_2 == NULL ))
    {
        tmp_outline_return_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___metaclass__ );
    }

    if ( tmp_outline_return_value_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__metaclass__" );
        exception_tb = NULL;

        exception_lineno = 52;

        goto try_except_handler_7;
    }

    Py_INCREF( tmp_outline_return_value_2 );
    goto outline_result_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py21compat );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_5 );
    Py_XDECREF( exception_keeper_value_5 );
    Py_XDECREF( exception_keeper_tb_5 );
    tmp_outline_return_value_2 = (PyObject *)&PyClass_Type;
    Py_INCREF( tmp_outline_return_value_2 );
    goto outline_result_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py21compat );
    return MOD_RETURN_VALUE( NULL );
    outline_result_2:;
    tmp_assign_source_16 = tmp_outline_return_value_2;
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_16;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_object;
    tmp_args_element_name_2 = const_tuple_empty;
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_fce4494c4bf6f7f8efda88ab7ae4b246->m_frame.f_lineno = 52;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto try_except_handler_6;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_17;

    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    tmp_assign_source_18 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_18 );
    UPDATE_STRING_DICT0( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain_object, tmp_assign_source_18 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    tmp_left_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_2 == NULL ))
    {
        tmp_left_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 53;

        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = LIST_COPY( const_list_str_plain_object_list );
    tmp_assign_source_19 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_19 );
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 49;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_fce4494c4bf6f7f8efda88ab7ae4b246->m_frame) frame_fce4494c4bf6f7f8efda88ab7ae4b246->m_frame.f_lineno = exception_tb->tb_lineno;

    goto frame_exception_exit_1;
    branch_end_2:;
    goto try_end_4;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py21compat );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_4:;
    // Tried code:
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain_isinstance );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isinstance );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "isinstance" );
        exception_tb = NULL;

        exception_lineno = 62;

        goto try_except_handler_8;
    }

    frame_fce4494c4bf6f7f8efda88ab7ae4b246->m_frame.f_lineno = 62;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_int_pos_5_tuple_type_int_type_long_tuple_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_8;
    }
    Py_DECREF( tmp_unused );
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_fce4494c4bf6f7f8efda88ab7ae4b246 );
    if ( exception_keeper_tb_7 == NULL )
    {
        exception_keeper_tb_7 = MAKE_TRACEBACK( frame_fce4494c4bf6f7f8efda88ab7ae4b246, exception_keeper_lineno_7 );
    }
    else if ( exception_keeper_lineno_7 != 0 )
    {
        exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_fce4494c4bf6f7f8efda88ab7ae4b246, exception_keeper_lineno_7 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    tmp_compare_left_4 = PyThreadState_GET()->exc_type;
    tmp_compare_right_4 = PyExc_TypeError;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_left_name_3 = GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_3 == NULL ))
    {
        tmp_left_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 64;

        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = LIST_COPY( const_list_str_plain_isinstance_list );
    tmp_assign_source_20 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_20 );
    tmp_assign_source_21 = PyDict_Copy( const_dict_05767f8689d27e4257ea8eaf4e888ec8 );
    UPDATE_STRING_DICT1( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain__builtin_type_map, tmp_assign_source_21 );
    tmp_assign_source_22 = MAKE_FUNCTION_Crypto$Util$py21compat$$$function_1_isinstance(  );
    UPDATE_STRING_DICT1( moduledict_Crypto$Util$py21compat, (Nuitka_StringObject *)const_str_plain_isinstance, tmp_assign_source_22 );
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 61;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_fce4494c4bf6f7f8efda88ab7ae4b246->m_frame) frame_fce4494c4bf6f7f8efda88ab7ae4b246->m_frame.f_lineno = exception_tb->tb_lineno;

    goto frame_exception_exit_1;
    branch_end_3:;
    goto try_end_6;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py21compat );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_6:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_fce4494c4bf6f7f8efda88ab7ae4b246 );
#endif
    popFrameStack();

    assertFrameObject( frame_fce4494c4bf6f7f8efda88ab7ae4b246 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_fce4494c4bf6f7f8efda88ab7ae4b246 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fce4494c4bf6f7f8efda88ab7ae4b246, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fce4494c4bf6f7f8efda88ab7ae4b246->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fce4494c4bf6f7f8efda88ab7ae4b246, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_Crypto$Util$py21compat );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
