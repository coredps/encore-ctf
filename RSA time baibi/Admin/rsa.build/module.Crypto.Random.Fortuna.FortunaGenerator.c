/* Generated code for Python source for module 'Crypto.Random.Fortuna.FortunaGenerator'
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

/* The _module_Crypto$Random$Fortuna$FortunaGenerator is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$Random$Fortuna$FortunaGenerator;
PyDictObject *moduledict_Crypto$Random$Fortuna$FortunaGenerator;

/* The module constants used, if any. */
static PyObject *const_str_digest_88a7d4e5c3b3c76e5b2ce5b4b735f8d7;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_tuple_22352b5d0079cdc7259aaba5da2c204c_tuple;
extern PyObject *const_str_plain_pseudo_random_data;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_plain_max_bytes_per_request;
static PyObject *const_str_plain_remaining_bytes;
static PyObject *const_str_plain_Counter;
extern PyObject *const_str_digest_10c675d39d154a59cf6207a839b0661f;
extern PyObject *const_str_plain_MODE_CTR;
extern PyObject *const_str_plain___revision__;
extern PyObject *const_str_plain_key;
static PyObject *const_str_plain__generate_blocks;
extern PyObject *const_str_plain_block_size;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_exact_div;
extern PyObject *const_str_plain_remainder;
extern PyObject *const_str_plain_little_endian;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_74ba315069266703540e145c62869e9e;
extern PyObject *const_str_plain_nbits;
static PyObject *const_str_plain_block_size_shift;
static PyObject *const_tuple_int_pos_1048576_tuple;
extern PyObject *const_str_digest_3094a3153522c449dea0453cbf4eb75a;
static PyObject *const_str_digest_dc92bd4afd40ce9ac74ad0581a29dc37;
static PyObject *const_str_digest_3c336c1a5c1f954c6312d6497897d776;
static PyObject *const_int_pos_12;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_AESGenerator;
extern PyObject *const_dict_empty;
extern PyObject *const_str_digest_5a510964c5dbcb6c990bf490c7ddd002;
extern PyObject *const_str_plain_retval;
static PyObject *const_int_pos_4096;
extern PyObject *const_str_plain_digest;
static PyObject *const_int_pos_4095;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_9118098c6ddc7d86c17ec1818f00f49b;
static PyObject *const_int_pos_1048575;
static PyObject *const_int_pos_1048576;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_encrypt;
extern PyObject *const_str_plain___module__;
extern PyObject *const_int_pos_8;
static PyObject *const_tuple_str_plain_AES_tuple;
static PyObject *const_str_plain__set_key;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_tuple_str_chr_0_tuple;
extern PyObject *const_str_plain___init__;
extern PyObject *const_int_pos_32;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain_new;
extern PyObject *const_str_empty;
extern PyObject *const_str_digest_391b5dc084c9caede4445b681a10e649;
extern PyObject *const_str_plain_join;
static PyObject *const_tuple_231cbf9d6b6a6c17bdfb08b2b914441c_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_key_tuple;
static PyObject *const_str_digest_f241d38f9f8cf86ee2a17a16a5d2ea6a;
static PyObject *const_str_plain_num_full_blocks;
static PyObject *const_str_plain__pseudo_random_data;
static PyObject *const_str_plain_counter;
extern PyObject *const_str_plain_bytes;
static PyObject *const_tuple_str_plain_Counter_tuple;
extern PyObject *const_str_plain_SHAd256;
static PyObject *const_tuple_str_plain_self_str_plain_seed_tuple;
extern PyObject *const_str_plain__cipher;
extern PyObject *const_str_plain_i;
static PyObject *const_str_plain_num_blocks;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_chr_0;
extern PyObject *const_int_pos_20;
static PyObject *const_str_digest_c40db608d232000fad8fae3649659ee4;
extern PyObject *const_str_plain_key_size;
extern PyObject *const_str_plain_seed;
static PyObject *const_str_digest_ea048b90858221ad9a3ae88147567af0;
extern PyObject *const_str_plain_struct;
extern PyObject *const_str_plain_exact_log2;
static PyObject *const_str_plain__four_kiblocks_of_zeros;
static PyObject *const_str_plain_max_blocks_per_request;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_int_0;
static PyObject *const_tuple_e9b00d92864ac67116145c12b6a8f642_tuple;
extern PyObject *const_str_plain_reseed;
extern PyObject *const_tuple_str_empty_tuple;
static PyObject *const_int_pos_65536;
extern PyObject *const_str_plain_initial_value;
static PyObject *const_tuple_570691d349aa17574ff41cbe90638239_tuple;
extern PyObject *const_str_plain_AES;
extern PyObject *const_str_plain_append;
static PyObject *const_tuple_c41afeda75bcc52bf5094596b6edc009_tuple;
extern PyObject *const_str_plain_ceil_shift;
static PyObject *const_str_plain_blocks_per_key;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_88a7d4e5c3b3c76e5b2ce5b4b735f8d7 = UNSTREAM_STRING( &constant_bin[ 48867 ], 74, 0 );
    const_tuple_22352b5d0079cdc7259aaba5da2c204c_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_22352b5d0079cdc7259aaba5da2c204c_tuple, 0, const_str_plain_ceil_shift ); Py_INCREF( const_str_plain_ceil_shift );
    PyTuple_SET_ITEM( const_tuple_22352b5d0079cdc7259aaba5da2c204c_tuple, 1, const_str_plain_exact_log2 ); Py_INCREF( const_str_plain_exact_log2 );
    PyTuple_SET_ITEM( const_tuple_22352b5d0079cdc7259aaba5da2c204c_tuple, 2, const_str_plain_exact_div ); Py_INCREF( const_str_plain_exact_div );
    const_str_plain_max_bytes_per_request = UNSTREAM_STRING( &constant_bin[ 48941 ], 21, 1 );
    const_str_plain_remaining_bytes = UNSTREAM_STRING( &constant_bin[ 48962 ], 15, 1 );
    const_str_plain_Counter = UNSTREAM_STRING( &constant_bin[ 4277 ], 7, 1 );
    const_str_plain__generate_blocks = UNSTREAM_STRING( &constant_bin[ 48977 ], 16, 1 );
    const_str_plain_block_size_shift = UNSTREAM_STRING( &constant_bin[ 48993 ], 16, 1 );
    const_tuple_int_pos_1048576_tuple = PyTuple_New( 1 );
    const_int_pos_1048576 = PyInt_FromLong( 1048576l );
    PyTuple_SET_ITEM( const_tuple_int_pos_1048576_tuple, 0, const_int_pos_1048576 ); Py_INCREF( const_int_pos_1048576 );
    const_str_digest_dc92bd4afd40ce9ac74ad0581a29dc37 = UNSTREAM_STRING( &constant_bin[ 49009 ], 54, 0 );
    const_str_digest_3c336c1a5c1f954c6312d6497897d776 = UNSTREAM_STRING( &constant_bin[ 49063 ], 38, 0 );
    const_int_pos_12 = PyInt_FromLong( 12l );
    const_int_pos_4096 = PyInt_FromLong( 4096l );
    const_int_pos_4095 = PyInt_FromLong( 4095l );
    const_int_pos_1048575 = PyInt_FromLong( 1048575l );
    const_tuple_str_plain_AES_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_AES_tuple, 0, const_str_plain_AES ); Py_INCREF( const_str_plain_AES );
    const_str_plain__set_key = UNSTREAM_STRING( &constant_bin[ 49101 ], 8, 1 );
    const_tuple_231cbf9d6b6a6c17bdfb08b2b914441c_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_231cbf9d6b6a6c17bdfb08b2b914441c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_num_blocks = UNSTREAM_STRING( &constant_bin[ 49109 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_231cbf9d6b6a6c17bdfb08b2b914441c_tuple, 1, const_str_plain_num_blocks ); Py_INCREF( const_str_plain_num_blocks );
    PyTuple_SET_ITEM( const_tuple_231cbf9d6b6a6c17bdfb08b2b914441c_tuple, 2, const_str_plain_retval ); Py_INCREF( const_str_plain_retval );
    PyTuple_SET_ITEM( const_tuple_231cbf9d6b6a6c17bdfb08b2b914441c_tuple, 3, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_231cbf9d6b6a6c17bdfb08b2b914441c_tuple, 4, const_str_plain_remaining_bytes ); Py_INCREF( const_str_plain_remaining_bytes );
    const_tuple_str_plain_self_str_plain_key_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_key_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_key_tuple, 1, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    const_str_digest_f241d38f9f8cf86ee2a17a16a5d2ea6a = UNSTREAM_STRING( &constant_bin[ 49119 ], 35, 0 );
    const_str_plain_num_full_blocks = UNSTREAM_STRING( &constant_bin[ 49154 ], 15, 1 );
    const_str_plain__pseudo_random_data = UNSTREAM_STRING( &constant_bin[ 49169 ], 19, 1 );
    const_str_plain_counter = UNSTREAM_STRING( &constant_bin[ 4067 ], 7, 1 );
    const_tuple_str_plain_Counter_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Counter_tuple, 0, const_str_plain_Counter ); Py_INCREF( const_str_plain_Counter );
    const_tuple_str_plain_self_str_plain_seed_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_seed_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_seed_tuple, 1, const_str_plain_seed ); Py_INCREF( const_str_plain_seed );
    const_str_digest_c40db608d232000fad8fae3649659ee4 = UNSTREAM_STRING( &constant_bin[ 49188 ], 47, 0 );
    const_str_digest_ea048b90858221ad9a3ae88147567af0 = UNSTREAM_STRING( &constant_bin[ 49235 ], 297, 0 );
    const_str_plain__four_kiblocks_of_zeros = UNSTREAM_STRING( &constant_bin[ 49532 ], 23, 1 );
    const_str_plain_max_blocks_per_request = UNSTREAM_STRING( &constant_bin[ 49555 ], 22, 1 );
    const_tuple_e9b00d92864ac67116145c12b6a8f642_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_e9b00d92864ac67116145c12b6a8f642_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e9b00d92864ac67116145c12b6a8f642_tuple, 1, const_str_plain_bytes ); Py_INCREF( const_str_plain_bytes );
    PyTuple_SET_ITEM( const_tuple_e9b00d92864ac67116145c12b6a8f642_tuple, 2, const_str_plain_num_blocks ); Py_INCREF( const_str_plain_num_blocks );
    PyTuple_SET_ITEM( const_tuple_e9b00d92864ac67116145c12b6a8f642_tuple, 3, const_str_plain_retval ); Py_INCREF( const_str_plain_retval );
    const_int_pos_65536 = PyInt_FromLong( 65536l );
    const_tuple_570691d349aa17574ff41cbe90638239_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_570691d349aa17574ff41cbe90638239_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_570691d349aa17574ff41cbe90638239_tuple, 1, const_str_plain_bytes ); Py_INCREF( const_str_plain_bytes );
    PyTuple_SET_ITEM( const_tuple_570691d349aa17574ff41cbe90638239_tuple, 2, const_str_plain_num_full_blocks ); Py_INCREF( const_str_plain_num_full_blocks );
    PyTuple_SET_ITEM( const_tuple_570691d349aa17574ff41cbe90638239_tuple, 3, const_str_plain_remainder ); Py_INCREF( const_str_plain_remainder );
    PyTuple_SET_ITEM( const_tuple_570691d349aa17574ff41cbe90638239_tuple, 4, const_str_plain_retval ); Py_INCREF( const_str_plain_retval );
    PyTuple_SET_ITEM( const_tuple_570691d349aa17574ff41cbe90638239_tuple, 5, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_tuple_c41afeda75bcc52bf5094596b6edc009_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_c41afeda75bcc52bf5094596b6edc009_tuple, 0, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_c41afeda75bcc52bf5094596b6edc009_tuple, 1, const_str_plain___doc__ ); Py_INCREF( const_str_plain___doc__ );
    PyTuple_SET_ITEM( const_tuple_c41afeda75bcc52bf5094596b6edc009_tuple, 2, const_str_plain_block_size ); Py_INCREF( const_str_plain_block_size );
    PyTuple_SET_ITEM( const_tuple_c41afeda75bcc52bf5094596b6edc009_tuple, 3, const_str_plain_key_size ); Py_INCREF( const_str_plain_key_size );
    PyTuple_SET_ITEM( const_tuple_c41afeda75bcc52bf5094596b6edc009_tuple, 4, const_str_plain_max_blocks_per_request ); Py_INCREF( const_str_plain_max_blocks_per_request );
    PyTuple_SET_ITEM( const_tuple_c41afeda75bcc52bf5094596b6edc009_tuple, 5, const_str_plain__four_kiblocks_of_zeros ); Py_INCREF( const_str_plain__four_kiblocks_of_zeros );
    PyTuple_SET_ITEM( const_tuple_c41afeda75bcc52bf5094596b6edc009_tuple, 6, const_str_plain___init__ ); Py_INCREF( const_str_plain___init__ );
    PyTuple_SET_ITEM( const_tuple_c41afeda75bcc52bf5094596b6edc009_tuple, 7, const_str_plain_reseed ); Py_INCREF( const_str_plain_reseed );
    PyTuple_SET_ITEM( const_tuple_c41afeda75bcc52bf5094596b6edc009_tuple, 8, const_str_plain_pseudo_random_data ); Py_INCREF( const_str_plain_pseudo_random_data );
    PyTuple_SET_ITEM( const_tuple_c41afeda75bcc52bf5094596b6edc009_tuple, 9, const_str_plain__set_key ); Py_INCREF( const_str_plain__set_key );
    PyTuple_SET_ITEM( const_tuple_c41afeda75bcc52bf5094596b6edc009_tuple, 10, const_str_plain__pseudo_random_data ); Py_INCREF( const_str_plain__pseudo_random_data );
    PyTuple_SET_ITEM( const_tuple_c41afeda75bcc52bf5094596b6edc009_tuple, 11, const_str_plain__generate_blocks ); Py_INCREF( const_str_plain__generate_blocks );
    const_str_plain_blocks_per_key = UNSTREAM_STRING( &constant_bin[ 49577 ], 14, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Crypto$Random$Fortuna$FortunaGenerator( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b075eaaeb922c0875165fb2a21932a12;
static PyCodeObject *codeobj_2d2ea4b5d66e9e94ddbe66c541382113;
static PyCodeObject *codeobj_e3348b930a1324410d3f8a13dcb47384;
static PyCodeObject *codeobj_f418b98434a6ab4a3c1f6a7078911a66;
static PyCodeObject *codeobj_225ed6cc7c9c06fc263968d267211757;
static PyCodeObject *codeobj_81960af4a0d982ce48e1d0fd605afc8f;
static PyCodeObject *codeobj_d7fac9a0eb409d86b0ebf493677960b9;
static PyCodeObject *codeobj_26380498af7c7393f76889665335104f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_88a7d4e5c3b3c76e5b2ce5b4b735f8d7;
    codeobj_b075eaaeb922c0875165fb2a21932a12 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_c40db608d232000fad8fae3649659ee4, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_2d2ea4b5d66e9e94ddbe66c541382113 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_AESGenerator, 40, const_tuple_c41afeda75bcc52bf5094596b6edc009_tuple, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_e3348b930a1324410d3f8a13dcb47384 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 65, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f418b98434a6ab4a3c1f6a7078911a66 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__generate_blocks, 121, const_tuple_231cbf9d6b6a6c17bdfb08b2b914441c_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_225ed6cc7c9c06fc263968d267211757 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__pseudo_random_data, 103, const_tuple_e9b00d92864ac67116145c12b6a8f642_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_81960af4a0d982ce48e1d0fd605afc8f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__set_key, 99, const_tuple_str_plain_self_str_plain_key_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d7fac9a0eb409d86b0ebf493677960b9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_pseudo_random_data, 86, const_tuple_570691d349aa17574ff41cbe90638239_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_26380498af7c7393f76889665335104f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reseed, 78, const_tuple_str_plain_self_str_plain_seed_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaGenerator$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaGenerator$$$function_2_reseed(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaGenerator$$$function_3_pseudo_random_data(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaGenerator$$$function_4__set_key(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaGenerator$$$function_5__pseudo_random_data(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaGenerator$$$function_6__generate_blocks(  );


// The module function definitions.
static PyObject *impl_Crypto$Random$Fortuna$FortunaGenerator$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    static struct Nuitka_FrameObject *cache_frame_e3348b930a1324410d3f8a13dcb47384 = NULL;

    struct Nuitka_FrameObject *frame_e3348b930a1324410d3f8a13dcb47384;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e3348b930a1324410d3f8a13dcb47384, codeobj_e3348b930a1324410d3f8a13dcb47384, module_Crypto$Random$Fortuna$FortunaGenerator, sizeof(void *) );
    frame_e3348b930a1324410d3f8a13dcb47384 = cache_frame_e3348b930a1324410d3f8a13dcb47384;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e3348b930a1324410d3f8a13dcb47384 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e3348b930a1324410d3f8a13dcb47384 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain_Counter );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Counter );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Counter" );
        exception_tb = NULL;

        exception_lineno = 66;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_new );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_block_size );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 66;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_8;
    tmp_dict_value_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 66;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_nbits;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = const_int_0;
    tmp_dict_key_2 = const_str_plain_initial_value;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = Py_True;
    tmp_dict_key_3 = const_str_plain_little_endian;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_e3348b930a1324410d3f8a13dcb47384->m_frame.f_lineno = 66;
    tmp_assattr_name_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_counter, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 66;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_assattr_name_2 = Py_None;
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_key, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain_exact_log2 );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exact_log2 );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "exact_log2" );
        exception_tb = NULL;

        exception_lineno = 70;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_block_size );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_e3348b930a1324410d3f8a13dcb47384->m_frame.f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assattr_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_block_size_shift, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 70;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_left_name_2 = const_int_pos_1;
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_block_size_shift );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_block_size );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 71;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 71;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 71;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "o";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain_exact_div );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exact_div );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "exact_div" );
        exception_tb = NULL;

        exception_lineno = 73;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_key_size );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_block_size );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 73;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_e3348b930a1324410d3f8a13dcb47384->m_frame.f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assattr_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_blocks_per_key, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 73;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    tmp_source_name_8 = par_self;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_key_size );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = par_self;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_blocks_per_key );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 74;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = par_self;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_block_size );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_left_name_3 );

        exception_lineno = 74;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 74;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 74;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == 1 )
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
    exception_lineno = 74;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "o";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_source_name_11 = par_self;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_left_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_max_blocks_per_request );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = par_self;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_block_size );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_4 );

        exception_lineno = 76;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = par_self;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_max_bytes_per_request, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 76;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e3348b930a1324410d3f8a13dcb47384 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e3348b930a1324410d3f8a13dcb47384 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e3348b930a1324410d3f8a13dcb47384, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e3348b930a1324410d3f8a13dcb47384->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e3348b930a1324410d3f8a13dcb47384, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e3348b930a1324410d3f8a13dcb47384,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_e3348b930a1324410d3f8a13dcb47384 == cache_frame_e3348b930a1324410d3f8a13dcb47384 )
    {
        Py_DECREF( frame_e3348b930a1324410d3f8a13dcb47384 );
    }
    cache_frame_e3348b930a1324410d3f8a13dcb47384 = NULL;

    assertFrameObject( frame_e3348b930a1324410d3f8a13dcb47384 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaGenerator$$$function_1___init__ );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaGenerator$$$function_1___init__ );
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


static PyObject *impl_Crypto$Random$Fortuna$FortunaGenerator$$$function_2_reseed( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_seed = python_pars[ 1 ];
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    bool tmp_is_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_26380498af7c7393f76889665335104f = NULL;

    struct Nuitka_FrameObject *frame_26380498af7c7393f76889665335104f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_26380498af7c7393f76889665335104f, codeobj_26380498af7c7393f76889665335104f, module_Crypto$Random$Fortuna$FortunaGenerator, sizeof(void *)+sizeof(void *) );
    frame_26380498af7c7393f76889665335104f = cache_frame_26380498af7c7393f76889665335104f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_26380498af7c7393f76889665335104f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_26380498af7c7393f76889665335104f ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_key );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain_b );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "b" );
        exception_tb = NULL;

        exception_lineno = 80;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_26380498af7c7393f76889665335104f->m_frame.f_lineno = 80;
    tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_chr_0_tuple, 0 ) );

    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_key_size );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 80;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 80;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    branch_no_1:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__set_key );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain_SHAd256 );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SHAd256 );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SHAd256" );
        exception_tb = NULL;

        exception_lineno = 82;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_new );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 82;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_key );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 82;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = par_seed;

    CHECK_OBJECT( tmp_right_name_2 );
    tmp_args_element_name_2 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 82;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_26380498af7c7393f76889665335104f->m_frame.f_lineno = 82;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 82;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_26380498af7c7393f76889665335104f->m_frame.f_lineno = 82;
    tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_digest );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 82;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_26380498af7c7393f76889665335104f->m_frame.f_lineno = 82;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_2 = par_self;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_26380498af7c7393f76889665335104f->m_frame.f_lineno = 83;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_counter );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_key );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_key_size );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 84;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 84;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 84;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_26380498af7c7393f76889665335104f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_26380498af7c7393f76889665335104f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_26380498af7c7393f76889665335104f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_26380498af7c7393f76889665335104f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_26380498af7c7393f76889665335104f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_26380498af7c7393f76889665335104f,
        type_description_1,
        par_self,
        par_seed
    );


    // Release cached frame.
    if ( frame_26380498af7c7393f76889665335104f == cache_frame_26380498af7c7393f76889665335104f )
    {
        Py_DECREF( frame_26380498af7c7393f76889665335104f );
    }
    cache_frame_26380498af7c7393f76889665335104f = NULL;

    assertFrameObject( frame_26380498af7c7393f76889665335104f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaGenerator$$$function_2_reseed );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_seed );
    Py_DECREF( par_seed );
    par_seed = NULL;

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

    CHECK_OBJECT( (PyObject *)par_seed );
    Py_DECREF( par_seed );
    par_seed = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaGenerator$$$function_2_reseed );
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


static PyObject *impl_Crypto$Random$Fortuna$FortunaGenerator$$$function_3_pseudo_random_data( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_bytes = python_pars[ 1 ];
    PyObject *var_num_full_blocks = NULL;
    PyObject *var_remainder = NULL;
    PyObject *var_retval = NULL;
    PyObject *var_i = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_GtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_xrange_low_1;
    static struct Nuitka_FrameObject *cache_frame_d7fac9a0eb409d86b0ebf493677960b9 = NULL;

    struct Nuitka_FrameObject *frame_d7fac9a0eb409d86b0ebf493677960b9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d7fac9a0eb409d86b0ebf493677960b9, codeobj_d7fac9a0eb409d86b0ebf493677960b9, module_Crypto$Random$Fortuna$FortunaGenerator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d7fac9a0eb409d86b0ebf493677960b9 = cache_frame_d7fac9a0eb409d86b0ebf493677960b9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d7fac9a0eb409d86b0ebf493677960b9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d7fac9a0eb409d86b0ebf493677960b9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_bytes;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 87;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_left_name_1 = par_bytes;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = const_int_pos_20;
    tmp_assign_source_1 = BINARY_OPERATION( PyNumber_Rshift, tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_num_full_blocks == NULL );
    var_num_full_blocks = tmp_assign_source_1;

    tmp_left_name_2 = par_bytes;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = const_int_pos_1048575;
    tmp_assign_source_2 = BINARY_OPERATION( PyNumber_And, tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_remainder == NULL );
    var_remainder = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( var_retval == NULL );
    var_retval = tmp_assign_source_3;

    tmp_xrange_low_1 = var_num_full_blocks;

    CHECK_OBJECT( tmp_xrange_low_1 );
    tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_4;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            exception_lineno = 93;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_assign_source_6 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_6;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_1 = var_retval;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_d7fac9a0eb409d86b0ebf493677960b9->m_frame.f_lineno = 94;
    tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__pseudo_random_data, &PyTuple_GET_ITEM( const_tuple_int_pos_1048576_tuple, 0 ) );

    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    frame_d7fac9a0eb409d86b0ebf493677960b9->m_frame.f_lineno = 94;
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


        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    tmp_source_name_2 = var_retval;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_2 = par_self;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_3 = var_remainder;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_d7fac9a0eb409d86b0ebf493677960b9->m_frame.f_lineno = 95;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__pseudo_random_data, call_args );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 95;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_d7fac9a0eb409d86b0ebf493677960b9->m_frame.f_lineno = 95;
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


        exception_lineno = 95;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain_b );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "b" );
        exception_tb = NULL;

        exception_lineno = 97;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_d7fac9a0eb409d86b0ebf493677960b9->m_frame.f_lineno = 97;
    tmp_called_instance_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_empty_tuple, 0 ) );

    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_retval;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_d7fac9a0eb409d86b0ebf493677960b9->m_frame.f_lineno = 97;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_join, call_args );
    }

    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7fac9a0eb409d86b0ebf493677960b9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7fac9a0eb409d86b0ebf493677960b9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7fac9a0eb409d86b0ebf493677960b9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d7fac9a0eb409d86b0ebf493677960b9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d7fac9a0eb409d86b0ebf493677960b9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d7fac9a0eb409d86b0ebf493677960b9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d7fac9a0eb409d86b0ebf493677960b9,
        type_description_1,
        par_self,
        par_bytes,
        var_num_full_blocks,
        var_remainder,
        var_retval,
        var_i
    );


    // Release cached frame.
    if ( frame_d7fac9a0eb409d86b0ebf493677960b9 == cache_frame_d7fac9a0eb409d86b0ebf493677960b9 )
    {
        Py_DECREF( frame_d7fac9a0eb409d86b0ebf493677960b9 );
    }
    cache_frame_d7fac9a0eb409d86b0ebf493677960b9 = NULL;

    assertFrameObject( frame_d7fac9a0eb409d86b0ebf493677960b9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaGenerator$$$function_3_pseudo_random_data );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_bytes );
    Py_DECREF( par_bytes );
    par_bytes = NULL;

    CHECK_OBJECT( (PyObject *)var_num_full_blocks );
    Py_DECREF( var_num_full_blocks );
    var_num_full_blocks = NULL;

    CHECK_OBJECT( (PyObject *)var_remainder );
    Py_DECREF( var_remainder );
    var_remainder = NULL;

    CHECK_OBJECT( (PyObject *)var_retval );
    Py_DECREF( var_retval );
    var_retval = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

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

    CHECK_OBJECT( (PyObject *)par_bytes );
    Py_DECREF( par_bytes );
    par_bytes = NULL;

    Py_XDECREF( var_num_full_blocks );
    var_num_full_blocks = NULL;

    Py_XDECREF( var_remainder );
    var_remainder = NULL;

    Py_XDECREF( var_retval );
    var_retval = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaGenerator$$$function_3_pseudo_random_data );
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


static PyObject *impl_Crypto$Random$Fortuna$FortunaGenerator$$$function_4__set_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_81960af4a0d982ce48e1d0fd605afc8f = NULL;

    struct Nuitka_FrameObject *frame_81960af4a0d982ce48e1d0fd605afc8f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_81960af4a0d982ce48e1d0fd605afc8f, codeobj_81960af4a0d982ce48e1d0fd605afc8f, module_Crypto$Random$Fortuna$FortunaGenerator, sizeof(void *)+sizeof(void *) );
    frame_81960af4a0d982ce48e1d0fd605afc8f = cache_frame_81960af4a0d982ce48e1d0fd605afc8f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_81960af4a0d982ce48e1d0fd605afc8f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_81960af4a0d982ce48e1d0fd605afc8f ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_key;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain_AES );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AES );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "AES" );
        exception_tb = NULL;

        exception_lineno = 101;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_new );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_key;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain_AES );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AES );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "AES" );
        exception_tb = NULL;

        exception_lineno = 101;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_MODE_CTR );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 101;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_counter );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 101;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_counter;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_81960af4a0d982ce48e1d0fd605afc8f->m_frame.f_lineno = 101;
    tmp_assattr_name_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__cipher, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 101;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_81960af4a0d982ce48e1d0fd605afc8f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_81960af4a0d982ce48e1d0fd605afc8f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_81960af4a0d982ce48e1d0fd605afc8f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_81960af4a0d982ce48e1d0fd605afc8f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_81960af4a0d982ce48e1d0fd605afc8f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_81960af4a0d982ce48e1d0fd605afc8f,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame.
    if ( frame_81960af4a0d982ce48e1d0fd605afc8f == cache_frame_81960af4a0d982ce48e1d0fd605afc8f )
    {
        Py_DECREF( frame_81960af4a0d982ce48e1d0fd605afc8f );
    }
    cache_frame_81960af4a0d982ce48e1d0fd605afc8f = NULL;

    assertFrameObject( frame_81960af4a0d982ce48e1d0fd605afc8f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaGenerator$$$function_4__set_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

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

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaGenerator$$$function_4__set_key );
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


static PyObject *impl_Crypto$Random$Fortuna$FortunaGenerator$$$function_5__pseudo_random_data( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_bytes = python_pars[ 1 ];
    PyObject *var_num_blocks = NULL;
    PyObject *var_retval = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_return_value;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_225ed6cc7c9c06fc263968d267211757 = NULL;

    struct Nuitka_FrameObject *frame_225ed6cc7c9c06fc263968d267211757;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_225ed6cc7c9c06fc263968d267211757, codeobj_225ed6cc7c9c06fc263968d267211757, module_Crypto$Random$Fortuna$FortunaGenerator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_225ed6cc7c9c06fc263968d267211757 = cache_frame_225ed6cc7c9c06fc263968d267211757;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_225ed6cc7c9c06fc263968d267211757 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_225ed6cc7c9c06fc263968d267211757 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assign_source_1 = par_bytes;

    CHECK_OBJECT( tmp_assign_source_1 );
    assert( tmp_comparison_chain_1__operand_2 == NULL );
    Py_INCREF( tmp_assign_source_1 );
    tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;

    // Tried code:
    tmp_compexpr_left_1 = const_int_0;
    tmp_compexpr_right_1 = tmp_comparison_chain_1__operand_2;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_assign_source_2 = RICH_COMPARE_LE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( tmp_comparison_chain_1__comparison_result == NULL );
    tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;

    tmp_cond_value_2 = tmp_comparison_chain_1__comparison_result;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    branch_no_2:;
    tmp_compexpr_left_2 = tmp_comparison_chain_1__operand_2;

    CHECK_OBJECT( tmp_compexpr_left_2 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_max_bytes_per_request );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_outline_return_value_1 = RICH_COMPARE_LE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_outline_return_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaGenerator$$$function_5__pseudo_random_data );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
    Py_DECREF( tmp_comparison_chain_1__operand_2 );
    tmp_comparison_chain_1__operand_2 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__comparison_result );
    Py_DECREF( tmp_comparison_chain_1__comparison_result );
    tmp_comparison_chain_1__comparison_result = NULL;

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

    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
    Py_DECREF( tmp_comparison_chain_1__operand_2 );
    tmp_comparison_chain_1__operand_2 = NULL;

    Py_XDECREF( tmp_comparison_chain_1__comparison_result );
    tmp_comparison_chain_1__comparison_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaGenerator$$$function_5__pseudo_random_data );
    return NULL;
    outline_result_1:;
    tmp_cond_value_1 = tmp_outline_return_value_1;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 104;
        type_description_1 = "oooo";
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
    tmp_make_exception_arg_1 = const_str_digest_dc92bd4afd40ce9ac74ad0581a29dc37;
    frame_225ed6cc7c9c06fc263968d267211757->m_frame.f_lineno = 105;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_AssertionError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 105;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain_ceil_shift );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ceil_shift );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ceil_shift" );
        exception_tb = NULL;

        exception_lineno = 107;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_bytes;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_block_size_shift );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_225ed6cc7c9c06fc263968d267211757->m_frame.f_lineno = 107;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_num_blocks == NULL );
    var_num_blocks = tmp_assign_source_3;

    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_3 = var_num_blocks;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_225ed6cc7c9c06fc263968d267211757->m_frame.f_lineno = 110;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_slice_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__generate_blocks, call_args );
    }

    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_slice_upper_1 = par_bytes;

    CHECK_OBJECT( tmp_slice_upper_1 );
    tmp_assign_source_4 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_retval == NULL );
    var_retval = tmp_assign_source_4;

    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__set_key );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__generate_blocks );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 114;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_blocks_per_key );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 114;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_225ed6cc7c9c06fc263968d267211757->m_frame.f_lineno = 114;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 114;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_225ed6cc7c9c06fc263968d267211757->m_frame.f_lineno = 114;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_len_arg_1 = var_retval;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = par_bytes;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 116;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_raise_type_2 = PyExc_AssertionError;
    exception_type = tmp_raise_type_2;
    Py_INCREF( tmp_raise_type_2 );
    exception_lineno = 116;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_key );
    if ( tmp_len_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_2 );
    Py_DECREF( tmp_len_arg_2 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_key_size );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 117;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 117;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_raise_type_3 = PyExc_AssertionError;
    exception_type = tmp_raise_type_3;
    Py_INCREF( tmp_raise_type_3 );
    exception_lineno = 117;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_225ed6cc7c9c06fc263968d267211757 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_225ed6cc7c9c06fc263968d267211757 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_225ed6cc7c9c06fc263968d267211757, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_225ed6cc7c9c06fc263968d267211757->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_225ed6cc7c9c06fc263968d267211757, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_225ed6cc7c9c06fc263968d267211757,
        type_description_1,
        par_self,
        par_bytes,
        var_num_blocks,
        var_retval
    );


    // Release cached frame.
    if ( frame_225ed6cc7c9c06fc263968d267211757 == cache_frame_225ed6cc7c9c06fc263968d267211757 )
    {
        Py_DECREF( frame_225ed6cc7c9c06fc263968d267211757 );
    }
    cache_frame_225ed6cc7c9c06fc263968d267211757 = NULL;

    assertFrameObject( frame_225ed6cc7c9c06fc263968d267211757 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_retval;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaGenerator$$$function_5__pseudo_random_data );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_bytes );
    Py_DECREF( par_bytes );
    par_bytes = NULL;

    CHECK_OBJECT( (PyObject *)var_num_blocks );
    Py_DECREF( var_num_blocks );
    var_num_blocks = NULL;

    CHECK_OBJECT( (PyObject *)var_retval );
    Py_DECREF( var_retval );
    var_retval = NULL;

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

    CHECK_OBJECT( (PyObject *)par_bytes );
    Py_DECREF( par_bytes );
    par_bytes = NULL;

    Py_XDECREF( var_num_blocks );
    var_num_blocks = NULL;

    Py_XDECREF( var_retval );
    var_retval = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaGenerator$$$function_5__pseudo_random_data );
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


static PyObject *impl_Crypto$Random$Fortuna$FortunaGenerator$$$function_6__generate_blocks( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_num_blocks = python_pars[ 1 ];
    PyObject *var_retval = NULL;
    PyObject *var_i = NULL;
    PyObject *var_remaining_bytes = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_xrange_low_1;
    static struct Nuitka_FrameObject *cache_frame_f418b98434a6ab4a3c1f6a7078911a66 = NULL;

    struct Nuitka_FrameObject *frame_f418b98434a6ab4a3c1f6a7078911a66;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f418b98434a6ab4a3c1f6a7078911a66, codeobj_f418b98434a6ab4a3c1f6a7078911a66, module_Crypto$Random$Fortuna$FortunaGenerator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f418b98434a6ab4a3c1f6a7078911a66 = cache_frame_f418b98434a6ab4a3c1f6a7078911a66;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f418b98434a6ab4a3c1f6a7078911a66 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f418b98434a6ab4a3c1f6a7078911a66 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_key );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_f241d38f9f8cf86ee2a17a16a5d2ea6a;
    frame_f418b98434a6ab4a3c1f6a7078911a66->m_frame.f_lineno = 123;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_AssertionError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 123;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assign_source_1 = par_num_blocks;

    CHECK_OBJECT( tmp_assign_source_1 );
    assert( tmp_comparison_chain_1__operand_2 == NULL );
    Py_INCREF( tmp_assign_source_1 );
    tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;

    // Tried code:
    tmp_compexpr_left_1 = const_int_0;
    tmp_compexpr_right_1 = tmp_comparison_chain_1__operand_2;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_assign_source_2 = RICH_COMPARE_LE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    assert( tmp_comparison_chain_1__comparison_result == NULL );
    tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;

    tmp_cond_value_2 = tmp_comparison_chain_1__comparison_result;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    branch_no_3:;
    tmp_compexpr_left_2 = tmp_comparison_chain_1__operand_2;

    CHECK_OBJECT( tmp_compexpr_left_2 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_max_blocks_per_request );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_outline_return_value_1 = RICH_COMPARE_LE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_outline_return_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaGenerator$$$function_6__generate_blocks );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
    Py_DECREF( tmp_comparison_chain_1__operand_2 );
    tmp_comparison_chain_1__operand_2 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__comparison_result );
    Py_DECREF( tmp_comparison_chain_1__comparison_result );
    tmp_comparison_chain_1__comparison_result = NULL;

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

    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
    Py_DECREF( tmp_comparison_chain_1__operand_2 );
    tmp_comparison_chain_1__operand_2 = NULL;

    Py_XDECREF( tmp_comparison_chain_1__comparison_result );
    tmp_comparison_chain_1__comparison_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaGenerator$$$function_6__generate_blocks );
    return NULL;
    outline_result_1:;
    tmp_cond_value_1 = tmp_outline_return_value_1;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 124;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
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
    exception_lineno = 124;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_assign_source_3 = PyList_New( 0 );
    assert( var_retval == NULL );
    var_retval = tmp_assign_source_3;

    tmp_left_name_1 = par_num_blocks;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = const_int_pos_12;
    tmp_xrange_low_1 = BINARY_OPERATION( PyNumber_Rshift, tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_xrange_low_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
    Py_DECREF( tmp_xrange_low_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_4;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooo";
            exception_lineno = 126;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_assign_source_6 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_6;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_3 = var_retval;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__cipher );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 127;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_encrypt );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 127;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__four_kiblocks_of_zeros );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 127;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    frame_f418b98434a6ab4a3c1f6a7078911a66->m_frame.f_lineno = 127;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 127;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    frame_f418b98434a6ab4a3c1f6a7078911a66->m_frame.f_lineno = 127;
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


        exception_lineno = 127;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_left_name_3 = par_num_blocks;

    CHECK_OBJECT( tmp_left_name_3 );
    tmp_right_name_2 = const_int_pos_4095;
    tmp_left_name_2 = BINARY_OPERATION( PyNumber_And, tmp_left_name_3, tmp_right_name_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_block_size_shift );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 128;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_2, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_remaining_bytes == NULL );
    var_remaining_bytes = tmp_assign_source_7;

    tmp_source_name_8 = var_retval;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_append );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = par_self;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__cipher );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 129;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_encrypt );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 129;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = par_self;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__four_kiblocks_of_zeros );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 129;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_slice_upper_1 = var_remaining_bytes;

    CHECK_OBJECT( tmp_slice_upper_1 );
    tmp_args_element_name_4 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 129;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_f418b98434a6ab4a3c1f6a7078911a66->m_frame.f_lineno = 129;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 129;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_f418b98434a6ab4a3c1f6a7078911a66->m_frame.f_lineno = 129;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain_b );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "b" );
        exception_tb = NULL;

        exception_lineno = 130;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_f418b98434a6ab4a3c1f6a7078911a66->m_frame.f_lineno = 130;
    tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_str_empty_tuple, 0 ) );

    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = var_retval;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_f418b98434a6ab4a3c1f6a7078911a66->m_frame.f_lineno = 130;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_join, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f418b98434a6ab4a3c1f6a7078911a66 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f418b98434a6ab4a3c1f6a7078911a66 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f418b98434a6ab4a3c1f6a7078911a66 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f418b98434a6ab4a3c1f6a7078911a66, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f418b98434a6ab4a3c1f6a7078911a66->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f418b98434a6ab4a3c1f6a7078911a66, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f418b98434a6ab4a3c1f6a7078911a66,
        type_description_1,
        par_self,
        par_num_blocks,
        var_retval,
        var_i,
        var_remaining_bytes
    );


    // Release cached frame.
    if ( frame_f418b98434a6ab4a3c1f6a7078911a66 == cache_frame_f418b98434a6ab4a3c1f6a7078911a66 )
    {
        Py_DECREF( frame_f418b98434a6ab4a3c1f6a7078911a66 );
    }
    cache_frame_f418b98434a6ab4a3c1f6a7078911a66 = NULL;

    assertFrameObject( frame_f418b98434a6ab4a3c1f6a7078911a66 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaGenerator$$$function_6__generate_blocks );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_num_blocks );
    Py_DECREF( par_num_blocks );
    par_num_blocks = NULL;

    CHECK_OBJECT( (PyObject *)var_retval );
    Py_DECREF( var_retval );
    var_retval = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)var_remaining_bytes );
    Py_DECREF( var_remaining_bytes );
    var_remaining_bytes = NULL;

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

    CHECK_OBJECT( (PyObject *)par_num_blocks );
    Py_DECREF( par_num_blocks );
    par_num_blocks = NULL;

    Py_XDECREF( var_retval );
    var_retval = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_remaining_bytes );
    var_remaining_bytes = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaGenerator$$$function_6__generate_blocks );
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



static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaGenerator$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$Fortuna$FortunaGenerator$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e3348b930a1324410d3f8a13dcb47384,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$Fortuna$FortunaGenerator,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaGenerator$$$function_2_reseed(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$Fortuna$FortunaGenerator$$$function_2_reseed,
        const_str_plain_reseed,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_26380498af7c7393f76889665335104f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$Fortuna$FortunaGenerator,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaGenerator$$$function_3_pseudo_random_data(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$Fortuna$FortunaGenerator$$$function_3_pseudo_random_data,
        const_str_plain_pseudo_random_data,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d7fac9a0eb409d86b0ebf493677960b9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$Fortuna$FortunaGenerator,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaGenerator$$$function_4__set_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$Fortuna$FortunaGenerator$$$function_4__set_key,
        const_str_plain__set_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_81960af4a0d982ce48e1d0fd605afc8f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$Fortuna$FortunaGenerator,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaGenerator$$$function_5__pseudo_random_data(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$Fortuna$FortunaGenerator$$$function_5__pseudo_random_data,
        const_str_plain__pseudo_random_data,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_225ed6cc7c9c06fc263968d267211757,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$Fortuna$FortunaGenerator,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaGenerator$$$function_6__generate_blocks(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$Fortuna$FortunaGenerator$$$function_6__generate_blocks,
        const_str_plain__generate_blocks,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f418b98434a6ab4a3c1f6a7078911a66,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$Fortuna$FortunaGenerator,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Crypto$Random$Fortuna$FortunaGenerator =
{
    PyModuleDef_HEAD_INIT,
    "Crypto.Random.Fortuna.FortunaGenerator",   /* m_name */
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

MOD_INIT_DECL( Crypto$Random$Fortuna$FortunaGenerator )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto$Random$Fortuna$FortunaGenerator );
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
    puts("Crypto.Random.Fortuna.FortunaGenerator: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.Random.Fortuna.FortunaGenerator: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initCrypto$Random$Fortuna$FortunaGenerator" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto$Random$Fortuna$FortunaGenerator = Py_InitModule4(
        "Crypto.Random.Fortuna.FortunaGenerator",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Crypto$Random$Fortuna$FortunaGenerator = PyModule_Create( &mdef_Crypto$Random$Fortuna$FortunaGenerator );
#endif

    moduledict_Crypto$Random$Fortuna$FortunaGenerator = MODULE_DICT( module_Crypto$Random$Fortuna$FortunaGenerator );

    CHECK_OBJECT( module_Crypto$Random$Fortuna$FortunaGenerator );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_3c336c1a5c1f954c6312d6497897d776, module_Crypto$Random$Fortuna$FortunaGenerator );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_0_var_block_size = NULL;
    PyObject *outline_0_var_key_size = NULL;
    PyObject *outline_0_var_max_blocks_per_request = NULL;
    PyObject *outline_0_var__four_kiblocks_of_zeros = NULL;
    PyObject *outline_0_var___init__ = NULL;
    PyObject *outline_0_var_reseed = NULL;
    PyObject *outline_0_var_pseudo_random_data = NULL;
    PyObject *outline_0_var__set_key = NULL;
    PyObject *outline_0_var__pseudo_random_data = NULL;
    PyObject *outline_0_var__generate_blocks = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
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
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
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
    PyObject *tmp_dict_key_12;
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
    PyObject *tmp_dict_value_12;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_fromlist_name_8;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_globals_name_8;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_key_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_locals_name_8;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_name_name_8;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_star_imported_1;
    PyObject *tmp_star_imported_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static struct Nuitka_FrameObject *cache_frame_2d2ea4b5d66e9e94ddbe66c541382113_2 = NULL;

    struct Nuitka_FrameObject *frame_2d2ea4b5d66e9e94ddbe66c541382113_2;

    struct Nuitka_FrameObject *frame_b075eaaeb922c0875165fb2a21932a12;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_88a7d4e5c3b3c76e5b2ce5b4b735f8d7;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_10c675d39d154a59cf6207a839b0661f;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain___revision__, tmp_assign_source_4 );
    tmp_name_name_1 = const_str_plain_sys;
    tmp_globals_name_1 = (PyObject *)moduledict_Crypto$Random$Fortuna$FortunaGenerator;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    assert( tmp_assign_source_5 != NULL );
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_5 );
    // Frame without reuse.
    frame_b075eaaeb922c0875165fb2a21932a12 = MAKE_MODULE_FRAME( codeobj_b075eaaeb922c0875165fb2a21932a12, module_Crypto$Random$Fortuna$FortunaGenerator );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_b075eaaeb922c0875165fb2a21932a12 );
    assert( Py_REFCNT( frame_b075eaaeb922c0875165fb2a21932a12 ) == 2 );

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain_sys );

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

        exception_lineno = 28;

        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_2;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    assert( !(tmp_and_left_truth_1 == -1) );
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain_sys );

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

        exception_lineno = 28;

        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_version_info );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_pos_1;
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_int_pos_1;
    tmp_and_right_value_1 = BOOL_FROM( tmp_compexpr_left_2 == tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    assert( !(tmp_cond_truth_1 == -1) );
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
    tmp_globals_name_2 = (PyObject *)moduledict_Crypto$Random$Fortuna$FortunaGenerator;
    tmp_locals_name_2 = (PyObject *)moduledict_Crypto$Random$Fortuna$FortunaGenerator;
    tmp_fromlist_name_2 = const_tuple_str_chr_42_tuple;
    frame_b075eaaeb922c0875165fb2a21932a12->m_frame.f_lineno = 29;
    tmp_star_imported_1 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_Crypto$Random$Fortuna$FortunaGenerator, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_name_name_3 = const_str_digest_391b5dc084c9caede4445b681a10e649;
    tmp_globals_name_3 = (PyObject *)moduledict_Crypto$Random$Fortuna$FortunaGenerator;
    tmp_locals_name_3 = (PyObject *)moduledict_Crypto$Random$Fortuna$FortunaGenerator;
    tmp_fromlist_name_3 = const_tuple_str_chr_42_tuple;
    frame_b075eaaeb922c0875165fb2a21932a12->m_frame.f_lineno = 30;
    tmp_star_imported_2 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
    if ( tmp_star_imported_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_Crypto$Random$Fortuna$FortunaGenerator, true, tmp_star_imported_2 );
    Py_DECREF( tmp_star_imported_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    tmp_name_name_4 = const_str_plain_struct;
    tmp_globals_name_4 = (PyObject *)moduledict_Crypto$Random$Fortuna$FortunaGenerator;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = Py_None;
    frame_b075eaaeb922c0875165fb2a21932a12->m_frame.f_lineno = 32;
    tmp_assign_source_6 = IMPORT_MODULE4( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain_struct, tmp_assign_source_6 );
    tmp_name_name_5 = const_str_digest_9118098c6ddc7d86c17ec1818f00f49b;
    tmp_globals_name_5 = (PyObject *)moduledict_Crypto$Random$Fortuna$FortunaGenerator;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_22352b5d0079cdc7259aaba5da2c204c_tuple;
    frame_b075eaaeb922c0875165fb2a21932a12->m_frame.f_lineno = 34;
    tmp_assign_source_7 = IMPORT_MODULE4( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_7;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_ceil_shift );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain_ceil_shift, tmp_assign_source_8 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_exact_log2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain_exact_log2, tmp_assign_source_9 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_exact_div );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain_exact_div, tmp_assign_source_10 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_name_name_6 = const_str_digest_5a510964c5dbcb6c990bf490c7ddd002;
    tmp_globals_name_6 = (PyObject *)moduledict_Crypto$Random$Fortuna$FortunaGenerator;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_Counter_tuple;
    frame_b075eaaeb922c0875165fb2a21932a12->m_frame.f_lineno = 35;
    tmp_import_name_from_4 = IMPORT_MODULE4( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Counter );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain_Counter, tmp_assign_source_11 );
    tmp_name_name_7 = const_str_digest_3094a3153522c449dea0453cbf4eb75a;
    tmp_globals_name_7 = (PyObject *)moduledict_Crypto$Random$Fortuna$FortunaGenerator;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_AES_tuple;
    frame_b075eaaeb922c0875165fb2a21932a12->m_frame.f_lineno = 36;
    tmp_import_name_from_5 = IMPORT_MODULE4( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_AES );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain_AES, tmp_assign_source_12 );
    tmp_name_name_8 = const_str_plain_SHAd256;
    tmp_globals_name_8 = (PyObject *)moduledict_Crypto$Random$Fortuna$FortunaGenerator;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = Py_None;
    frame_b075eaaeb922c0875165fb2a21932a12->m_frame.f_lineno = 38;
    tmp_assign_source_13 = IMPORT_MODULE4( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain_SHAd256, tmp_assign_source_13 );
    // Tried code:
    tmp_assign_source_15 = const_str_digest_3c336c1a5c1f954c6312d6497897d776;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_15 );
    outline_0_var___module__ = tmp_assign_source_15;

    tmp_assign_source_16 = const_str_digest_ea048b90858221ad9a3ae88147567af0;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_16 );
    outline_0_var___doc__ = tmp_assign_source_16;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2d2ea4b5d66e9e94ddbe66c541382113_2, codeobj_2d2ea4b5d66e9e94ddbe66c541382113, module_Crypto$Random$Fortuna$FortunaGenerator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2d2ea4b5d66e9e94ddbe66c541382113_2 = cache_frame_2d2ea4b5d66e9e94ddbe66c541382113_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2d2ea4b5d66e9e94ddbe66c541382113_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2d2ea4b5d66e9e94ddbe66c541382113_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain_AES );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AES );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "AES" );
        exception_tb = NULL;

        exception_lineno = 50;
        type_description_2 = "ooNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_assign_source_17 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_block_size );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_2 = "ooNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_block_size == NULL );
    outline_0_var_block_size = tmp_assign_source_17;

    tmp_assign_source_18 = const_int_pos_32;
    assert( outline_0_var_key_size == NULL );
    Py_INCREF( tmp_assign_source_18 );
    outline_0_var_key_size = tmp_assign_source_18;

    tmp_assign_source_19 = const_int_pos_65536;
    assert( outline_0_var_max_blocks_per_request == NULL );
    Py_INCREF( tmp_assign_source_19 );
    outline_0_var_max_blocks_per_request = tmp_assign_source_19;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain_b );

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

        exception_lineno = 63;
        type_description_2 = "oooooNNNNNNN";
        goto frame_exception_exit_2;
    }

    frame_2d2ea4b5d66e9e94ddbe66c541382113_2->m_frame.f_lineno = 63;
    tmp_left_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_chr_0_tuple, 0 ) );

    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_2 = "oooooNNNNNNN";
        goto frame_exception_exit_2;
    }
    tmp_right_name_1 = outline_0_var_block_size;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_left_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_2 = "oooooNNNNNNN";
        goto frame_exception_exit_2;
    }
    tmp_right_name_2 = const_int_pos_4096;
    tmp_assign_source_20 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_2 = "oooooNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var__four_kiblocks_of_zeros == NULL );
    outline_0_var__four_kiblocks_of_zeros = tmp_assign_source_20;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d2ea4b5d66e9e94ddbe66c541382113_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d2ea4b5d66e9e94ddbe66c541382113_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2d2ea4b5d66e9e94ddbe66c541382113_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2d2ea4b5d66e9e94ddbe66c541382113_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2d2ea4b5d66e9e94ddbe66c541382113_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2d2ea4b5d66e9e94ddbe66c541382113_2,
        type_description_2,
        outline_0_var___module__,
        outline_0_var___doc__,
        outline_0_var_block_size,
        outline_0_var_key_size,
        outline_0_var_max_blocks_per_request,
        outline_0_var__four_kiblocks_of_zeros,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    );


    // Release cached frame.
    if ( frame_2d2ea4b5d66e9e94ddbe66c541382113_2 == cache_frame_2d2ea4b5d66e9e94ddbe66c541382113_2 )
    {
        Py_DECREF( frame_2d2ea4b5d66e9e94ddbe66c541382113_2 );
    }
    cache_frame_2d2ea4b5d66e9e94ddbe66c541382113_2 = NULL;

    assertFrameObject( frame_2d2ea4b5d66e9e94ddbe66c541382113_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_3;
    skip_nested_handling_1:;
    tmp_assign_source_21 = MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaGenerator$$$function_1___init__(  );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_21;

    tmp_assign_source_22 = MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaGenerator$$$function_2_reseed(  );
    assert( outline_0_var_reseed == NULL );
    outline_0_var_reseed = tmp_assign_source_22;

    tmp_assign_source_23 = MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaGenerator$$$function_3_pseudo_random_data(  );
    assert( outline_0_var_pseudo_random_data == NULL );
    outline_0_var_pseudo_random_data = tmp_assign_source_23;

    tmp_assign_source_24 = MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaGenerator$$$function_4__set_key(  );
    assert( outline_0_var__set_key == NULL );
    outline_0_var__set_key = tmp_assign_source_24;

    tmp_assign_source_25 = MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaGenerator$$$function_5__pseudo_random_data(  );
    assert( outline_0_var__pseudo_random_data == NULL );
    outline_0_var__pseudo_random_data = tmp_assign_source_25;

    tmp_assign_source_26 = MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaGenerator$$$function_6__generate_blocks(  );
    assert( outline_0_var__generate_blocks == NULL );
    outline_0_var__generate_blocks = tmp_assign_source_26;

    tmp_outline_return_value_1 = _PyDict_NewPresized( 12 );
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
    tmp_dict_value_3 = outline_0_var_block_size;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_block_size;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = outline_0_var_key_size;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain_key_size;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = outline_0_var_max_blocks_per_request;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain_max_blocks_per_request;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = outline_0_var__four_kiblocks_of_zeros;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain__four_kiblocks_of_zeros;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = outline_0_var___init__;

    CHECK_OBJECT( tmp_dict_value_7 );
    tmp_dict_key_7 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_8 = outline_0_var_reseed;

    CHECK_OBJECT( tmp_dict_value_8 );
    tmp_dict_key_8 = const_str_plain_reseed;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_9 = outline_0_var_pseudo_random_data;

    CHECK_OBJECT( tmp_dict_value_9 );
    tmp_dict_key_9 = const_str_plain_pseudo_random_data;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_10 = outline_0_var__set_key;

    CHECK_OBJECT( tmp_dict_value_10 );
    tmp_dict_key_10 = const_str_plain__set_key;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_11 = outline_0_var__pseudo_random_data;

    CHECK_OBJECT( tmp_dict_value_11 );
    tmp_dict_key_11 = const_str_plain__pseudo_random_data;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_11, tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_12 = outline_0_var__generate_blocks;

    CHECK_OBJECT( tmp_dict_value_12 );
    tmp_dict_key_12 = const_str_plain__generate_blocks;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_12, tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaGenerator );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___doc__ );
    Py_DECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_block_size );
    Py_DECREF( outline_0_var_block_size );
    outline_0_var_block_size = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_key_size );
    Py_DECREF( outline_0_var_key_size );
    outline_0_var_key_size = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_max_blocks_per_request );
    Py_DECREF( outline_0_var_max_blocks_per_request );
    outline_0_var_max_blocks_per_request = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__four_kiblocks_of_zeros );
    Py_DECREF( outline_0_var__four_kiblocks_of_zeros );
    outline_0_var__four_kiblocks_of_zeros = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___init__ );
    Py_DECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_reseed );
    Py_DECREF( outline_0_var_reseed );
    outline_0_var_reseed = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_pseudo_random_data );
    Py_DECREF( outline_0_var_pseudo_random_data );
    outline_0_var_pseudo_random_data = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__set_key );
    Py_DECREF( outline_0_var__set_key );
    outline_0_var__set_key = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__pseudo_random_data );
    Py_DECREF( outline_0_var__pseudo_random_data );
    outline_0_var__pseudo_random_data = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__generate_blocks );
    Py_DECREF( outline_0_var__generate_blocks );
    outline_0_var__generate_blocks = NULL;

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

    Py_XDECREF( outline_0_var_block_size );
    outline_0_var_block_size = NULL;

    Py_XDECREF( outline_0_var_key_size );
    outline_0_var_key_size = NULL;

    Py_XDECREF( outline_0_var_max_blocks_per_request );
    outline_0_var_max_blocks_per_request = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaGenerator );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 40;
    goto try_except_handler_2;
    outline_result_1:;
    tmp_assign_source_14 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_14;

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
    tmp_assign_source_27 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_27 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_27 );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_27;

    tmp_called_name_2 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_1 = const_str_plain_AESGenerator;
    tmp_args_element_name_2 = const_tuple_type_object_tuple;
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_b075eaaeb922c0875165fb2a21932a12->m_frame.f_lineno = 40;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_28;

    goto try_end_2;
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

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b075eaaeb922c0875165fb2a21932a12 );
#endif
    popFrameStack();

    assertFrameObject( frame_b075eaaeb922c0875165fb2a21932a12 );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b075eaaeb922c0875165fb2a21932a12 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b075eaaeb922c0875165fb2a21932a12, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b075eaaeb922c0875165fb2a21932a12->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b075eaaeb922c0875165fb2a21932a12, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    tmp_assign_source_29 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_29 );
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$Fortuna$FortunaGenerator, (Nuitka_StringObject *)const_str_plain_AESGenerator, tmp_assign_source_29 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;


    return MOD_RETURN_VALUE( module_Crypto$Random$Fortuna$FortunaGenerator );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
