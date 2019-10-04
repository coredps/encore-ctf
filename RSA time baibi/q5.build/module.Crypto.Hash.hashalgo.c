/* Generated code for Python source for module 'Crypto.Hash.hashalgo'
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

/* The _module_Crypto$Hash$hashalgo is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$Hash$hashalgo;
PyDictObject *moduledict_Crypto$Hash$hashalgo;

/* The module constants used, if any. */
extern PyObject *const_str_plain_copy;
static PyObject *const_str_digest_c4376b98f0759c6363415d2d5cdf276b;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_data;
static PyObject *const_str_digest_1564dd57a85c033916e129e5945361b2;
static PyObject *const_tuple_str_plain_hexlify_tuple;
extern PyObject *const_str_plain_new;
static PyObject *const_str_plain_hexlify;
extern PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_5961d8230f9a62a04b28f51f34ff158e;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_hexdigest;
static PyObject *const_str_plain__hash;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_digest_size;
extern PyObject *const_str_plain_HashAlgo;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_0a2c7bc456f8ae8628d5e3f1afa57d6d;
static PyObject *const_tuple_str_plain_self_str_plain_hashFactory_str_plain_data_tuple;
extern PyObject *const_str_plain_digest;
extern PyObject *const_str_plain_block_size;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_binascii;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_update;
static PyObject *const_str_digest_a7a22d6e86f08d318c9150c08669904d;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_digest_130b353a88c477a19450290d87c51c30;
static PyObject *const_str_digest_7b6d166e3d8140b01472b02f8502a505;
extern PyObject *const_str_plain_hashFactory;
extern PyObject *const_str_digest_4504ca1cc6d1b92e22b4fc7b4eb38d52;
static PyObject *const_str_digest_e756f2cb548b6858f4ff7685318a84dd;
extern PyObject *const_str_plain___init__;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_c41017c71ef566fc5a4af27f5252e1b6;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_c4376b98f0759c6363415d2d5cdf276b = UNSTREAM_STRING( &constant_bin[ 21884 ], 56, 0 );
    const_str_digest_1564dd57a85c033916e129e5945361b2 = UNSTREAM_STRING( &constant_bin[ 21940 ], 308, 0 );
    const_tuple_str_plain_hexlify_tuple = PyTuple_New( 1 );
    const_str_plain_hexlify = UNSTREAM_STRING( &constant_bin[ 22248 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_hexlify_tuple, 0, const_str_plain_hexlify ); Py_INCREF( const_str_plain_hexlify );
    const_str_digest_5961d8230f9a62a04b28f51f34ff158e = UNSTREAM_STRING( &constant_bin[ 22255 ], 29, 0 );
    const_str_plain__hash = UNSTREAM_STRING( &constant_bin[ 22284 ], 5, 1 );
    const_str_digest_0a2c7bc456f8ae8628d5e3f1afa57d6d = UNSTREAM_STRING( &constant_bin[ 22289 ], 101, 0 );
    const_tuple_str_plain_self_str_plain_hashFactory_str_plain_data_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_hashFactory_str_plain_data_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_hashFactory_str_plain_data_tuple, 1, const_str_plain_hashFactory ); Py_INCREF( const_str_plain_hashFactory );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_hashFactory_str_plain_data_tuple, 2, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_str_digest_a7a22d6e86f08d318c9150c08669904d = UNSTREAM_STRING( &constant_bin[ 22390 ], 370, 0 );
    const_str_digest_130b353a88c477a19450290d87c51c30 = UNSTREAM_STRING( &constant_bin[ 22760 ], 432, 0 );
    const_str_digest_7b6d166e3d8140b01472b02f8502a505 = UNSTREAM_STRING( &constant_bin[ 23192 ], 270, 0 );
    const_str_digest_e756f2cb548b6858f4ff7685318a84dd = UNSTREAM_STRING( &constant_bin[ 23462 ], 405, 0 );
    const_str_digest_c41017c71ef566fc5a4af27f5252e1b6 = UNSTREAM_STRING( &constant_bin[ 23867 ], 286, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Crypto$Hash$hashalgo( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e48f6ebaa6a657a802051aa7394a1ec7;
static PyCodeObject *codeobj_ff4c5d3423c76093fbbffa889861aefa;
static PyCodeObject *codeobj_eb406d0b409ffa4de110c51efc5591f5;
static PyCodeObject *codeobj_2bfc32153e27f27c57fc2e2134410e3a;
static PyCodeObject *codeobj_c6c0ffb54543c9c9c3c27fb82e2515c0;
static PyCodeObject *codeobj_f95931924ddfe5c34027b47610f839c1;
static PyCodeObject *codeobj_43c4bc27fc0b7da63ba699d7b936472e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_c4376b98f0759c6363415d2d5cdf276b;
    codeobj_e48f6ebaa6a657a802051aa7394a1ec7 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_5961d8230f9a62a04b28f51f34ff158e, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_ff4c5d3423c76093fbbffa889861aefa = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 34, const_tuple_str_plain_self_str_plain_hashFactory_str_plain_data_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_eb406d0b409ffa4de110c51efc5591f5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_copy, 92, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2bfc32153e27f27c57fc2e2134410e3a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_digest, 71, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c6c0ffb54543c9c9c3c27fb82e2515c0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hexdigest, 82, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f95931924ddfe5c34027b47610f839c1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_new, 104, const_tuple_str_plain_self_str_plain_data_tuple, 2, CO_NOFREE );
    codeobj_43c4bc27fc0b7da63ba699d7b936472e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_update, 53, const_tuple_str_plain_self_str_plain_data_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_Crypto$Hash$hashalgo$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Crypto$Hash$hashalgo$$$function_2_update(  );


static PyObject *MAKE_FUNCTION_Crypto$Hash$hashalgo$$$function_3_digest(  );


static PyObject *MAKE_FUNCTION_Crypto$Hash$hashalgo$$$function_4_hexdigest(  );


static PyObject *MAKE_FUNCTION_Crypto$Hash$hashalgo$$$function_5_copy(  );


static PyObject *MAKE_FUNCTION_Crypto$Hash$hashalgo$$$function_6_new( PyObject *defaults );


// The module function definitions.
static PyObject *impl_Crypto$Hash$hashalgo$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_hashFactory = python_pars[ 1 ];
    PyObject *par_data = python_pars[ 2 ];
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
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ff4c5d3423c76093fbbffa889861aefa = NULL;

    struct Nuitka_FrameObject *frame_ff4c5d3423c76093fbbffa889861aefa;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ff4c5d3423c76093fbbffa889861aefa, codeobj_ff4c5d3423c76093fbbffa889861aefa, module_Crypto$Hash$hashalgo, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ff4c5d3423c76093fbbffa889861aefa = cache_frame_ff4c5d3423c76093fbbffa889861aefa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ff4c5d3423c76093fbbffa889861aefa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ff4c5d3423c76093fbbffa889861aefa ) == 2 ); // Frame stack

    // Framed code:
    tmp_hasattr_source_1 = par_hashFactory;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain_new;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "ooo";
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
    tmp_called_instance_1 = par_hashFactory;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_ff4c5d3423c76093fbbffa889861aefa->m_frame.f_lineno = 47;
    tmp_assattr_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_new );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__hash, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 47;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_1 = par_hashFactory;

    CHECK_OBJECT( tmp_called_name_1 );
    frame_ff4c5d3423c76093fbbffa889861aefa->m_frame.f_lineno = 49;
    tmp_assattr_name_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__hash, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 49;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    branch_end_1:;
    tmp_cond_value_1 = par_data;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_instance_2 = par_self;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_1 = par_data;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_ff4c5d3423c76093fbbffa889861aefa->m_frame.f_lineno = 51;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_update, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ff4c5d3423c76093fbbffa889861aefa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ff4c5d3423c76093fbbffa889861aefa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ff4c5d3423c76093fbbffa889861aefa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ff4c5d3423c76093fbbffa889861aefa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ff4c5d3423c76093fbbffa889861aefa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ff4c5d3423c76093fbbffa889861aefa,
        type_description_1,
        par_self,
        par_hashFactory,
        par_data
    );


    // Release cached frame.
    if ( frame_ff4c5d3423c76093fbbffa889861aefa == cache_frame_ff4c5d3423c76093fbbffa889861aefa )
    {
        Py_DECREF( frame_ff4c5d3423c76093fbbffa889861aefa );
    }
    cache_frame_ff4c5d3423c76093fbbffa889861aefa = NULL;

    assertFrameObject( frame_ff4c5d3423c76093fbbffa889861aefa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$hashalgo$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_hashFactory );
    Py_DECREF( par_hashFactory );
    par_hashFactory = NULL;

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

    CHECK_OBJECT( (PyObject *)par_hashFactory );
    Py_DECREF( par_hashFactory );
    par_hashFactory = NULL;

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
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$hashalgo$$$function_1___init__ );
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


static PyObject *impl_Crypto$Hash$hashalgo$$$function_2_update( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_43c4bc27fc0b7da63ba699d7b936472e = NULL;

    struct Nuitka_FrameObject *frame_43c4bc27fc0b7da63ba699d7b936472e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_43c4bc27fc0b7da63ba699d7b936472e, codeobj_43c4bc27fc0b7da63ba699d7b936472e, module_Crypto$Hash$hashalgo, sizeof(void *)+sizeof(void *) );
    frame_43c4bc27fc0b7da63ba699d7b936472e = cache_frame_43c4bc27fc0b7da63ba699d7b936472e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_43c4bc27fc0b7da63ba699d7b936472e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_43c4bc27fc0b7da63ba699d7b936472e ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__hash );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_data;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_43c4bc27fc0b7da63ba699d7b936472e->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_update, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_43c4bc27fc0b7da63ba699d7b936472e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_43c4bc27fc0b7da63ba699d7b936472e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_43c4bc27fc0b7da63ba699d7b936472e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_43c4bc27fc0b7da63ba699d7b936472e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_43c4bc27fc0b7da63ba699d7b936472e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_43c4bc27fc0b7da63ba699d7b936472e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_43c4bc27fc0b7da63ba699d7b936472e,
        type_description_1,
        par_self,
        par_data
    );


    // Release cached frame.
    if ( frame_43c4bc27fc0b7da63ba699d7b936472e == cache_frame_43c4bc27fc0b7da63ba699d7b936472e )
    {
        Py_DECREF( frame_43c4bc27fc0b7da63ba699d7b936472e );
    }
    cache_frame_43c4bc27fc0b7da63ba699d7b936472e = NULL;

    assertFrameObject( frame_43c4bc27fc0b7da63ba699d7b936472e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$hashalgo$$$function_2_update );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$hashalgo$$$function_2_update );
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


static PyObject *impl_Crypto$Hash$hashalgo$$$function_3_digest( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_2bfc32153e27f27c57fc2e2134410e3a = NULL;

    struct Nuitka_FrameObject *frame_2bfc32153e27f27c57fc2e2134410e3a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2bfc32153e27f27c57fc2e2134410e3a, codeobj_2bfc32153e27f27c57fc2e2134410e3a, module_Crypto$Hash$hashalgo, sizeof(void *) );
    frame_2bfc32153e27f27c57fc2e2134410e3a = cache_frame_2bfc32153e27f27c57fc2e2134410e3a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2bfc32153e27f27c57fc2e2134410e3a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2bfc32153e27f27c57fc2e2134410e3a ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__hash );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_2bfc32153e27f27c57fc2e2134410e3a->m_frame.f_lineno = 80;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_digest );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2bfc32153e27f27c57fc2e2134410e3a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2bfc32153e27f27c57fc2e2134410e3a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2bfc32153e27f27c57fc2e2134410e3a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2bfc32153e27f27c57fc2e2134410e3a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2bfc32153e27f27c57fc2e2134410e3a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2bfc32153e27f27c57fc2e2134410e3a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2bfc32153e27f27c57fc2e2134410e3a,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_2bfc32153e27f27c57fc2e2134410e3a == cache_frame_2bfc32153e27f27c57fc2e2134410e3a )
    {
        Py_DECREF( frame_2bfc32153e27f27c57fc2e2134410e3a );
    }
    cache_frame_2bfc32153e27f27c57fc2e2134410e3a = NULL;

    assertFrameObject( frame_2bfc32153e27f27c57fc2e2134410e3a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$hashalgo$$$function_3_digest );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$hashalgo$$$function_3_digest );
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


static PyObject *impl_Crypto$Hash$hashalgo$$$function_4_hexdigest( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_c6c0ffb54543c9c9c3c27fb82e2515c0 = NULL;

    struct Nuitka_FrameObject *frame_c6c0ffb54543c9c9c3c27fb82e2515c0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c6c0ffb54543c9c9c3c27fb82e2515c0, codeobj_c6c0ffb54543c9c9c3c27fb82e2515c0, module_Crypto$Hash$hashalgo, sizeof(void *) );
    frame_c6c0ffb54543c9c9c3c27fb82e2515c0 = cache_frame_c6c0ffb54543c9c9c3c27fb82e2515c0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c6c0ffb54543c9c9c3c27fb82e2515c0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c6c0ffb54543c9c9c3c27fb82e2515c0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__hash );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_c6c0ffb54543c9c9c3c27fb82e2515c0->m_frame.f_lineno = 90;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_hexdigest );
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
    RESTORE_FRAME_EXCEPTION( frame_c6c0ffb54543c9c9c3c27fb82e2515c0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c6c0ffb54543c9c9c3c27fb82e2515c0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c6c0ffb54543c9c9c3c27fb82e2515c0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c6c0ffb54543c9c9c3c27fb82e2515c0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c6c0ffb54543c9c9c3c27fb82e2515c0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c6c0ffb54543c9c9c3c27fb82e2515c0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c6c0ffb54543c9c9c3c27fb82e2515c0,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_c6c0ffb54543c9c9c3c27fb82e2515c0 == cache_frame_c6c0ffb54543c9c9c3c27fb82e2515c0 )
    {
        Py_DECREF( frame_c6c0ffb54543c9c9c3c27fb82e2515c0 );
    }
    cache_frame_c6c0ffb54543c9c9c3c27fb82e2515c0 = NULL;

    assertFrameObject( frame_c6c0ffb54543c9c9c3c27fb82e2515c0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$hashalgo$$$function_4_hexdigest );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$hashalgo$$$function_4_hexdigest );
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


static PyObject *impl_Crypto$Hash$hashalgo$$$function_5_copy( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_eb406d0b409ffa4de110c51efc5591f5 = NULL;

    struct Nuitka_FrameObject *frame_eb406d0b409ffa4de110c51efc5591f5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_eb406d0b409ffa4de110c51efc5591f5, codeobj_eb406d0b409ffa4de110c51efc5591f5, module_Crypto$Hash$hashalgo, sizeof(void *) );
    frame_eb406d0b409ffa4de110c51efc5591f5 = cache_frame_eb406d0b409ffa4de110c51efc5591f5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_eb406d0b409ffa4de110c51efc5591f5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_eb406d0b409ffa4de110c51efc5591f5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__hash );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_eb406d0b409ffa4de110c51efc5591f5->m_frame.f_lineno = 102;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb406d0b409ffa4de110c51efc5591f5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb406d0b409ffa4de110c51efc5591f5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb406d0b409ffa4de110c51efc5591f5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eb406d0b409ffa4de110c51efc5591f5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eb406d0b409ffa4de110c51efc5591f5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eb406d0b409ffa4de110c51efc5591f5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_eb406d0b409ffa4de110c51efc5591f5,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_eb406d0b409ffa4de110c51efc5591f5 == cache_frame_eb406d0b409ffa4de110c51efc5591f5 )
    {
        Py_DECREF( frame_eb406d0b409ffa4de110c51efc5591f5 );
    }
    cache_frame_eb406d0b409ffa4de110c51efc5591f5 = NULL;

    assertFrameObject( frame_eb406d0b409ffa4de110c51efc5591f5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$hashalgo$$$function_5_copy );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$hashalgo$$$function_5_copy );
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


static PyObject *impl_Crypto$Hash$hashalgo$$$function_6_new( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$hashalgo$$$function_6_new );
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
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$hashalgo$$$function_6_new );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_Crypto$Hash$hashalgo$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Hash$hashalgo$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ff4c5d3423c76093fbbffa889861aefa,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Hash$hashalgo,
        const_str_digest_e756f2cb548b6858f4ff7685318a84dd,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Hash$hashalgo$$$function_2_update(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Hash$hashalgo$$$function_2_update,
        const_str_plain_update,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_43c4bc27fc0b7da63ba699d7b936472e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Hash$hashalgo,
        const_str_digest_130b353a88c477a19450290d87c51c30,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Hash$hashalgo$$$function_3_digest(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Hash$hashalgo$$$function_3_digest,
        const_str_plain_digest,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2bfc32153e27f27c57fc2e2134410e3a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Hash$hashalgo,
        const_str_digest_a7a22d6e86f08d318c9150c08669904d,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Hash$hashalgo$$$function_4_hexdigest(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Hash$hashalgo$$$function_4_hexdigest,
        const_str_plain_hexdigest,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c6c0ffb54543c9c9c3c27fb82e2515c0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Hash$hashalgo,
        const_str_digest_7b6d166e3d8140b01472b02f8502a505,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Hash$hashalgo$$$function_5_copy(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Hash$hashalgo$$$function_5_copy,
        const_str_plain_copy,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_eb406d0b409ffa4de110c51efc5591f5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Hash$hashalgo,
        const_str_digest_1564dd57a85c033916e129e5945361b2,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Hash$hashalgo$$$function_6_new( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Hash$hashalgo$$$function_6_new,
        const_str_plain_new,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f95931924ddfe5c34027b47610f839c1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Hash$hashalgo,
        const_str_digest_c41017c71ef566fc5a4af27f5252e1b6,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Crypto$Hash$hashalgo =
{
    PyModuleDef_HEAD_INIT,
    "Crypto.Hash.hashalgo",   /* m_name */
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

MOD_INIT_DECL( Crypto$Hash$hashalgo )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto$Hash$hashalgo );
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
    puts("Crypto.Hash.hashalgo: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.Hash.hashalgo: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initCrypto$Hash$hashalgo" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto$Hash$hashalgo = Py_InitModule4(
        "Crypto.Hash.hashalgo",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Crypto$Hash$hashalgo = PyModule_Create( &mdef_Crypto$Hash$hashalgo );
#endif

    moduledict_Crypto$Hash$hashalgo = MODULE_DICT( module_Crypto$Hash$hashalgo );

    CHECK_OBJECT( module_Crypto$Hash$hashalgo );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_4504ca1cc6d1b92e22b4fc7b4eb38d52, module_Crypto$Hash$hashalgo );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Crypto$Hash$hashalgo, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Crypto$Hash$hashalgo, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_Crypto$Hash$hashalgo, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_0_var_digest_size = NULL;
    PyObject *outline_0_var_block_size = NULL;
    PyObject *outline_0_var___init__ = NULL;
    PyObject *outline_0_var_update = NULL;
    PyObject *outline_0_var_digest = NULL;
    PyObject *outline_0_var_hexdigest = NULL;
    PyObject *outline_0_var_copy = NULL;
    PyObject *outline_0_var_new = NULL;
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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
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
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    struct Nuitka_FrameObject *frame_e48f6ebaa6a657a802051aa7394a1ec7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$Hash$hashalgo, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_c4376b98f0759c6363415d2d5cdf276b;
    UPDATE_STRING_DICT0( moduledict_Crypto$Hash$hashalgo, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$Hash$hashalgo, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_name_name_1 = const_str_plain_binascii;
    tmp_globals_name_1 = (PyObject *)moduledict_Crypto$Hash$hashalgo;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_hexlify_tuple;
    tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    assert( tmp_import_name_from_1 != NULL );
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_hexlify );
    Py_DECREF( tmp_import_name_from_1 );
    assert( tmp_assign_source_4 != NULL );
    UPDATE_STRING_DICT1( moduledict_Crypto$Hash$hashalgo, (Nuitka_StringObject *)const_str_plain_hexlify, tmp_assign_source_4 );
    tmp_assign_source_6 = const_str_digest_4504ca1cc6d1b92e22b4fc7b4eb38d52;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_6 );
    outline_0_var___module__ = tmp_assign_source_6;

    tmp_assign_source_7 = const_str_digest_0a2c7bc456f8ae8628d5e3f1afa57d6d;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_7 );
    outline_0_var___doc__ = tmp_assign_source_7;

    tmp_assign_source_8 = Py_None;
    assert( outline_0_var_digest_size == NULL );
    Py_INCREF( tmp_assign_source_8 );
    outline_0_var_digest_size = tmp_assign_source_8;

    tmp_assign_source_9 = Py_None;
    assert( outline_0_var_block_size == NULL );
    Py_INCREF( tmp_assign_source_9 );
    outline_0_var_block_size = tmp_assign_source_9;

    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_10 = MAKE_FUNCTION_Crypto$Hash$hashalgo$$$function_1___init__( tmp_defaults_1 );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_10;

    tmp_assign_source_11 = MAKE_FUNCTION_Crypto$Hash$hashalgo$$$function_2_update(  );
    assert( outline_0_var_update == NULL );
    outline_0_var_update = tmp_assign_source_11;

    tmp_assign_source_12 = MAKE_FUNCTION_Crypto$Hash$hashalgo$$$function_3_digest(  );
    assert( outline_0_var_digest == NULL );
    outline_0_var_digest = tmp_assign_source_12;

    tmp_assign_source_13 = MAKE_FUNCTION_Crypto$Hash$hashalgo$$$function_4_hexdigest(  );
    assert( outline_0_var_hexdigest == NULL );
    outline_0_var_hexdigest = tmp_assign_source_13;

    tmp_assign_source_14 = MAKE_FUNCTION_Crypto$Hash$hashalgo$$$function_5_copy(  );
    assert( outline_0_var_copy == NULL );
    outline_0_var_copy = tmp_assign_source_14;

    tmp_defaults_2 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_15 = MAKE_FUNCTION_Crypto$Hash$hashalgo$$$function_6_new( tmp_defaults_2 );
    assert( outline_0_var_new == NULL );
    outline_0_var_new = tmp_assign_source_15;

    // Tried code:
    tmp_outline_return_value_1 = _PyDict_NewPresized( 10 );
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
    tmp_dict_value_3 = outline_0_var_digest_size;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_digest_size;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = outline_0_var_block_size;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain_block_size;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = outline_0_var___init__;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = outline_0_var_update;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain_update;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = outline_0_var_digest;

    CHECK_OBJECT( tmp_dict_value_7 );
    tmp_dict_key_7 = const_str_plain_digest;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_8 = outline_0_var_hexdigest;

    CHECK_OBJECT( tmp_dict_value_8 );
    tmp_dict_key_8 = const_str_plain_hexdigest;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_9 = outline_0_var_copy;

    CHECK_OBJECT( tmp_dict_value_9 );
    tmp_dict_key_9 = const_str_plain_copy;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_10 = outline_0_var_new;

    CHECK_OBJECT( tmp_dict_value_10 );
    tmp_dict_key_10 = const_str_plain_new;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$hashalgo );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___doc__ );
    Py_DECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_digest_size );
    Py_DECREF( outline_0_var_digest_size );
    outline_0_var_digest_size = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_block_size );
    Py_DECREF( outline_0_var_block_size );
    outline_0_var_block_size = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___init__ );
    Py_DECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_update );
    Py_DECREF( outline_0_var_update );
    outline_0_var_update = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_digest );
    Py_DECREF( outline_0_var_digest );
    outline_0_var_digest = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_hexdigest );
    Py_DECREF( outline_0_var_hexdigest );
    outline_0_var_hexdigest = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_copy );
    Py_DECREF( outline_0_var_copy );
    outline_0_var_copy = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_new );
    Py_DECREF( outline_0_var_new );
    outline_0_var_new = NULL;

    goto outline_result_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$hashalgo );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_5 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_5;

    // Frame without reuse.
    frame_e48f6ebaa6a657a802051aa7394a1ec7 = MAKE_MODULE_FRAME( codeobj_e48f6ebaa6a657a802051aa7394a1ec7, module_Crypto$Hash$hashalgo );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_e48f6ebaa6a657a802051aa7394a1ec7 );
    assert( Py_REFCNT( frame_e48f6ebaa6a657a802051aa7394a1ec7 ) == 2 );

    // Framed code:
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
    tmp_assign_source_16 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    // Tried code:
    tmp_outline_return_value_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Hash$hashalgo, (Nuitka_StringObject *)const_str_plain___metaclass__ );

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

        exception_lineno = 23;

        goto try_except_handler_3;
    }

    Py_INCREF( tmp_outline_return_value_2 );
    goto outline_result_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$hashalgo );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_3:;
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
    tmp_outline_return_value_2 = (PyObject *)&PyClass_Type;
    Py_INCREF( tmp_outline_return_value_2 );
    goto outline_result_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$hashalgo );
    return MOD_RETURN_VALUE( NULL );
    outline_result_2:;
    tmp_assign_source_16 = tmp_outline_return_value_2;
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_16;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_HashAlgo;
    tmp_args_element_name_2 = const_tuple_empty;
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_e48f6ebaa6a657a802051aa7394a1ec7->m_frame.f_lineno = 23;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_17;

    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
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
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e48f6ebaa6a657a802051aa7394a1ec7 );
#endif
    popFrameStack();

    assertFrameObject( frame_e48f6ebaa6a657a802051aa7394a1ec7 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e48f6ebaa6a657a802051aa7394a1ec7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e48f6ebaa6a657a802051aa7394a1ec7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e48f6ebaa6a657a802051aa7394a1ec7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e48f6ebaa6a657a802051aa7394a1ec7, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_18 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_18 );
    UPDATE_STRING_DICT0( moduledict_Crypto$Hash$hashalgo, (Nuitka_StringObject *)const_str_plain_HashAlgo, tmp_assign_source_18 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;


    return MOD_RETURN_VALUE( module_Crypto$Hash$hashalgo );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
