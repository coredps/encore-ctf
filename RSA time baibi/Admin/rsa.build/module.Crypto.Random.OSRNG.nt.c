/* Generated code for Python source for module 'Crypto.Random.OSRNG.nt'
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

/* The _module_Crypto$Random$OSRNG$nt is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$Random$OSRNG$nt;
PyDictObject *moduledict_Crypto$Random$OSRNG$nt;

/* The module constants used, if any. */
extern PyObject *const_tuple_str_plain_BaseRNG_tuple;
extern PyObject *const_str_plain_flush;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_BaseRNG;
extern PyObject *const_str_digest_609e8ea4334f09c86af080a144ea33db;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_angle_CryptGenRandom;
extern PyObject *const_str_plain_new;
extern PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
extern PyObject *const_dict_empty;
extern PyObject *const_str_digest_10c675d39d154a59cf6207a839b0661f;
extern PyObject *const_tuple_str_plain_args_str_plain_kwargs_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain__read;
static PyObject *const_str_digest_2f5fe93ae1f1b4ac0a74329a43ddd6e0;
static PyObject *const_tuple_int_pos_131072_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___revision__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_N;
extern PyObject *const_str_digest_57bef3f6a897874e5c439116c59ee540;
static PyObject *const_str_plain_WindowsRNG;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_2fe774b8934c34de5176fb913b25310b;
extern PyObject *const_str_plain_self;
extern PyObject *const_tuple_str_plain_self_str_plain_N_str_plain_data_tuple;
static PyObject *const_str_plain_winrandom;
static PyObject *const_str_plain__WindowsRNG__winrand;
extern PyObject *const_str_plain_closed;
static PyObject *const_str_plain_get_bytes;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_rng_base;
extern PyObject *const_str_plain__close;
static PyObject *const_int_pos_131072;
static PyObject *const_str_digest_f8cd3ea40fa6e6a0fa2f5009eacfcc41;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain___init__;
static PyObject *const_list_str_plain_WindowsRNG_list;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_angle_CryptGenRandom = UNSTREAM_STRING( &constant_bin[ 50569 ], 16, 0 );
    const_str_digest_2f5fe93ae1f1b4ac0a74329a43ddd6e0 = UNSTREAM_STRING( &constant_bin[ 50585 ], 554, 0 );
    const_tuple_int_pos_131072_tuple = PyTuple_New( 1 );
    const_int_pos_131072 = PyInt_FromLong( 131072l );
    PyTuple_SET_ITEM( const_tuple_int_pos_131072_tuple, 0, const_int_pos_131072 ); Py_INCREF( const_int_pos_131072 );
    const_str_plain_WindowsRNG = UNSTREAM_STRING( &constant_bin[ 51139 ], 10, 1 );
    const_str_digest_2fe774b8934c34de5176fb913b25310b = UNSTREAM_STRING( &constant_bin[ 51149 ], 31, 0 );
    const_str_plain_winrandom = UNSTREAM_STRING( &constant_bin[ 51180 ], 9, 1 );
    const_str_plain__WindowsRNG__winrand = UNSTREAM_STRING( &constant_bin[ 51189 ], 20, 1 );
    const_str_plain_get_bytes = UNSTREAM_STRING( &constant_bin[ 51209 ], 9, 1 );
    const_str_digest_f8cd3ea40fa6e6a0fa2f5009eacfcc41 = UNSTREAM_STRING( &constant_bin[ 51218 ], 58, 0 );
    const_list_str_plain_WindowsRNG_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_WindowsRNG_list, 0, const_str_plain_WindowsRNG ); Py_INCREF( const_str_plain_WindowsRNG );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Crypto$Random$OSRNG$nt( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a4c3d6e6d2a1217605df46a9997058b8;
static PyCodeObject *codeobj_082baadc0c71cb3dfe17307541503001;
static PyCodeObject *codeobj_4f6d4b45be1cc3347fc8f95355019b0e;
static PyCodeObject *codeobj_1009f9dd88155f9ac019871b6b3ef02a;
static PyCodeObject *codeobj_d372a0652475c85a6b2ffe77c77776a3;
static PyCodeObject *codeobj_17655729350d2e6ccc1c838ef04ee0e6;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_f8cd3ea40fa6e6a0fa2f5009eacfcc41;
    codeobj_a4c3d6e6d2a1217605df46a9997058b8 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_2fe774b8934c34de5176fb913b25310b, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_082baadc0c71cb3dfe17307541503001 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 35, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4f6d4b45be1cc3347fc8f95355019b0e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__close, 58, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1009f9dd88155f9ac019871b6b3ef02a = MAKE_CODEOBJ( module_filename_obj, const_str_plain__read, 61, const_tuple_str_plain_self_str_plain_N_str_plain_data_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d372a0652475c85a6b2ffe77c77776a3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_flush, 39, const_tuple_str_plain_self_str_plain_data_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_17655729350d2e6ccc1c838ef04ee0e6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_new, 71, const_tuple_str_plain_args_str_plain_kwargs_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$nt$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$nt$$$function_2_flush(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$nt$$$function_3__close(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$nt$$$function_4__read(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$nt$$$function_5_new(  );


// The module function definitions.
static PyObject *impl_Crypto$Random$OSRNG$nt$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_instance_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_082baadc0c71cb3dfe17307541503001 = NULL;

    struct Nuitka_FrameObject *frame_082baadc0c71cb3dfe17307541503001;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_082baadc0c71cb3dfe17307541503001, codeobj_082baadc0c71cb3dfe17307541503001, module_Crypto$Random$OSRNG$nt, sizeof(void *) );
    frame_082baadc0c71cb3dfe17307541503001 = cache_frame_082baadc0c71cb3dfe17307541503001;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_082baadc0c71cb3dfe17307541503001 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_082baadc0c71cb3dfe17307541503001 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$OSRNG$nt, (Nuitka_StringObject *)const_str_plain_winrandom );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_winrandom );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "winrandom" );
        exception_tb = NULL;

        exception_lineno = 36;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_082baadc0c71cb3dfe17307541503001->m_frame.f_lineno = 36;
    tmp_assattr_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_new );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__WindowsRNG__winrand, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 36;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$OSRNG$nt, (Nuitka_StringObject *)const_str_plain_BaseRNG );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseRNG );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "BaseRNG" );
        exception_tb = NULL;

        exception_lineno = 37;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_082baadc0c71cb3dfe17307541503001->m_frame.f_lineno = 37;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain___init__, call_args );
    }

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
    RESTORE_FRAME_EXCEPTION( frame_082baadc0c71cb3dfe17307541503001 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_082baadc0c71cb3dfe17307541503001 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_082baadc0c71cb3dfe17307541503001, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_082baadc0c71cb3dfe17307541503001->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_082baadc0c71cb3dfe17307541503001, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_082baadc0c71cb3dfe17307541503001,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_082baadc0c71cb3dfe17307541503001 == cache_frame_082baadc0c71cb3dfe17307541503001 )
    {
        Py_DECREF( frame_082baadc0c71cb3dfe17307541503001 );
    }
    cache_frame_082baadc0c71cb3dfe17307541503001 = NULL;

    assertFrameObject( frame_082baadc0c71cb3dfe17307541503001 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$nt$$$function_1___init__ );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$nt$$$function_1___init__ );
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


static PyObject *impl_Crypto$Random$OSRNG$nt$$$function_2_flush( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
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
    PyObject *tmp_called_instance_2;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d372a0652475c85a6b2ffe77c77776a3 = NULL;

    struct Nuitka_FrameObject *frame_d372a0652475c85a6b2ffe77c77776a3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d372a0652475c85a6b2ffe77c77776a3, codeobj_d372a0652475c85a6b2ffe77c77776a3, module_Crypto$Random$OSRNG$nt, sizeof(void *)+sizeof(void *) );
    frame_d372a0652475c85a6b2ffe77c77776a3 = cache_frame_d372a0652475c85a6b2ffe77c77776a3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d372a0652475c85a6b2ffe77c77776a3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d372a0652475c85a6b2ffe77c77776a3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_closed );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 52;
        type_description_1 = "oo";
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
    frame_d372a0652475c85a6b2ffe77c77776a3->m_frame.f_lineno = 53;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 53;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__WindowsRNG__winrand );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_d372a0652475c85a6b2ffe77c77776a3->m_frame.f_lineno = 54;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get_bytes, &PyTuple_GET_ITEM( const_tuple_int_pos_131072_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "oo";
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


        exception_lineno = 55;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_131072;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 55;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_raise_type_2 = PyExc_AssertionError;
    exception_type = tmp_raise_type_2;
    Py_INCREF( tmp_raise_type_2 );
    exception_lineno = 55;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$OSRNG$nt, (Nuitka_StringObject *)const_str_plain_BaseRNG );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseRNG );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "BaseRNG" );
        exception_tb = NULL;

        exception_lineno = 56;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_d372a0652475c85a6b2ffe77c77776a3->m_frame.f_lineno = 56;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_flush, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d372a0652475c85a6b2ffe77c77776a3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d372a0652475c85a6b2ffe77c77776a3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d372a0652475c85a6b2ffe77c77776a3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d372a0652475c85a6b2ffe77c77776a3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d372a0652475c85a6b2ffe77c77776a3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d372a0652475c85a6b2ffe77c77776a3,
        type_description_1,
        par_self,
        var_data
    );


    // Release cached frame.
    if ( frame_d372a0652475c85a6b2ffe77c77776a3 == cache_frame_d372a0652475c85a6b2ffe77c77776a3 )
    {
        Py_DECREF( frame_d372a0652475c85a6b2ffe77c77776a3 );
    }
    cache_frame_d372a0652475c85a6b2ffe77c77776a3 = NULL;

    assertFrameObject( frame_d372a0652475c85a6b2ffe77c77776a3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$nt$$$function_2_flush );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_data );
    Py_DECREF( var_data );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$nt$$$function_2_flush );
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


static PyObject *impl_Crypto$Random$OSRNG$nt$$$function_3__close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_4f6d4b45be1cc3347fc8f95355019b0e = NULL;

    struct Nuitka_FrameObject *frame_4f6d4b45be1cc3347fc8f95355019b0e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4f6d4b45be1cc3347fc8f95355019b0e, codeobj_4f6d4b45be1cc3347fc8f95355019b0e, module_Crypto$Random$OSRNG$nt, sizeof(void *) );
    frame_4f6d4b45be1cc3347fc8f95355019b0e = cache_frame_4f6d4b45be1cc3347fc8f95355019b0e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4f6d4b45be1cc3347fc8f95355019b0e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4f6d4b45be1cc3347fc8f95355019b0e ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__WindowsRNG__winrand, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f6d4b45be1cc3347fc8f95355019b0e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f6d4b45be1cc3347fc8f95355019b0e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4f6d4b45be1cc3347fc8f95355019b0e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4f6d4b45be1cc3347fc8f95355019b0e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4f6d4b45be1cc3347fc8f95355019b0e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4f6d4b45be1cc3347fc8f95355019b0e,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_4f6d4b45be1cc3347fc8f95355019b0e == cache_frame_4f6d4b45be1cc3347fc8f95355019b0e )
    {
        Py_DECREF( frame_4f6d4b45be1cc3347fc8f95355019b0e );
    }
    cache_frame_4f6d4b45be1cc3347fc8f95355019b0e = NULL;

    assertFrameObject( frame_4f6d4b45be1cc3347fc8f95355019b0e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$nt$$$function_3__close );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$nt$$$function_3__close );
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


static PyObject *impl_Crypto$Random$OSRNG$nt$$$function_4__read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1009f9dd88155f9ac019871b6b3ef02a = NULL;

    struct Nuitka_FrameObject *frame_1009f9dd88155f9ac019871b6b3ef02a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1009f9dd88155f9ac019871b6b3ef02a, codeobj_1009f9dd88155f9ac019871b6b3ef02a, module_Crypto$Random$OSRNG$nt, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1009f9dd88155f9ac019871b6b3ef02a = cache_frame_1009f9dd88155f9ac019871b6b3ef02a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1009f9dd88155f9ac019871b6b3ef02a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1009f9dd88155f9ac019871b6b3ef02a ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_1009f9dd88155f9ac019871b6b3ef02a->m_frame.f_lineno = 66;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_flush );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__WindowsRNG__winrand );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_N;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_1009f9dd88155f9ac019871b6b3ef02a->m_frame.f_lineno = 67;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get_bytes, call_args );
    }

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_data == NULL );
    var_data = tmp_assign_source_1;

    tmp_called_instance_3 = par_self;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_1009f9dd88155f9ac019871b6b3ef02a->m_frame.f_lineno = 68;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_flush );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1009f9dd88155f9ac019871b6b3ef02a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1009f9dd88155f9ac019871b6b3ef02a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1009f9dd88155f9ac019871b6b3ef02a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1009f9dd88155f9ac019871b6b3ef02a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1009f9dd88155f9ac019871b6b3ef02a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1009f9dd88155f9ac019871b6b3ef02a,
        type_description_1,
        par_self,
        par_N,
        var_data
    );


    // Release cached frame.
    if ( frame_1009f9dd88155f9ac019871b6b3ef02a == cache_frame_1009f9dd88155f9ac019871b6b3ef02a )
    {
        Py_DECREF( frame_1009f9dd88155f9ac019871b6b3ef02a );
    }
    cache_frame_1009f9dd88155f9ac019871b6b3ef02a = NULL;

    assertFrameObject( frame_1009f9dd88155f9ac019871b6b3ef02a );

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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$nt$$$function_4__read );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_N );
    Py_DECREF( par_N );
    par_N = NULL;

    CHECK_OBJECT( (PyObject *)var_data );
    Py_DECREF( var_data );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$nt$$$function_4__read );
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


static PyObject *impl_Crypto$Random$OSRNG$nt$$$function_5_new( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_17655729350d2e6ccc1c838ef04ee0e6 = NULL;

    struct Nuitka_FrameObject *frame_17655729350d2e6ccc1c838ef04ee0e6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_17655729350d2e6ccc1c838ef04ee0e6, codeobj_17655729350d2e6ccc1c838ef04ee0e6, module_Crypto$Random$OSRNG$nt, sizeof(void *)+sizeof(void *) );
    frame_17655729350d2e6ccc1c838ef04ee0e6 = cache_frame_17655729350d2e6ccc1c838ef04ee0e6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_17655729350d2e6ccc1c838ef04ee0e6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_17655729350d2e6ccc1c838ef04ee0e6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$OSRNG$nt, (Nuitka_StringObject *)const_str_plain_WindowsRNG );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WindowsRNG );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "WindowsRNG" );
        exception_tb = NULL;

        exception_lineno = 72;
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


        exception_lineno = 72;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_17655729350d2e6ccc1c838ef04ee0e6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_17655729350d2e6ccc1c838ef04ee0e6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_17655729350d2e6ccc1c838ef04ee0e6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_17655729350d2e6ccc1c838ef04ee0e6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_17655729350d2e6ccc1c838ef04ee0e6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_17655729350d2e6ccc1c838ef04ee0e6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_17655729350d2e6ccc1c838ef04ee0e6,
        type_description_1,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_17655729350d2e6ccc1c838ef04ee0e6 == cache_frame_17655729350d2e6ccc1c838ef04ee0e6 )
    {
        Py_DECREF( frame_17655729350d2e6ccc1c838ef04ee0e6 );
    }
    cache_frame_17655729350d2e6ccc1c838ef04ee0e6 = NULL;

    assertFrameObject( frame_17655729350d2e6ccc1c838ef04ee0e6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$nt$$$function_5_new );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$nt$$$function_5_new );
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



static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$nt$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$OSRNG$nt$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_082baadc0c71cb3dfe17307541503001,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$OSRNG$nt,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$nt$$$function_2_flush(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$OSRNG$nt$$$function_2_flush,
        const_str_plain_flush,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d372a0652475c85a6b2ffe77c77776a3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$OSRNG$nt,
        const_str_digest_2f5fe93ae1f1b4ac0a74329a43ddd6e0,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$nt$$$function_3__close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$OSRNG$nt$$$function_3__close,
        const_str_plain__close,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4f6d4b45be1cc3347fc8f95355019b0e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$OSRNG$nt,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$nt$$$function_4__read(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$OSRNG$nt$$$function_4__read,
        const_str_plain__read,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1009f9dd88155f9ac019871b6b3ef02a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$OSRNG$nt,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$OSRNG$nt$$$function_5_new(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$OSRNG$nt$$$function_5_new,
        const_str_plain_new,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_17655729350d2e6ccc1c838ef04ee0e6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$OSRNG$nt,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Crypto$Random$OSRNG$nt =
{
    PyModuleDef_HEAD_INIT,
    "Crypto.Random.OSRNG.nt",   /* m_name */
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

MOD_INIT_DECL( Crypto$Random$OSRNG$nt )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto$Random$OSRNG$nt );
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
    puts("Crypto.Random.OSRNG.nt: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.Random.OSRNG.nt: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initCrypto$Random$OSRNG$nt" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto$Random$OSRNG$nt = Py_InitModule4(
        "Crypto.Random.OSRNG.nt",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Crypto$Random$OSRNG$nt = PyModule_Create( &mdef_Crypto$Random$OSRNG$nt );
#endif

    moduledict_Crypto$Random$OSRNG$nt = MODULE_DICT( module_Crypto$Random$OSRNG$nt );

    CHECK_OBJECT( module_Crypto$Random$OSRNG$nt );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_57bef3f6a897874e5c439116c59ee540, module_Crypto$Random$OSRNG$nt );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Crypto$Random$OSRNG$nt, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG$nt, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG$nt, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var_name = NULL;
    PyObject *outline_0_var___init__ = NULL;
    PyObject *outline_0_var_flush = NULL;
    PyObject *outline_0_var__close = NULL;
    PyObject *outline_0_var__read = NULL;
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
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
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
    struct Nuitka_FrameObject *frame_a4c3d6e6d2a1217605df46a9997058b8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG$nt, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_f8cd3ea40fa6e6a0fa2f5009eacfcc41;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG$nt, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG$nt, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_10c675d39d154a59cf6207a839b0661f;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG$nt, (Nuitka_StringObject *)const_str_plain___revision__, tmp_assign_source_4 );
    tmp_assign_source_5 = LIST_COPY( const_list_str_plain_WindowsRNG_list );
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$OSRNG$nt, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );
    // Frame without reuse.
    frame_a4c3d6e6d2a1217605df46a9997058b8 = MAKE_MODULE_FRAME( codeobj_a4c3d6e6d2a1217605df46a9997058b8, module_Crypto$Random$OSRNG$nt );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a4c3d6e6d2a1217605df46a9997058b8 );
    assert( Py_REFCNT( frame_a4c3d6e6d2a1217605df46a9997058b8 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_winrandom;
    tmp_globals_name_1 = (PyObject *)moduledict_Crypto$Random$OSRNG$nt;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    frame_a4c3d6e6d2a1217605df46a9997058b8->m_frame.f_lineno = 28;
    tmp_assign_source_6 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$OSRNG$nt, (Nuitka_StringObject *)const_str_plain_winrandom, tmp_assign_source_6 );
    tmp_name_name_2 = const_str_plain_rng_base;
    tmp_globals_name_2 = (PyObject *)moduledict_Crypto$Random$OSRNG$nt;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_BaseRNG_tuple;
    frame_a4c3d6e6d2a1217605df46a9997058b8->m_frame.f_lineno = 29;
    tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_BaseRNG );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$OSRNG$nt, (Nuitka_StringObject *)const_str_plain_BaseRNG, tmp_assign_source_7 );
    // Tried code:
    tmp_assign_source_8 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$OSRNG$nt, (Nuitka_StringObject *)const_str_plain_BaseRNG );

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

        exception_lineno = 31;

        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_8, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_8;

    tmp_assign_source_10 = const_str_digest_57bef3f6a897874e5c439116c59ee540;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_10 );
    outline_0_var___module__ = tmp_assign_source_10;

    tmp_assign_source_11 = const_str_angle_CryptGenRandom;
    assert( outline_0_var_name == NULL );
    Py_INCREF( tmp_assign_source_11 );
    outline_0_var_name = tmp_assign_source_11;

    tmp_assign_source_12 = MAKE_FUNCTION_Crypto$Random$OSRNG$nt$$$function_1___init__(  );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_12;

    tmp_assign_source_13 = MAKE_FUNCTION_Crypto$Random$OSRNG$nt$$$function_2_flush(  );
    assert( outline_0_var_flush == NULL );
    outline_0_var_flush = tmp_assign_source_13;

    tmp_assign_source_14 = MAKE_FUNCTION_Crypto$Random$OSRNG$nt$$$function_3__close(  );
    assert( outline_0_var__close == NULL );
    outline_0_var__close = tmp_assign_source_14;

    tmp_assign_source_15 = MAKE_FUNCTION_Crypto$Random$OSRNG$nt$$$function_4__read(  );
    assert( outline_0_var__read == NULL );
    outline_0_var__read = tmp_assign_source_15;

    // Tried code:
    tmp_outline_return_value_1 = _PyDict_NewPresized( 6 );
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
    tmp_dict_value_4 = outline_0_var_flush;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain_flush;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = outline_0_var__close;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain__close;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = outline_0_var__read;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain__read;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$nt );
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

    CHECK_OBJECT( (PyObject *)outline_0_var_flush );
    Py_DECREF( outline_0_var_flush );
    outline_0_var_flush = NULL;

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

    CHECK_OBJECT( (PyObject *)outline_0_var_name );
    Py_DECREF( outline_0_var_name );
    outline_0_var_name = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___init__ );
    Py_DECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_flush );
    Py_DECREF( outline_0_var_flush );
    outline_0_var_flush = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__close );
    Py_DECREF( outline_0_var__close );
    outline_0_var__close = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__read );
    Py_DECREF( outline_0_var__read );
    outline_0_var__read = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$nt );
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
    tmp_assign_source_16 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_17 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_1;
    }
    assert( tmp_select_metaclass_1__base == NULL );
    tmp_select_metaclass_1__base = tmp_assign_source_17;

    // Tried code:
    // Tried code:
    tmp_source_name_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_outline_return_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_outline_return_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_4;
    }
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$nt );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$nt );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$OSRNG$nt );
    return MOD_RETURN_VALUE( NULL );
    outline_result_2:;
    tmp_assign_source_16 = tmp_outline_return_value_2;
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_16;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_WindowsRNG;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_a4c3d6e6d2a1217605df46a9997058b8->m_frame.f_lineno = 31;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_18;

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
    RESTORE_FRAME_EXCEPTION( frame_a4c3d6e6d2a1217605df46a9997058b8 );
#endif
    popFrameStack();

    assertFrameObject( frame_a4c3d6e6d2a1217605df46a9997058b8 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a4c3d6e6d2a1217605df46a9997058b8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a4c3d6e6d2a1217605df46a9997058b8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a4c3d6e6d2a1217605df46a9997058b8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a4c3d6e6d2a1217605df46a9997058b8, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_19 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_19 );
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG$nt, (Nuitka_StringObject *)const_str_plain_WindowsRNG, tmp_assign_source_19 );
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

    tmp_assign_source_20 = MAKE_FUNCTION_Crypto$Random$OSRNG$nt$$$function_5_new(  );
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$OSRNG$nt, (Nuitka_StringObject *)const_str_plain_new, tmp_assign_source_20 );

    return MOD_RETURN_VALUE( module_Crypto$Random$OSRNG$nt );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
