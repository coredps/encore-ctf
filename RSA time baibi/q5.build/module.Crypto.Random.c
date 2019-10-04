/* Generated code for Python source for module 'Crypto.Random'
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

/* The _module_Crypto$Random is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$Random;
PyDictObject *moduledict_Crypto$Random;

/* The module constants used, if any. */
extern PyObject *const_str_plain_get_random_bytes;
extern PyObject *const_str_digest_1e5478800040fcfd12cfc695d2c1888b;
extern PyObject *const_str_plain_new;
extern PyObject *const_dict_empty;
extern PyObject *const_str_digest_10c675d39d154a59cf6207a839b0661f;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_str_plain_args_str_plain_kwargs_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_str_plain_n_tuple;
extern PyObject *const_str_digest_f6ae169f842d2e5a780003f644103f6a;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___revision__;
extern PyObject *const_str_plain__UserFriendlyRNG;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_e6d6a267337c897325ddfd19b0d1b00e;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_plain_atfork;
extern PyObject *const_str_plain_reinit;
static PyObject *const_tuple_str_plain__UserFriendlyRNG_tuple;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_n;
static PyObject *const_str_digest_4f597466f79773e436b4018776d46ea1;
static PyObject *const_str_digest_6e7e1f3e683d0f599e93d040a7c8f980;
static PyObject *const_list_str_plain_new_list;
extern PyObject *const_tuple_str_plain_OSRNG_tuple;
static PyObject *const_str_digest_bc3d76bef0e0928a570e27aa9fce5306;
static PyObject *const_str_digest_7d2674979ffec2ee42ce6cd735e51a7f;
static PyObject *const_list_str_digest_e6d6a267337c897325ddfd19b0d1b00e_list;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_OSRNG;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_e6d6a267337c897325ddfd19b0d1b00e = UNSTREAM_STRING( &constant_bin[ 47538 ], 46, 0 );
    const_str_plain_atfork = UNSTREAM_STRING( &constant_bin[ 47584 ], 6, 1 );
    const_tuple_str_plain__UserFriendlyRNG_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__UserFriendlyRNG_tuple, 0, const_str_plain__UserFriendlyRNG ); Py_INCREF( const_str_plain__UserFriendlyRNG );
    const_str_digest_4f597466f79773e436b4018776d46ea1 = UNSTREAM_STRING( &constant_bin[ 47590 ], 22, 0 );
    const_str_digest_6e7e1f3e683d0f599e93d040a7c8f980 = UNSTREAM_STRING( &constant_bin[ 47612 ], 70, 0 );
    const_list_str_plain_new_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_new_list, 0, const_str_plain_new ); Py_INCREF( const_str_plain_new );
    const_str_digest_bc3d76bef0e0928a570e27aa9fce5306 = UNSTREAM_STRING( &constant_bin[ 47682 ], 58, 0 );
    const_str_digest_7d2674979ffec2ee42ce6cd735e51a7f = UNSTREAM_STRING( &constant_bin[ 47740 ], 37, 0 );
    const_list_str_digest_e6d6a267337c897325ddfd19b0d1b00e_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_e6d6a267337c897325ddfd19b0d1b00e_list, 0, const_str_digest_e6d6a267337c897325ddfd19b0d1b00e ); Py_INCREF( const_str_digest_e6d6a267337c897325ddfd19b0d1b00e );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Crypto$Random( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_4aaa02f2afce2a1100e33ddf053d0992;
static PyCodeObject *codeobj_6e45847e7aa76dde6a478545ed65d3a0;
static PyCodeObject *codeobj_cb8a300f7f7064d41aed777c42090cd0;
static PyCodeObject *codeobj_8a0c15107ce51c6aee1fd8bdb01352ee;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_bc3d76bef0e0928a570e27aa9fce5306;
    codeobj_4aaa02f2afce2a1100e33ddf053d0992 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_4f597466f79773e436b4018776d46ea1, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_6e45847e7aa76dde6a478545ed65d3a0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_atfork, 35, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cb8a300f7f7064d41aed777c42090cd0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_random_bytes, 39, const_tuple_str_plain_n_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8a0c15107ce51c6aee1fd8bdb01352ee = MAKE_CODEOBJ( module_filename_obj, const_str_plain_new, 31, const_tuple_str_plain_args_str_plain_kwargs_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_Crypto$Random$$$function_1_new(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$$$function_2_atfork(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$$$function_3_get_random_bytes(  );


// The module function definitions.
static PyObject *impl_Crypto$Random$$$function_1_new( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_8a0c15107ce51c6aee1fd8bdb01352ee = NULL;

    struct Nuitka_FrameObject *frame_8a0c15107ce51c6aee1fd8bdb01352ee;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8a0c15107ce51c6aee1fd8bdb01352ee, codeobj_8a0c15107ce51c6aee1fd8bdb01352ee, module_Crypto$Random, sizeof(void *)+sizeof(void *) );
    frame_8a0c15107ce51c6aee1fd8bdb01352ee = cache_frame_8a0c15107ce51c6aee1fd8bdb01352ee;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8a0c15107ce51c6aee1fd8bdb01352ee );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8a0c15107ce51c6aee1fd8bdb01352ee ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random, (Nuitka_StringObject *)const_str_plain__UserFriendlyRNG );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__UserFriendlyRNG );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_UserFriendlyRNG" );
        exception_tb = NULL;

        exception_lineno = 33;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_new );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = par_args;

    CHECK_OBJECT( tmp_dircall_arg2_1 );
    tmp_dircall_arg3_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
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


        exception_lineno = 33;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8a0c15107ce51c6aee1fd8bdb01352ee );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8a0c15107ce51c6aee1fd8bdb01352ee );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8a0c15107ce51c6aee1fd8bdb01352ee );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8a0c15107ce51c6aee1fd8bdb01352ee, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8a0c15107ce51c6aee1fd8bdb01352ee->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8a0c15107ce51c6aee1fd8bdb01352ee, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8a0c15107ce51c6aee1fd8bdb01352ee,
        type_description_1,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_8a0c15107ce51c6aee1fd8bdb01352ee == cache_frame_8a0c15107ce51c6aee1fd8bdb01352ee )
    {
        Py_DECREF( frame_8a0c15107ce51c6aee1fd8bdb01352ee );
    }
    cache_frame_8a0c15107ce51c6aee1fd8bdb01352ee = NULL;

    assertFrameObject( frame_8a0c15107ce51c6aee1fd8bdb01352ee );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$$$function_1_new );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$$$function_1_new );
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


static PyObject *impl_Crypto$Random$$$function_2_atfork( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6e45847e7aa76dde6a478545ed65d3a0 = NULL;

    struct Nuitka_FrameObject *frame_6e45847e7aa76dde6a478545ed65d3a0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_6e45847e7aa76dde6a478545ed65d3a0, codeobj_6e45847e7aa76dde6a478545ed65d3a0, module_Crypto$Random, 0 );
    frame_6e45847e7aa76dde6a478545ed65d3a0 = cache_frame_6e45847e7aa76dde6a478545ed65d3a0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6e45847e7aa76dde6a478545ed65d3a0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6e45847e7aa76dde6a478545ed65d3a0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random, (Nuitka_StringObject *)const_str_plain__UserFriendlyRNG );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__UserFriendlyRNG );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_UserFriendlyRNG" );
        exception_tb = NULL;

        exception_lineno = 37;

        goto frame_exception_exit_1;
    }

    frame_6e45847e7aa76dde6a478545ed65d3a0->m_frame.f_lineno = 37;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_reinit );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6e45847e7aa76dde6a478545ed65d3a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6e45847e7aa76dde6a478545ed65d3a0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6e45847e7aa76dde6a478545ed65d3a0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6e45847e7aa76dde6a478545ed65d3a0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6e45847e7aa76dde6a478545ed65d3a0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6e45847e7aa76dde6a478545ed65d3a0,
        type_description_1
    );


    // Release cached frame.
    if ( frame_6e45847e7aa76dde6a478545ed65d3a0 == cache_frame_6e45847e7aa76dde6a478545ed65d3a0 )
    {
        Py_DECREF( frame_6e45847e7aa76dde6a478545ed65d3a0 );
    }
    cache_frame_6e45847e7aa76dde6a478545ed65d3a0 = NULL;

    assertFrameObject( frame_6e45847e7aa76dde6a478545ed65d3a0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$$$function_2_atfork );
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


static PyObject *impl_Crypto$Random$$$function_3_get_random_bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_cb8a300f7f7064d41aed777c42090cd0 = NULL;

    struct Nuitka_FrameObject *frame_cb8a300f7f7064d41aed777c42090cd0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cb8a300f7f7064d41aed777c42090cd0, codeobj_cb8a300f7f7064d41aed777c42090cd0, module_Crypto$Random, sizeof(void *) );
    frame_cb8a300f7f7064d41aed777c42090cd0 = cache_frame_cb8a300f7f7064d41aed777c42090cd0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cb8a300f7f7064d41aed777c42090cd0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cb8a300f7f7064d41aed777c42090cd0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random, (Nuitka_StringObject *)const_str_plain__UserFriendlyRNG );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__UserFriendlyRNG );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_UserFriendlyRNG" );
        exception_tb = NULL;

        exception_lineno = 41;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_n;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_cb8a300f7f7064d41aed777c42090cd0->m_frame.f_lineno = 41;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get_random_bytes, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb8a300f7f7064d41aed777c42090cd0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb8a300f7f7064d41aed777c42090cd0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb8a300f7f7064d41aed777c42090cd0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cb8a300f7f7064d41aed777c42090cd0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cb8a300f7f7064d41aed777c42090cd0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cb8a300f7f7064d41aed777c42090cd0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cb8a300f7f7064d41aed777c42090cd0,
        type_description_1,
        par_n
    );


    // Release cached frame.
    if ( frame_cb8a300f7f7064d41aed777c42090cd0 == cache_frame_cb8a300f7f7064d41aed777c42090cd0 )
    {
        Py_DECREF( frame_cb8a300f7f7064d41aed777c42090cd0 );
    }
    cache_frame_cb8a300f7f7064d41aed777c42090cd0 = NULL;

    assertFrameObject( frame_cb8a300f7f7064d41aed777c42090cd0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$$$function_3_get_random_bytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$$$function_3_get_random_bytes );
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



static PyObject *MAKE_FUNCTION_Crypto$Random$$$function_1_new(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$$$function_1_new,
        const_str_plain_new,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8a0c15107ce51c6aee1fd8bdb01352ee,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random,
        const_str_digest_6e7e1f3e683d0f599e93d040a7c8f980,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$$$function_2_atfork(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$$$function_2_atfork,
        const_str_plain_atfork,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6e45847e7aa76dde6a478545ed65d3a0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random,
        const_str_digest_7d2674979ffec2ee42ce6cd735e51a7f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$$$function_3_get_random_bytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$$$function_3_get_random_bytes,
        const_str_plain_get_random_bytes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cb8a300f7f7064d41aed777c42090cd0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random,
        const_str_digest_1e5478800040fcfd12cfc695d2c1888b,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Crypto$Random =
{
    PyModuleDef_HEAD_INIT,
    "Crypto.Random",   /* m_name */
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

MOD_INIT_DECL( Crypto$Random )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto$Random );
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
    puts("Crypto.Random: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.Random: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initCrypto$Random" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto$Random = Py_InitModule4(
        "Crypto.Random",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Crypto$Random = PyModule_Create( &mdef_Crypto$Random );
#endif

    moduledict_Crypto$Random = MODULE_DICT( module_Crypto$Random );

    CHECK_OBJECT( module_Crypto$Random );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_f6ae169f842d2e5a780003f644103f6a, module_Crypto$Random );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Crypto$Random, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Crypto$Random, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_Crypto$Random, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    struct Nuitka_FrameObject *frame_4aaa02f2afce2a1100e33ddf053d0992;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_bc3d76bef0e0928a570e27aa9fce5306;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_e6d6a267337c897325ddfd19b0d1b00e_list );
    UPDATE_STRING_DICT1( moduledict_Crypto$Random, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_f6ae169f842d2e5a780003f644103f6a;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_digest_10c675d39d154a59cf6207a839b0661f;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random, (Nuitka_StringObject *)const_str_plain___revision__, tmp_assign_source_5 );
    tmp_assign_source_6 = LIST_COPY( const_list_str_plain_new_list );
    UPDATE_STRING_DICT1( moduledict_Crypto$Random, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_6 );
    // Frame without reuse.
    frame_4aaa02f2afce2a1100e33ddf053d0992 = MAKE_MODULE_FRAME( codeobj_4aaa02f2afce2a1100e33ddf053d0992, module_Crypto$Random );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_4aaa02f2afce2a1100e33ddf053d0992 );
    assert( Py_REFCNT( frame_4aaa02f2afce2a1100e33ddf053d0992 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_digest_f6ae169f842d2e5a780003f644103f6a;
    tmp_globals_name_1 = (PyObject *)moduledict_Crypto$Random;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_OSRNG_tuple;
    frame_4aaa02f2afce2a1100e33ddf053d0992->m_frame.f_lineno = 28;
    tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_OSRNG );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random, (Nuitka_StringObject *)const_str_plain_OSRNG, tmp_assign_source_7 );
    tmp_name_name_2 = const_str_digest_f6ae169f842d2e5a780003f644103f6a;
    tmp_globals_name_2 = (PyObject *)moduledict_Crypto$Random;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain__UserFriendlyRNG_tuple;
    frame_4aaa02f2afce2a1100e33ddf053d0992->m_frame.f_lineno = 29;
    tmp_import_name_from_2 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain__UserFriendlyRNG );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random, (Nuitka_StringObject *)const_str_plain__UserFriendlyRNG, tmp_assign_source_8 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4aaa02f2afce2a1100e33ddf053d0992 );
#endif
    popFrameStack();

    assertFrameObject( frame_4aaa02f2afce2a1100e33ddf053d0992 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4aaa02f2afce2a1100e33ddf053d0992 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4aaa02f2afce2a1100e33ddf053d0992, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4aaa02f2afce2a1100e33ddf053d0992->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4aaa02f2afce2a1100e33ddf053d0992, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_9 = MAKE_FUNCTION_Crypto$Random$$$function_1_new(  );
    UPDATE_STRING_DICT1( moduledict_Crypto$Random, (Nuitka_StringObject *)const_str_plain_new, tmp_assign_source_9 );
    tmp_assign_source_10 = MAKE_FUNCTION_Crypto$Random$$$function_2_atfork(  );
    UPDATE_STRING_DICT1( moduledict_Crypto$Random, (Nuitka_StringObject *)const_str_plain_atfork, tmp_assign_source_10 );
    tmp_assign_source_11 = MAKE_FUNCTION_Crypto$Random$$$function_3_get_random_bytes(  );
    UPDATE_STRING_DICT1( moduledict_Crypto$Random, (Nuitka_StringObject *)const_str_plain_get_random_bytes, tmp_assign_source_11 );

    return MOD_RETURN_VALUE( module_Crypto$Random );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
