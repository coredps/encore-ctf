/* Generated code for Python source for module 'Crypto.Util.py3compat'
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

/* The _module_Crypto$Util$py3compat is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$Util$py3compat;
PyDictObject *moduledict_Crypto$Util$py3compat;

/* The module constants used, if any. */
extern PyObject *const_str_plain___package__;
static PyObject *const_str_digest_94491e0a0f40df7fc91349180a654513;
extern PyObject *const_str_digest_391b5dc084c9caede4445b681a10e649;
extern PyObject *const_dict_empty;
extern PyObject *const_str_digest_10c675d39d154a59cf6207a839b0661f;
static PyObject *const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_bchr;
extern PyObject *const_str_plain_tobytes;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_bstr;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_encode;
static PyObject *const_str_digest_62b7e67e29e99420603c12d205222fa5;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain___revision__;
static PyObject *const_str_digest_8416d1837827dc0ec869b43a801a62f2;
extern PyObject *const_str_plain_b;
static PyObject *const_str_digest_6583740a6a1c47b6ae52d370ad281ef1;
extern PyObject *const_tuple_str_plain_s_tuple;
extern PyObject *const_str_plain_bord;
static PyObject *const_str_digest_0cf228145d32692980f9a33ff2c82adc;
extern PyObject *const_str_plain_s;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_94491e0a0f40df7fc91349180a654513 = UNSTREAM_STRING( &constant_bin[ 116905 ], 40, 0 );
    const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple = PyTuple_New( 1 );
    const_str_digest_62b7e67e29e99420603c12d205222fa5 = UNSTREAM_STRING( &constant_bin[ 116945 ], 7, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple, 0, const_str_digest_62b7e67e29e99420603c12d205222fa5 ); Py_INCREF( const_str_digest_62b7e67e29e99420603c12d205222fa5 );
    const_str_digest_8416d1837827dc0ec869b43a801a62f2 = UNSTREAM_STRING( &constant_bin[ 116952 ], 1689, 0 );
    const_str_digest_6583740a6a1c47b6ae52d370ad281ef1 = UNSTREAM_STRING( &constant_bin[ 118641 ], 30, 0 );
    const_str_digest_0cf228145d32692980f9a33ff2c82adc = UNSTREAM_STRING( &constant_bin[ 118671 ], 57, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Crypto$Util$py3compat( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_2768a90266f1a503002f19aceb416f2a;
static PyCodeObject *codeobj_c505b969c2a71f10f0709d0295892db6;
static PyCodeObject *codeobj_e2f88e872d722af5f1bf4c08dd8d1b0f;
static PyCodeObject *codeobj_bd2e65a5f9d9a4b75b740e832d7cc9ab;
static PyCodeObject *codeobj_d923721d1f98bc3972bf1bd7114f9916;
static PyCodeObject *codeobj_d19727008b4d90aa74742eb86dd85bdf;
static PyCodeObject *codeobj_53edb46eeb9bc96ba0d29580e36c127d;
static PyCodeObject *codeobj_6df1f626a9ff1394815298bd792ef496;
static PyCodeObject *codeobj_3cdfc955ee6b09c672f9918c390d600a;
static PyCodeObject *codeobj_42d506ee65c2781a1a127dacc03f80b3;
static PyCodeObject *codeobj_35da770f16ef916209903b638e5a8eef;
static PyCodeObject *codeobj_4f19781cc76ae7bf90f1b5eb73ea8030;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_0cf228145d32692980f9a33ff2c82adc;
    codeobj_2768a90266f1a503002f19aceb416f2a = MAKE_CODEOBJ( module_filename_obj, const_str_digest_6583740a6a1c47b6ae52d370ad281ef1, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_c505b969c2a71f10f0709d0295892db6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_b, 66, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e2f88e872d722af5f1bf4c08dd8d1b0f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_b, 87, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bd2e65a5f9d9a4b75b740e832d7cc9ab = MAKE_CODEOBJ( module_filename_obj, const_str_plain_bchr, 68, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d923721d1f98bc3972bf1bd7114f9916 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_bchr, 89, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d19727008b4d90aa74742eb86dd85bdf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_bord, 72, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_53edb46eeb9bc96ba0d29580e36c127d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_bord, 96, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6df1f626a9ff1394815298bd792ef496 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_bstr, 70, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3cdfc955ee6b09c672f9918c390d600a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_bstr, 91, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_42d506ee65c2781a1a127dacc03f80b3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tobytes, 75, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_35da770f16ef916209903b638e5a8eef = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tobytes, 81, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4f19781cc76ae7bf90f1b5eb73ea8030 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tobytes, 98, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_10_bord(  );


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_11_tobytes(  );


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_1_b(  );


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_2_bchr(  );


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_3_bstr(  );


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_4_bord(  );


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_5_tobytes(  );


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_6_tobytes(  );


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_7_b(  );


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_8_bchr(  );


static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_9_bstr(  );


// The module function definitions.
static PyObject *impl_Crypto$Util$py3compat$$$function_1_b( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = par_s;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_1_b );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_1_b );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_Crypto$Util$py3compat$$$function_2_bchr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_chr_arg_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_bd2e65a5f9d9a4b75b740e832d7cc9ab = NULL;

    struct Nuitka_FrameObject *frame_bd2e65a5f9d9a4b75b740e832d7cc9ab;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bd2e65a5f9d9a4b75b740e832d7cc9ab, codeobj_bd2e65a5f9d9a4b75b740e832d7cc9ab, module_Crypto$Util$py3compat, sizeof(void *) );
    frame_bd2e65a5f9d9a4b75b740e832d7cc9ab = cache_frame_bd2e65a5f9d9a4b75b740e832d7cc9ab;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bd2e65a5f9d9a4b75b740e832d7cc9ab );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bd2e65a5f9d9a4b75b740e832d7cc9ab ) == 2 ); // Frame stack

    // Framed code:
    tmp_chr_arg_1 = par_s;

    CHECK_OBJECT( tmp_chr_arg_1 );
    tmp_return_value = BUILTIN_CHR( tmp_chr_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd2e65a5f9d9a4b75b740e832d7cc9ab );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd2e65a5f9d9a4b75b740e832d7cc9ab );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd2e65a5f9d9a4b75b740e832d7cc9ab );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bd2e65a5f9d9a4b75b740e832d7cc9ab, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bd2e65a5f9d9a4b75b740e832d7cc9ab->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bd2e65a5f9d9a4b75b740e832d7cc9ab, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bd2e65a5f9d9a4b75b740e832d7cc9ab,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_bd2e65a5f9d9a4b75b740e832d7cc9ab == cache_frame_bd2e65a5f9d9a4b75b740e832d7cc9ab )
    {
        Py_DECREF( frame_bd2e65a5f9d9a4b75b740e832d7cc9ab );
    }
    cache_frame_bd2e65a5f9d9a4b75b740e832d7cc9ab = NULL;

    assertFrameObject( frame_bd2e65a5f9d9a4b75b740e832d7cc9ab );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_2_bchr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_2_bchr );
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


static PyObject *impl_Crypto$Util$py3compat$$$function_3_bstr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_str_arg_1;
    static struct Nuitka_FrameObject *cache_frame_6df1f626a9ff1394815298bd792ef496 = NULL;

    struct Nuitka_FrameObject *frame_6df1f626a9ff1394815298bd792ef496;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6df1f626a9ff1394815298bd792ef496, codeobj_6df1f626a9ff1394815298bd792ef496, module_Crypto$Util$py3compat, sizeof(void *) );
    frame_6df1f626a9ff1394815298bd792ef496 = cache_frame_6df1f626a9ff1394815298bd792ef496;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6df1f626a9ff1394815298bd792ef496 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6df1f626a9ff1394815298bd792ef496 ) == 2 ); // Frame stack

    // Framed code:
    tmp_str_arg_1 = par_s;

    CHECK_OBJECT( tmp_str_arg_1 );
    tmp_return_value = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6df1f626a9ff1394815298bd792ef496 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6df1f626a9ff1394815298bd792ef496 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6df1f626a9ff1394815298bd792ef496 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6df1f626a9ff1394815298bd792ef496, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6df1f626a9ff1394815298bd792ef496->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6df1f626a9ff1394815298bd792ef496, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6df1f626a9ff1394815298bd792ef496,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_6df1f626a9ff1394815298bd792ef496 == cache_frame_6df1f626a9ff1394815298bd792ef496 )
    {
        Py_DECREF( frame_6df1f626a9ff1394815298bd792ef496 );
    }
    cache_frame_6df1f626a9ff1394815298bd792ef496 = NULL;

    assertFrameObject( frame_6df1f626a9ff1394815298bd792ef496 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_3_bstr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_3_bstr );
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


static PyObject *impl_Crypto$Util$py3compat$$$function_4_bord( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_ord_arg_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_d19727008b4d90aa74742eb86dd85bdf = NULL;

    struct Nuitka_FrameObject *frame_d19727008b4d90aa74742eb86dd85bdf;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d19727008b4d90aa74742eb86dd85bdf, codeobj_d19727008b4d90aa74742eb86dd85bdf, module_Crypto$Util$py3compat, sizeof(void *) );
    frame_d19727008b4d90aa74742eb86dd85bdf = cache_frame_d19727008b4d90aa74742eb86dd85bdf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d19727008b4d90aa74742eb86dd85bdf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d19727008b4d90aa74742eb86dd85bdf ) == 2 ); // Frame stack

    // Framed code:
    tmp_ord_arg_1 = par_s;

    CHECK_OBJECT( tmp_ord_arg_1 );
    tmp_return_value = BUILTIN_ORD( tmp_ord_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d19727008b4d90aa74742eb86dd85bdf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d19727008b4d90aa74742eb86dd85bdf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d19727008b4d90aa74742eb86dd85bdf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d19727008b4d90aa74742eb86dd85bdf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d19727008b4d90aa74742eb86dd85bdf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d19727008b4d90aa74742eb86dd85bdf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d19727008b4d90aa74742eb86dd85bdf,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_d19727008b4d90aa74742eb86dd85bdf == cache_frame_d19727008b4d90aa74742eb86dd85bdf )
    {
        Py_DECREF( frame_d19727008b4d90aa74742eb86dd85bdf );
    }
    cache_frame_d19727008b4d90aa74742eb86dd85bdf = NULL;

    assertFrameObject( frame_d19727008b4d90aa74742eb86dd85bdf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_4_bord );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_4_bord );
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


static PyObject *impl_Crypto$Util$py3compat$$$function_5_tobytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_42d506ee65c2781a1a127dacc03f80b3 = NULL;

    struct Nuitka_FrameObject *frame_42d506ee65c2781a1a127dacc03f80b3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_42d506ee65c2781a1a127dacc03f80b3, codeobj_42d506ee65c2781a1a127dacc03f80b3, module_Crypto$Util$py3compat, sizeof(void *) );
    frame_42d506ee65c2781a1a127dacc03f80b3 = cache_frame_42d506ee65c2781a1a127dacc03f80b3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_42d506ee65c2781a1a127dacc03f80b3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_42d506ee65c2781a1a127dacc03f80b3 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_called_instance_1 = par_s;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_42d506ee65c2781a1a127dacc03f80b3->m_frame.f_lineno = 77;
    tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple, 0 ) );

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "o";
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_5_tobytes );
    return NULL;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_42d506ee65c2781a1a127dacc03f80b3 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_42d506ee65c2781a1a127dacc03f80b3, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_42d506ee65c2781a1a127dacc03f80b3, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_called_instance_2 = const_str_empty;
    tmp_args_element_name_1 = par_s;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_42d506ee65c2781a1a127dacc03f80b3->m_frame.f_lineno = 79;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_join, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION( frame_42d506ee65c2781a1a127dacc03f80b3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_42d506ee65c2781a1a127dacc03f80b3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_42d506ee65c2781a1a127dacc03f80b3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_42d506ee65c2781a1a127dacc03f80b3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_42d506ee65c2781a1a127dacc03f80b3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_42d506ee65c2781a1a127dacc03f80b3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_42d506ee65c2781a1a127dacc03f80b3,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_42d506ee65c2781a1a127dacc03f80b3 == cache_frame_42d506ee65c2781a1a127dacc03f80b3 )
    {
        Py_DECREF( frame_42d506ee65c2781a1a127dacc03f80b3 );
    }
    cache_frame_42d506ee65c2781a1a127dacc03f80b3 = NULL;

    assertFrameObject( frame_42d506ee65c2781a1a127dacc03f80b3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_5_tobytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_5_tobytes );
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


static PyObject *impl_Crypto$Util$py3compat$$$function_6_tobytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
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
    PyObject *tmp_called_instance_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_35da770f16ef916209903b638e5a8eef = NULL;

    struct Nuitka_FrameObject *frame_35da770f16ef916209903b638e5a8eef;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_35da770f16ef916209903b638e5a8eef, codeobj_35da770f16ef916209903b638e5a8eef, module_Crypto$Util$py3compat, sizeof(void *) );
    frame_35da770f16ef916209903b638e5a8eef = cache_frame_35da770f16ef916209903b638e5a8eef;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_35da770f16ef916209903b638e5a8eef );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_35da770f16ef916209903b638e5a8eef ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_s;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_instance_1 = par_s;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_35da770f16ef916209903b638e5a8eef->m_frame.f_lineno = 83;
    tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple, 0 ) );

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_called_instance_2 = const_str_empty;
    tmp_args_element_name_1 = par_s;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_35da770f16ef916209903b638e5a8eef->m_frame.f_lineno = 85;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_join, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_35da770f16ef916209903b638e5a8eef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_35da770f16ef916209903b638e5a8eef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_35da770f16ef916209903b638e5a8eef );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_35da770f16ef916209903b638e5a8eef, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_35da770f16ef916209903b638e5a8eef->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_35da770f16ef916209903b638e5a8eef, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_35da770f16ef916209903b638e5a8eef,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_35da770f16ef916209903b638e5a8eef == cache_frame_35da770f16ef916209903b638e5a8eef )
    {
        Py_DECREF( frame_35da770f16ef916209903b638e5a8eef );
    }
    cache_frame_35da770f16ef916209903b638e5a8eef = NULL;

    assertFrameObject( frame_35da770f16ef916209903b638e5a8eef );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_6_tobytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_6_tobytes );
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


static PyObject *impl_Crypto$Util$py3compat$$$function_7_b( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_e2f88e872d722af5f1bf4c08dd8d1b0f = NULL;

    struct Nuitka_FrameObject *frame_e2f88e872d722af5f1bf4c08dd8d1b0f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e2f88e872d722af5f1bf4c08dd8d1b0f, codeobj_e2f88e872d722af5f1bf4c08dd8d1b0f, module_Crypto$Util$py3compat, sizeof(void *) );
    frame_e2f88e872d722af5f1bf4c08dd8d1b0f = cache_frame_e2f88e872d722af5f1bf4c08dd8d1b0f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e2f88e872d722af5f1bf4c08dd8d1b0f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e2f88e872d722af5f1bf4c08dd8d1b0f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_s;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_e2f88e872d722af5f1bf4c08dd8d1b0f->m_frame.f_lineno = 88;
    tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple, 0 ) );

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2f88e872d722af5f1bf4c08dd8d1b0f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2f88e872d722af5f1bf4c08dd8d1b0f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2f88e872d722af5f1bf4c08dd8d1b0f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e2f88e872d722af5f1bf4c08dd8d1b0f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e2f88e872d722af5f1bf4c08dd8d1b0f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e2f88e872d722af5f1bf4c08dd8d1b0f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e2f88e872d722af5f1bf4c08dd8d1b0f,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_e2f88e872d722af5f1bf4c08dd8d1b0f == cache_frame_e2f88e872d722af5f1bf4c08dd8d1b0f )
    {
        Py_DECREF( frame_e2f88e872d722af5f1bf4c08dd8d1b0f );
    }
    cache_frame_e2f88e872d722af5f1bf4c08dd8d1b0f = NULL;

    assertFrameObject( frame_e2f88e872d722af5f1bf4c08dd8d1b0f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_7_b );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_7_b );
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


static PyObject *impl_Crypto$Util$py3compat$$$function_8_bchr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_str_arg_1;
    static struct Nuitka_FrameObject *cache_frame_d923721d1f98bc3972bf1bd7114f9916 = NULL;

    struct Nuitka_FrameObject *frame_d923721d1f98bc3972bf1bd7114f9916;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d923721d1f98bc3972bf1bd7114f9916, codeobj_d923721d1f98bc3972bf1bd7114f9916, module_Crypto$Util$py3compat, sizeof(void *) );
    frame_d923721d1f98bc3972bf1bd7114f9916 = cache_frame_d923721d1f98bc3972bf1bd7114f9916;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d923721d1f98bc3972bf1bd7114f9916 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d923721d1f98bc3972bf1bd7114f9916 ) == 2 ); // Frame stack

    // Framed code:
    tmp_str_arg_1 = PyList_New( 1 );
    tmp_list_element_1 = par_s;

    CHECK_OBJECT( tmp_list_element_1 );
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_str_arg_1, 0, tmp_list_element_1 );
    tmp_return_value = PyObject_Str( tmp_str_arg_1 );
    Py_DECREF( tmp_str_arg_1 );
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
    RESTORE_FRAME_EXCEPTION( frame_d923721d1f98bc3972bf1bd7114f9916 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d923721d1f98bc3972bf1bd7114f9916 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d923721d1f98bc3972bf1bd7114f9916 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d923721d1f98bc3972bf1bd7114f9916, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d923721d1f98bc3972bf1bd7114f9916->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d923721d1f98bc3972bf1bd7114f9916, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d923721d1f98bc3972bf1bd7114f9916,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_d923721d1f98bc3972bf1bd7114f9916 == cache_frame_d923721d1f98bc3972bf1bd7114f9916 )
    {
        Py_DECREF( frame_d923721d1f98bc3972bf1bd7114f9916 );
    }
    cache_frame_d923721d1f98bc3972bf1bd7114f9916 = NULL;

    assertFrameObject( frame_d923721d1f98bc3972bf1bd7114f9916 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_8_bchr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_8_bchr );
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


static PyObject *impl_Crypto$Util$py3compat$$$function_9_bstr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_str_arg_1;
    static struct Nuitka_FrameObject *cache_frame_3cdfc955ee6b09c672f9918c390d600a = NULL;

    struct Nuitka_FrameObject *frame_3cdfc955ee6b09c672f9918c390d600a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3cdfc955ee6b09c672f9918c390d600a, codeobj_3cdfc955ee6b09c672f9918c390d600a, module_Crypto$Util$py3compat, sizeof(void *) );
    frame_3cdfc955ee6b09c672f9918c390d600a = cache_frame_3cdfc955ee6b09c672f9918c390d600a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3cdfc955ee6b09c672f9918c390d600a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3cdfc955ee6b09c672f9918c390d600a ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_s;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = PyExc_TypeError;
    tmp_raise_value_1 = const_str_digest_94491e0a0f40df7fc91349180a654513;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_value = tmp_raise_value_1;
    Py_INCREF( tmp_raise_value_1 );
    exception_lineno = 93;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "o";
    goto frame_exception_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_str_arg_1 = par_s;

    CHECK_OBJECT( tmp_str_arg_1 );
    tmp_return_value = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3cdfc955ee6b09c672f9918c390d600a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3cdfc955ee6b09c672f9918c390d600a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3cdfc955ee6b09c672f9918c390d600a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3cdfc955ee6b09c672f9918c390d600a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3cdfc955ee6b09c672f9918c390d600a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3cdfc955ee6b09c672f9918c390d600a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3cdfc955ee6b09c672f9918c390d600a,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_3cdfc955ee6b09c672f9918c390d600a == cache_frame_3cdfc955ee6b09c672f9918c390d600a )
    {
        Py_DECREF( frame_3cdfc955ee6b09c672f9918c390d600a );
    }
    cache_frame_3cdfc955ee6b09c672f9918c390d600a = NULL;

    assertFrameObject( frame_3cdfc955ee6b09c672f9918c390d600a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_9_bstr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_9_bstr );
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


static PyObject *impl_Crypto$Util$py3compat$$$function_10_bord( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = par_s;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_10_bord );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_10_bord );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_Crypto$Util$py3compat$$$function_11_tobytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_str_arg_1;
    static struct Nuitka_FrameObject *cache_frame_4f19781cc76ae7bf90f1b5eb73ea8030 = NULL;

    struct Nuitka_FrameObject *frame_4f19781cc76ae7bf90f1b5eb73ea8030;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4f19781cc76ae7bf90f1b5eb73ea8030, codeobj_4f19781cc76ae7bf90f1b5eb73ea8030, module_Crypto$Util$py3compat, sizeof(void *) );
    frame_4f19781cc76ae7bf90f1b5eb73ea8030 = cache_frame_4f19781cc76ae7bf90f1b5eb73ea8030;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4f19781cc76ae7bf90f1b5eb73ea8030 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4f19781cc76ae7bf90f1b5eb73ea8030 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_s;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = par_s;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_isinstance_inst_2 = par_s;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_isinstance_cls_2 = (PyObject *)&PyString_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_instance_1 = par_s;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_4f19781cc76ae7bf90f1b5eb73ea8030->m_frame.f_lineno = 103;
    tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple, 0 ) );

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_str_arg_1 = par_s;

    CHECK_OBJECT( tmp_str_arg_1 );
    tmp_return_value = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f19781cc76ae7bf90f1b5eb73ea8030 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f19781cc76ae7bf90f1b5eb73ea8030 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f19781cc76ae7bf90f1b5eb73ea8030 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4f19781cc76ae7bf90f1b5eb73ea8030, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4f19781cc76ae7bf90f1b5eb73ea8030->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4f19781cc76ae7bf90f1b5eb73ea8030, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4f19781cc76ae7bf90f1b5eb73ea8030,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_4f19781cc76ae7bf90f1b5eb73ea8030 == cache_frame_4f19781cc76ae7bf90f1b5eb73ea8030 )
    {
        Py_DECREF( frame_4f19781cc76ae7bf90f1b5eb73ea8030 );
    }
    cache_frame_4f19781cc76ae7bf90f1b5eb73ea8030 = NULL;

    assertFrameObject( frame_4f19781cc76ae7bf90f1b5eb73ea8030 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_11_tobytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Util$py3compat$$$function_11_tobytes );
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



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_10_bord(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_10_bord,
        const_str_plain_bord,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_53edb46eeb9bc96ba0d29580e36c127d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Util$py3compat,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_11_tobytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_11_tobytes,
        const_str_plain_tobytes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4f19781cc76ae7bf90f1b5eb73ea8030,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Util$py3compat,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_1_b(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_1_b,
        const_str_plain_b,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c505b969c2a71f10f0709d0295892db6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Util$py3compat,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_2_bchr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_2_bchr,
        const_str_plain_bchr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bd2e65a5f9d9a4b75b740e832d7cc9ab,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Util$py3compat,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_3_bstr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_3_bstr,
        const_str_plain_bstr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6df1f626a9ff1394815298bd792ef496,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Util$py3compat,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_4_bord(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_4_bord,
        const_str_plain_bord,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d19727008b4d90aa74742eb86dd85bdf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Util$py3compat,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_5_tobytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_5_tobytes,
        const_str_plain_tobytes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_42d506ee65c2781a1a127dacc03f80b3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Util$py3compat,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_6_tobytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_6_tobytes,
        const_str_plain_tobytes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_35da770f16ef916209903b638e5a8eef,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Util$py3compat,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_7_b(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_7_b,
        const_str_plain_b,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e2f88e872d722af5f1bf4c08dd8d1b0f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Util$py3compat,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_8_bchr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_8_bchr,
        const_str_plain_bchr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d923721d1f98bc3972bf1bd7114f9916,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Util$py3compat,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Util$py3compat$$$function_9_bstr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Util$py3compat$$$function_9_bstr,
        const_str_plain_bstr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3cdfc955ee6b09c672f9918c390d600a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Util$py3compat,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Crypto$Util$py3compat =
{
    PyModuleDef_HEAD_INIT,
    "Crypto.Util.py3compat",   /* m_name */
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

MOD_INIT_DECL( Crypto$Util$py3compat )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto$Util$py3compat );
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
    puts("Crypto.Util.py3compat: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.Util.py3compat: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initCrypto$Util$py3compat" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto$Util$py3compat = Py_InitModule4(
        "Crypto.Util.py3compat",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Crypto$Util$py3compat = PyModule_Create( &mdef_Crypto$Util$py3compat );
#endif

    moduledict_Crypto$Util$py3compat = MODULE_DICT( module_Crypto$Util$py3compat );

    CHECK_OBJECT( module_Crypto$Util$py3compat );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_391b5dc084c9caede4445b681a10e649, module_Crypto$Util$py3compat );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    struct Nuitka_FrameObject *frame_2768a90266f1a503002f19aceb416f2a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_8416d1837827dc0ec869b43a801a62f2;
    UPDATE_STRING_DICT0( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_0cf228145d32692980f9a33ff2c82adc;
    UPDATE_STRING_DICT0( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_10c675d39d154a59cf6207a839b0661f;
    UPDATE_STRING_DICT0( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain___revision__, tmp_assign_source_4 );
    tmp_name_name_1 = const_str_plain_sys;
    tmp_globals_name_1 = (PyObject *)moduledict_Crypto$Util$py3compat;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    assert( tmp_assign_source_5 != NULL );
    UPDATE_STRING_DICT1( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_5 );
    // Frame without reuse.
    frame_2768a90266f1a503002f19aceb416f2a = MAKE_MODULE_FRAME( codeobj_2768a90266f1a503002f19aceb416f2a, module_Crypto$Util$py3compat );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_2768a90266f1a503002f19aceb416f2a );
    assert( Py_REFCNT( frame_2768a90266f1a503002f19aceb416f2a ) == 2 );

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 65;

        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_2;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 65;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_6 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_1_b(  );
    UPDATE_STRING_DICT1( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_b, tmp_assign_source_6 );
    tmp_assign_source_7 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_2_bchr(  );
    UPDATE_STRING_DICT1( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_bchr, tmp_assign_source_7 );
    tmp_assign_source_8 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_3_bstr(  );
    UPDATE_STRING_DICT1( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_bstr, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_4_bord(  );
    UPDATE_STRING_DICT1( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_bord, tmp_assign_source_9 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 74;

        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_version_info );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;

        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_pos_1;
    tmp_compare_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;

        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_1;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 74;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_10 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_5_tobytes(  );
    UPDATE_STRING_DICT1( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_tobytes, tmp_assign_source_10 );
    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_11 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_6_tobytes(  );
    UPDATE_STRING_DICT1( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_tobytes, tmp_assign_source_11 );
    branch_end_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_12 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_7_b(  );
    UPDATE_STRING_DICT1( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_b, tmp_assign_source_12 );
    tmp_assign_source_13 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_8_bchr(  );
    UPDATE_STRING_DICT1( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_bchr, tmp_assign_source_13 );
    tmp_assign_source_14 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_9_bstr(  );
    UPDATE_STRING_DICT1( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_bstr, tmp_assign_source_14 );
    tmp_assign_source_15 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_10_bord(  );
    UPDATE_STRING_DICT1( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_bord, tmp_assign_source_15 );
    tmp_assign_source_16 = MAKE_FUNCTION_Crypto$Util$py3compat$$$function_11_tobytes(  );
    UPDATE_STRING_DICT1( moduledict_Crypto$Util$py3compat, (Nuitka_StringObject *)const_str_plain_tobytes, tmp_assign_source_16 );
    branch_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2768a90266f1a503002f19aceb416f2a );
#endif
    popFrameStack();

    assertFrameObject( frame_2768a90266f1a503002f19aceb416f2a );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2768a90266f1a503002f19aceb416f2a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2768a90266f1a503002f19aceb416f2a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2768a90266f1a503002f19aceb416f2a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2768a90266f1a503002f19aceb416f2a, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_Crypto$Util$py3compat );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
