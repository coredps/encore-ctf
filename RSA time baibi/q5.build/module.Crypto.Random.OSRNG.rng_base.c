/* Generated code for Python source for module 'Crypto.Random.OSRNG.rng_base'
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

/* The _module_Crypto$Random$OSRNG$rng_base is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$Random$OSRNG$rng_base;
PyDictObject *moduledict_Crypto$Random$OSRNG$rng_base;

/* The module constants used, if any. */
extern PyObject *const_tuple_type_long_type_int_tuple;
extern PyObject *const_str_plain_flush;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_str_digest_34561ab50ccd2010131e1cc8c00487a2;
extern PyObject *const_str_digest_609e8ea4334f09c86af080a144ea33db;
extern PyObject *const_str_plain_BaseRNG;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_chr_42;
static PyObject *const_tuple_str_plain_self_str_plain_N_tuple;
extern PyObject *const_int_neg_1;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_digest_2b15ced4904943da975d30fb2241098c;
static PyObject *const_str_digest_3a8217aca2217ea92b7575bae12696be;
extern PyObject *const_dict_empty;
extern PyObject *const_str_digest_10c675d39d154a59cf6207a839b0661f;
static PyObject *const_str_digest_26fcfe092c89db73271ef46dc992f7d6;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain__read;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_digest_69452dddf7e9c29c0bf2309b33bb5650;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_plain_data2;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain___revision__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_N;
extern PyObject *const_str_plain_data;
static PyObject *const_str_plain__selftest;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_digest_60206ba42ec06a3a165aaf03c1cfa3c8;
extern PyObject *const_str_digest_7297039c3ba7a6819c92a3ebf29a5b51;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_50c7fb79b6be26d3eec538547688bd0e;
static PyObject *const_str_digest_77825a87cc12b5f9046607535b0c475c;
static PyObject *const_tuple_str_plain_self_str_plain_data_str_plain_data2_tuple;
extern PyObject *const_str_plain_self;
extern PyObject *const_tuple_str_plain_self_str_plain_N_str_plain_data_tuple;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_closed;
static PyObject *const_tuple_int_neg_1_tuple;
static PyObject *const_str_plain___del__;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_digest_74ba315069266703540e145c62869e9e;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain__close;
extern PyObject *const_str_digest_49c9a1368e30a547d5af326e25ac2d5d;
static PyObject *const_str_digest_d3a782713907ad777f0d6cf6e97d1ee3;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain___init__;
static PyObject *const_tuple_int_pos_16_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_34561ab50ccd2010131e1cc8c00487a2 = UNSTREAM_STRING( &constant_bin[ 51486 ], 64, 0 );
    const_tuple_str_plain_self_str_plain_N_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_N_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_N_tuple, 1, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    const_str_digest_2b15ced4904943da975d30fb2241098c = UNSTREAM_STRING( &constant_bin[ 51550 ], 37, 0 );
    const_str_digest_3a8217aca2217ea92b7575bae12696be = UNSTREAM_STRING( &constant_bin[ 51587 ], 31, 0 );
    const_str_digest_26fcfe092c89db73271ef46dc992f7d6 = UNSTREAM_STRING( &constant_bin[ 51558 ], 28, 0 );
    const_str_plain_data2 = UNSTREAM_STRING( &constant_bin[ 51618 ], 5, 1 );
    const_str_plain__selftest = UNSTREAM_STRING( &constant_bin[ 51623 ], 9, 1 );
    const_str_digest_50c7fb79b6be26d3eec538547688bd0e = UNSTREAM_STRING( &constant_bin[ 51632 ], 51, 0 );
    const_str_digest_77825a87cc12b5f9046607535b0c475c = UNSTREAM_STRING( &constant_bin[ 51683 ], 30, 0 );
    const_tuple_str_plain_self_str_plain_data_str_plain_data2_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_data_str_plain_data2_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_data_str_plain_data2_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_data_str_plain_data2_tuple, 2, const_str_plain_data2 ); Py_INCREF( const_str_plain_data2 );
    const_tuple_int_neg_1_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_neg_1_tuple, 0, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    const_str_plain___del__ = UNSTREAM_STRING( &constant_bin[ 51713 ], 7, 1 );
    const_str_digest_d3a782713907ad777f0d6cf6e97d1ee3 = UNSTREAM_STRING( &constant_bin[ 51720 ], 14, 0 );
    const_tuple_int_pos_16_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_16_tuple, 0, const_int_pos_16 ); Py_INCREF( const_int_pos_16 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Crypto$Random$OSRNG$rng_base( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b988e3bc275e563635f5530fb33ef14e;
static PyCodeObject *codeobj_f2e365d399a6e192633fdb27665e443b;
static PyCodeObject *codeobj_9aa85e47e13c378cfc6fc0b2d6d5b35c;
static PyCodeObject *codeobj_1764c9b4c8ceb948227af423d52d0726;
static PyCodeObject *codeobj_c26f93cf83a43e3426c51c87e1d83b36;
static PyCodeObject *codeobj_1cf70e4ff1e3bc01d754546abaf27123;
static PyCodeObject *codeobj_4a79a170d0e4d72ab6b8f1f96f9ce0ad;
static PyCodeObject *codeobj_5f4fefe277a3a09bf7e3dbe2ee468c7c;
static PyCodeObject *codeobj_ce2d3aadfd649e72afdf5bcb2e60135c;
static PyCodeObject *codeobj_002d1274e81944641267e8ff7f7e71fe;
static PyCodeObject *codeobj_a559374b57566563dbd8ad4732a4e282;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_34561ab50ccd2010131e1cc8c00487a2;
    codeobj_b988e3bc275e563635f5530fb33ef14e = MAKE_CODEOBJ( module_filename_obj, const_str_digest_2b15ced4904943da975d30fb2241098c, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_f2e365d399a6e192633fdb27665e443b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___del__, 36, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9aa85e47e13c378cfc6fc0b2d6d5b35c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___enter__, 52, const_tuple_str_plain_self_tuple, 1, CO_NOFREE );
    codeobj_1764c9b4c8ceb948227af423d52d0726 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___exit__, 54, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c26f93cf83a43e3426c51c87e1d83b36 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 32, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1cf70e4ff1e3bc01d754546abaf27123 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__close, 81, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4a79a170d0e4d72ab6b8f1f96f9ce0ad = MAKE_CODEOBJ( module_filename_obj, const_str_plain__read, 84, const_tuple_str_plain_self_str_plain_N_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5f4fefe277a3a09bf7e3dbe2ee468c7c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__selftest, 39, const_tuple_str_plain_self_str_plain_data_str_plain_data2_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ce2d3aadfd649e72afdf5bcb2e60135c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 58, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_002d1274e81944641267e8ff7f7e71fe = MAKE_CODEOBJ( module_filename_obj, const_str_plain_flush, 63, const_tuple_str_plain_self_tuple, 1, CO_NOFREE );
    codeobj_a559374b57566563dbd8ad4732a4e282 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read, 66, const_tuple_str_plain_self_str_plain_N_str_plain_data_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_10__read(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_2___del__(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_3__selftest(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_4___enter__(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_5___exit__(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_6_close(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_7_flush(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_8_read( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_9__close(  );


// The module function definitions.
static PyObject *impl_Crypto$Random$OSRNG$rng_base$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_instance_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c26f93cf83a43e3426c51c87e1d83b36 = NULL;

    struct Nuitka_FrameObject *frame_c26f93cf83a43e3426c51c87e1d83b36;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c26f93cf83a43e3426c51c87e1d83b36, codeobj_c26f93cf83a43e3426c51c87e1d83b36, module_Crypto$Random$OSRNG$rng_base, sizeof(void *) );
    frame_c26f93cf83a43e3426c51c87e1d83b36 = cache_frame_c26f93cf83a43e3426c51c87e1d83b36;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c26f93cf83a43e3426c51c87e1d83b36 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c26f93cf83a43e3426c51c87e1d83b36 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = Py_False;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_closed, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_c26f93cf83a43e3426c51c87e1d83b36->m_frame.f_lineno = 34;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__selftest );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c26f93cf83a43e3426c51c87e1d83b36 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c26f93cf83a43e3426c51c87e1d83b36 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c26f93cf83a43e3426c51c87e1d83b36, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c26f93cf83a43e3426c51c87e1d83b36->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c26f93cf83a43e3426c51c87e1d83b36, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c26f93cf83a43e3426c51c87e1d83b36,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_c26f93cf83a43e3426c51c87e1d83b36 == cache_frame_c26f93cf83a43e3426c51c87e1d83b36 )
    {
        Py_DECREF( frame_c26f93cf83a43e3426c51c87e1d83b36 );
    }
    cache_frame_c26f93cf83a43e3426c51c87e1d83b36 = NULL;

    assertFrameObject( frame_c26f93cf83a43e3426c51c87e1d83b36 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$rng_base$$$function_1___init__ );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$rng_base$$$function_1___init__ );
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


static PyObject *impl_Crypto$Random$OSRNG$rng_base$$$function_2___del__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f2e365d399a6e192633fdb27665e443b = NULL;

    struct Nuitka_FrameObject *frame_f2e365d399a6e192633fdb27665e443b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f2e365d399a6e192633fdb27665e443b, codeobj_f2e365d399a6e192633fdb27665e443b, module_Crypto$Random$OSRNG$rng_base, sizeof(void *) );
    frame_f2e365d399a6e192633fdb27665e443b = cache_frame_f2e365d399a6e192633fdb27665e443b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f2e365d399a6e192633fdb27665e443b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f2e365d399a6e192633fdb27665e443b ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_f2e365d399a6e192633fdb27665e443b->m_frame.f_lineno = 37;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f2e365d399a6e192633fdb27665e443b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f2e365d399a6e192633fdb27665e443b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f2e365d399a6e192633fdb27665e443b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f2e365d399a6e192633fdb27665e443b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f2e365d399a6e192633fdb27665e443b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f2e365d399a6e192633fdb27665e443b,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_f2e365d399a6e192633fdb27665e443b == cache_frame_f2e365d399a6e192633fdb27665e443b )
    {
        Py_DECREF( frame_f2e365d399a6e192633fdb27665e443b );
    }
    cache_frame_f2e365d399a6e192633fdb27665e443b = NULL;

    assertFrameObject( frame_f2e365d399a6e192633fdb27665e443b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$rng_base$$$function_2___del__ );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$rng_base$$$function_2___del__ );
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


static PyObject *impl_Crypto$Random$OSRNG$rng_base$$$function_3__selftest( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_data = NULL;
    PyObject *var_data2 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    int tmp_cmp_Eq_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_5f4fefe277a3a09bf7e3dbe2ee468c7c = NULL;

    struct Nuitka_FrameObject *frame_5f4fefe277a3a09bf7e3dbe2ee468c7c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5f4fefe277a3a09bf7e3dbe2ee468c7c, codeobj_5f4fefe277a3a09bf7e3dbe2ee468c7c, module_Crypto$Random$OSRNG$rng_base, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5f4fefe277a3a09bf7e3dbe2ee468c7c = cache_frame_5f4fefe277a3a09bf7e3dbe2ee468c7c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5f4fefe277a3a09bf7e3dbe2ee468c7c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5f4fefe277a3a09bf7e3dbe2ee468c7c ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_5f4fefe277a3a09bf7e3dbe2ee468c7c->m_frame.f_lineno = 41;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_read, &PyTuple_GET_ITEM( const_tuple_int_pos_16_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_data == NULL );
    var_data = tmp_assign_source_1;

    tmp_len_arg_1 = var_data;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_16;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 42;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_d3a782713907ad777f0d6cf6e97d1ee3;
    frame_5f4fefe277a3a09bf7e3dbe2ee468c7c->m_frame.f_lineno = 43;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_AssertionError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 43;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_instance_2 = par_self;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_5f4fefe277a3a09bf7e3dbe2ee468c7c->m_frame.f_lineno = 47;
    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_read, &PyTuple_GET_ITEM( const_tuple_int_pos_16_tuple, 0 ) );

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_data2 == NULL );
    var_data2 = tmp_assign_source_2;

    tmp_compare_left_2 = var_data;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = var_data2;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_2 = const_str_digest_77825a87cc12b5f9046607535b0c475c;
    frame_5f4fefe277a3a09bf7e3dbe2ee468c7c->m_frame.f_lineno = 49;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_AssertionError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 49;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5f4fefe277a3a09bf7e3dbe2ee468c7c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5f4fefe277a3a09bf7e3dbe2ee468c7c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5f4fefe277a3a09bf7e3dbe2ee468c7c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5f4fefe277a3a09bf7e3dbe2ee468c7c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5f4fefe277a3a09bf7e3dbe2ee468c7c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5f4fefe277a3a09bf7e3dbe2ee468c7c,
        type_description_1,
        par_self,
        var_data,
        var_data2
    );


    // Release cached frame.
    if ( frame_5f4fefe277a3a09bf7e3dbe2ee468c7c == cache_frame_5f4fefe277a3a09bf7e3dbe2ee468c7c )
    {
        Py_DECREF( frame_5f4fefe277a3a09bf7e3dbe2ee468c7c );
    }
    cache_frame_5f4fefe277a3a09bf7e3dbe2ee468c7c = NULL;

    assertFrameObject( frame_5f4fefe277a3a09bf7e3dbe2ee468c7c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$rng_base$$$function_3__selftest );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_data );
    Py_DECREF( var_data );
    var_data = NULL;

    CHECK_OBJECT( (PyObject *)var_data2 );
    Py_DECREF( var_data2 );
    var_data2 = NULL;

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

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_data2 );
    var_data2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$rng_base$$$function_3__selftest );
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


static PyObject *impl_Crypto$Random$OSRNG$rng_base$$$function_4___enter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$rng_base$$$function_4___enter__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$rng_base$$$function_4___enter__ );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_Crypto$Random$OSRNG$rng_base$$$function_5___exit__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1764c9b4c8ceb948227af423d52d0726 = NULL;

    struct Nuitka_FrameObject *frame_1764c9b4c8ceb948227af423d52d0726;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1764c9b4c8ceb948227af423d52d0726, codeobj_1764c9b4c8ceb948227af423d52d0726, module_Crypto$Random$OSRNG$rng_base, sizeof(void *) );
    frame_1764c9b4c8ceb948227af423d52d0726 = cache_frame_1764c9b4c8ceb948227af423d52d0726;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1764c9b4c8ceb948227af423d52d0726 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1764c9b4c8ceb948227af423d52d0726 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_1764c9b4c8ceb948227af423d52d0726->m_frame.f_lineno = 56;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1764c9b4c8ceb948227af423d52d0726 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1764c9b4c8ceb948227af423d52d0726 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1764c9b4c8ceb948227af423d52d0726, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1764c9b4c8ceb948227af423d52d0726->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1764c9b4c8ceb948227af423d52d0726, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1764c9b4c8ceb948227af423d52d0726,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_1764c9b4c8ceb948227af423d52d0726 == cache_frame_1764c9b4c8ceb948227af423d52d0726 )
    {
        Py_DECREF( frame_1764c9b4c8ceb948227af423d52d0726 );
    }
    cache_frame_1764c9b4c8ceb948227af423d52d0726 = NULL;

    assertFrameObject( frame_1764c9b4c8ceb948227af423d52d0726 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$rng_base$$$function_5___exit__ );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$rng_base$$$function_5___exit__ );
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


static PyObject *impl_Crypto$Random$OSRNG$rng_base$$$function_6_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_instance_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ce2d3aadfd649e72afdf5bcb2e60135c = NULL;

    struct Nuitka_FrameObject *frame_ce2d3aadfd649e72afdf5bcb2e60135c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ce2d3aadfd649e72afdf5bcb2e60135c, codeobj_ce2d3aadfd649e72afdf5bcb2e60135c, module_Crypto$Random$OSRNG$rng_base, sizeof(void *) );
    frame_ce2d3aadfd649e72afdf5bcb2e60135c = cache_frame_ce2d3aadfd649e72afdf5bcb2e60135c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ce2d3aadfd649e72afdf5bcb2e60135c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ce2d3aadfd649e72afdf5bcb2e60135c ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_closed );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 59;
        type_description_1 = "o";
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
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_ce2d3aadfd649e72afdf5bcb2e60135c->m_frame.f_lineno = 60;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_assattr_name_1 = Py_True;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_closed, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce2d3aadfd649e72afdf5bcb2e60135c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce2d3aadfd649e72afdf5bcb2e60135c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ce2d3aadfd649e72afdf5bcb2e60135c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ce2d3aadfd649e72afdf5bcb2e60135c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ce2d3aadfd649e72afdf5bcb2e60135c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ce2d3aadfd649e72afdf5bcb2e60135c,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_ce2d3aadfd649e72afdf5bcb2e60135c == cache_frame_ce2d3aadfd649e72afdf5bcb2e60135c )
    {
        Py_DECREF( frame_ce2d3aadfd649e72afdf5bcb2e60135c );
    }
    cache_frame_ce2d3aadfd649e72afdf5bcb2e60135c = NULL;

    assertFrameObject( frame_ce2d3aadfd649e72afdf5bcb2e60135c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$rng_base$$$function_6_close );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$rng_base$$$function_6_close );
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


static PyObject *impl_Crypto$Random$OSRNG$rng_base$$$function_7_flush( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$rng_base$$$function_7_flush );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$rng_base$$$function_7_flush );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_Crypto$Random$OSRNG$rng_base$$$function_8_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_N = python_pars[ 1 ];
    PyObject *var_data = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Lt_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_a559374b57566563dbd8ad4732a4e282 = NULL;

    struct Nuitka_FrameObject *frame_a559374b57566563dbd8ad4732a4e282;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a559374b57566563dbd8ad4732a4e282, codeobj_a559374b57566563dbd8ad4732a4e282, module_Crypto$Random$OSRNG$rng_base, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a559374b57566563dbd8ad4732a4e282 = cache_frame_a559374b57566563dbd8ad4732a4e282;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a559374b57566563dbd8ad4732a4e282 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a559374b57566563dbd8ad4732a4e282 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_closed );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 68;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_609e8ea4334f09c86af080a144ea33db;
    frame_a559374b57566563dbd8ad4732a4e282->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 69;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_isinstance_inst_1 = par_N;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = const_tuple_type_long_type_int_tuple;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_2 = const_str_digest_49c9a1368e30a547d5af326e25ac2d5d;
    frame_a559374b57566563dbd8ad4732a4e282->m_frame.f_lineno = 71;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 71;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_compare_left_1 = par_N;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_3 = const_str_digest_69452dddf7e9c29c0bf2309b33bb5650;
    frame_a559374b57566563dbd8ad4732a4e282->m_frame.f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 73;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_compare_left_2 = par_N;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_return_value = const_str_empty;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_4:;
    branch_end_3:;
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_N;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_a559374b57566563dbd8ad4732a4e282->m_frame.f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__read, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_data == NULL );
    var_data = tmp_assign_source_1;

    tmp_len_arg_1 = var_data;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_3 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = par_N;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 77;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_left_name_1 = const_str_digest_50c7fb79b6be26d3eec538547688bd0e;
    tmp_right_name_1 = PyTuple_New( 3 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_name );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 78;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_N;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_len_arg_2 = var_data;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_tuple_element_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 78;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 2, tmp_tuple_element_1 );
    tmp_make_exception_arg_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_make_exception_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_a559374b57566563dbd8ad4732a4e282->m_frame.f_lineno = 78;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_4 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_AssertionError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_4 );
    assert( tmp_raise_type_4 != NULL );
    exception_type = tmp_raise_type_4;
    exception_lineno = 78;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a559374b57566563dbd8ad4732a4e282 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a559374b57566563dbd8ad4732a4e282 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a559374b57566563dbd8ad4732a4e282 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a559374b57566563dbd8ad4732a4e282, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a559374b57566563dbd8ad4732a4e282->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a559374b57566563dbd8ad4732a4e282, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a559374b57566563dbd8ad4732a4e282,
        type_description_1,
        par_self,
        par_N,
        var_data
    );


    // Release cached frame.
    if ( frame_a559374b57566563dbd8ad4732a4e282 == cache_frame_a559374b57566563dbd8ad4732a4e282 )
    {
        Py_DECREF( frame_a559374b57566563dbd8ad4732a4e282 );
    }
    cache_frame_a559374b57566563dbd8ad4732a4e282 = NULL;

    assertFrameObject( frame_a559374b57566563dbd8ad4732a4e282 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_data;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$rng_base$$$function_8_read );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_N );
    Py_DECREF( par_N );
    par_N = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_N );
    Py_DECREF( par_N );
    par_N = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$rng_base$$$function_8_read );
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


static PyObject *impl_Crypto$Random$OSRNG$rng_base$$$function_9__close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    static struct Nuitka_FrameObject *cache_frame_1cf70e4ff1e3bc01d754546abaf27123 = NULL;

    struct Nuitka_FrameObject *frame_1cf70e4ff1e3bc01d754546abaf27123;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1cf70e4ff1e3bc01d754546abaf27123, codeobj_1cf70e4ff1e3bc01d754546abaf27123, module_Crypto$Random$OSRNG$rng_base, sizeof(void *) );
    frame_1cf70e4ff1e3bc01d754546abaf27123 = cache_frame_1cf70e4ff1e3bc01d754546abaf27123;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1cf70e4ff1e3bc01d754546abaf27123 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1cf70e4ff1e3bc01d754546abaf27123 ) == 2 ); // Frame stack

    // Framed code:
    tmp_make_exception_arg_1 = const_str_digest_3a8217aca2217ea92b7575bae12696be;
    frame_1cf70e4ff1e3bc01d754546abaf27123->m_frame.f_lineno = 82;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 82;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "o";
    goto frame_exception_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1cf70e4ff1e3bc01d754546abaf27123 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1cf70e4ff1e3bc01d754546abaf27123 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1cf70e4ff1e3bc01d754546abaf27123, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1cf70e4ff1e3bc01d754546abaf27123->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1cf70e4ff1e3bc01d754546abaf27123, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1cf70e4ff1e3bc01d754546abaf27123,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_1cf70e4ff1e3bc01d754546abaf27123 == cache_frame_1cf70e4ff1e3bc01d754546abaf27123 )
    {
        Py_DECREF( frame_1cf70e4ff1e3bc01d754546abaf27123 );
    }
    cache_frame_1cf70e4ff1e3bc01d754546abaf27123 = NULL;

    assertFrameObject( frame_1cf70e4ff1e3bc01d754546abaf27123 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$rng_base$$$function_9__close );
    return NULL;
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$rng_base$$$function_9__close );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_Crypto$Random$OSRNG$rng_base$$$function_10__read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_N = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    static struct Nuitka_FrameObject *cache_frame_4a79a170d0e4d72ab6b8f1f96f9ce0ad = NULL;

    struct Nuitka_FrameObject *frame_4a79a170d0e4d72ab6b8f1f96f9ce0ad;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4a79a170d0e4d72ab6b8f1f96f9ce0ad, codeobj_4a79a170d0e4d72ab6b8f1f96f9ce0ad, module_Crypto$Random$OSRNG$rng_base, sizeof(void *)+sizeof(void *) );
    frame_4a79a170d0e4d72ab6b8f1f96f9ce0ad = cache_frame_4a79a170d0e4d72ab6b8f1f96f9ce0ad;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4a79a170d0e4d72ab6b8f1f96f9ce0ad );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4a79a170d0e4d72ab6b8f1f96f9ce0ad ) == 2 ); // Frame stack

    // Framed code:
    tmp_make_exception_arg_1 = const_str_digest_3a8217aca2217ea92b7575bae12696be;
    frame_4a79a170d0e4d72ab6b8f1f96f9ce0ad->m_frame.f_lineno = 85;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 85;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a79a170d0e4d72ab6b8f1f96f9ce0ad );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a79a170d0e4d72ab6b8f1f96f9ce0ad );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4a79a170d0e4d72ab6b8f1f96f9ce0ad, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4a79a170d0e4d72ab6b8f1f96f9ce0ad->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4a79a170d0e4d72ab6b8f1f96f9ce0ad, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4a79a170d0e4d72ab6b8f1f96f9ce0ad,
        type_description_1,
        par_self,
        par_N
    );


    // Release cached frame.
    if ( frame_4a79a170d0e4d72ab6b8f1f96f9ce0ad == cache_frame_4a79a170d0e4d72ab6b8f1f96f9ce0ad )
    {
        Py_DECREF( frame_4a79a170d0e4d72ab6b8f1f96f9ce0ad );
    }
    cache_frame_4a79a170d0e4d72ab6b8f1f96f9ce0ad = NULL;

    assertFrameObject( frame_4a79a170d0e4d72ab6b8f1f96f9ce0ad );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$rng_base$$$function_10__read );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_N );
    Py_DECREF( par_N );
    par_N = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$rng_base$$$function_10__read );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}



static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_10__read(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$OSRNG$rng_base$$$function_10__read,
        const_str_plain__read,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4a79a170d0e4d72ab6b8f1f96f9ce0ad,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$OSRNG$rng_base,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$OSRNG$rng_base$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c26f93cf83a43e3426c51c87e1d83b36,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$OSRNG$rng_base,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_2___del__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$OSRNG$rng_base$$$function_2___del__,
        const_str_plain___del__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f2e365d399a6e192633fdb27665e443b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$OSRNG$rng_base,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_3__selftest(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$OSRNG$rng_base$$$function_3__selftest,
        const_str_plain__selftest,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5f4fefe277a3a09bf7e3dbe2ee468c7c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$OSRNG$rng_base,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_4___enter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$OSRNG$rng_base$$$function_4___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9aa85e47e13c378cfc6fc0b2d6d5b35c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$OSRNG$rng_base,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_5___exit__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$OSRNG$rng_base$$$function_5___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1764c9b4c8ceb948227af423d52d0726,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$OSRNG$rng_base,
        const_str_digest_7297039c3ba7a6819c92a3ebf29a5b51,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_6_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$OSRNG$rng_base$$$function_6_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ce2d3aadfd649e72afdf5bcb2e60135c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$OSRNG$rng_base,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_7_flush(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$OSRNG$rng_base$$$function_7_flush,
        const_str_plain_flush,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_002d1274e81944641267e8ff7f7e71fe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$OSRNG$rng_base,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_8_read( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$OSRNG$rng_base$$$function_8_read,
        const_str_plain_read,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a559374b57566563dbd8ad4732a4e282,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$OSRNG$rng_base,
        const_str_digest_60206ba42ec06a3a165aaf03c1cfa3c8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_9__close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$OSRNG$rng_base$$$function_9__close,
        const_str_plain__close,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1cf70e4ff1e3bc01d754546abaf27123,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$OSRNG$rng_base,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Crypto$Random$OSRNG$rng_base =
{
    PyModuleDef_HEAD_INIT,
    "Crypto.Random.OSRNG.rng_base",   /* m_name */
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

MOD_INIT_DECL( Crypto$Random$OSRNG$rng_base )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto$Random$OSRNG$rng_base );
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
    puts("Crypto.Random.OSRNG.rng_base: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.Random.OSRNG.rng_base: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initCrypto$Random$OSRNG$rng_base" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto$Random$OSRNG$rng_base = Py_InitModule4(
        "Crypto.Random.OSRNG.rng_base",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Crypto$Random$OSRNG$rng_base = PyModule_Create( &mdef_Crypto$Random$OSRNG$rng_base );
#endif

    moduledict_Crypto$Random$OSRNG$rng_base = MODULE_DICT( module_Crypto$Random$OSRNG$rng_base );

    CHECK_OBJECT( module_Crypto$Random$OSRNG$rng_base );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_26fcfe092c89db73271ef46dc992f7d6, module_Crypto$Random$OSRNG$rng_base );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Crypto$Random$OSRNG$rng_base, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG$rng_base, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG$rng_base, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___init__ = NULL;
    PyObject *outline_0_var___del__ = NULL;
    PyObject *outline_0_var__selftest = NULL;
    PyObject *outline_0_var___enter__ = NULL;
    PyObject *outline_0_var___exit__ = NULL;
    PyObject *outline_0_var_close = NULL;
    PyObject *outline_0_var_flush = NULL;
    PyObject *outline_0_var_read = NULL;
    PyObject *outline_0_var__close = NULL;
    PyObject *outline_0_var__read = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
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
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_key_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_star_imported_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    struct Nuitka_FrameObject *frame_b988e3bc275e563635f5530fb33ef14e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG$rng_base, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_34561ab50ccd2010131e1cc8c00487a2;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG$rng_base, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG$rng_base, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_10c675d39d154a59cf6207a839b0661f;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG$rng_base, (Nuitka_StringObject *)const_str_plain___revision__, tmp_assign_source_4 );
    tmp_name_name_1 = const_str_plain_sys;
    tmp_globals_name_1 = (PyObject *)moduledict_Crypto$Random$OSRNG$rng_base;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    assert( tmp_assign_source_5 != NULL );
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$OSRNG$rng_base, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_5 );
    // Frame without reuse.
    frame_b988e3bc275e563635f5530fb33ef14e = MAKE_MODULE_FRAME( codeobj_b988e3bc275e563635f5530fb33ef14e, module_Crypto$Random$OSRNG$rng_base );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_b988e3bc275e563635f5530fb33ef14e );
    assert( Py_REFCNT( frame_b988e3bc275e563635f5530fb33ef14e ) == 2 );

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$OSRNG$rng_base, (Nuitka_StringObject *)const_str_plain_sys );

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

        exception_lineno = 27;

        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_2;
    tmp_and_left_value_1 = RICH_COMPARE_EQ_NORECURSE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    Py_DECREF( tmp_and_left_value_1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$OSRNG$rng_base, (Nuitka_StringObject *)const_str_plain_sys );

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

        exception_lineno = 27;

        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_version_info );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_pos_1;
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_int_pos_1;
    tmp_and_right_value_1 = RICH_COMPARE_EQ_NORECURSE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_name_name_2 = const_str_digest_74ba315069266703540e145c62869e9e;
    tmp_globals_name_2 = (PyObject *)moduledict_Crypto$Random$OSRNG$rng_base;
    tmp_locals_name_2 = (PyObject *)moduledict_Crypto$Random$OSRNG$rng_base;
    tmp_fromlist_name_2 = const_tuple_str_chr_42_tuple;
    frame_b988e3bc275e563635f5530fb33ef14e->m_frame.f_lineno = 28;
    tmp_star_imported_1 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_Crypto$Random$OSRNG$rng_base, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_assign_source_7 = const_str_digest_26fcfe092c89db73271ef46dc992f7d6;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_7 );
    outline_0_var___module__ = tmp_assign_source_7;

    tmp_assign_source_8 = MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_1___init__(  );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_8;

    tmp_assign_source_9 = MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_2___del__(  );
    assert( outline_0_var___del__ == NULL );
    outline_0_var___del__ = tmp_assign_source_9;

    tmp_assign_source_10 = MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_3__selftest(  );
    assert( outline_0_var__selftest == NULL );
    outline_0_var__selftest = tmp_assign_source_10;

    tmp_assign_source_11 = MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_4___enter__(  );
    assert( outline_0_var___enter__ == NULL );
    outline_0_var___enter__ = tmp_assign_source_11;

    tmp_assign_source_12 = MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_5___exit__(  );
    assert( outline_0_var___exit__ == NULL );
    outline_0_var___exit__ = tmp_assign_source_12;

    tmp_assign_source_13 = MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_6_close(  );
    assert( outline_0_var_close == NULL );
    outline_0_var_close = tmp_assign_source_13;

    tmp_assign_source_14 = MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_7_flush(  );
    assert( outline_0_var_flush == NULL );
    outline_0_var_flush = tmp_assign_source_14;

    tmp_defaults_1 = const_tuple_int_neg_1_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_15 = MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_8_read( tmp_defaults_1 );
    assert( outline_0_var_read == NULL );
    outline_0_var_read = tmp_assign_source_15;

    tmp_assign_source_16 = MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_9__close(  );
    assert( outline_0_var__close == NULL );
    outline_0_var__close = tmp_assign_source_16;

    tmp_assign_source_17 = MAKE_FUNCTION_Crypto$Random$OSRNG$rng_base$$$function_10__read(  );
    assert( outline_0_var__read == NULL );
    outline_0_var__read = tmp_assign_source_17;

    // Tried code:
    tmp_outline_return_value_1 = _PyDict_NewPresized( 11 );
    tmp_dict_value_1 = outline_0_var___module__;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = outline_0_var___init__;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = outline_0_var___del__;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain___del__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = outline_0_var__selftest;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain__selftest;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = outline_0_var___enter__;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain___enter__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = outline_0_var___exit__;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain___exit__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = outline_0_var_close;

    CHECK_OBJECT( tmp_dict_value_7 );
    tmp_dict_key_7 = const_str_plain_close;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_8 = outline_0_var_flush;

    CHECK_OBJECT( tmp_dict_value_8 );
    tmp_dict_key_8 = const_str_plain_flush;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_9 = outline_0_var_read;

    CHECK_OBJECT( tmp_dict_value_9 );
    tmp_dict_key_9 = const_str_plain_read;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_10 = outline_0_var__close;

    CHECK_OBJECT( tmp_dict_value_10 );
    tmp_dict_key_10 = const_str_plain__close;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_11 = outline_0_var__read;

    CHECK_OBJECT( tmp_dict_value_11 );
    tmp_dict_key_11 = const_str_plain__read;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_11, tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$rng_base );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___init__ );
    Py_DECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___del__ );
    Py_DECREF( outline_0_var___del__ );
    outline_0_var___del__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__selftest );
    Py_DECREF( outline_0_var__selftest );
    outline_0_var__selftest = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___enter__ );
    Py_DECREF( outline_0_var___enter__ );
    outline_0_var___enter__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___exit__ );
    Py_DECREF( outline_0_var___exit__ );
    outline_0_var___exit__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_close );
    Py_DECREF( outline_0_var_close );
    outline_0_var_close = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_flush );
    Py_DECREF( outline_0_var_flush );
    outline_0_var_flush = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_read );
    Py_DECREF( outline_0_var_read );
    outline_0_var_read = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__close );
    Py_DECREF( outline_0_var__close );
    outline_0_var__close = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__read );
    Py_DECREF( outline_0_var__read );
    outline_0_var__read = NULL;

    goto outline_result_1;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___init__ );
    Py_DECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___del__ );
    Py_DECREF( outline_0_var___del__ );
    outline_0_var___del__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__selftest );
    Py_DECREF( outline_0_var__selftest );
    outline_0_var__selftest = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___enter__ );
    Py_DECREF( outline_0_var___enter__ );
    outline_0_var___enter__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___exit__ );
    Py_DECREF( outline_0_var___exit__ );
    outline_0_var___exit__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_close );
    Py_DECREF( outline_0_var_close );
    outline_0_var_close = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_flush );
    Py_DECREF( outline_0_var_flush );
    outline_0_var_flush = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_read );
    Py_DECREF( outline_0_var_read );
    outline_0_var_read = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__close );
    Py_DECREF( outline_0_var__close );
    outline_0_var__close = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__read );
    Py_DECREF( outline_0_var__read );
    outline_0_var__read = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$rng_base );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_6 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_6;

    // Tried code:
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
    tmp_assign_source_18 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_18 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_18 );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_18;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_BaseRNG;
    tmp_args_element_name_2 = const_tuple_type_object_tuple;
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_b988e3bc275e563635f5530fb33ef14e->m_frame.f_lineno = 30;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_19;

    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b988e3bc275e563635f5530fb33ef14e );
#endif
    popFrameStack();

    assertFrameObject( frame_b988e3bc275e563635f5530fb33ef14e );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b988e3bc275e563635f5530fb33ef14e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b988e3bc275e563635f5530fb33ef14e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b988e3bc275e563635f5530fb33ef14e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b988e3bc275e563635f5530fb33ef14e, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_20 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_20 );
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG$rng_base, (Nuitka_StringObject *)const_str_plain_BaseRNG, tmp_assign_source_20 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;


    return MOD_RETURN_VALUE( module_Crypto$Random$OSRNG$rng_base );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
