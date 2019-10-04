/* Generated code for Python source for module 'Crypto.Hash.SHA'
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

/* The _module_Crypto$Hash$SHA is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$Hash$SHA;
PyDictObject *moduledict_Crypto$Hash$SHA;

/* The module constants used, if any. */
extern PyObject *const_str_chr_42;
static PyObject *const_str_digest_6a35db8e28a5a5e052999a26baae5600;
extern PyObject *const_str_plain_oid;
extern PyObject *const_str_plain_data;
extern PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
extern PyObject *const_str_plain_new;
extern PyObject *const_str_digest_391b5dc084c9caede4445b681a10e649;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_int_pos_64;
extern PyObject *const_dict_empty;
extern PyObject *const_str_digest_10c675d39d154a59cf6207a839b0661f;
extern PyObject *const_str_plain_hashFactory;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_str_plain_data_tuple;
extern PyObject *const_tuple_str_plain_HashAlgo_tuple;
static PyObject *const_str_digest_8f0533c724e089a4c1a9b93f9533584f;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_digest_size;
extern PyObject *const_str_plain_HashAlgo;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain__revision__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_659b1fcf1ddbfaf278ff5ebfb6ea172d;
static PyObject *const_list_str_plain_new_str_plain_digest_size_str_plain_SHA1Hash_list;
extern PyObject *const_str_plain_block_size;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_dd2e92067f258d9d648cdf12e7a8cd08;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_ea3fd02eceecf3624e57434539349fcb;
extern PyObject *const_str_plain_hashlib;
static PyObject *const_tuple_str_digest_ea3fd02eceecf3624e57434539349fcb_tuple;
extern PyObject *const_tuple_42a0f3355deb4c838a3b8fd3b05af728_tuple;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_digest_e49ae8250a1a25a1ec1c71108da02478;
static PyObject *const_str_plain_SHA1Hash;
extern PyObject *const_str_plain_b;
static PyObject *const_str_plain_sha1;
extern PyObject *const_int_pos_20;
extern PyObject *const_str_digest_4504ca1cc6d1b92e22b4fc7b4eb38d52;
extern PyObject *const_str_plain_sha;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_ada7e1010361001fe1b158784fb94fb2;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_6a35db8e28a5a5e052999a26baae5600 = UNSTREAM_STRING( &constant_bin[ 20190 ], 51, 0 );
    const_str_digest_8f0533c724e089a4c1a9b93f9533584f = UNSTREAM_STRING( &constant_bin[ 20241 ], 74, 0 );
    const_str_digest_659b1fcf1ddbfaf278ff5ebfb6ea172d = UNSTREAM_STRING( &constant_bin[ 20315 ], 263, 0 );
    const_list_str_plain_new_str_plain_digest_size_str_plain_SHA1Hash_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_new_str_plain_digest_size_str_plain_SHA1Hash_list, 0, const_str_plain_new ); Py_INCREF( const_str_plain_new );
    PyList_SET_ITEM( const_list_str_plain_new_str_plain_digest_size_str_plain_SHA1Hash_list, 1, const_str_plain_digest_size ); Py_INCREF( const_str_plain_digest_size );
    const_str_plain_SHA1Hash = UNSTREAM_STRING( &constant_bin[ 20502 ], 8, 1 );
    PyList_SET_ITEM( const_list_str_plain_new_str_plain_digest_size_str_plain_SHA1Hash_list, 2, const_str_plain_SHA1Hash ); Py_INCREF( const_str_plain_SHA1Hash );
    const_str_digest_dd2e92067f258d9d648cdf12e7a8cd08 = UNSTREAM_STRING( &constant_bin[ 20578 ], 15, 0 );
    const_str_digest_ea3fd02eceecf3624e57434539349fcb = UNSTREAM_STRING( &constant_bin[ 20593 ], 7, 0 );
    const_tuple_str_digest_ea3fd02eceecf3624e57434539349fcb_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_ea3fd02eceecf3624e57434539349fcb_tuple, 0, const_str_digest_ea3fd02eceecf3624e57434539349fcb ); Py_INCREF( const_str_digest_ea3fd02eceecf3624e57434539349fcb );
    const_str_digest_e49ae8250a1a25a1ec1c71108da02478 = UNSTREAM_STRING( &constant_bin[ 20600 ], 24, 0 );
    const_str_plain_sha1 = UNSTREAM_STRING( &constant_bin[ 20624 ], 4, 1 );
    const_str_digest_ada7e1010361001fe1b158784fb94fb2 = UNSTREAM_STRING( &constant_bin[ 20628 ], 397, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Crypto$Hash$SHA( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_6900732dd9f722856ae385c51b5b37c9;
static PyCodeObject *codeobj_5ca118a9706bd80ef17c45111448bc00;
static PyCodeObject *codeobj_1c456530e638209775a2da56e78d86e4;
static PyCodeObject *codeobj_721422e6973e5e61bd65e957102c07dc;
static PyCodeObject *codeobj_7597d523028c6a8b9197d08c65fff1b2;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_6a35db8e28a5a5e052999a26baae5600;
    codeobj_6900732dd9f722856ae385c51b5b37c9 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_e49ae8250a1a25a1ec1c71108da02478, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_5ca118a9706bd80ef17c45111448bc00 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SHA1Hash, 54, const_tuple_42a0f3355deb4c838a3b8fd3b05af728_tuple, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_1c456530e638209775a2da56e78d86e4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 73, const_tuple_str_plain_self_str_plain_data_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_721422e6973e5e61bd65e957102c07dc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_new, 76, const_tuple_str_plain_self_str_plain_data_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7597d523028c6a8b9197d08c65fff1b2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_new, 79, const_tuple_str_plain_data_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_Crypto$Hash$SHA$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Crypto$Hash$SHA$$$function_2_new( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Crypto$Hash$SHA$$$function_3_new( PyObject *defaults );


// The module function definitions.
static PyObject *impl_Crypto$Hash$SHA$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1c456530e638209775a2da56e78d86e4 = NULL;

    struct Nuitka_FrameObject *frame_1c456530e638209775a2da56e78d86e4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1c456530e638209775a2da56e78d86e4, codeobj_1c456530e638209775a2da56e78d86e4, module_Crypto$Hash$SHA, sizeof(void *)+sizeof(void *) );
    frame_1c456530e638209775a2da56e78d86e4 = cache_frame_1c456530e638209775a2da56e78d86e4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1c456530e638209775a2da56e78d86e4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1c456530e638209775a2da56e78d86e4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain_HashAlgo );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HashAlgo );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "HashAlgo" );
        exception_tb = NULL;

        exception_lineno = 74;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain_hashFactory );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashFactory );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "hashFactory" );
        exception_tb = NULL;

        exception_lineno = 74;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_data;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_1c456530e638209775a2da56e78d86e4->m_frame.f_lineno = 74;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c456530e638209775a2da56e78d86e4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c456530e638209775a2da56e78d86e4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1c456530e638209775a2da56e78d86e4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1c456530e638209775a2da56e78d86e4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1c456530e638209775a2da56e78d86e4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1c456530e638209775a2da56e78d86e4,
        type_description_1,
        par_self,
        par_data
    );


    // Release cached frame.
    if ( frame_1c456530e638209775a2da56e78d86e4 == cache_frame_1c456530e638209775a2da56e78d86e4 )
    {
        Py_DECREF( frame_1c456530e638209775a2da56e78d86e4 );
    }
    cache_frame_1c456530e638209775a2da56e78d86e4 = NULL;

    assertFrameObject( frame_1c456530e638209775a2da56e78d86e4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$SHA$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$SHA$$$function_1___init__ );
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


static PyObject *impl_Crypto$Hash$SHA$$$function_2_new( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_721422e6973e5e61bd65e957102c07dc = NULL;

    struct Nuitka_FrameObject *frame_721422e6973e5e61bd65e957102c07dc;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_721422e6973e5e61bd65e957102c07dc, codeobj_721422e6973e5e61bd65e957102c07dc, module_Crypto$Hash$SHA, sizeof(void *)+sizeof(void *) );
    frame_721422e6973e5e61bd65e957102c07dc = cache_frame_721422e6973e5e61bd65e957102c07dc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_721422e6973e5e61bd65e957102c07dc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_721422e6973e5e61bd65e957102c07dc ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain_SHA1Hash );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SHA1Hash );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SHA1Hash" );
        exception_tb = NULL;

        exception_lineno = 77;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_data;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_721422e6973e5e61bd65e957102c07dc->m_frame.f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_721422e6973e5e61bd65e957102c07dc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_721422e6973e5e61bd65e957102c07dc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_721422e6973e5e61bd65e957102c07dc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_721422e6973e5e61bd65e957102c07dc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_721422e6973e5e61bd65e957102c07dc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_721422e6973e5e61bd65e957102c07dc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_721422e6973e5e61bd65e957102c07dc,
        type_description_1,
        par_self,
        par_data
    );


    // Release cached frame.
    if ( frame_721422e6973e5e61bd65e957102c07dc == cache_frame_721422e6973e5e61bd65e957102c07dc )
    {
        Py_DECREF( frame_721422e6973e5e61bd65e957102c07dc );
    }
    cache_frame_721422e6973e5e61bd65e957102c07dc = NULL;

    assertFrameObject( frame_721422e6973e5e61bd65e957102c07dc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$SHA$$$function_2_new );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$SHA$$$function_2_new );
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


static PyObject *impl_Crypto$Hash$SHA$$$function_3_new( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[ 0 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_7597d523028c6a8b9197d08c65fff1b2 = NULL;

    struct Nuitka_FrameObject *frame_7597d523028c6a8b9197d08c65fff1b2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7597d523028c6a8b9197d08c65fff1b2, codeobj_7597d523028c6a8b9197d08c65fff1b2, module_Crypto$Hash$SHA, sizeof(void *) );
    frame_7597d523028c6a8b9197d08c65fff1b2 = cache_frame_7597d523028c6a8b9197d08c65fff1b2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7597d523028c6a8b9197d08c65fff1b2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7597d523028c6a8b9197d08c65fff1b2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain_SHA1Hash );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SHA1Hash );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SHA1Hash" );
        exception_tb = NULL;

        exception_lineno = 90;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_7597d523028c6a8b9197d08c65fff1b2->m_frame.f_lineno = 90;
    tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_data;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_7597d523028c6a8b9197d08c65fff1b2->m_frame.f_lineno = 90;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_new, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7597d523028c6a8b9197d08c65fff1b2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7597d523028c6a8b9197d08c65fff1b2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7597d523028c6a8b9197d08c65fff1b2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7597d523028c6a8b9197d08c65fff1b2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7597d523028c6a8b9197d08c65fff1b2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7597d523028c6a8b9197d08c65fff1b2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7597d523028c6a8b9197d08c65fff1b2,
        type_description_1,
        par_data
    );


    // Release cached frame.
    if ( frame_7597d523028c6a8b9197d08c65fff1b2 == cache_frame_7597d523028c6a8b9197d08c65fff1b2 )
    {
        Py_DECREF( frame_7597d523028c6a8b9197d08c65fff1b2 );
    }
    cache_frame_7597d523028c6a8b9197d08c65fff1b2 = NULL;

    assertFrameObject( frame_7597d523028c6a8b9197d08c65fff1b2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$SHA$$$function_3_new );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$SHA$$$function_3_new );
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



static PyObject *MAKE_FUNCTION_Crypto$Hash$SHA$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Hash$SHA$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1c456530e638209775a2da56e78d86e4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Hash$SHA,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Hash$SHA$$$function_2_new( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Hash$SHA$$$function_2_new,
        const_str_plain_new,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_721422e6973e5e61bd65e957102c07dc,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Hash$SHA,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Hash$SHA$$$function_3_new( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Hash$SHA$$$function_3_new,
        const_str_plain_new,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7597d523028c6a8b9197d08c65fff1b2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Hash$SHA,
        const_str_digest_659b1fcf1ddbfaf278ff5ebfb6ea172d,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Crypto$Hash$SHA =
{
    PyModuleDef_HEAD_INIT,
    "Crypto.Hash.SHA",   /* m_name */
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

MOD_INIT_DECL( Crypto$Hash$SHA )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto$Hash$SHA );
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
    puts("Crypto.Hash.SHA: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.Hash.SHA: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initCrypto$Hash$SHA" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto$Hash$SHA = Py_InitModule4(
        "Crypto.Hash.SHA",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Crypto$Hash$SHA = PyModule_Create( &mdef_Crypto$Hash$SHA );
#endif

    moduledict_Crypto$Hash$SHA = MODULE_DICT( module_Crypto$Hash$SHA );

    CHECK_OBJECT( module_Crypto$Hash$SHA );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_dd2e92067f258d9d648cdf12e7a8cd08, module_Crypto$Hash$SHA );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_0_var_oid = NULL;
    PyObject *outline_0_var_digest_size = NULL;
    PyObject *outline_0_var_block_size = NULL;
    PyObject *outline_0_var___init__ = NULL;
    PyObject *outline_0_var_new = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
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
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_star_imported_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_5ca118a9706bd80ef17c45111448bc00_2 = NULL;

    struct Nuitka_FrameObject *frame_5ca118a9706bd80ef17c45111448bc00_2;

    struct Nuitka_FrameObject *frame_6900732dd9f722856ae385c51b5b37c9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_ada7e1010361001fe1b158784fb94fb2;
    UPDATE_STRING_DICT0( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_6a35db8e28a5a5e052999a26baae5600;
    UPDATE_STRING_DICT0( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_10c675d39d154a59cf6207a839b0661f;
    UPDATE_STRING_DICT0( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain__revision__, tmp_assign_source_4 );
    tmp_assign_source_5 = LIST_COPY( const_list_str_plain_new_str_plain_digest_size_str_plain_SHA1Hash_list );
    UPDATE_STRING_DICT1( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );
    // Frame without reuse.
    frame_6900732dd9f722856ae385c51b5b37c9 = MAKE_MODULE_FRAME( codeobj_6900732dd9f722856ae385c51b5b37c9, module_Crypto$Hash$SHA );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_6900732dd9f722856ae385c51b5b37c9 );
    assert( Py_REFCNT( frame_6900732dd9f722856ae385c51b5b37c9 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_digest_391b5dc084c9caede4445b681a10e649;
    tmp_globals_name_1 = (PyObject *)moduledict_Crypto$Hash$SHA;
    tmp_locals_name_1 = (PyObject *)moduledict_Crypto$Hash$SHA;
    tmp_fromlist_name_1 = const_tuple_str_chr_42_tuple;
    frame_6900732dd9f722856ae385c51b5b37c9->m_frame.f_lineno = 42;
    tmp_star_imported_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_Crypto$Hash$SHA, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto frame_exception_exit_1;
    }
    tmp_name_name_2 = const_str_digest_4504ca1cc6d1b92e22b4fc7b4eb38d52;
    tmp_globals_name_2 = (PyObject *)moduledict_Crypto$Hash$SHA;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_HashAlgo_tuple;
    frame_6900732dd9f722856ae385c51b5b37c9->m_frame.f_lineno = 43;
    tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_HashAlgo );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain_HashAlgo, tmp_assign_source_6 );
    // Tried code:
    tmp_name_name_3 = const_str_plain_hashlib;
    tmp_globals_name_3 = (PyObject *)moduledict_Crypto$Hash$SHA;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    frame_6900732dd9f722856ae385c51b5b37c9->m_frame.f_lineno = 47;
    tmp_assign_source_7 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain_hashlib, tmp_assign_source_7 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain_hashlib );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "hashlib" );
        exception_tb = NULL;

        exception_lineno = 48;

        goto try_except_handler_1;
    }

    tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sha1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain_hashFactory, tmp_assign_source_8 );
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
    PRESERVE_FRAME_EXCEPTION( frame_6900732dd9f722856ae385c51b5b37c9 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_6900732dd9f722856ae385c51b5b37c9, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_6900732dd9f722856ae385c51b5b37c9, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

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
    tmp_name_name_4 = const_str_plain_sha;
    tmp_globals_name_4 = (PyObject *)moduledict_Crypto$Hash$SHA;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = Py_None;
    frame_6900732dd9f722856ae385c51b5b37c9->m_frame.f_lineno = 51;
    tmp_assign_source_9 = IMPORT_MODULE4( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain_sha, tmp_assign_source_9 );
    tmp_assign_source_10 = GET_STRING_DICT_VALUE( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain_sha );

    if (unlikely( tmp_assign_source_10 == NULL ))
    {
        tmp_assign_source_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sha );
    }

    if ( tmp_assign_source_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "sha" );
        exception_tb = NULL;

        exception_lineno = 52;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain_hashFactory, tmp_assign_source_10 );
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 45;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_6900732dd9f722856ae385c51b5b37c9->m_frame) frame_6900732dd9f722856ae385c51b5b37c9->m_frame.f_lineno = exception_tb->tb_lineno;

    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$SHA );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    // Tried code:
    tmp_assign_source_11 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain_HashAlgo );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HashAlgo );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "HashAlgo" );
        exception_tb = NULL;

        exception_lineno = 54;

        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_11, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_11;

    tmp_assign_source_13 = const_str_digest_dd2e92067f258d9d648cdf12e7a8cd08;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_13 );
    outline_0_var___module__ = tmp_assign_source_13;

    tmp_assign_source_14 = const_str_digest_8f0533c724e089a4c1a9b93f9533584f;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_14 );
    outline_0_var___doc__ = tmp_assign_source_14;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5ca118a9706bd80ef17c45111448bc00_2, codeobj_5ca118a9706bd80ef17c45111448bc00, module_Crypto$Hash$SHA, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5ca118a9706bd80ef17c45111448bc00_2 = cache_frame_5ca118a9706bd80ef17c45111448bc00_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5ca118a9706bd80ef17c45111448bc00_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5ca118a9706bd80ef17c45111448bc00_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain_b );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "b" );
        exception_tb = NULL;

        exception_lineno = 68;
        type_description_2 = "ooNNNNN";
        goto frame_exception_exit_2;
    }

    frame_5ca118a9706bd80ef17c45111448bc00_2->m_frame.f_lineno = 68;
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_ea3fd02eceecf3624e57434539349fcb_tuple, 0 ) );

    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_2 = "ooNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_oid == NULL );
    outline_0_var_oid = tmp_assign_source_15;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_5ca118a9706bd80ef17c45111448bc00_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5ca118a9706bd80ef17c45111448bc00_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5ca118a9706bd80ef17c45111448bc00_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5ca118a9706bd80ef17c45111448bc00_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5ca118a9706bd80ef17c45111448bc00_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5ca118a9706bd80ef17c45111448bc00_2,
        type_description_2,
        outline_0_var___module__,
        outline_0_var___doc__,
        outline_0_var_oid,
        NULL,
        NULL,
        NULL,
        NULL
    );


    // Release cached frame.
    if ( frame_5ca118a9706bd80ef17c45111448bc00_2 == cache_frame_5ca118a9706bd80ef17c45111448bc00_2 )
    {
        Py_DECREF( frame_5ca118a9706bd80ef17c45111448bc00_2 );
    }
    cache_frame_5ca118a9706bd80ef17c45111448bc00_2 = NULL;

    assertFrameObject( frame_5ca118a9706bd80ef17c45111448bc00_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_3;
    skip_nested_handling_1:;
    tmp_assign_source_16 = const_int_pos_20;
    assert( outline_0_var_digest_size == NULL );
    Py_INCREF( tmp_assign_source_16 );
    outline_0_var_digest_size = tmp_assign_source_16;

    tmp_assign_source_17 = const_int_pos_64;
    assert( outline_0_var_block_size == NULL );
    Py_INCREF( tmp_assign_source_17 );
    outline_0_var_block_size = tmp_assign_source_17;

    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_18 = MAKE_FUNCTION_Crypto$Hash$SHA$$$function_1___init__( tmp_defaults_1 );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_18;

    tmp_defaults_2 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_19 = MAKE_FUNCTION_Crypto$Hash$SHA$$$function_2_new( tmp_defaults_2 );
    assert( outline_0_var_new == NULL );
    outline_0_var_new = tmp_assign_source_19;

    tmp_outline_return_value_1 = _PyDict_NewPresized( 7 );
    tmp_dict_value_1 = outline_0_var___module__;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = outline_0_var___doc__;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain___doc__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = outline_0_var_oid;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_oid;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = outline_0_var_digest_size;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain_digest_size;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = outline_0_var_block_size;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain_block_size;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = outline_0_var___init__;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = outline_0_var_new;

    CHECK_OBJECT( tmp_dict_value_7 );
    tmp_dict_key_7 = const_str_plain_new;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$SHA );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___doc__ );
    Py_DECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_oid );
    Py_DECREF( outline_0_var_oid );
    outline_0_var_oid = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_digest_size );
    Py_DECREF( outline_0_var_digest_size );
    outline_0_var_digest_size = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_block_size );
    Py_DECREF( outline_0_var_block_size );
    outline_0_var_block_size = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___init__ );
    Py_DECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_new );
    Py_DECREF( outline_0_var_new );
    outline_0_var_new = NULL;

    goto outline_result_1;
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

    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___doc__ );
    Py_DECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$SHA );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 54;
    goto try_except_handler_2;
    outline_result_1:;
    tmp_assign_source_12 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_12;

    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
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
    tmp_assign_source_20 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_21 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_2;
    }
    assert( tmp_select_metaclass_1__base == NULL );
    tmp_select_metaclass_1__base = tmp_assign_source_21;

    // Tried code:
    // Tried code:
    tmp_source_name_2 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_outline_return_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
    if ( tmp_outline_return_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_5;
    }
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$SHA );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_3 );
    Py_XDECREF( exception_keeper_value_3 );
    Py_XDECREF( exception_keeper_tb_3 );
    tmp_type_arg_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_outline_return_value_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_outline_return_value_2 != NULL );
    goto try_return_handler_4;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$SHA );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    goto outline_result_2;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$SHA );
    return MOD_RETURN_VALUE( NULL );
    outline_result_2:;
    tmp_assign_source_20 = tmp_outline_return_value_2;
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_20;

    tmp_called_name_2 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_1 = const_str_plain_SHA1Hash;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_6900732dd9f722856ae385c51b5b37c9->m_frame.f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_22;

    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_23 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_23 );
    UPDATE_STRING_DICT0( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain_SHA1Hash, tmp_assign_source_23 );
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

    tmp_defaults_3 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_24 = MAKE_FUNCTION_Crypto$Hash$SHA$$$function_3_new( tmp_defaults_3 );
    UPDATE_STRING_DICT1( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain_new, tmp_assign_source_24 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain_SHA1Hash );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SHA1Hash );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SHA1Hash" );
        exception_tb = NULL;

        exception_lineno = 93;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_25 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_digest_size );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain_digest_size, tmp_assign_source_25 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain_SHA1Hash );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SHA1Hash );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SHA1Hash" );
        exception_tb = NULL;

        exception_lineno = 96;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_26 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_block_size );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Hash$SHA, (Nuitka_StringObject *)const_str_plain_block_size, tmp_assign_source_26 );

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_6900732dd9f722856ae385c51b5b37c9 );
#endif
    popFrameStack();

    assertFrameObject( frame_6900732dd9f722856ae385c51b5b37c9 );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_6900732dd9f722856ae385c51b5b37c9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6900732dd9f722856ae385c51b5b37c9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6900732dd9f722856ae385c51b5b37c9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6900732dd9f722856ae385c51b5b37c9, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;

    return MOD_RETURN_VALUE( module_Crypto$Hash$SHA );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
