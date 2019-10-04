/* Generated code for Python source for module 'Crypto.Random.Fortuna.FortunaAccumulator'
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

/* The _module_Crypto$Random$Fortuna$FortunaAccumulator is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$Random$Fortuna$FortunaAccumulator;
PyDictObject *moduledict_Crypto$Random$Fortuna$FortunaAccumulator;

/* The module constants used, if any. */
static PyObject *const_tuple_e9e052149f85e694b9edb1f55c0ab8a1_tuple;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_pseudo_random_data;
extern PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
extern PyObject *const_str_plain_decode;
extern PyObject *const_dict_empty;
extern PyObject *const_str_digest_10c675d39d154a59cf6207a839b0661f;
static PyObject *const_str_digest_14ddc1a287e649f18e24a7e28826757f;
extern PyObject *const_tuple_41f70ed433b6a426d4c5af53d3948dac_tuple;
extern PyObject *const_str_plain_warn;
static PyObject *const_str_digest_7db36d3a8cabde83ec761670cfa95736;
extern PyObject *const_str_plain___revision__;
static PyObject *const_tuple_str_plain_self_str_plain_i_tuple;
extern PyObject *const_str_plain_length;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_ClockRewindWarning;
static PyObject *const_str_plain__reseed;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_digest_74ba315069266703540e145c62869e9e;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_tuple_0e0b926137bf6ccce5be23537c5f9ab8_tuple;
static PyObject *const_tuple_str_plain_ClockRewindWarning_tuple;
static PyObject *const_str_plain_min_pool_size;
static PyObject *const_str_plain_generator;
static PyObject *const_str_digest_1a462ea59aeb53ffecd962742cb2cfe2;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_AESGenerator;
static PyObject *const_str_plain_current_time;
extern PyObject *const_str_plain_random_data;
static PyObject *const_str_plain_reseed_interval;
extern PyObject *const_str_plain_retval;
extern PyObject *const_str_plain_digest;
static PyObject *const_str_digest_d1e5f386bbb78d988147e93fbb7ff531;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
extern PyObject *const_tuple_str_plain_b2a_hex_tuple;
extern PyObject *const_str_plain_update;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_1b6131ab064b31e948a537924772a910;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_pool_number;
extern PyObject *const_str_plain_r;
extern PyObject *const_long_pos_1;
static PyObject *const_str_plain_reseed_count;
static PyObject *const_str_plain_FortunaGenerator;
extern PyObject *const_int_pos_255;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain_new;
extern PyObject *const_str_empty;
extern PyObject *const_str_digest_391b5dc084c9caede4445b681a10e649;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_time;
static PyObject *const_str_plain_FortunaPool;
static PyObject *const_float_0_1;
extern PyObject *const_int_pos_32;
static PyObject *const_str_plain_reset;
extern PyObject *const_int_pos_31;
extern PyObject *const_str_plain_bchr;
extern PyObject *const_str_plain_bytes;
extern PyObject *const_str_plain_SHAd256;
static PyObject *const_str_plain_which_pools;
extern PyObject *const_str_plain_add_random_event;
static PyObject *const_str_plain_last_reseed;
static PyObject *const_tuple_str_plain_self_str_plain_bytes_str_plain_current_time_tuple;
extern PyObject *const_str_plain_b2a_hex;
extern PyObject *const_str_plain__h;
static PyObject *const_tuple_str_plain_r_str_plain_retval_str_plain_mask_str_plain_i_tuple;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_FortunaAccumulator;
extern PyObject *const_str_plain_seed;
static PyObject *const_str_digest_f7098eaf0dfc3b4f9b23f0b58ee94f54;
extern PyObject *const_str_digest_9d234be5735c76ce8a4d0c7014a1d635;
extern PyObject *const_int_pos_64;
extern PyObject *const_str_plain_digest_size;
extern PyObject *const_str_plain_hexdigest;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_mask;
extern PyObject *const_str_plain__forget_last_reseed;
extern PyObject *const_int_0;
static PyObject *const_str_plain_source_number;
extern PyObject *const_str_plain_reseed;
static PyObject *const_tuple_2178010f2918cc981b010e7088cae905_tuple;
extern PyObject *const_str_plain___init__;
extern PyObject *const_tuple_str_empty_tuple;
extern PyObject *const_str_plain_binascii;
static PyObject *const_str_plain_pools;
extern PyObject *const_str_plain_append;
extern PyObject *const_tuple_none_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_e9e052149f85e694b9edb1f55c0ab8a1_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_e9e052149f85e694b9edb1f55c0ab8a1_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_source_number = UNSTREAM_STRING( &constant_bin[ 47897 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_e9e052149f85e694b9edb1f55c0ab8a1_tuple, 1, const_str_plain_source_number ); Py_INCREF( const_str_plain_source_number );
    const_str_plain_pool_number = UNSTREAM_STRING( &constant_bin[ 47910 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_e9e052149f85e694b9edb1f55c0ab8a1_tuple, 2, const_str_plain_pool_number ); Py_INCREF( const_str_plain_pool_number );
    PyTuple_SET_ITEM( const_tuple_e9e052149f85e694b9edb1f55c0ab8a1_tuple, 3, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_str_digest_14ddc1a287e649f18e24a7e28826757f = UNSTREAM_STRING( &constant_bin[ 47921 ], 45, 0 );
    const_str_digest_7db36d3a8cabde83ec761670cfa95736 = UNSTREAM_STRING( &constant_bin[ 47966 ], 359, 0 );
    const_tuple_str_plain_self_str_plain_i_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_i_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_i_tuple, 1, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_str_plain__reseed = UNSTREAM_STRING( &constant_bin[ 47958 ], 7, 1 );
    const_tuple_0e0b926137bf6ccce5be23537c5f9ab8_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_0e0b926137bf6ccce5be23537c5f9ab8_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_current_time = UNSTREAM_STRING( &constant_bin[ 48325 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_0e0b926137bf6ccce5be23537c5f9ab8_tuple, 1, const_str_plain_current_time ); Py_INCREF( const_str_plain_current_time );
    PyTuple_SET_ITEM( const_tuple_0e0b926137bf6ccce5be23537c5f9ab8_tuple, 2, const_str_plain_seed ); Py_INCREF( const_str_plain_seed );
    PyTuple_SET_ITEM( const_tuple_0e0b926137bf6ccce5be23537c5f9ab8_tuple, 3, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_tuple_str_plain_ClockRewindWarning_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ClockRewindWarning_tuple, 0, const_str_plain_ClockRewindWarning ); Py_INCREF( const_str_plain_ClockRewindWarning );
    const_str_plain_min_pool_size = UNSTREAM_STRING( &constant_bin[ 48337 ], 13, 1 );
    const_str_plain_generator = UNSTREAM_STRING( &constant_bin[ 30454 ], 9, 1 );
    const_str_digest_1a462ea59aeb53ffecd962742cb2cfe2 = UNSTREAM_STRING( &constant_bin[ 48350 ], 76, 0 );
    const_str_plain_reseed_interval = UNSTREAM_STRING( &constant_bin[ 48426 ], 15, 1 );
    const_str_digest_d1e5f386bbb78d988147e93fbb7ff531 = UNSTREAM_STRING( &constant_bin[ 48441 ], 49, 0 );
    const_str_digest_1b6131ab064b31e948a537924772a910 = UNSTREAM_STRING( &constant_bin[ 48490 ], 319, 0 );
    const_str_plain_reseed_count = UNSTREAM_STRING( &constant_bin[ 48809 ], 12, 1 );
    const_str_plain_FortunaGenerator = UNSTREAM_STRING( &constant_bin[ 48821 ], 16, 1 );
    const_str_plain_FortunaPool = UNSTREAM_STRING( &constant_bin[ 48837 ], 11, 1 );
    const_float_0_1 = UNSTREAM_FLOAT( &constant_bin[ 48848 ] );
    const_str_plain_reset = UNSTREAM_STRING( &constant_bin[ 48201 ], 5, 1 );
    const_str_plain_which_pools = UNSTREAM_STRING( &constant_bin[ 48856 ], 11, 1 );
    const_str_plain_last_reseed = UNSTREAM_STRING( &constant_bin[ 47954 ], 11, 1 );
    const_tuple_str_plain_self_str_plain_bytes_str_plain_current_time_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bytes_str_plain_current_time_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bytes_str_plain_current_time_tuple, 1, const_str_plain_bytes ); Py_INCREF( const_str_plain_bytes );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bytes_str_plain_current_time_tuple, 2, const_str_plain_current_time ); Py_INCREF( const_str_plain_current_time );
    const_tuple_str_plain_r_str_plain_retval_str_plain_mask_str_plain_i_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_r_str_plain_retval_str_plain_mask_str_plain_i_tuple, 0, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_str_plain_r_str_plain_retval_str_plain_mask_str_plain_i_tuple, 1, const_str_plain_retval ); Py_INCREF( const_str_plain_retval );
    PyTuple_SET_ITEM( const_tuple_str_plain_r_str_plain_retval_str_plain_mask_str_plain_i_tuple, 2, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    PyTuple_SET_ITEM( const_tuple_str_plain_r_str_plain_retval_str_plain_mask_str_plain_i_tuple, 3, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_str_digest_f7098eaf0dfc3b4f9b23f0b58ee94f54 = UNSTREAM_STRING( &constant_bin[ 48449 ], 40, 0 );
    const_tuple_2178010f2918cc981b010e7088cae905_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_2178010f2918cc981b010e7088cae905_tuple, 0, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_2178010f2918cc981b010e7088cae905_tuple, 1, const_str_plain___doc__ ); Py_INCREF( const_str_plain___doc__ );
    PyTuple_SET_ITEM( const_tuple_2178010f2918cc981b010e7088cae905_tuple, 2, const_str_plain_digest_size ); Py_INCREF( const_str_plain_digest_size );
    PyTuple_SET_ITEM( const_tuple_2178010f2918cc981b010e7088cae905_tuple, 3, const_str_plain___init__ ); Py_INCREF( const_str_plain___init__ );
    PyTuple_SET_ITEM( const_tuple_2178010f2918cc981b010e7088cae905_tuple, 4, const_str_plain_append ); Py_INCREF( const_str_plain_append );
    PyTuple_SET_ITEM( const_tuple_2178010f2918cc981b010e7088cae905_tuple, 5, const_str_plain_digest ); Py_INCREF( const_str_plain_digest );
    PyTuple_SET_ITEM( const_tuple_2178010f2918cc981b010e7088cae905_tuple, 6, const_str_plain_hexdigest ); Py_INCREF( const_str_plain_hexdigest );
    PyTuple_SET_ITEM( const_tuple_2178010f2918cc981b010e7088cae905_tuple, 7, const_str_plain_reset ); Py_INCREF( const_str_plain_reset );
    const_str_plain_pools = UNSTREAM_STRING( &constant_bin[ 48507 ], 5, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Crypto$Random$Fortuna$FortunaAccumulator( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_9d68461763d5da0fd4837904cde044b1;
static PyCodeObject *codeobj_bf91cd337ec1fa2d730f48e6626b90a8;
static PyCodeObject *codeobj_7ef4bcafc4cd219b94d4da0c6a0b5cef;
static PyCodeObject *codeobj_b316436654baf0a75aa94cdaa555cb1c;
static PyCodeObject *codeobj_67cca645113dac19b94334e84b13fa47;
static PyCodeObject *codeobj_43e43fd8e32ca1c71393c3075a655873;
static PyCodeObject *codeobj_878534275107844f03121182da227b93;
static PyCodeObject *codeobj_de4328562c82d91a37cd4f1653019ef5;
static PyCodeObject *codeobj_d16f73919cd6aa32c9321baa06b6e053;
static PyCodeObject *codeobj_3214a4157b030b8def060ed4698eb284;
static PyCodeObject *codeobj_cd520d532355d1727741317dcb745c58;
static PyCodeObject *codeobj_49f2f35748dc1b12fa2cf103cde97b0c;
static PyCodeObject *codeobj_ef2c0e0370073d7fcd3d58ae904ac442;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_1a462ea59aeb53ffecd962742cb2cfe2;
    codeobj_9d68461763d5da0fd4837904cde044b1 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_d1e5f386bbb78d988147e93fbb7ff531, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_bf91cd337ec1fa2d730f48e6626b90a8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_FortunaPool, 41, const_tuple_2178010f2918cc981b010e7088cae905_tuple, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_7ef4bcafc4cd219b94d4da0c6a0b5cef = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 54, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b316436654baf0a75aa94cdaa555cb1c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 117, const_tuple_str_plain_self_str_plain_i_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_67cca645113dac19b94334e84b13fa47 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__forget_last_reseed, 129, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_43e43fd8e32ca1c71393c3075a655873 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__reseed, 150, const_tuple_0e0b926137bf6ccce5be23537c5f9ab8_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_878534275107844f03121182da227b93 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_random_event, 163, const_tuple_e9e052149f85e694b9edb1f55c0ab8a1_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_de4328562c82d91a37cd4f1653019ef5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_append, 57, const_tuple_str_plain_self_str_plain_data_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d16f73919cd6aa32c9321baa06b6e053 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_digest, 61, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3214a4157b030b8def060ed4698eb284 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hexdigest, 64, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cd520d532355d1727741317dcb745c58 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_random_data, 138, const_tuple_str_plain_self_str_plain_bytes_str_plain_current_time_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_49f2f35748dc1b12fa2cf103cde97b0c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset, 70, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ef2c0e0370073d7fcd3d58ae904ac442 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_which_pools, 74, const_tuple_str_plain_r_str_plain_retval_str_plain_mask_str_plain_i_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_10__reseed( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_11_add_random_event(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_2_append(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_3_digest(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_4_hexdigest(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_5_reset(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_6_which_pools(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_7___init__(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_8__forget_last_reseed(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_9_random_data(  );


// The module function definitions.
static PyObject *impl_Crypto$Random$Fortuna$FortunaAccumulator$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_7ef4bcafc4cd219b94d4da0c6a0b5cef = NULL;

    struct Nuitka_FrameObject *frame_7ef4bcafc4cd219b94d4da0c6a0b5cef;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7ef4bcafc4cd219b94d4da0c6a0b5cef, codeobj_7ef4bcafc4cd219b94d4da0c6a0b5cef, module_Crypto$Random$Fortuna$FortunaAccumulator, sizeof(void *) );
    frame_7ef4bcafc4cd219b94d4da0c6a0b5cef = cache_frame_7ef4bcafc4cd219b94d4da0c6a0b5cef;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7ef4bcafc4cd219b94d4da0c6a0b5cef );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7ef4bcafc4cd219b94d4da0c6a0b5cef ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_7ef4bcafc4cd219b94d4da0c6a0b5cef->m_frame.f_lineno = 55;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_reset );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ef4bcafc4cd219b94d4da0c6a0b5cef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ef4bcafc4cd219b94d4da0c6a0b5cef );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7ef4bcafc4cd219b94d4da0c6a0b5cef, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7ef4bcafc4cd219b94d4da0c6a0b5cef->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7ef4bcafc4cd219b94d4da0c6a0b5cef, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7ef4bcafc4cd219b94d4da0c6a0b5cef,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_7ef4bcafc4cd219b94d4da0c6a0b5cef == cache_frame_7ef4bcafc4cd219b94d4da0c6a0b5cef )
    {
        Py_DECREF( frame_7ef4bcafc4cd219b94d4da0c6a0b5cef );
    }
    cache_frame_7ef4bcafc4cd219b94d4da0c6a0b5cef = NULL;

    assertFrameObject( frame_7ef4bcafc4cd219b94d4da0c6a0b5cef );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_1___init__ );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_1___init__ );
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


static PyObject *impl_Crypto$Random$Fortuna$FortunaAccumulator$$$function_2_append( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_isnot_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_de4328562c82d91a37cd4f1653019ef5 = NULL;

    struct Nuitka_FrameObject *frame_de4328562c82d91a37cd4f1653019ef5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_de4328562c82d91a37cd4f1653019ef5, codeobj_de4328562c82d91a37cd4f1653019ef5, module_Crypto$Random$Fortuna$FortunaAccumulator, sizeof(void *)+sizeof(void *) );
    frame_de4328562c82d91a37cd4f1653019ef5 = cache_frame_de4328562c82d91a37cd4f1653019ef5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_de4328562c82d91a37cd4f1653019ef5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_de4328562c82d91a37cd4f1653019ef5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__h );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_data;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_de4328562c82d91a37cd4f1653019ef5->m_frame.f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_update, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_length );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( tmp_inplace_assign_attr_1__start == NULL );
    tmp_inplace_assign_attr_1__start = tmp_assign_source_1;

    // Tried code:
    tmp_left_name_1 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_len_arg_1 = par_data;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    assert( tmp_inplace_assign_attr_1__end == NULL );
    tmp_inplace_assign_attr_1__end = tmp_assign_source_2;

    // Tried code:
    tmp_compare_left_1 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = tmp_inplace_assign_attr_1__end;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_length, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }
    branch_no_1:;
    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_de4328562c82d91a37cd4f1653019ef5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_de4328562c82d91a37cd4f1653019ef5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_de4328562c82d91a37cd4f1653019ef5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_de4328562c82d91a37cd4f1653019ef5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_de4328562c82d91a37cd4f1653019ef5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_de4328562c82d91a37cd4f1653019ef5,
        type_description_1,
        par_self,
        par_data
    );


    // Release cached frame.
    if ( frame_de4328562c82d91a37cd4f1653019ef5 == cache_frame_de4328562c82d91a37cd4f1653019ef5 )
    {
        Py_DECREF( frame_de4328562c82d91a37cd4f1653019ef5 );
    }
    cache_frame_de4328562c82d91a37cd4f1653019ef5 = NULL;

    assertFrameObject( frame_de4328562c82d91a37cd4f1653019ef5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_2_append );
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

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_2_append );
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


static PyObject *impl_Crypto$Random$Fortuna$FortunaAccumulator$$$function_3_digest( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_d16f73919cd6aa32c9321baa06b6e053 = NULL;

    struct Nuitka_FrameObject *frame_d16f73919cd6aa32c9321baa06b6e053;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d16f73919cd6aa32c9321baa06b6e053, codeobj_d16f73919cd6aa32c9321baa06b6e053, module_Crypto$Random$Fortuna$FortunaAccumulator, sizeof(void *) );
    frame_d16f73919cd6aa32c9321baa06b6e053 = cache_frame_d16f73919cd6aa32c9321baa06b6e053;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d16f73919cd6aa32c9321baa06b6e053 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d16f73919cd6aa32c9321baa06b6e053 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__h );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_d16f73919cd6aa32c9321baa06b6e053->m_frame.f_lineno = 62;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_digest );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d16f73919cd6aa32c9321baa06b6e053 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d16f73919cd6aa32c9321baa06b6e053 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d16f73919cd6aa32c9321baa06b6e053 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d16f73919cd6aa32c9321baa06b6e053, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d16f73919cd6aa32c9321baa06b6e053->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d16f73919cd6aa32c9321baa06b6e053, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d16f73919cd6aa32c9321baa06b6e053,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_d16f73919cd6aa32c9321baa06b6e053 == cache_frame_d16f73919cd6aa32c9321baa06b6e053 )
    {
        Py_DECREF( frame_d16f73919cd6aa32c9321baa06b6e053 );
    }
    cache_frame_d16f73919cd6aa32c9321baa06b6e053 = NULL;

    assertFrameObject( frame_d16f73919cd6aa32c9321baa06b6e053 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_3_digest );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_3_digest );
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


static PyObject *impl_Crypto$Random$Fortuna$FortunaAccumulator$$$function_4_hexdigest( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_3214a4157b030b8def060ed4698eb284 = NULL;

    struct Nuitka_FrameObject *frame_3214a4157b030b8def060ed4698eb284;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3214a4157b030b8def060ed4698eb284, codeobj_3214a4157b030b8def060ed4698eb284, module_Crypto$Random$Fortuna$FortunaAccumulator, sizeof(void *) );
    frame_3214a4157b030b8def060ed4698eb284 = cache_frame_3214a4157b030b8def060ed4698eb284;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3214a4157b030b8def060ed4698eb284 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3214a4157b030b8def060ed4698eb284 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 65;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "o";
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
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_2;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 65;
        type_description_1 = "o";
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_b2a_hex );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b2a_hex );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "b2a_hex" );
        exception_tb = NULL;

        exception_lineno = 66;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_3214a4157b030b8def060ed4698eb284->m_frame.f_lineno = 66;
    tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_digest );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_3214a4157b030b8def060ed4698eb284->m_frame.f_lineno = 66;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_b2a_hex );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b2a_hex );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "b2a_hex" );
        exception_tb = NULL;

        exception_lineno = 68;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_3 = par_self;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_3214a4157b030b8def060ed4698eb284->m_frame.f_lineno = 68;
    tmp_args_element_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_digest );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_3214a4157b030b8def060ed4698eb284->m_frame.f_lineno = 68;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_called_instance_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_3214a4157b030b8def060ed4698eb284->m_frame.f_lineno = 68;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_decode );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3214a4157b030b8def060ed4698eb284 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3214a4157b030b8def060ed4698eb284 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3214a4157b030b8def060ed4698eb284 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3214a4157b030b8def060ed4698eb284, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3214a4157b030b8def060ed4698eb284->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3214a4157b030b8def060ed4698eb284, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3214a4157b030b8def060ed4698eb284,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_3214a4157b030b8def060ed4698eb284 == cache_frame_3214a4157b030b8def060ed4698eb284 )
    {
        Py_DECREF( frame_3214a4157b030b8def060ed4698eb284 );
    }
    cache_frame_3214a4157b030b8def060ed4698eb284 = NULL;

    assertFrameObject( frame_3214a4157b030b8def060ed4698eb284 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_4_hexdigest );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_4_hexdigest );
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


static PyObject *impl_Crypto$Random$Fortuna$FortunaAccumulator$$$function_5_reset( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_called_instance_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_49f2f35748dc1b12fa2cf103cde97b0c = NULL;

    struct Nuitka_FrameObject *frame_49f2f35748dc1b12fa2cf103cde97b0c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_49f2f35748dc1b12fa2cf103cde97b0c, codeobj_49f2f35748dc1b12fa2cf103cde97b0c, module_Crypto$Random$Fortuna$FortunaAccumulator, sizeof(void *) );
    frame_49f2f35748dc1b12fa2cf103cde97b0c = cache_frame_49f2f35748dc1b12fa2cf103cde97b0c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_49f2f35748dc1b12fa2cf103cde97b0c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_49f2f35748dc1b12fa2cf103cde97b0c ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_SHAd256 );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SHAd256 );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SHAd256" );
        exception_tb = NULL;

        exception_lineno = 71;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_49f2f35748dc1b12fa2cf103cde97b0c->m_frame.f_lineno = 71;
    tmp_assattr_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_new );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__h, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 71;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_assattr_name_2 = const_int_0;
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_length, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_49f2f35748dc1b12fa2cf103cde97b0c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_49f2f35748dc1b12fa2cf103cde97b0c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_49f2f35748dc1b12fa2cf103cde97b0c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_49f2f35748dc1b12fa2cf103cde97b0c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_49f2f35748dc1b12fa2cf103cde97b0c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_49f2f35748dc1b12fa2cf103cde97b0c,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_49f2f35748dc1b12fa2cf103cde97b0c == cache_frame_49f2f35748dc1b12fa2cf103cde97b0c )
    {
        Py_DECREF( frame_49f2f35748dc1b12fa2cf103cde97b0c );
    }
    cache_frame_49f2f35748dc1b12fa2cf103cde97b0c = NULL;

    assertFrameObject( frame_49f2f35748dc1b12fa2cf103cde97b0c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_5_reset );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_5_reset );
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


static PyObject *impl_Crypto$Random$Fortuna$FortunaAccumulator$$$function_6_which_pools( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_r = python_pars[ 0 ];
    PyObject *var_retval = NULL;
    PyObject *var_mask = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_instance_1;
    int tmp_cmp_Eq_1;
    int tmp_cmp_GtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ef2c0e0370073d7fcd3d58ae904ac442 = NULL;

    struct Nuitka_FrameObject *frame_ef2c0e0370073d7fcd3d58ae904ac442;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ef2c0e0370073d7fcd3d58ae904ac442, codeobj_ef2c0e0370073d7fcd3d58ae904ac442, module_Crypto$Random$Fortuna$FortunaAccumulator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ef2c0e0370073d7fcd3d58ae904ac442 = cache_frame_ef2c0e0370073d7fcd3d58ae904ac442;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ef2c0e0370073d7fcd3d58ae904ac442 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ef2c0e0370073d7fcd3d58ae904ac442 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_r;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oooo";
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
    exception_lineno = 83;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_retval == NULL );
    var_retval = tmp_assign_source_1;

    tmp_assign_source_2 = const_int_0;
    assert( var_mask == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_mask = tmp_assign_source_2;

    tmp_iter_arg_1 = const_tuple_41f70ed433b6a426d4c5af53d3948dac_tuple;
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    assert( tmp_assign_source_3 != NULL );
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
            exception_lineno = 86;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_5;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_left_name_1 = par_r;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = var_mask;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "mask" );
        exception_tb = NULL;

        exception_lineno = 88;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_compare_left_2 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 88;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_instance_1 = var_retval;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = var_i;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_ef2c0e0370073d7fcd3d58ae904ac442->m_frame.f_lineno = 89;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_append, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_2;
    branch_no_2:;
    goto loop_end_1;
    branch_end_2:;
    tmp_left_name_3 = var_mask;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "mask" );
        exception_tb = NULL;

        exception_lineno = 92;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_right_name_2 = const_int_pos_1;
    tmp_left_name_2 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_3, tmp_right_name_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_right_name_3 = const_long_pos_1;
    tmp_assign_source_6 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_2, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_mask;
        var_mask = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oooo";
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef2c0e0370073d7fcd3d58ae904ac442 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef2c0e0370073d7fcd3d58ae904ac442 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ef2c0e0370073d7fcd3d58ae904ac442, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ef2c0e0370073d7fcd3d58ae904ac442->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ef2c0e0370073d7fcd3d58ae904ac442, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ef2c0e0370073d7fcd3d58ae904ac442,
        type_description_1,
        par_r,
        var_retval,
        var_mask,
        var_i
    );


    // Release cached frame.
    if ( frame_ef2c0e0370073d7fcd3d58ae904ac442 == cache_frame_ef2c0e0370073d7fcd3d58ae904ac442 )
    {
        Py_DECREF( frame_ef2c0e0370073d7fcd3d58ae904ac442 );
    }
    cache_frame_ef2c0e0370073d7fcd3d58ae904ac442 = NULL;

    assertFrameObject( frame_ef2c0e0370073d7fcd3d58ae904ac442 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = var_retval;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_6_which_pools );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    CHECK_OBJECT( (PyObject *)var_retval );
    Py_DECREF( var_retval );
    var_retval = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

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

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    Py_XDECREF( var_retval );
    var_retval = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_6_which_pools );
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


static PyObject *impl_Crypto$Random$Fortuna$FortunaAccumulator$$$function_7___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_i = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static struct Nuitka_FrameObject *cache_frame_b316436654baf0a75aa94cdaa555cb1c = NULL;

    struct Nuitka_FrameObject *frame_b316436654baf0a75aa94cdaa555cb1c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b316436654baf0a75aa94cdaa555cb1c, codeobj_b316436654baf0a75aa94cdaa555cb1c, module_Crypto$Random$Fortuna$FortunaAccumulator, sizeof(void *)+sizeof(void *) );
    frame_b316436654baf0a75aa94cdaa555cb1c = cache_frame_b316436654baf0a75aa94cdaa555cb1c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b316436654baf0a75aa94cdaa555cb1c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b316436654baf0a75aa94cdaa555cb1c ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = const_int_0;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_reseed_count, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_FortunaGenerator );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FortunaGenerator );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "FortunaGenerator" );
        exception_tb = NULL;

        exception_lineno = 119;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_b316436654baf0a75aa94cdaa555cb1c->m_frame.f_lineno = 119;
    tmp_assattr_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_AESGenerator );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_generator, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 119;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_assattr_name_3 = Py_None;
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_last_reseed, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = const_tuple_41f70ed433b6a426d4c5af53d3948dac_tuple;
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    assert( tmp_assign_source_1 != NULL );
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_1;

    tmp_assign_source_2 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_2;

    // Tried code:
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
            exception_lineno = 126;
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
        PyObject *old = var_i;
        var_i = tmp_assign_source_4;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_FortunaPool );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FortunaPool );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "FortunaPool" );
        exception_tb = NULL;

        exception_lineno = 126;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    frame_b316436654baf0a75aa94cdaa555cb1c->m_frame.f_lineno = 126;
    tmp_append_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
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


        exception_lineno = 126;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_7___init__ );
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

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
    Py_DECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
    Py_DECREF( tmp_list_contraction_1__contraction_result );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_7___init__ );
    return NULL;
    outline_result_1:;
    tmp_assattr_name_4 = tmp_outline_return_value_1;
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_pools, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 126;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pools );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_pools );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 127;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_pos_1;
    tmp_compare_right_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 127;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 127;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b316436654baf0a75aa94cdaa555cb1c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b316436654baf0a75aa94cdaa555cb1c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b316436654baf0a75aa94cdaa555cb1c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b316436654baf0a75aa94cdaa555cb1c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b316436654baf0a75aa94cdaa555cb1c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b316436654baf0a75aa94cdaa555cb1c,
        type_description_1,
        par_self,
        var_i
    );


    // Release cached frame.
    if ( frame_b316436654baf0a75aa94cdaa555cb1c == cache_frame_b316436654baf0a75aa94cdaa555cb1c )
    {
        Py_DECREF( frame_b316436654baf0a75aa94cdaa555cb1c );
    }
    cache_frame_b316436654baf0a75aa94cdaa555cb1c = NULL;

    assertFrameObject( frame_b316436654baf0a75aa94cdaa555cb1c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_7___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_7___init__ );
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


static PyObject *impl_Crypto$Random$Fortuna$FortunaAccumulator$$$function_8__forget_last_reseed( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_67cca645113dac19b94334e84b13fa47 = NULL;

    struct Nuitka_FrameObject *frame_67cca645113dac19b94334e84b13fa47;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_67cca645113dac19b94334e84b13fa47, codeobj_67cca645113dac19b94334e84b13fa47, module_Crypto$Random$Fortuna$FortunaAccumulator, sizeof(void *) );
    frame_67cca645113dac19b94334e84b13fa47 = cache_frame_67cca645113dac19b94334e84b13fa47;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_67cca645113dac19b94334e84b13fa47 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_67cca645113dac19b94334e84b13fa47 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_last_reseed, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67cca645113dac19b94334e84b13fa47 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67cca645113dac19b94334e84b13fa47 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_67cca645113dac19b94334e84b13fa47, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_67cca645113dac19b94334e84b13fa47->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_67cca645113dac19b94334e84b13fa47, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_67cca645113dac19b94334e84b13fa47,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_67cca645113dac19b94334e84b13fa47 == cache_frame_67cca645113dac19b94334e84b13fa47 )
    {
        Py_DECREF( frame_67cca645113dac19b94334e84b13fa47 );
    }
    cache_frame_67cca645113dac19b94334e84b13fa47 = NULL;

    assertFrameObject( frame_67cca645113dac19b94334e84b13fa47 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_8__forget_last_reseed );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_8__forget_last_reseed );
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


static PyObject *impl_Crypto$Random$Fortuna$FortunaAccumulator$$$function_9_random_data( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_bytes = python_pars[ 1 ];
    PyObject *var_current_time = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_left_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_cd520d532355d1727741317dcb745c58 = NULL;

    struct Nuitka_FrameObject *frame_cd520d532355d1727741317dcb745c58;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cd520d532355d1727741317dcb745c58, codeobj_cd520d532355d1727741317dcb745c58, module_Crypto$Random$Fortuna$FortunaAccumulator, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cd520d532355d1727741317dcb745c58 = cache_frame_cd520d532355d1727741317dcb745c58;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cd520d532355d1727741317dcb745c58 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cd520d532355d1727741317dcb745c58 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "time" );
        exception_tb = NULL;

        exception_lineno = 139;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_cd520d532355d1727741317dcb745c58->m_frame.f_lineno = 139;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_time );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_current_time == NULL );
    var_current_time = tmp_assign_source_1;

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_last_reseed );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 != tmp_compexpr_right_1 );
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
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_last_reseed );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = var_current_time;

    CHECK_OBJECT( tmp_compexpr_right_2 );
    tmp_and_right_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 140;
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
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "warnings" );
        exception_tb = NULL;

        exception_lineno = 141;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_warn );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_14ddc1a287e649f18e24a7e28826757f;
    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_ClockRewindWarning );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ClockRewindWarning );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ClockRewindWarning" );
        exception_tb = NULL;

        exception_lineno = 141;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_cd520d532355d1727741317dcb745c58->m_frame.f_lineno = 141;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_last_reseed, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_pools );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_source_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_length );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_min_pool_size );
    if ( tmp_compexpr_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_3 );

        exception_lineno = 143;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_2 = RICH_COMPARE_GE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    Py_DECREF( tmp_compexpr_right_3 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 145;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    Py_DECREF( tmp_and_left_value_2 );
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_last_reseed );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_4 = Py_None;
    tmp_or_left_value_1 = BOOL_FROM( tmp_compexpr_left_4 == tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    assert( !(tmp_or_left_truth_1 == -1) );
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_compexpr_left_5 = var_current_time;

    CHECK_OBJECT( tmp_compexpr_left_5 );
    tmp_source_name_8 = par_self;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_last_reseed );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = par_self;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_reseed_interval );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 145;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_5 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_compexpr_right_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    Py_DECREF( tmp_compexpr_right_5 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_2 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_and_right_value_2 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_value_2 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_cond_value_2 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 145;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
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
    tmp_called_instance_2 = par_self;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_3 = var_current_time;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_cd520d532355d1727741317dcb745c58->m_frame.f_lineno = 146;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__reseed, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_source_name_10 = par_self;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_generator );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_bytes;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_cd520d532355d1727741317dcb745c58->m_frame.f_lineno = 148;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_pseudo_random_data, call_args );
    }

    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd520d532355d1727741317dcb745c58 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd520d532355d1727741317dcb745c58 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd520d532355d1727741317dcb745c58 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cd520d532355d1727741317dcb745c58, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cd520d532355d1727741317dcb745c58->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cd520d532355d1727741317dcb745c58, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cd520d532355d1727741317dcb745c58,
        type_description_1,
        par_self,
        par_bytes,
        var_current_time
    );


    // Release cached frame.
    if ( frame_cd520d532355d1727741317dcb745c58 == cache_frame_cd520d532355d1727741317dcb745c58 )
    {
        Py_DECREF( frame_cd520d532355d1727741317dcb745c58 );
    }
    cache_frame_cd520d532355d1727741317dcb745c58 = NULL;

    assertFrameObject( frame_cd520d532355d1727741317dcb745c58 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_9_random_data );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_bytes );
    Py_DECREF( par_bytes );
    par_bytes = NULL;

    CHECK_OBJECT( (PyObject *)var_current_time );
    Py_DECREF( var_current_time );
    var_current_time = NULL;

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

    CHECK_OBJECT( (PyObject *)par_bytes );
    Py_DECREF( par_bytes );
    par_bytes = NULL;

    Py_XDECREF( var_current_time );
    var_current_time = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_9_random_data );
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


static PyObject *impl_Crypto$Random$Fortuna$FortunaAccumulator$$$function_10__reseed( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_current_time = python_pars[ 1 ];
    PyObject *var_seed = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    bool tmp_is_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_43e43fd8e32ca1c71393c3075a655873 = NULL;

    struct Nuitka_FrameObject *frame_43e43fd8e32ca1c71393c3075a655873;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_43e43fd8e32ca1c71393c3075a655873, codeobj_43e43fd8e32ca1c71393c3075a655873, module_Crypto$Random$Fortuna$FortunaAccumulator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_43e43fd8e32ca1c71393c3075a655873 = cache_frame_43e43fd8e32ca1c71393c3075a655873;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_43e43fd8e32ca1c71393c3075a655873 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_43e43fd8e32ca1c71393c3075a655873 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_current_time;

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
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "time" );
        exception_tb = NULL;

        exception_lineno = 152;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_43e43fd8e32ca1c71393c3075a655873->m_frame.f_lineno = 152;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_time );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_current_time;
        assert( old != NULL );
        par_current_time = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_assign_source_2 = PyList_New( 0 );
    assert( var_seed == NULL );
    var_seed = tmp_assign_source_2;

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_reseed_count );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_inplace_assign_attr_1__start == NULL );
    tmp_inplace_assign_attr_1__start = tmp_assign_source_3;

    // Tried code:
    tmp_left_name_1 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = const_int_pos_1;
    tmp_assign_source_4 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( tmp_inplace_assign_attr_1__end == NULL );
    tmp_inplace_assign_attr_1__end = tmp_assign_source_4;

    // Tried code:
    tmp_compare_left_2 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = tmp_inplace_assign_attr_1__end;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_reseed_count, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    branch_no_2:;
    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    tmp_assattr_name_2 = par_current_time;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_last_reseed, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_which_pools );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_which_pools );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "which_pools" );
        exception_tb = NULL;

        exception_lineno = 156;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_reseed_count );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_43e43fd8e32ca1c71393c3075a655873->m_frame.f_lineno = 156;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_5;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
            exception_lineno = 156;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_assign_source_7 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_7 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_7;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_3 = var_seed;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_pools );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 157;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    tmp_subscript_name_1 = var_i;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_called_instance_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 157;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    frame_43e43fd8e32ca1c71393c3075a655873->m_frame.f_lineno = 157;
    tmp_args_element_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_digest );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 157;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    frame_43e43fd8e32ca1c71393c3075a655873->m_frame.f_lineno = 157;
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


        exception_lineno = 157;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_pools );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    tmp_subscript_name_2 = var_i;

    CHECK_OBJECT( tmp_subscript_name_2 );
    tmp_called_instance_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    frame_43e43fd8e32ca1c71393c3075a655873->m_frame.f_lineno = 158;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_reset );
    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_b );

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

        exception_lineno = 160;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_43e43fd8e32ca1c71393c3075a655873->m_frame.f_lineno = 160;
    tmp_called_instance_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_empty_tuple, 0 ) );

    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_seed;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_43e43fd8e32ca1c71393c3075a655873->m_frame.f_lineno = 160;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_join, call_args );
    }

    Py_DECREF( tmp_called_instance_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_seed;
        assert( old != NULL );
        var_seed = tmp_assign_source_8;
        Py_DECREF( old );
    }

    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_generator );
    if ( tmp_called_instance_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_seed;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_43e43fd8e32ca1c71393c3075a655873->m_frame.f_lineno = 161;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_reseed, call_args );
    }

    Py_DECREF( tmp_called_instance_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_43e43fd8e32ca1c71393c3075a655873 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_43e43fd8e32ca1c71393c3075a655873 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_43e43fd8e32ca1c71393c3075a655873, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_43e43fd8e32ca1c71393c3075a655873->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_43e43fd8e32ca1c71393c3075a655873, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_43e43fd8e32ca1c71393c3075a655873,
        type_description_1,
        par_self,
        par_current_time,
        var_seed,
        var_i
    );


    // Release cached frame.
    if ( frame_43e43fd8e32ca1c71393c3075a655873 == cache_frame_43e43fd8e32ca1c71393c3075a655873 )
    {
        Py_DECREF( frame_43e43fd8e32ca1c71393c3075a655873 );
    }
    cache_frame_43e43fd8e32ca1c71393c3075a655873 = NULL;

    assertFrameObject( frame_43e43fd8e32ca1c71393c3075a655873 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_10__reseed );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_current_time );
    Py_DECREF( par_current_time );
    par_current_time = NULL;

    CHECK_OBJECT( (PyObject *)var_seed );
    Py_DECREF( var_seed );
    var_seed = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_current_time );
    par_current_time = NULL;

    Py_XDECREF( var_seed );
    var_seed = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_10__reseed );
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


static PyObject *impl_Crypto$Random$Fortuna$FortunaAccumulator$$$function_11_add_random_event( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_source_number = python_pars[ 1 ];
    PyObject *par_pool_number = python_pars[ 2 ];
    PyObject *par_data = python_pars[ 3 ];
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_comparison_chain_2__comparison_result = NULL;
    PyObject *tmp_comparison_chain_2__operand_2 = NULL;
    PyObject *tmp_comparison_chain_3__comparison_result = NULL;
    PyObject *tmp_comparison_chain_3__operand_2 = NULL;
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_878534275107844f03121182da227b93 = NULL;

    struct Nuitka_FrameObject *frame_878534275107844f03121182da227b93;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_878534275107844f03121182da227b93, codeobj_878534275107844f03121182da227b93, module_Crypto$Random$Fortuna$FortunaAccumulator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_878534275107844f03121182da227b93 = cache_frame_878534275107844f03121182da227b93;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_878534275107844f03121182da227b93 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_878534275107844f03121182da227b93 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_len_arg_1 = par_data;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_assign_source_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( tmp_comparison_chain_1__operand_2 == NULL );
    tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;

    tmp_compexpr_left_1 = const_int_pos_1;
    tmp_compexpr_right_1 = tmp_comparison_chain_1__operand_2;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_assign_source_2 = RICH_COMPARE_LE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
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


        exception_lineno = 164;
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
    tmp_compexpr_right_2 = const_int_pos_32;
    tmp_outline_return_value_1 = RICH_COMPARE_LE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_outline_return_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_11_add_random_event );
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

    Py_XDECREF( tmp_comparison_chain_1__operand_2 );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_11_add_random_event );
    return NULL;
    outline_result_1:;
    tmp_cond_value_1 = tmp_outline_return_value_1;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 164;
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
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 164;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assign_source_3 = par_source_number;

    CHECK_OBJECT( tmp_assign_source_3 );
    assert( tmp_comparison_chain_2__operand_2 == NULL );
    Py_INCREF( tmp_assign_source_3 );
    tmp_comparison_chain_2__operand_2 = tmp_assign_source_3;

    // Tried code:
    tmp_compexpr_left_3 = const_int_0;
    tmp_compexpr_right_3 = tmp_comparison_chain_2__operand_2;

    CHECK_OBJECT( tmp_compexpr_right_3 );
    tmp_assign_source_4 = RICH_COMPARE_LE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    assert( tmp_comparison_chain_2__comparison_result == NULL );
    tmp_comparison_chain_2__comparison_result = tmp_assign_source_4;

    tmp_cond_value_4 = tmp_comparison_chain_2__comparison_result;

    CHECK_OBJECT( tmp_cond_value_4 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_outline_return_value_2 = tmp_comparison_chain_2__comparison_result;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_3;
    branch_no_4:;
    tmp_compexpr_left_4 = tmp_comparison_chain_2__operand_2;

    CHECK_OBJECT( tmp_compexpr_left_4 );
    tmp_compexpr_right_4 = const_int_pos_255;
    tmp_outline_return_value_2 = RICH_COMPARE_LE( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_outline_return_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_11_add_random_event );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_2__operand_2 );
    Py_DECREF( tmp_comparison_chain_2__operand_2 );
    tmp_comparison_chain_2__operand_2 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_2__comparison_result );
    Py_DECREF( tmp_comparison_chain_2__comparison_result );
    tmp_comparison_chain_2__comparison_result = NULL;

    goto outline_result_2;
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

    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_2__operand_2 );
    Py_DECREF( tmp_comparison_chain_2__operand_2 );
    tmp_comparison_chain_2__operand_2 = NULL;

    Py_XDECREF( tmp_comparison_chain_2__comparison_result );
    tmp_comparison_chain_2__comparison_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_11_add_random_event );
    return NULL;
    outline_result_2:;
    tmp_cond_value_3 = tmp_outline_return_value_2;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 165;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
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
    exception_lineno = 165;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_assign_source_5 = par_pool_number;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( tmp_comparison_chain_3__operand_2 == NULL );
    Py_INCREF( tmp_assign_source_5 );
    tmp_comparison_chain_3__operand_2 = tmp_assign_source_5;

    // Tried code:
    tmp_compexpr_left_5 = const_int_0;
    tmp_compexpr_right_5 = tmp_comparison_chain_3__operand_2;

    CHECK_OBJECT( tmp_compexpr_right_5 );
    tmp_assign_source_6 = RICH_COMPARE_LE( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    assert( tmp_comparison_chain_3__comparison_result == NULL );
    tmp_comparison_chain_3__comparison_result = tmp_assign_source_6;

    tmp_cond_value_6 = tmp_comparison_chain_3__comparison_result;

    CHECK_OBJECT( tmp_cond_value_6 );
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_no_6;
    }
    else
    {
        goto branch_yes_6;
    }
    branch_yes_6:;
    tmp_outline_return_value_3 = tmp_comparison_chain_3__comparison_result;

    CHECK_OBJECT( tmp_outline_return_value_3 );
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_4;
    branch_no_6:;
    tmp_compexpr_left_6 = tmp_comparison_chain_3__operand_2;

    CHECK_OBJECT( tmp_compexpr_left_6 );
    tmp_compexpr_right_6 = const_int_pos_31;
    tmp_outline_return_value_3 = RICH_COMPARE_LE( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    if ( tmp_outline_return_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_11_add_random_event );
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_3__operand_2 );
    Py_DECREF( tmp_comparison_chain_3__operand_2 );
    tmp_comparison_chain_3__operand_2 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_3__comparison_result );
    Py_DECREF( tmp_comparison_chain_3__comparison_result );
    tmp_comparison_chain_3__comparison_result = NULL;

    goto outline_result_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_3__operand_2 );
    Py_DECREF( tmp_comparison_chain_3__operand_2 );
    tmp_comparison_chain_3__operand_2 = NULL;

    Py_XDECREF( tmp_comparison_chain_3__comparison_result );
    tmp_comparison_chain_3__comparison_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_11_add_random_event );
    return NULL;
    outline_result_3:;
    tmp_cond_value_5 = tmp_outline_return_value_3;
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 166;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_no_5;
    }
    else
    {
        goto branch_yes_5;
    }
    branch_yes_5:;
    tmp_raise_type_3 = PyExc_AssertionError;
    exception_type = tmp_raise_type_3;
    Py_INCREF( tmp_raise_type_3 );
    exception_lineno = 166;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_5:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_pools );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = par_pool_number;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_source_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_bchr );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bchr );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "bchr" );
        exception_tb = NULL;

        exception_lineno = 167;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_source_number;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_878534275107844f03121182da227b93->m_frame.f_lineno = 167;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 167;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_878534275107844f03121182da227b93->m_frame.f_lineno = 167;
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


        exception_lineno = 167;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_pools );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = par_pool_number;

    CHECK_OBJECT( tmp_subscript_name_2 );
    tmp_source_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_bchr );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bchr );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "bchr" );
        exception_tb = NULL;

        exception_lineno = 168;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_len_arg_2 = par_data;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_args_element_name_4 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 168;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_878534275107844f03121182da227b93->m_frame.f_lineno = 168;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 168;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_878534275107844f03121182da227b93->m_frame.f_lineno = 168;
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


        exception_lineno = 168;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_pools );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_3 = par_pool_number;

    CHECK_OBJECT( tmp_subscript_name_3 );
    tmp_called_instance_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_data;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_878534275107844f03121182da227b93->m_frame.f_lineno = 169;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_append, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_878534275107844f03121182da227b93 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_878534275107844f03121182da227b93 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_878534275107844f03121182da227b93, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_878534275107844f03121182da227b93->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_878534275107844f03121182da227b93, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_878534275107844f03121182da227b93,
        type_description_1,
        par_self,
        par_source_number,
        par_pool_number,
        par_data
    );


    // Release cached frame.
    if ( frame_878534275107844f03121182da227b93 == cache_frame_878534275107844f03121182da227b93 )
    {
        Py_DECREF( frame_878534275107844f03121182da227b93 );
    }
    cache_frame_878534275107844f03121182da227b93 = NULL;

    assertFrameObject( frame_878534275107844f03121182da227b93 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_11_add_random_event );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_source_number );
    Py_DECREF( par_source_number );
    par_source_number = NULL;

    CHECK_OBJECT( (PyObject *)par_pool_number );
    Py_DECREF( par_pool_number );
    par_pool_number = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_source_number );
    Py_DECREF( par_source_number );
    par_source_number = NULL;

    CHECK_OBJECT( (PyObject *)par_pool_number );
    Py_DECREF( par_pool_number );
    par_pool_number = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator$$$function_11_add_random_event );
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



static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_10__reseed( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$Fortuna$FortunaAccumulator$$$function_10__reseed,
        const_str_plain__reseed,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_43e43fd8e32ca1c71393c3075a655873,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$Fortuna$FortunaAccumulator,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_11_add_random_event(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$Fortuna$FortunaAccumulator$$$function_11_add_random_event,
        const_str_plain_add_random_event,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_878534275107844f03121182da227b93,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$Fortuna$FortunaAccumulator,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$Fortuna$FortunaAccumulator$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7ef4bcafc4cd219b94d4da0c6a0b5cef,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$Fortuna$FortunaAccumulator,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_2_append(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$Fortuna$FortunaAccumulator$$$function_2_append,
        const_str_plain_append,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_de4328562c82d91a37cd4f1653019ef5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$Fortuna$FortunaAccumulator,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_3_digest(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$Fortuna$FortunaAccumulator$$$function_3_digest,
        const_str_plain_digest,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d16f73919cd6aa32c9321baa06b6e053,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$Fortuna$FortunaAccumulator,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_4_hexdigest(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$Fortuna$FortunaAccumulator$$$function_4_hexdigest,
        const_str_plain_hexdigest,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3214a4157b030b8def060ed4698eb284,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$Fortuna$FortunaAccumulator,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_5_reset(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$Fortuna$FortunaAccumulator$$$function_5_reset,
        const_str_plain_reset,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_49f2f35748dc1b12fa2cf103cde97b0c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$Fortuna$FortunaAccumulator,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_6_which_pools(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$Fortuna$FortunaAccumulator$$$function_6_which_pools,
        const_str_plain_which_pools,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ef2c0e0370073d7fcd3d58ae904ac442,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$Fortuna$FortunaAccumulator,
        const_str_digest_1b6131ab064b31e948a537924772a910,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_7___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$Fortuna$FortunaAccumulator$$$function_7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b316436654baf0a75aa94cdaa555cb1c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$Fortuna$FortunaAccumulator,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_8__forget_last_reseed(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$Fortuna$FortunaAccumulator$$$function_8__forget_last_reseed,
        const_str_plain__forget_last_reseed,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_67cca645113dac19b94334e84b13fa47,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$Fortuna$FortunaAccumulator,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_9_random_data(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$Fortuna$FortunaAccumulator$$$function_9_random_data,
        const_str_plain_random_data,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cd520d532355d1727741317dcb745c58,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$Fortuna$FortunaAccumulator,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Crypto$Random$Fortuna$FortunaAccumulator =
{
    PyModuleDef_HEAD_INIT,
    "Crypto.Random.Fortuna.FortunaAccumulator",   /* m_name */
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

MOD_INIT_DECL( Crypto$Random$Fortuna$FortunaAccumulator )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto$Random$Fortuna$FortunaAccumulator );
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
    puts("Crypto.Random.Fortuna.FortunaAccumulator: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.Random.Fortuna.FortunaAccumulator: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initCrypto$Random$Fortuna$FortunaAccumulator" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto$Random$Fortuna$FortunaAccumulator = Py_InitModule4(
        "Crypto.Random.Fortuna.FortunaAccumulator",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Crypto$Random$Fortuna$FortunaAccumulator = PyModule_Create( &mdef_Crypto$Random$Fortuna$FortunaAccumulator );
#endif

    moduledict_Crypto$Random$Fortuna$FortunaAccumulator = MODULE_DICT( module_Crypto$Random$Fortuna$FortunaAccumulator );

    CHECK_OBJECT( module_Crypto$Random$Fortuna$FortunaAccumulator );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_f7098eaf0dfc3b4f9b23f0b58ee94f54, module_Crypto$Random$Fortuna$FortunaAccumulator );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_0_var_digest_size = NULL;
    PyObject *outline_0_var___init__ = NULL;
    PyObject *outline_0_var_append = NULL;
    PyObject *outline_0_var_digest = NULL;
    PyObject *outline_0_var_hexdigest = NULL;
    PyObject *outline_0_var_reset = NULL;
    PyObject *outline_1_var___module__ = NULL;
    PyObject *outline_1_var_min_pool_size = NULL;
    PyObject *outline_1_var_reseed_interval = NULL;
    PyObject *outline_1_var___init__ = NULL;
    PyObject *outline_1_var__forget_last_reseed = NULL;
    PyObject *outline_1_var_random_data = NULL;
    PyObject *outline_1_var__reseed = NULL;
    PyObject *outline_1_var_add_random_event = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
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
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
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
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_key_13;
    PyObject *tmp_dict_key_14;
    PyObject *tmp_dict_key_15;
    PyObject *tmp_dict_key_16;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
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
    PyObject *tmp_dict_value_13;
    PyObject *tmp_dict_value_14;
    PyObject *tmp_dict_value_15;
    PyObject *tmp_dict_value_16;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_fromlist_name_8;
    PyObject *tmp_fromlist_name_9;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_globals_name_8;
    PyObject *tmp_globals_name_9;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_locals_name_8;
    PyObject *tmp_locals_name_9;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_name_name_8;
    PyObject *tmp_name_name_9;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_star_imported_1;
    PyObject *tmp_star_imported_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static struct Nuitka_FrameObject *cache_frame_bf91cd337ec1fa2d730f48e6626b90a8_2 = NULL;

    struct Nuitka_FrameObject *frame_bf91cd337ec1fa2d730f48e6626b90a8_2;

    struct Nuitka_FrameObject *frame_9d68461763d5da0fd4837904cde044b1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_1a462ea59aeb53ffecd962742cb2cfe2;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_10c675d39d154a59cf6207a839b0661f;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain___revision__, tmp_assign_source_4 );
    tmp_name_name_1 = const_str_plain_sys;
    tmp_globals_name_1 = (PyObject *)moduledict_Crypto$Random$Fortuna$FortunaAccumulator;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    assert( tmp_assign_source_5 != NULL );
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_5 );
    // Frame without reuse.
    frame_9d68461763d5da0fd4837904cde044b1 = MAKE_MODULE_FRAME( codeobj_9d68461763d5da0fd4837904cde044b1, module_Crypto$Random$Fortuna$FortunaAccumulator );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_9d68461763d5da0fd4837904cde044b1 );
    assert( Py_REFCNT( frame_9d68461763d5da0fd4837904cde044b1 ) == 2 );

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_sys );

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
    tmp_and_left_value_1 = RICH_COMPARE_EQ_NORECURSE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 28;

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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_sys );

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
    tmp_and_right_value_1 = RICH_COMPARE_EQ_NORECURSE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

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

        exception_lineno = 28;

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
    tmp_globals_name_2 = (PyObject *)moduledict_Crypto$Random$Fortuna$FortunaAccumulator;
    tmp_locals_name_2 = (PyObject *)moduledict_Crypto$Random$Fortuna$FortunaAccumulator;
    tmp_fromlist_name_2 = const_tuple_str_chr_42_tuple;
    frame_9d68461763d5da0fd4837904cde044b1->m_frame.f_lineno = 29;
    tmp_star_imported_1 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_Crypto$Random$Fortuna$FortunaAccumulator, true, tmp_star_imported_1 );
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
    tmp_globals_name_3 = (PyObject *)moduledict_Crypto$Random$Fortuna$FortunaAccumulator;
    tmp_locals_name_3 = (PyObject *)moduledict_Crypto$Random$Fortuna$FortunaAccumulator;
    tmp_fromlist_name_3 = const_tuple_str_chr_42_tuple;
    frame_9d68461763d5da0fd4837904cde044b1->m_frame.f_lineno = 30;
    tmp_star_imported_2 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
    if ( tmp_star_imported_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_Crypto$Random$Fortuna$FortunaAccumulator, true, tmp_star_imported_2 );
    Py_DECREF( tmp_star_imported_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    tmp_name_name_4 = const_str_plain_binascii;
    tmp_globals_name_4 = (PyObject *)moduledict_Crypto$Random$Fortuna$FortunaAccumulator;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_b2a_hex_tuple;
    frame_9d68461763d5da0fd4837904cde044b1->m_frame.f_lineno = 32;
    tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4 );
    assert( tmp_import_name_from_1 != NULL );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_b2a_hex );
    Py_DECREF( tmp_import_name_from_1 );
    assert( tmp_assign_source_6 != NULL );
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_b2a_hex, tmp_assign_source_6 );
    tmp_name_name_5 = const_str_plain_time;
    tmp_globals_name_5 = (PyObject *)moduledict_Crypto$Random$Fortuna$FortunaAccumulator;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = Py_None;
    frame_9d68461763d5da0fd4837904cde044b1->m_frame.f_lineno = 33;
    tmp_assign_source_7 = IMPORT_MODULE4( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5 );
    assert( tmp_assign_source_7 != NULL );
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_7 );
    tmp_name_name_6 = const_str_plain_warnings;
    tmp_globals_name_6 = (PyObject *)moduledict_Crypto$Random$Fortuna$FortunaAccumulator;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = Py_None;
    frame_9d68461763d5da0fd4837904cde044b1->m_frame.f_lineno = 34;
    tmp_assign_source_8 = IMPORT_MODULE4( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_8 );
    tmp_name_name_7 = const_str_digest_9d234be5735c76ce8a4d0c7014a1d635;
    tmp_globals_name_7 = (PyObject *)moduledict_Crypto$Random$Fortuna$FortunaAccumulator;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_ClockRewindWarning_tuple;
    frame_9d68461763d5da0fd4837904cde044b1->m_frame.f_lineno = 36;
    tmp_import_name_from_2 = IMPORT_MODULE4( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_ClockRewindWarning );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_ClockRewindWarning, tmp_assign_source_9 );
    tmp_name_name_8 = const_str_plain_SHAd256;
    tmp_globals_name_8 = (PyObject *)moduledict_Crypto$Random$Fortuna$FortunaAccumulator;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = Py_None;
    frame_9d68461763d5da0fd4837904cde044b1->m_frame.f_lineno = 37;
    tmp_assign_source_10 = IMPORT_MODULE4( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_SHAd256, tmp_assign_source_10 );
    tmp_name_name_9 = const_str_plain_FortunaGenerator;
    tmp_globals_name_9 = (PyObject *)moduledict_Crypto$Random$Fortuna$FortunaAccumulator;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = Py_None;
    frame_9d68461763d5da0fd4837904cde044b1->m_frame.f_lineno = 39;
    tmp_assign_source_11 = IMPORT_MODULE4( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_FortunaGenerator, tmp_assign_source_11 );
    // Tried code:
    tmp_assign_source_13 = const_str_digest_f7098eaf0dfc3b4f9b23f0b58ee94f54;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_13 );
    outline_0_var___module__ = tmp_assign_source_13;

    tmp_assign_source_14 = const_str_digest_7db36d3a8cabde83ec761670cfa95736;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_14 );
    outline_0_var___doc__ = tmp_assign_source_14;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bf91cd337ec1fa2d730f48e6626b90a8_2, codeobj_bf91cd337ec1fa2d730f48e6626b90a8, module_Crypto$Random$Fortuna$FortunaAccumulator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bf91cd337ec1fa2d730f48e6626b90a8_2 = cache_frame_bf91cd337ec1fa2d730f48e6626b90a8_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bf91cd337ec1fa2d730f48e6626b90a8_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bf91cd337ec1fa2d730f48e6626b90a8_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_SHAd256 );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SHAd256 );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SHAd256" );
        exception_tb = NULL;

        exception_lineno = 52;
        type_description_2 = "ooNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_digest_size );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_2 = "ooNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_digest_size == NULL );
    outline_0_var_digest_size = tmp_assign_source_15;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_bf91cd337ec1fa2d730f48e6626b90a8_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bf91cd337ec1fa2d730f48e6626b90a8_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bf91cd337ec1fa2d730f48e6626b90a8_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bf91cd337ec1fa2d730f48e6626b90a8_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bf91cd337ec1fa2d730f48e6626b90a8_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bf91cd337ec1fa2d730f48e6626b90a8_2,
        type_description_2,
        outline_0_var___module__,
        outline_0_var___doc__,
        outline_0_var_digest_size,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    );


    // Release cached frame.
    if ( frame_bf91cd337ec1fa2d730f48e6626b90a8_2 == cache_frame_bf91cd337ec1fa2d730f48e6626b90a8_2 )
    {
        Py_DECREF( frame_bf91cd337ec1fa2d730f48e6626b90a8_2 );
    }
    cache_frame_bf91cd337ec1fa2d730f48e6626b90a8_2 = NULL;

    assertFrameObject( frame_bf91cd337ec1fa2d730f48e6626b90a8_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_2;
    skip_nested_handling_1:;
    tmp_assign_source_16 = MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_1___init__(  );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_16;

    tmp_assign_source_17 = MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_2_append(  );
    assert( outline_0_var_append == NULL );
    outline_0_var_append = tmp_assign_source_17;

    tmp_assign_source_18 = MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_3_digest(  );
    assert( outline_0_var_digest == NULL );
    outline_0_var_digest = tmp_assign_source_18;

    tmp_assign_source_19 = MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_4_hexdigest(  );
    assert( outline_0_var_hexdigest == NULL );
    outline_0_var_hexdigest = tmp_assign_source_19;

    tmp_assign_source_20 = MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_5_reset(  );
    assert( outline_0_var_reset == NULL );
    outline_0_var_reset = tmp_assign_source_20;

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
    tmp_dict_value_5 = outline_0_var_append;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain_append;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = outline_0_var_digest;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain_digest;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = outline_0_var_hexdigest;

    CHECK_OBJECT( tmp_dict_value_7 );
    tmp_dict_key_7 = const_str_plain_hexdigest;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_8 = outline_0_var_reset;

    CHECK_OBJECT( tmp_dict_value_8 );
    tmp_dict_key_8 = const_str_plain_reset;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_2:;
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

    CHECK_OBJECT( (PyObject *)outline_0_var_append );
    Py_DECREF( outline_0_var_append );
    outline_0_var_append = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_digest );
    Py_DECREF( outline_0_var_digest );
    outline_0_var_digest = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_hexdigest );
    Py_DECREF( outline_0_var_hexdigest );
    outline_0_var_hexdigest = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_reset );
    Py_DECREF( outline_0_var_reset );
    outline_0_var_reset = NULL;

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

    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___doc__ );
    Py_DECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 41;
    goto try_except_handler_1;
    outline_result_1:;
    tmp_assign_source_12 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_12;

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
    tmp_assign_source_21 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_21 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_21 );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_21;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_FortunaPool;
    tmp_args_element_name_2 = const_tuple_type_object_tuple;
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_9d68461763d5da0fd4837904cde044b1->m_frame.f_lineno = 41;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_22;

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
    tmp_assign_source_23 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_23 );
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_FortunaPool, tmp_assign_source_23 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    tmp_assign_source_24 = MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_6_which_pools(  );
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_which_pools, tmp_assign_source_24 );
    tmp_assign_source_26 = const_str_digest_f7098eaf0dfc3b4f9b23f0b58ee94f54;
    assert( outline_1_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_26 );
    outline_1_var___module__ = tmp_assign_source_26;

    tmp_assign_source_27 = const_int_pos_64;
    assert( outline_1_var_min_pool_size == NULL );
    Py_INCREF( tmp_assign_source_27 );
    outline_1_var_min_pool_size = tmp_assign_source_27;

    tmp_assign_source_28 = const_float_0_1;
    assert( outline_1_var_reseed_interval == NULL );
    Py_INCREF( tmp_assign_source_28 );
    outline_1_var_reseed_interval = tmp_assign_source_28;

    tmp_assign_source_29 = MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_7___init__(  );
    assert( outline_1_var___init__ == NULL );
    outline_1_var___init__ = tmp_assign_source_29;

    tmp_assign_source_30 = MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_8__forget_last_reseed(  );
    assert( outline_1_var__forget_last_reseed == NULL );
    outline_1_var__forget_last_reseed = tmp_assign_source_30;

    tmp_assign_source_31 = MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_9_random_data(  );
    assert( outline_1_var_random_data == NULL );
    outline_1_var_random_data = tmp_assign_source_31;

    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_32 = MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_10__reseed( tmp_defaults_1 );
    assert( outline_1_var__reseed == NULL );
    outline_1_var__reseed = tmp_assign_source_32;

    tmp_assign_source_33 = MAKE_FUNCTION_Crypto$Random$Fortuna$FortunaAccumulator$$$function_11_add_random_event(  );
    assert( outline_1_var_add_random_event == NULL );
    outline_1_var_add_random_event = tmp_assign_source_33;

    // Tried code:
    tmp_outline_return_value_2 = _PyDict_NewPresized( 8 );
    tmp_dict_value_9 = outline_1_var___module__;

    CHECK_OBJECT( tmp_dict_value_9 );
    tmp_dict_key_9 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_10 = outline_1_var_min_pool_size;

    CHECK_OBJECT( tmp_dict_value_10 );
    tmp_dict_key_10 = const_str_plain_min_pool_size;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_11 = outline_1_var_reseed_interval;

    CHECK_OBJECT( tmp_dict_value_11 );
    tmp_dict_key_11 = const_str_plain_reseed_interval;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_11, tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_12 = outline_1_var___init__;

    CHECK_OBJECT( tmp_dict_value_12 );
    tmp_dict_key_12 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_12, tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_13 = outline_1_var__forget_last_reseed;

    CHECK_OBJECT( tmp_dict_value_13 );
    tmp_dict_key_13 = const_str_plain__forget_last_reseed;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_13, tmp_dict_value_13 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_14 = outline_1_var_random_data;

    CHECK_OBJECT( tmp_dict_value_14 );
    tmp_dict_key_14 = const_str_plain_random_data;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_14, tmp_dict_value_14 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_15 = outline_1_var__reseed;

    CHECK_OBJECT( tmp_dict_value_15 );
    tmp_dict_key_15 = const_str_plain__reseed;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_15, tmp_dict_value_15 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_16 = outline_1_var_add_random_event;

    CHECK_OBJECT( tmp_dict_value_16 );
    tmp_dict_key_16 = const_str_plain_add_random_event;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_16, tmp_dict_value_16 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)outline_1_var___module__ );
    Py_DECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_min_pool_size );
    Py_DECREF( outline_1_var_min_pool_size );
    outline_1_var_min_pool_size = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_reseed_interval );
    Py_DECREF( outline_1_var_reseed_interval );
    outline_1_var_reseed_interval = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___init__ );
    Py_DECREF( outline_1_var___init__ );
    outline_1_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var__forget_last_reseed );
    Py_DECREF( outline_1_var__forget_last_reseed );
    outline_1_var__forget_last_reseed = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_random_data );
    Py_DECREF( outline_1_var_random_data );
    outline_1_var_random_data = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var__reseed );
    Py_DECREF( outline_1_var__reseed );
    outline_1_var__reseed = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_add_random_event );
    Py_DECREF( outline_1_var_add_random_event );
    outline_1_var_add_random_event = NULL;

    goto outline_result_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$Fortuna$FortunaAccumulator );
    return MOD_RETURN_VALUE( NULL );
    outline_result_2:;
    tmp_assign_source_25 = tmp_outline_return_value_2;
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_25;

    // Tried code:
    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_dict_name_2 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_dict_name_2 );
    tmp_key_name_2 = const_str_plain___metaclass__;
    tmp_assign_source_34 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;

        goto try_except_handler_4;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_34 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_34 );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_34;

    tmp_called_name_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_4 = const_str_plain_FortunaAccumulator;
    tmp_args_element_name_5 = const_tuple_type_object_tuple;
    tmp_args_element_name_6 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_9d68461763d5da0fd4837904cde044b1->m_frame.f_lineno = 95;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;

        goto try_except_handler_4;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_35;

    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

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
    RESTORE_FRAME_EXCEPTION( frame_9d68461763d5da0fd4837904cde044b1 );
#endif
    popFrameStack();

    assertFrameObject( frame_9d68461763d5da0fd4837904cde044b1 );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d68461763d5da0fd4837904cde044b1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9d68461763d5da0fd4837904cde044b1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9d68461763d5da0fd4837904cde044b1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9d68461763d5da0fd4837904cde044b1, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    tmp_assign_source_36 = tmp_class_creation_2__class;

    CHECK_OBJECT( tmp_assign_source_36 );
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$Fortuna$FortunaAccumulator, (Nuitka_StringObject *)const_str_plain_FortunaAccumulator, tmp_assign_source_36 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class );
    Py_DECREF( tmp_class_creation_2__class );
    tmp_class_creation_2__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;


    return MOD_RETURN_VALUE( module_Crypto$Random$Fortuna$FortunaAccumulator );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
