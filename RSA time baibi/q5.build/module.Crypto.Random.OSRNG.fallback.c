/* Generated code for Python source for module 'Crypto.Random.OSRNG.fallback'
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

/* The _module_Crypto$Random$OSRNG$fallback is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$Random$OSRNG$fallback;
PyDictObject *moduledict_Crypto$Random$OSRNG$fallback;

/* The module constants used, if any. */
extern PyObject *const_tuple_str_plain_BaseRNG_tuple;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_BaseRNG;
extern PyObject *const_str_plain_new;
extern PyObject *const_str_plain__read;
extern PyObject *const_str_plain_urandom;
static PyObject *const_str_plain_PythonOSURandomRNG;
static PyObject *const_str_digest_987a564987f4f48001da6f9c299e7e17;
extern PyObject *const_dict_empty;
extern PyObject *const_str_digest_10c675d39d154a59cf6207a839b0661f;
extern PyObject *const_tuple_str_plain_args_str_plain_kwargs_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_list_str_plain_PythonOSURandomRNG_list;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_c4dac84a550227fb4ea6bc250d192593;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___revision__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_rng_base;
extern PyObject *const_str_plain__close;
extern PyObject *const_str_digest_e32a9f566e3be35b10436f5e6301eafb;
static PyObject *const_str_digest_9da46a6743d56373452401c0d494a461;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain___init__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_PythonOSURandomRNG = UNSTREAM_STRING( &constant_bin[ 50438 ], 18, 1 );
    const_str_digest_987a564987f4f48001da6f9c299e7e17 = UNSTREAM_STRING( &constant_bin[ 50456 ], 64, 0 );
    const_list_str_plain_PythonOSURandomRNG_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_PythonOSURandomRNG_list, 0, const_str_plain_PythonOSURandomRNG ); Py_INCREF( const_str_plain_PythonOSURandomRNG );
    const_str_digest_c4dac84a550227fb4ea6bc250d192593 = UNSTREAM_STRING( &constant_bin[ 50520 ], 12, 0 );
    const_str_digest_9da46a6743d56373452401c0d494a461 = UNSTREAM_STRING( &constant_bin[ 50532 ], 37, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Crypto$Random$OSRNG$fallback( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_d23e79b87ae3f0c2c9b2353a628f69b5;
static PyCodeObject *codeobj_4f929a95f1e414a0591be02d79cd6d5a;
static PyCodeObject *codeobj_4a2cba73a29a2b0a33757e6240d35a92;
static PyCodeObject *codeobj_068ed3ea11f2def59f993176c23f23d6;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_987a564987f4f48001da6f9c299e7e17;
    codeobj_d23e79b87ae3f0c2c9b2353a628f69b5 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_9da46a6743d56373452401c0d494a461, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_4f929a95f1e414a0591be02d79cd6d5a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 36, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4a2cba73a29a2b0a33757e6240d35a92 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__close, 40, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_068ed3ea11f2def59f993176c23f23d6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_new, 43, const_tuple_str_plain_args_str_plain_kwargs_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$fallback$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$fallback$$$function_2__close(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$fallback$$$function_3_new(  );


// The module function definitions.
static PyObject *impl_Crypto$Random$OSRNG$fallback$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_instance_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4f929a95f1e414a0591be02d79cd6d5a = NULL;

    struct Nuitka_FrameObject *frame_4f929a95f1e414a0591be02d79cd6d5a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4f929a95f1e414a0591be02d79cd6d5a, codeobj_4f929a95f1e414a0591be02d79cd6d5a, module_Crypto$Random$OSRNG$fallback, sizeof(void *) );
    frame_4f929a95f1e414a0591be02d79cd6d5a = cache_frame_4f929a95f1e414a0591be02d79cd6d5a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4f929a95f1e414a0591be02d79cd6d5a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4f929a95f1e414a0591be02d79cd6d5a ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$OSRNG$fallback, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 37;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_urandom );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__read, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 37;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$OSRNG$fallback, (Nuitka_StringObject *)const_str_plain_BaseRNG );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseRNG );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "BaseRNG" );
        exception_tb = NULL;

        exception_lineno = 38;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_4f929a95f1e414a0591be02d79cd6d5a->m_frame.f_lineno = 38;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___init__, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f929a95f1e414a0591be02d79cd6d5a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f929a95f1e414a0591be02d79cd6d5a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4f929a95f1e414a0591be02d79cd6d5a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4f929a95f1e414a0591be02d79cd6d5a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4f929a95f1e414a0591be02d79cd6d5a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4f929a95f1e414a0591be02d79cd6d5a,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_4f929a95f1e414a0591be02d79cd6d5a == cache_frame_4f929a95f1e414a0591be02d79cd6d5a )
    {
        Py_DECREF( frame_4f929a95f1e414a0591be02d79cd6d5a );
    }
    cache_frame_4f929a95f1e414a0591be02d79cd6d5a = NULL;

    assertFrameObject( frame_4f929a95f1e414a0591be02d79cd6d5a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$fallback$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$fallback$$$function_1___init__ );
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


static PyObject *impl_Crypto$Random$OSRNG$fallback$$$function_2__close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_4a2cba73a29a2b0a33757e6240d35a92 = NULL;

    struct Nuitka_FrameObject *frame_4a2cba73a29a2b0a33757e6240d35a92;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4a2cba73a29a2b0a33757e6240d35a92, codeobj_4a2cba73a29a2b0a33757e6240d35a92, module_Crypto$Random$OSRNG$fallback, sizeof(void *) );
    frame_4a2cba73a29a2b0a33757e6240d35a92 = cache_frame_4a2cba73a29a2b0a33757e6240d35a92;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4a2cba73a29a2b0a33757e6240d35a92 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4a2cba73a29a2b0a33757e6240d35a92 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__read, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a2cba73a29a2b0a33757e6240d35a92 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a2cba73a29a2b0a33757e6240d35a92 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4a2cba73a29a2b0a33757e6240d35a92, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4a2cba73a29a2b0a33757e6240d35a92->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4a2cba73a29a2b0a33757e6240d35a92, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4a2cba73a29a2b0a33757e6240d35a92,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_4a2cba73a29a2b0a33757e6240d35a92 == cache_frame_4a2cba73a29a2b0a33757e6240d35a92 )
    {
        Py_DECREF( frame_4a2cba73a29a2b0a33757e6240d35a92 );
    }
    cache_frame_4a2cba73a29a2b0a33757e6240d35a92 = NULL;

    assertFrameObject( frame_4a2cba73a29a2b0a33757e6240d35a92 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$fallback$$$function_2__close );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$fallback$$$function_2__close );
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


static PyObject *impl_Crypto$Random$OSRNG$fallback$$$function_3_new( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_068ed3ea11f2def59f993176c23f23d6 = NULL;

    struct Nuitka_FrameObject *frame_068ed3ea11f2def59f993176c23f23d6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_068ed3ea11f2def59f993176c23f23d6, codeobj_068ed3ea11f2def59f993176c23f23d6, module_Crypto$Random$OSRNG$fallback, sizeof(void *)+sizeof(void *) );
    frame_068ed3ea11f2def59f993176c23f23d6 = cache_frame_068ed3ea11f2def59f993176c23f23d6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_068ed3ea11f2def59f993176c23f23d6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_068ed3ea11f2def59f993176c23f23d6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$OSRNG$fallback, (Nuitka_StringObject *)const_str_plain_PythonOSURandomRNG );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PythonOSURandomRNG );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "PythonOSURandomRNG" );
        exception_tb = NULL;

        exception_lineno = 44;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = par_args;

    CHECK_OBJECT( tmp_dircall_arg2_1 );
    tmp_dircall_arg3_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_4_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_068ed3ea11f2def59f993176c23f23d6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_068ed3ea11f2def59f993176c23f23d6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_068ed3ea11f2def59f993176c23f23d6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_068ed3ea11f2def59f993176c23f23d6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_068ed3ea11f2def59f993176c23f23d6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_068ed3ea11f2def59f993176c23f23d6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_068ed3ea11f2def59f993176c23f23d6,
        type_description_1,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_068ed3ea11f2def59f993176c23f23d6 == cache_frame_068ed3ea11f2def59f993176c23f23d6 )
    {
        Py_DECREF( frame_068ed3ea11f2def59f993176c23f23d6 );
    }
    cache_frame_068ed3ea11f2def59f993176c23f23d6 = NULL;

    assertFrameObject( frame_068ed3ea11f2def59f993176c23f23d6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$fallback$$$function_3_new );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    goto function_return_exit;
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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$fallback$$$function_3_new );
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



static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$fallback$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$OSRNG$fallback$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4f929a95f1e414a0591be02d79cd6d5a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$OSRNG$fallback,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$fallback$$$function_2__close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$OSRNG$fallback$$$function_2__close,
        const_str_plain__close,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4a2cba73a29a2b0a33757e6240d35a92,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$OSRNG$fallback,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$fallback$$$function_3_new(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$OSRNG$fallback$$$function_3_new,
        const_str_plain_new,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_068ed3ea11f2def59f993176c23f23d6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$OSRNG$fallback,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Crypto$Random$OSRNG$fallback =
{
    PyModuleDef_HEAD_INIT,
    "Crypto.Random.OSRNG.fallback",   /* m_name */
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

MOD_INIT_DECL( Crypto$Random$OSRNG$fallback )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto$Random$OSRNG$fallback );
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
    puts("Crypto.Random.OSRNG.fallback: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.Random.OSRNG.fallback: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initCrypto$Random$OSRNG$fallback" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto$Random$OSRNG$fallback = Py_InitModule4(
        "Crypto.Random.OSRNG.fallback",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Crypto$Random$OSRNG$fallback = PyModule_Create( &mdef_Crypto$Random$OSRNG$fallback );
#endif

    moduledict_Crypto$Random$OSRNG$fallback = MODULE_DICT( module_Crypto$Random$OSRNG$fallback );

    CHECK_OBJECT( module_Crypto$Random$OSRNG$fallback );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_e32a9f566e3be35b10436f5e6301eafb, module_Crypto$Random$OSRNG$fallback );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Crypto$Random$OSRNG$fallback, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG$fallback, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG$fallback, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var_name = NULL;
    PyObject *outline_0_var___init__ = NULL;
    PyObject *outline_0_var__close = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
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
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    struct Nuitka_FrameObject *frame_d23e79b87ae3f0c2c9b2353a628f69b5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG$fallback, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_987a564987f4f48001da6f9c299e7e17;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG$fallback, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG$fallback, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_10c675d39d154a59cf6207a839b0661f;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG$fallback, (Nuitka_StringObject *)const_str_plain___revision__, tmp_assign_source_4 );
    tmp_assign_source_5 = LIST_COPY( const_list_str_plain_PythonOSURandomRNG_list );
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$OSRNG$fallback, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );
    // Frame without reuse.
    frame_d23e79b87ae3f0c2c9b2353a628f69b5 = MAKE_MODULE_FRAME( codeobj_d23e79b87ae3f0c2c9b2353a628f69b5, module_Crypto$Random$OSRNG$fallback );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_d23e79b87ae3f0c2c9b2353a628f69b5 );
    assert( Py_REFCNT( frame_d23e79b87ae3f0c2c9b2353a628f69b5 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_os;
    tmp_globals_name_1 = (PyObject *)moduledict_Crypto$Random$OSRNG$fallback;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    frame_d23e79b87ae3f0c2c9b2353a628f69b5->m_frame.f_lineno = 28;
    tmp_assign_source_6 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$OSRNG$fallback, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_6 );
    tmp_name_name_2 = const_str_plain_rng_base;
    tmp_globals_name_2 = (PyObject *)moduledict_Crypto$Random$OSRNG$fallback;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_BaseRNG_tuple;
    frame_d23e79b87ae3f0c2c9b2353a628f69b5->m_frame.f_lineno = 30;
    tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_BaseRNG );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$OSRNG$fallback, (Nuitka_StringObject *)const_str_plain_BaseRNG, tmp_assign_source_7 );
    // Tried code:
    tmp_assign_source_8 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$OSRNG$fallback, (Nuitka_StringObject *)const_str_plain_BaseRNG );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseRNG );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "BaseRNG" );
        exception_tb = NULL;

        exception_lineno = 32;

        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_8, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_8;

    tmp_assign_source_10 = const_str_digest_e32a9f566e3be35b10436f5e6301eafb;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_10 );
    outline_0_var___module__ = tmp_assign_source_10;

    tmp_assign_source_11 = const_str_digest_c4dac84a550227fb4ea6bc250d192593;
    assert( outline_0_var_name == NULL );
    Py_INCREF( tmp_assign_source_11 );
    outline_0_var_name = tmp_assign_source_11;

    tmp_assign_source_12 = MAKE_FUNCTION_Crypto$Random$OSRNG$fallback$$$function_1___init__(  );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_12;

    tmp_assign_source_13 = MAKE_FUNCTION_Crypto$Random$OSRNG$fallback$$$function_2__close(  );
    assert( outline_0_var__close == NULL );
    outline_0_var__close = tmp_assign_source_13;

    // Tried code:
    tmp_outline_return_value_1 = _PyDict_NewPresized( 4 );
    tmp_dict_value_1 = outline_0_var___module__;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = outline_0_var_name;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_name;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = outline_0_var___init__;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = outline_0_var__close;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain__close;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$fallback );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_name );
    Py_DECREF( outline_0_var_name );
    outline_0_var_name = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___init__ );
    Py_DECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__close );
    Py_DECREF( outline_0_var__close );
    outline_0_var__close = NULL;

    goto outline_result_1;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_name );
    Py_DECREF( outline_0_var_name );
    outline_0_var_name = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___init__ );
    Py_DECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__close );
    Py_DECREF( outline_0_var__close );
    outline_0_var__close = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$fallback );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_9 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_9;

    tmp_compare_left_1 = const_str_plain___metaclass__;
    tmp_compare_right_1 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
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
    tmp_assign_source_14 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_1;
    }
    assert( tmp_select_metaclass_1__base == NULL );
    tmp_select_metaclass_1__base = tmp_assign_source_15;

    // Tried code:
    // Tried code:
    tmp_source_name_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_outline_return_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_outline_return_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_4;
    }
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$fallback );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    tmp_type_arg_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_outline_return_value_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_outline_return_value_2 != NULL );
    goto try_return_handler_3;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$fallback );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    goto outline_result_2;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$fallback );
    return MOD_RETURN_VALUE( NULL );
    outline_result_2:;
    tmp_assign_source_14 = tmp_outline_return_value_2;
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_14;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_PythonOSURandomRNG;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_d23e79b87ae3f0c2c9b2353a628f69b5->m_frame.f_lineno = 32;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_16;

    goto try_end_1;
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d23e79b87ae3f0c2c9b2353a628f69b5 );
#endif
    popFrameStack();

    assertFrameObject( frame_d23e79b87ae3f0c2c9b2353a628f69b5 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d23e79b87ae3f0c2c9b2353a628f69b5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d23e79b87ae3f0c2c9b2353a628f69b5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d23e79b87ae3f0c2c9b2353a628f69b5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d23e79b87ae3f0c2c9b2353a628f69b5, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_17 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_17 );
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG$fallback, (Nuitka_StringObject *)const_str_plain_PythonOSURandomRNG, tmp_assign_source_17 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    tmp_assign_source_18 = MAKE_FUNCTION_Crypto$Random$OSRNG$fallback$$$function_3_new(  );
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$OSRNG$fallback, (Nuitka_StringObject *)const_str_plain_new, tmp_assign_source_18 );

    return MOD_RETURN_VALUE( module_Crypto$Random$OSRNG$fallback );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
