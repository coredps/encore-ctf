/* Generated code for Python source for module 'Crypto.Hash.HMAC'
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

/* The _module_Crypto$Hash$HMAC is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$Hash$HMAC;
PyDictObject *moduledict_Crypto$Hash$HMAC;

/* The module constants used, if any. */
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_plain_opad;
static PyObject *const_str_digest_c79a42e378bf60825093bcd09362ce89;
extern PyObject *const_str_digest_3f4c3045abd507ba326e1daf737b53ee;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain_new;
extern PyObject *const_str_empty;
extern PyObject *const_str_digest_391b5dc084c9caede4445b681a10e649;
static PyObject *const_str_digest_828c32694abce23f0b4bb3c83a06f08e;
extern PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
static PyObject *const_str_plain_inner;
static PyObject *const_str_digest_6d7da40f19d5147748d52cb2f85dbe0e;
static PyObject *const_tuple_str_plain_self_str_plain_msg_tuple;
extern PyObject *const_dict_empty;
extern PyObject *const_str_digest_10c675d39d154a59cf6207a839b0661f;
static PyObject *const_int_pos_54;
static PyObject *const_tuple_str_plain_key_str_plain_msg_str_plain_digestmod_tuple;
static PyObject *const_tuple_17f66203385c5d6eae721b57a6312cd2_tuple;
static PyObject *const_str_digest_d5e31cf9da1ac455fe27175f6cc531b6;
static PyObject *const_tuple_str_plain_self_str_plain_h_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_bchr;
static PyObject *const_str_digest_1ea4652cfd936e660646c6dc02bd3879;
static PyObject *const_str_digest_21612b0eb45ce5aafc7791dc3bbbf764;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_digest_size;
static PyObject *const_int_pos_92;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_4d39d7531727c6416cb553808d5fc32d;
extern PyObject *const_str_plain_MD5;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___revision__;
static PyObject *const_str_plain_strxor_c;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_digest;
static PyObject *const_str_plain_ipad;
static PyObject *const_str_digest_9e68b5a5cf2bcfb4b4ae44086f08d61b;
static PyObject *const_str_digest_c31c4411c1f021009b8a98145c1a003a;
extern PyObject *const_str_plain_block_size;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_other;
static PyObject *const_tuple_str_plain_self_str_plain_x_tuple;
static PyObject *const_str_digest_e0761b4cbcabcf772db70aef43276aae;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_update;
static PyObject *const_str_digest_b880431a2832e497782279e926929485;
static PyObject *const_str_plain_msg;
extern PyObject *const_int_pos_64;
extern PyObject *const_tuple_str_empty_tuple;
static PyObject *const_str_digest_13ad6709b209164e0a2f8e3176d80a52;
extern PyObject *const_str_plain___module__;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_plain_hexdigest;
extern PyObject *const_str_plain_h;
extern PyObject *const_str_plain_blocksize;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_HMAC;
extern PyObject *const_str_plain_b;
extern PyObject *const_int_0;
static PyObject *const_str_plain_outer;
static PyObject *const_tuple_str_plain_strxor_c_tuple;
static PyObject *const_list_str_plain_new_str_plain_digest_size_str_plain_HMAC_list;
static PyObject *const_str_plain_digestmod;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_bord;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_opad = UNSTREAM_STRING( &constant_bin[ 15678 ], 4, 1 );
    const_str_digest_c79a42e378bf60825093bcd09362ce89 = UNSTREAM_STRING( &constant_bin[ 15682 ], 25, 0 );
    const_str_digest_828c32694abce23f0b4bb3c83a06f08e = UNSTREAM_STRING( &constant_bin[ 15690 ], 16, 0 );
    const_str_plain_inner = UNSTREAM_STRING( &constant_bin[ 15707 ], 5, 1 );
    const_str_digest_6d7da40f19d5147748d52cb2f85dbe0e = UNSTREAM_STRING( &constant_bin[ 15712 ], 289, 0 );
    const_tuple_str_plain_self_str_plain_msg_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_msg_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_msg = UNSTREAM_STRING( &constant_bin[ 5120 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_msg_tuple, 1, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_int_pos_54 = PyInt_FromLong( 54l );
    const_tuple_str_plain_key_str_plain_msg_str_plain_digestmod_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_key_str_plain_msg_str_plain_digestmod_tuple, 0, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_str_plain_key_str_plain_msg_str_plain_digestmod_tuple, 1, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_str_plain_digestmod = UNSTREAM_STRING( &constant_bin[ 16001 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_key_str_plain_msg_str_plain_digestmod_tuple, 2, const_str_plain_digestmod ); Py_INCREF( const_str_plain_digestmod );
    const_tuple_17f66203385c5d6eae721b57a6312cd2_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_17f66203385c5d6eae721b57a6312cd2_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_17f66203385c5d6eae721b57a6312cd2_tuple, 1, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_17f66203385c5d6eae721b57a6312cd2_tuple, 2, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_17f66203385c5d6eae721b57a6312cd2_tuple, 3, const_str_plain_digestmod ); Py_INCREF( const_str_plain_digestmod );
    PyTuple_SET_ITEM( const_tuple_17f66203385c5d6eae721b57a6312cd2_tuple, 4, const_str_plain_MD5 ); Py_INCREF( const_str_plain_MD5 );
    PyTuple_SET_ITEM( const_tuple_17f66203385c5d6eae721b57a6312cd2_tuple, 5, const_str_plain_blocksize ); Py_INCREF( const_str_plain_blocksize );
    const_str_plain_ipad = UNSTREAM_STRING( &constant_bin[ 16010 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_17f66203385c5d6eae721b57a6312cd2_tuple, 6, const_str_plain_ipad ); Py_INCREF( const_str_plain_ipad );
    PyTuple_SET_ITEM( const_tuple_17f66203385c5d6eae721b57a6312cd2_tuple, 7, const_str_plain_opad ); Py_INCREF( const_str_plain_opad );
    const_str_digest_d5e31cf9da1ac455fe27175f6cc531b6 = UNSTREAM_STRING( &constant_bin[ 16014 ], 444, 0 );
    const_tuple_str_plain_self_str_plain_h_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_h_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_h_tuple, 1, const_str_plain_h ); Py_INCREF( const_str_plain_h );
    const_str_digest_1ea4652cfd936e660646c6dc02bd3879 = UNSTREAM_STRING( &constant_bin[ 16458 ], 724, 0 );
    const_str_digest_21612b0eb45ce5aafc7791dc3bbbf764 = UNSTREAM_STRING( &constant_bin[ 17182 ], 4, 0 );
    const_int_pos_92 = PyInt_FromLong( 92l );
    const_str_digest_4d39d7531727c6416cb553808d5fc32d = UNSTREAM_STRING( &constant_bin[ 17186 ], 691, 0 );
    const_str_plain_strxor_c = UNSTREAM_STRING( &constant_bin[ 17877 ], 8, 1 );
    const_str_digest_9e68b5a5cf2bcfb4b4ae44086f08d61b = UNSTREAM_STRING( &constant_bin[ 17885 ], 381, 0 );
    const_str_digest_c31c4411c1f021009b8a98145c1a003a = UNSTREAM_STRING( &constant_bin[ 18266 ], 276, 0 );
    const_tuple_str_plain_self_str_plain_x_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_x_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_x_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_digest_e0761b4cbcabcf772db70aef43276aae = UNSTREAM_STRING( &constant_bin[ 18542 ], 26, 0 );
    const_str_digest_b880431a2832e497782279e926929485 = UNSTREAM_STRING( &constant_bin[ 18568 ], 52, 0 );
    const_str_digest_13ad6709b209164e0a2f8e3176d80a52 = UNSTREAM_STRING( &constant_bin[ 18620 ], 714, 0 );
    const_str_plain_outer = UNSTREAM_STRING( &constant_bin[ 19334 ], 5, 1 );
    const_tuple_str_plain_strxor_c_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_strxor_c_tuple, 0, const_str_plain_strxor_c ); Py_INCREF( const_str_plain_strxor_c );
    const_list_str_plain_new_str_plain_digest_size_str_plain_HMAC_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_new_str_plain_digest_size_str_plain_HMAC_list, 0, const_str_plain_new ); Py_INCREF( const_str_plain_new );
    PyList_SET_ITEM( const_list_str_plain_new_str_plain_digest_size_str_plain_HMAC_list, 1, const_str_plain_digest_size ); Py_INCREF( const_str_plain_digest_size );
    PyList_SET_ITEM( const_list_str_plain_new_str_plain_digest_size_str_plain_HMAC_list, 2, const_str_plain_HMAC ); Py_INCREF( const_str_plain_HMAC );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Crypto$Hash$HMAC( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_61e8290b5c45514c19e45fc5afbab5c9;
static PyCodeObject *codeobj_620c47502e1eebe2b026ccf9ed996d11;
static PyCodeObject *codeobj_afb403623a917c131cdf4b099c0798a7;
static PyCodeObject *codeobj_6690fa85544123f71a7a4c579b44dfd5;
static PyCodeObject *codeobj_dc555503bf2ef17cd48143e622a38d24;
static PyCodeObject *codeobj_5a88b084333c5ecd1af8fc472483a204;
static PyCodeObject *codeobj_e2e808d8312a4f10efd28ab808951854;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_b880431a2832e497782279e926929485;
    codeobj_61e8290b5c45514c19e45fc5afbab5c9 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_c79a42e378bf60825093bcd09362ce89, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_620c47502e1eebe2b026ccf9ed996d11 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 82, const_tuple_17f66203385c5d6eae721b57a6312cd2_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_afb403623a917c131cdf4b099c0798a7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_copy, 150, const_tuple_str_plain_self_str_plain_other_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6690fa85544123f71a7a4c579b44dfd5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_digest, 166, const_tuple_str_plain_self_str_plain_h_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dc555503bf2ef17cd48143e622a38d24 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hexdigest, 180, const_tuple_str_plain_self_str_plain_x_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5a88b084333c5ecd1af8fc472483a204 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_new, 192, const_tuple_str_plain_key_str_plain_msg_str_plain_digestmod_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e2e808d8312a4f10efd28ab808951854 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_update, 131, const_tuple_str_plain_self_str_plain_msg_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_Crypto$Hash$HMAC$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Crypto$Hash$HMAC$$$function_2_update(  );


static PyObject *MAKE_FUNCTION_Crypto$Hash$HMAC$$$function_3_copy(  );


static PyObject *MAKE_FUNCTION_Crypto$Hash$HMAC$$$function_4_digest(  );


static PyObject *MAKE_FUNCTION_Crypto$Hash$HMAC$$$function_5_hexdigest(  );


static PyObject *MAKE_FUNCTION_Crypto$Hash$HMAC$$$function_6_new( PyObject *defaults );


// The module function definitions.
static PyObject *impl_Crypto$Hash$HMAC$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    PyObject *par_msg = python_pars[ 2 ];
    PyObject *par_digestmod = python_pars[ 3 ];
    PyObject *var_MD5 = NULL;
    PyObject *var_blocksize = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    bool tmp_is_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_620c47502e1eebe2b026ccf9ed996d11 = NULL;

    struct Nuitka_FrameObject *frame_620c47502e1eebe2b026ccf9ed996d11;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_620c47502e1eebe2b026ccf9ed996d11, codeobj_620c47502e1eebe2b026ccf9ed996d11, module_Crypto$Hash$HMAC, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_620c47502e1eebe2b026ccf9ed996d11 = cache_frame_620c47502e1eebe2b026ccf9ed996d11;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_620c47502e1eebe2b026ccf9ed996d11 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_620c47502e1eebe2b026ccf9ed996d11 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_digestmod;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_name_name_1 = const_str_plain_MD5;
    tmp_globals_name_1 = (PyObject *)moduledict_Crypto$Hash$HMAC;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    frame_620c47502e1eebe2b026ccf9ed996d11->m_frame.f_lineno = 101;
    tmp_assign_source_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    assert( var_MD5 == NULL );
    var_MD5 = tmp_assign_source_1;

    tmp_assign_source_2 = var_MD5;

    CHECK_OBJECT( tmp_assign_source_2 );
    {
        PyObject *old = par_digestmod;
        assert( old != NULL );
        par_digestmod = tmp_assign_source_2;
        Py_INCREF( par_digestmod );
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_assattr_name_1 = par_digestmod;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_digestmod, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = par_digestmod;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_620c47502e1eebe2b026ccf9ed996d11->m_frame.f_lineno = 105;
    tmp_assattr_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_new );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_outer, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 105;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_called_instance_2 = par_digestmod;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_620c47502e1eebe2b026ccf9ed996d11->m_frame.f_lineno = 106;
    tmp_assattr_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_new );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_inner, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 106;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    // Tried code:
    tmp_source_name_1 = par_digestmod;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assattr_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_digest_size );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "ooooooNN";
        goto try_except_handler_2;
    }
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_digest_size, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 108;
        type_description_1 = "ooooooNN";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_4 );
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_620c47502e1eebe2b026ccf9ed996d11 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_620c47502e1eebe2b026ccf9ed996d11, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_620c47502e1eebe2b026ccf9ed996d11, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_outer );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    frame_620c47502e1eebe2b026ccf9ed996d11->m_frame.f_lineno = 110;
    tmp_len_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_digest );
    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = par_self;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_digest_size, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 110;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 107;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_620c47502e1eebe2b026ccf9ed996d11->m_frame) frame_620c47502e1eebe2b026ccf9ed996d11->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooNN";
    goto frame_exception_exit_1;
    branch_end_2:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$HMAC$$$function_1___init__ );
    return NULL;
    // End of try:
    try_end_1:;
    // Tried code:
    tmp_source_name_3 = par_digestmod;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_block_size );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "ooooooNN";
        goto try_except_handler_3;
    }
    assert( var_blocksize == NULL );
    var_blocksize = tmp_assign_source_3;

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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_620c47502e1eebe2b026ccf9ed996d11 );
    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_620c47502e1eebe2b026ccf9ed996d11, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_620c47502e1eebe2b026ccf9ed996d11, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_AttributeError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_4 = const_int_pos_64;
    assert( var_blocksize == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_blocksize = tmp_assign_source_4;

    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 112;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_620c47502e1eebe2b026ccf9ed996d11->m_frame) frame_620c47502e1eebe2b026ccf9ed996d11->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooNN";
    goto frame_exception_exit_1;
    branch_end_3:;
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$HMAC$$$function_1___init__ );
    return NULL;
    // End of try:
    try_end_2:;
    tmp_len_arg_2 = par_key;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_compare_left_4 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = var_blocksize;

    if ( tmp_compare_right_4 == NULL )
    {
        Py_DECREF( tmp_compare_left_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "blocksize" );
        exception_tb = NULL;

        exception_lineno = 122;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 122;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_instance_5 = par_digestmod;

    CHECK_OBJECT( tmp_called_instance_5 );
    tmp_args_element_name_1 = par_key;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_620c47502e1eebe2b026ccf9ed996d11->m_frame.f_lineno = 123;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_called_instance_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_new, call_args );
    }

    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    frame_620c47502e1eebe2b026ccf9ed996d11->m_frame.f_lineno = 123;
    tmp_assign_source_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_digest );
    Py_DECREF( tmp_called_instance_4 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_key;
        assert( old != NULL );
        par_key = tmp_assign_source_5;
        Py_DECREF( old );
    }

    branch_no_4:;
    tmp_left_name_1 = par_key;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Hash$HMAC, (Nuitka_StringObject *)const_str_plain_bchr );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bchr );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "bchr" );
        exception_tb = NULL;

        exception_lineno = 125;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }

    frame_620c47502e1eebe2b026ccf9ed996d11->m_frame.f_lineno = 125;
    tmp_left_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    tmp_left_name_3 = var_blocksize;

    if ( tmp_left_name_3 == NULL )
    {
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "blocksize" );
        exception_tb = NULL;

        exception_lineno = 125;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }

    tmp_len_arg_3 = par_key;

    CHECK_OBJECT( tmp_len_arg_3 );
    tmp_right_name_3 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 125;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 125;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_key;
        assert( old != NULL );
        par_key = tmp_assign_source_6;
        Py_DECREF( old );
    }

    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_outer );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_update );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_Crypto$Hash$HMAC, (Nuitka_StringObject *)const_str_plain_strxor_c );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_strxor_c );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "strxor_c" );
        exception_tb = NULL;

        exception_lineno = 126;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_key;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = const_int_pos_92;
    frame_620c47502e1eebe2b026ccf9ed996d11->m_frame.f_lineno = 126;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 126;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    frame_620c47502e1eebe2b026ccf9ed996d11->m_frame.f_lineno = 126;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_inner );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_update );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_Crypto$Hash$HMAC, (Nuitka_StringObject *)const_str_plain_strxor_c );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_strxor_c );
    }

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "strxor_c" );
        exception_tb = NULL;

        exception_lineno = 127;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_key;

    CHECK_OBJECT( tmp_args_element_name_6 );
    tmp_args_element_name_7 = const_int_pos_54;
    frame_620c47502e1eebe2b026ccf9ed996d11->m_frame.f_lineno = 127;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_args_element_name_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 127;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    frame_620c47502e1eebe2b026ccf9ed996d11->m_frame.f_lineno = 127;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_1 = par_msg;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_instance_6 = par_self;

    CHECK_OBJECT( tmp_called_instance_6 );
    tmp_args_element_name_8 = par_msg;

    CHECK_OBJECT( tmp_args_element_name_8 );
    frame_620c47502e1eebe2b026ccf9ed996d11->m_frame.f_lineno = 129;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_update, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "ooooooNN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_5:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_620c47502e1eebe2b026ccf9ed996d11 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_620c47502e1eebe2b026ccf9ed996d11 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_620c47502e1eebe2b026ccf9ed996d11, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_620c47502e1eebe2b026ccf9ed996d11->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_620c47502e1eebe2b026ccf9ed996d11, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_620c47502e1eebe2b026ccf9ed996d11,
        type_description_1,
        par_self,
        par_key,
        par_msg,
        par_digestmod,
        var_MD5,
        var_blocksize,
        NULL,
        NULL
    );


    // Release cached frame.
    if ( frame_620c47502e1eebe2b026ccf9ed996d11 == cache_frame_620c47502e1eebe2b026ccf9ed996d11 )
    {
        Py_DECREF( frame_620c47502e1eebe2b026ccf9ed996d11 );
    }
    cache_frame_620c47502e1eebe2b026ccf9ed996d11 = NULL;

    assertFrameObject( frame_620c47502e1eebe2b026ccf9ed996d11 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$HMAC$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    CHECK_OBJECT( (PyObject *)par_digestmod );
    Py_DECREF( par_digestmod );
    par_digestmod = NULL;

    Py_XDECREF( var_MD5 );
    var_MD5 = NULL;

    Py_XDECREF( var_blocksize );
    var_blocksize = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    Py_XDECREF( par_digestmod );
    par_digestmod = NULL;

    Py_XDECREF( var_MD5 );
    var_MD5 = NULL;

    Py_XDECREF( var_blocksize );
    var_blocksize = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$HMAC$$$function_1___init__ );
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


static PyObject *impl_Crypto$Hash$HMAC$$$function_2_update( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_msg = python_pars[ 1 ];
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e2e808d8312a4f10efd28ab808951854 = NULL;

    struct Nuitka_FrameObject *frame_e2e808d8312a4f10efd28ab808951854;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e2e808d8312a4f10efd28ab808951854, codeobj_e2e808d8312a4f10efd28ab808951854, module_Crypto$Hash$HMAC, sizeof(void *)+sizeof(void *) );
    frame_e2e808d8312a4f10efd28ab808951854 = cache_frame_e2e808d8312a4f10efd28ab808951854;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e2e808d8312a4f10efd28ab808951854 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e2e808d8312a4f10efd28ab808951854 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_inner );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_msg;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_e2e808d8312a4f10efd28ab808951854->m_frame.f_lineno = 148;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_update, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2e808d8312a4f10efd28ab808951854 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2e808d8312a4f10efd28ab808951854 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e2e808d8312a4f10efd28ab808951854, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e2e808d8312a4f10efd28ab808951854->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e2e808d8312a4f10efd28ab808951854, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e2e808d8312a4f10efd28ab808951854,
        type_description_1,
        par_self,
        par_msg
    );


    // Release cached frame.
    if ( frame_e2e808d8312a4f10efd28ab808951854 == cache_frame_e2e808d8312a4f10efd28ab808951854 )
    {
        Py_DECREF( frame_e2e808d8312a4f10efd28ab808951854 );
    }
    cache_frame_e2e808d8312a4f10efd28ab808951854 = NULL;

    assertFrameObject( frame_e2e808d8312a4f10efd28ab808951854 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$HMAC$$$function_2_update );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

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

    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$HMAC$$$function_2_update );
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


static PyObject *impl_Crypto$Hash$HMAC$$$function_3_copy( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_other = NULL;
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
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_afb403623a917c131cdf4b099c0798a7 = NULL;

    struct Nuitka_FrameObject *frame_afb403623a917c131cdf4b099c0798a7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_afb403623a917c131cdf4b099c0798a7, codeobj_afb403623a917c131cdf4b099c0798a7, module_Crypto$Hash$HMAC, sizeof(void *)+sizeof(void *) );
    frame_afb403623a917c131cdf4b099c0798a7 = cache_frame_afb403623a917c131cdf4b099c0798a7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_afb403623a917c131cdf4b099c0798a7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_afb403623a917c131cdf4b099c0798a7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Hash$HMAC, (Nuitka_StringObject *)const_str_plain_HMAC );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HMAC );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "HMAC" );
        exception_tb = NULL;

        exception_lineno = 160;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Hash$HMAC, (Nuitka_StringObject *)const_str_plain_b );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "b" );
        exception_tb = NULL;

        exception_lineno = 160;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_afb403623a917c131cdf4b099c0798a7->m_frame.f_lineno = 160;
    tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_empty_tuple, 0 ) );

    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_afb403623a917c131cdf4b099c0798a7->m_frame.f_lineno = 160;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_other == NULL );
    var_other = tmp_assign_source_1;

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_digestmod );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = var_other;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_digestmod, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 161;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_inner );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_afb403623a917c131cdf4b099c0798a7->m_frame.f_lineno = 162;
    tmp_assattr_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = var_other;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_inner, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 162;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_outer );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_afb403623a917c131cdf4b099c0798a7->m_frame.f_lineno = 163;
    tmp_assattr_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_copy );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = var_other;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_outer, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 163;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_afb403623a917c131cdf4b099c0798a7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_afb403623a917c131cdf4b099c0798a7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_afb403623a917c131cdf4b099c0798a7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_afb403623a917c131cdf4b099c0798a7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_afb403623a917c131cdf4b099c0798a7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_afb403623a917c131cdf4b099c0798a7,
        type_description_1,
        par_self,
        var_other
    );


    // Release cached frame.
    if ( frame_afb403623a917c131cdf4b099c0798a7 == cache_frame_afb403623a917c131cdf4b099c0798a7 )
    {
        Py_DECREF( frame_afb403623a917c131cdf4b099c0798a7 );
    }
    cache_frame_afb403623a917c131cdf4b099c0798a7 = NULL;

    assertFrameObject( frame_afb403623a917c131cdf4b099c0798a7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_other;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$HMAC$$$function_3_copy );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_other );
    Py_DECREF( var_other );
    var_other = NULL;

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

    Py_XDECREF( var_other );
    var_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$HMAC$$$function_3_copy );
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


static PyObject *impl_Crypto$Hash$HMAC$$$function_4_digest( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_h = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6690fa85544123f71a7a4c579b44dfd5 = NULL;

    struct Nuitka_FrameObject *frame_6690fa85544123f71a7a4c579b44dfd5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6690fa85544123f71a7a4c579b44dfd5, codeobj_6690fa85544123f71a7a4c579b44dfd5, module_Crypto$Hash$HMAC, sizeof(void *)+sizeof(void *) );
    frame_6690fa85544123f71a7a4c579b44dfd5 = cache_frame_6690fa85544123f71a7a4c579b44dfd5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6690fa85544123f71a7a4c579b44dfd5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6690fa85544123f71a7a4c579b44dfd5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_outer );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_6690fa85544123f71a7a4c579b44dfd5->m_frame.f_lineno = 176;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_h == NULL );
    var_h = tmp_assign_source_1;

    tmp_source_name_2 = var_h;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_update );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_inner );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 177;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_6690fa85544123f71a7a4c579b44dfd5->m_frame.f_lineno = 177;
    tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_digest );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 177;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_6690fa85544123f71a7a4c579b44dfd5->m_frame.f_lineno = 177;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_3 = var_h;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_6690fa85544123f71a7a4c579b44dfd5->m_frame.f_lineno = 178;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_digest );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6690fa85544123f71a7a4c579b44dfd5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6690fa85544123f71a7a4c579b44dfd5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6690fa85544123f71a7a4c579b44dfd5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6690fa85544123f71a7a4c579b44dfd5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6690fa85544123f71a7a4c579b44dfd5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6690fa85544123f71a7a4c579b44dfd5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6690fa85544123f71a7a4c579b44dfd5,
        type_description_1,
        par_self,
        var_h
    );


    // Release cached frame.
    if ( frame_6690fa85544123f71a7a4c579b44dfd5 == cache_frame_6690fa85544123f71a7a4c579b44dfd5 )
    {
        Py_DECREF( frame_6690fa85544123f71a7a4c579b44dfd5 );
    }
    cache_frame_6690fa85544123f71a7a4c579b44dfd5 = NULL;

    assertFrameObject( frame_6690fa85544123f71a7a4c579b44dfd5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$HMAC$$$function_4_digest );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_h );
    Py_DECREF( var_h );
    var_h = NULL;

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

    Py_XDECREF( var_h );
    var_h = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$HMAC$$$function_4_digest );
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


static PyObject *impl_Crypto$Hash$HMAC$$$function_5_hexdigest( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_x = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_arg_1;
    static struct Nuitka_FrameObject *cache_frame_dc555503bf2ef17cd48143e622a38d24 = NULL;

    struct Nuitka_FrameObject *frame_dc555503bf2ef17cd48143e622a38d24;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dc555503bf2ef17cd48143e622a38d24, codeobj_dc555503bf2ef17cd48143e622a38d24, module_Crypto$Hash$HMAC, sizeof(void *)+sizeof(void *) );
    frame_dc555503bf2ef17cd48143e622a38d24 = cache_frame_dc555503bf2ef17cd48143e622a38d24;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dc555503bf2ef17cd48143e622a38d24 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dc555503bf2ef17cd48143e622a38d24 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = const_str_empty;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
    assert( tmp_called_name_1 != NULL );
    // Tried code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_dc555503bf2ef17cd48143e622a38d24->m_frame.f_lineno = 190;
    tmp_tuple_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_digest );
    if ( tmp_tuple_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_iter_arg_1 = PySequence_Tuple( tmp_tuple_arg_1 );
    Py_DECREF( tmp_tuple_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_1;

    tmp_assign_source_2 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_2;

    loop_start_1:;
    tmp_next_source_1 = tmp_list_contraction_1__$0;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            exception_lineno = 189;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_assign_source_4 = tmp_list_contraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_4 );
    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_4;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_left_name_1 = const_str_digest_21612b0eb45ce5aafc7791dc3bbbf764;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Hash$HMAC, (Nuitka_StringObject *)const_str_plain_bord );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bord );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "bord" );
        exception_tb = NULL;

        exception_lineno = 189;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = var_x;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_dc555503bf2ef17cd48143e622a38d24->m_frame.f_lineno = 189;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_append_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$HMAC$$$function_5_hexdigest );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
    Py_DECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
    Py_DECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    goto outline_result_1;
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

    Py_XDECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    Py_XDECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$HMAC$$$function_5_hexdigest );
    return NULL;
    outline_result_1:;
    tmp_args_element_name_1 = tmp_outline_return_value_1;
    frame_dc555503bf2ef17cd48143e622a38d24->m_frame.f_lineno = 189;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dc555503bf2ef17cd48143e622a38d24 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dc555503bf2ef17cd48143e622a38d24 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dc555503bf2ef17cd48143e622a38d24 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dc555503bf2ef17cd48143e622a38d24, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dc555503bf2ef17cd48143e622a38d24->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dc555503bf2ef17cd48143e622a38d24, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dc555503bf2ef17cd48143e622a38d24,
        type_description_1,
        par_self,
        var_x
    );


    // Release cached frame.
    if ( frame_dc555503bf2ef17cd48143e622a38d24 == cache_frame_dc555503bf2ef17cd48143e622a38d24 )
    {
        Py_DECREF( frame_dc555503bf2ef17cd48143e622a38d24 );
    }
    cache_frame_dc555503bf2ef17cd48143e622a38d24 = NULL;

    assertFrameObject( frame_dc555503bf2ef17cd48143e622a38d24 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$HMAC$$$function_5_hexdigest );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$HMAC$$$function_5_hexdigest );
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


static PyObject *impl_Crypto$Hash$HMAC$$$function_6_new( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[ 0 ];
    PyObject *par_msg = python_pars[ 1 ];
    PyObject *par_digestmod = python_pars[ 2 ];
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
    static struct Nuitka_FrameObject *cache_frame_5a88b084333c5ecd1af8fc472483a204 = NULL;

    struct Nuitka_FrameObject *frame_5a88b084333c5ecd1af8fc472483a204;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5a88b084333c5ecd1af8fc472483a204, codeobj_5a88b084333c5ecd1af8fc472483a204, module_Crypto$Hash$HMAC, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5a88b084333c5ecd1af8fc472483a204 = cache_frame_5a88b084333c5ecd1af8fc472483a204;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5a88b084333c5ecd1af8fc472483a204 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5a88b084333c5ecd1af8fc472483a204 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Hash$HMAC, (Nuitka_StringObject *)const_str_plain_HMAC );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HMAC );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "HMAC" );
        exception_tb = NULL;

        exception_lineno = 211;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_key;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_msg;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_digestmod;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_5a88b084333c5ecd1af8fc472483a204->m_frame.f_lineno = 211;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a88b084333c5ecd1af8fc472483a204 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a88b084333c5ecd1af8fc472483a204 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a88b084333c5ecd1af8fc472483a204 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5a88b084333c5ecd1af8fc472483a204, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5a88b084333c5ecd1af8fc472483a204->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5a88b084333c5ecd1af8fc472483a204, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5a88b084333c5ecd1af8fc472483a204,
        type_description_1,
        par_key,
        par_msg,
        par_digestmod
    );


    // Release cached frame.
    if ( frame_5a88b084333c5ecd1af8fc472483a204 == cache_frame_5a88b084333c5ecd1af8fc472483a204 )
    {
        Py_DECREF( frame_5a88b084333c5ecd1af8fc472483a204 );
    }
    cache_frame_5a88b084333c5ecd1af8fc472483a204 = NULL;

    assertFrameObject( frame_5a88b084333c5ecd1af8fc472483a204 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$HMAC$$$function_6_new );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    CHECK_OBJECT( (PyObject *)par_digestmod );
    Py_DECREF( par_digestmod );
    par_digestmod = NULL;

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

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    CHECK_OBJECT( (PyObject *)par_digestmod );
    Py_DECREF( par_digestmod );
    par_digestmod = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$HMAC$$$function_6_new );
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



static PyObject *MAKE_FUNCTION_Crypto$Hash$HMAC$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Hash$HMAC$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_620c47502e1eebe2b026ccf9ed996d11,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Hash$HMAC,
        const_str_digest_1ea4652cfd936e660646c6dc02bd3879,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Hash$HMAC$$$function_2_update(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Hash$HMAC$$$function_2_update,
        const_str_plain_update,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e2e808d8312a4f10efd28ab808951854,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Hash$HMAC,
        const_str_digest_d5e31cf9da1ac455fe27175f6cc531b6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Hash$HMAC$$$function_3_copy(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Hash$HMAC$$$function_3_copy,
        const_str_plain_copy,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_afb403623a917c131cdf4b099c0798a7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Hash$HMAC,
        const_str_digest_6d7da40f19d5147748d52cb2f85dbe0e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Hash$HMAC$$$function_4_digest(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Hash$HMAC$$$function_4_digest,
        const_str_plain_digest,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6690fa85544123f71a7a4c579b44dfd5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Hash$HMAC,
        const_str_digest_9e68b5a5cf2bcfb4b4ae44086f08d61b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Hash$HMAC$$$function_5_hexdigest(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Hash$HMAC$$$function_5_hexdigest,
        const_str_plain_hexdigest,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dc555503bf2ef17cd48143e622a38d24,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Hash$HMAC,
        const_str_digest_c31c4411c1f021009b8a98145c1a003a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Hash$HMAC$$$function_6_new( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Hash$HMAC$$$function_6_new,
        const_str_plain_new,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5a88b084333c5ecd1af8fc472483a204,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Hash$HMAC,
        const_str_digest_4d39d7531727c6416cb553808d5fc32d,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Crypto$Hash$HMAC =
{
    PyModuleDef_HEAD_INIT,
    "Crypto.Hash.HMAC",   /* m_name */
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

MOD_INIT_DECL( Crypto$Hash$HMAC )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto$Hash$HMAC );
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
    puts("Crypto.Hash.HMAC: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.Hash.HMAC: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initCrypto$Hash$HMAC" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto$Hash$HMAC = Py_InitModule4(
        "Crypto.Hash.HMAC",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Crypto$Hash$HMAC = PyModule_Create( &mdef_Crypto$Hash$HMAC );
#endif

    moduledict_Crypto$Hash$HMAC = MODULE_DICT( module_Crypto$Hash$HMAC );

    CHECK_OBJECT( module_Crypto$Hash$HMAC );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_828c32694abce23f0b4bb3c83a06f08e, module_Crypto$Hash$HMAC );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Crypto$Hash$HMAC, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Crypto$Hash$HMAC, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_Crypto$Hash$HMAC, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_0_var_digest_size = NULL;
    PyObject *outline_0_var___init__ = NULL;
    PyObject *outline_0_var_update = NULL;
    PyObject *outline_0_var_copy = NULL;
    PyObject *outline_0_var_digest = NULL;
    PyObject *outline_0_var_hexdigest = NULL;
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
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
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
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
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
    bool tmp_result;
    PyObject *tmp_star_imported_1;
    struct Nuitka_FrameObject *frame_61e8290b5c45514c19e45fc5afbab5c9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_13ad6709b209164e0a2f8e3176d80a52;
    UPDATE_STRING_DICT0( moduledict_Crypto$Hash$HMAC, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_b880431a2832e497782279e926929485;
    UPDATE_STRING_DICT0( moduledict_Crypto$Hash$HMAC, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$Hash$HMAC, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_10c675d39d154a59cf6207a839b0661f;
    UPDATE_STRING_DICT0( moduledict_Crypto$Hash$HMAC, (Nuitka_StringObject *)const_str_plain___revision__, tmp_assign_source_4 );
    tmp_assign_source_5 = LIST_COPY( const_list_str_plain_new_str_plain_digest_size_str_plain_HMAC_list );
    UPDATE_STRING_DICT1( moduledict_Crypto$Hash$HMAC, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );
    // Frame without reuse.
    frame_61e8290b5c45514c19e45fc5afbab5c9 = MAKE_MODULE_FRAME( codeobj_61e8290b5c45514c19e45fc5afbab5c9, module_Crypto$Hash$HMAC );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_61e8290b5c45514c19e45fc5afbab5c9 );
    assert( Py_REFCNT( frame_61e8290b5c45514c19e45fc5afbab5c9 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_digest_3f4c3045abd507ba326e1daf737b53ee;
    tmp_globals_name_1 = (PyObject *)moduledict_Crypto$Hash$HMAC;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_strxor_c_tuple;
    frame_61e8290b5c45514c19e45fc5afbab5c9->m_frame.f_lineno = 66;
    tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_strxor_c );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Hash$HMAC, (Nuitka_StringObject *)const_str_plain_strxor_c, tmp_assign_source_6 );
    tmp_name_name_2 = const_str_digest_391b5dc084c9caede4445b681a10e649;
    tmp_globals_name_2 = (PyObject *)moduledict_Crypto$Hash$HMAC;
    tmp_locals_name_2 = (PyObject *)moduledict_Crypto$Hash$HMAC;
    tmp_fromlist_name_2 = const_tuple_str_chr_42_tuple;
    frame_61e8290b5c45514c19e45fc5afbab5c9->m_frame.f_lineno = 67;
    tmp_star_imported_1 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_Crypto$Hash$HMAC, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$Hash$HMAC, (Nuitka_StringObject *)const_str_plain_digest_size, tmp_assign_source_7 );
    tmp_assign_source_9 = const_str_digest_828c32694abce23f0b4bb3c83a06f08e;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_9 );
    outline_0_var___module__ = tmp_assign_source_9;

    tmp_assign_source_10 = const_str_digest_e0761b4cbcabcf772db70aef43276aae;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_10 );
    outline_0_var___doc__ = tmp_assign_source_10;

    tmp_assign_source_11 = Py_None;
    assert( outline_0_var_digest_size == NULL );
    Py_INCREF( tmp_assign_source_11 );
    outline_0_var_digest_size = tmp_assign_source_11;

    tmp_defaults_1 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_12 = MAKE_FUNCTION_Crypto$Hash$HMAC$$$function_1___init__( tmp_defaults_1 );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_12;

    tmp_assign_source_13 = MAKE_FUNCTION_Crypto$Hash$HMAC$$$function_2_update(  );
    assert( outline_0_var_update == NULL );
    outline_0_var_update = tmp_assign_source_13;

    tmp_assign_source_14 = MAKE_FUNCTION_Crypto$Hash$HMAC$$$function_3_copy(  );
    assert( outline_0_var_copy == NULL );
    outline_0_var_copy = tmp_assign_source_14;

    tmp_assign_source_15 = MAKE_FUNCTION_Crypto$Hash$HMAC$$$function_4_digest(  );
    assert( outline_0_var_digest == NULL );
    outline_0_var_digest = tmp_assign_source_15;

    tmp_assign_source_16 = MAKE_FUNCTION_Crypto$Hash$HMAC$$$function_5_hexdigest(  );
    assert( outline_0_var_hexdigest == NULL );
    outline_0_var_hexdigest = tmp_assign_source_16;

    // Tried code:
    tmp_outline_return_value_1 = _PyDict_NewPresized( 8 );
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
    tmp_dict_value_4 = outline_0_var___init__;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = outline_0_var_update;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain_update;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = outline_0_var_copy;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain_copy;
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
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$HMAC );
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

    CHECK_OBJECT( (PyObject *)outline_0_var___init__ );
    Py_DECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_update );
    Py_DECREF( outline_0_var_update );
    outline_0_var_update = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_copy );
    Py_DECREF( outline_0_var_copy );
    outline_0_var_copy = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_digest );
    Py_DECREF( outline_0_var_digest );
    outline_0_var_digest = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_hexdigest );
    Py_DECREF( outline_0_var_hexdigest );
    outline_0_var_hexdigest = NULL;

    goto outline_result_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$HMAC );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_8 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_8;

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
    tmp_assign_source_17 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;

        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    // Tried code:
    tmp_outline_return_value_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Hash$HMAC, (Nuitka_StringObject *)const_str_plain___metaclass__ );

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

        exception_lineno = 74;

        goto try_except_handler_3;
    }

    Py_INCREF( tmp_outline_return_value_2 );
    goto outline_result_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$HMAC );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Hash$HMAC );
    return MOD_RETURN_VALUE( NULL );
    outline_result_2:;
    tmp_assign_source_17 = tmp_outline_return_value_2;
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_17;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_HMAC;
    tmp_args_element_name_2 = const_tuple_empty;
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_61e8290b5c45514c19e45fc5afbab5c9->m_frame.f_lineno = 74;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_18;

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
    RESTORE_FRAME_EXCEPTION( frame_61e8290b5c45514c19e45fc5afbab5c9 );
#endif
    popFrameStack();

    assertFrameObject( frame_61e8290b5c45514c19e45fc5afbab5c9 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_61e8290b5c45514c19e45fc5afbab5c9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_61e8290b5c45514c19e45fc5afbab5c9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_61e8290b5c45514c19e45fc5afbab5c9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_61e8290b5c45514c19e45fc5afbab5c9, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_19 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_19 );
    UPDATE_STRING_DICT0( moduledict_Crypto$Hash$HMAC, (Nuitka_StringObject *)const_str_plain_HMAC, tmp_assign_source_19 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    tmp_defaults_2 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_20 = MAKE_FUNCTION_Crypto$Hash$HMAC$$$function_6_new( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_Crypto$Hash$HMAC, (Nuitka_StringObject *)const_str_plain_new, tmp_assign_source_20 );

    return MOD_RETURN_VALUE( module_Crypto$Hash$HMAC );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
