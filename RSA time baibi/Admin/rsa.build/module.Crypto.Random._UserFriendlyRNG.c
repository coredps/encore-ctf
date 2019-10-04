/* Generated code for Python source for module 'Crypto.Random._UserFriendlyRNG'
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

/* The _module_Crypto$Random$_UserFriendlyRNG is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$Random$_UserFriendlyRNG;
PyDictObject *moduledict_Crypto$Random$_UserFriendlyRNG;

/* The module constants used, if any. */
extern PyObject *const_str_plain_get_random_bytes;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_str_plain__clock_es;
extern PyObject *const_str_plain_data;
static PyObject *const_str_plain__fa;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_dict_empty;
extern PyObject *const_str_digest_10c675d39d154a59cf6207a839b0661f;
static PyObject *const_str_digest_cae860d1803e5df993bed821c07a4e16;
extern PyObject *const_tuple_41f70ed433b6a426d4c5af53d3948dac_tuple;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain___revision__;
static PyObject *const_str_plain__src_num;
static PyObject *const_str_plain__check_pid;
extern PyObject *const_str_digest_7297039c3ba7a6819c92a3ebf29a5b51;
extern PyObject *const_str_plain_pack;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain_reinit;
static PyObject *const_str_plain_block;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_str_plain_self_str_plain_bytes_tuple;
static PyObject *const_str_plain_src_num;
extern PyObject *const_str_digest_74ba315069266703540e145c62869e9e;
static PyObject *const_tuple_str_plain_self_str_plain_N_str_plain_retval_tuple;
extern PyObject *const_str_plain_close;
static PyObject *const_str_plain__pool_num;
extern PyObject *const_str_digest_49c9a1368e30a547d5af326e25ac2d5d;
extern PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
static PyObject *const_str_plain_feed;
static PyObject *const_tuple_str_plain_FortunaAccumulator_tuple;
static PyObject *const_str_plain_accumulator;
extern PyObject *const_str_digest_1e5478800040fcfd12cfc695d2c1888b;
static PyObject *const_str_plain__singleton;
extern PyObject *const_tuple_type_long_type_int_tuple;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_digest_69452dddf7e9c29c0bf2309b33bb5650;
static PyObject *const_str_digest_01c6d8a35086a093c2ac6df61af602f3;
static PyObject *const_str_plain__EntropySource;
static PyObject *const_str_digest_a235f187109089f5b7574351d5f844ef;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_tuple_str_plain_floor_tuple;
static PyObject *const_str_plain_threading;
static PyObject *const_str_plain__fortuna;
extern PyObject *const_str_plain_random_data;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_retval;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain__lock;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_release;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___module__;
extern PyObject *const_int_pos_8;
extern PyObject *const_int_pos_1024;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_tuple_str_plain_self_str_plain_singleton_tuple;
extern PyObject *const_tuple_str_plain_OSRNG_tuple;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_plain_getpid;
static PyObject *const_tuple_str_plain_self_str_plain_t_tuple;
extern PyObject *const_int_pos_255;
static PyObject *const_int_pos_254;
static PyObject *const_int_pos_253;
extern PyObject *const_str_plain_new;
static PyObject *const_str_plain_RNGFile;
static PyObject *const_str_plain__EntropyCollector;
extern PyObject *const_str_plain_time;
static PyObject *const_str_plain_collect;
static PyObject *const_int_pos_1073741824;
extern PyObject *const_int_pos_32;
extern PyObject *const_int_pos_31;
extern PyObject *const_str_digest_f6ae169f842d2e5a780003f644103f6a;
static PyObject *const_str_plain__LockingUserFriendlyRNG;
extern PyObject *const_tuple_int_pos_1024_tuple;
extern PyObject *const_str_plain_bytes;
extern PyObject *const_str_plain_N;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_digest_60206ba42ec06a3a165aaf03c1cfa3c8;
extern PyObject *const_tuple_int_pos_8_tuple;
static PyObject *const_str_digest_0828cd0aae9cadddf91574ffefcf1425;
static PyObject *const_str_plain__ec;
static PyObject *const_str_plain_Lock;
extern PyObject *const_str_digest_caddcc232c5cb161cd557a68427895a8;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_i;
static PyObject *const_str_plain_floor;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_FortunaAccumulator;
extern PyObject *const_str_plain_flush;
extern PyObject *const_tuple_int_0_int_pos_1_tuple;
static PyObject *const_str_plain_singleton;
extern PyObject *const_str_digest_609e8ea4334f09c86af080a144ea33db;
extern PyObject *const_str_plain_struct;
static PyObject *const_str_plain_clock;
static PyObject *const_str_plain__singleton_lock;
static PyObject *const_tuple_str_plain_self_str_plain_i_str_plain_block_str_plain_p_tuple;
static PyObject *const_str_plain__time_es;
static PyObject *const_tuple_str_plain_self_str_plain_accumulator_str_plain_src_num_tuple;
static PyObject *const_str_plain__osrng_es;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_plain__get_singleton;
extern PyObject *const_str_plain__forget_last_reseed;
extern PyObject *const_int_0;
static PyObject *const_str_plain__osrng;
extern PyObject *const_str_plain__UserFriendlyRNG;
extern PyObject *const_str_plain_math;
static PyObject *const_str_plain__pid;
static PyObject *const_tuple_str_plain_self_str_plain_accumulator_tuple;
extern PyObject *const_str_plain_OSRNG;
extern PyObject *const_str_plain_closed;
extern PyObject *const_tuple_str_plain_n_tuple;
static PyObject *const_str_digest_91acf85d3abded5b2d21911dcd1c43a1;
extern PyObject *const_str_plain_add_random_event;
static PyObject *const_str_digest_5b082c50734df93a797aa33573daea8f;
static PyObject *const_str_plain_acquire;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain__clock_es = UNSTREAM_STRING( &constant_bin[ 51734 ], 9, 1 );
    const_str_plain__fa = UNSTREAM_STRING( &constant_bin[ 28764 ], 3, 1 );
    const_str_digest_cae860d1803e5df993bed821c07a4e16 = UNSTREAM_STRING( &constant_bin[ 51743 ], 66, 0 );
    const_str_plain__src_num = UNSTREAM_STRING( &constant_bin[ 51809 ], 8, 1 );
    const_str_plain__check_pid = UNSTREAM_STRING( &constant_bin[ 51817 ], 10, 1 );
    const_str_plain_block = UNSTREAM_STRING( &constant_bin[ 3773 ], 5, 1 );
    const_tuple_str_plain_self_str_plain_bytes_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bytes_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bytes_tuple, 1, const_str_plain_bytes ); Py_INCREF( const_str_plain_bytes );
    const_str_plain_src_num = UNSTREAM_STRING( &constant_bin[ 51810 ], 7, 1 );
    const_tuple_str_plain_self_str_plain_N_str_plain_retval_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_N_str_plain_retval_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_N_str_plain_retval_tuple, 1, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_N_str_plain_retval_tuple, 2, const_str_plain_retval ); Py_INCREF( const_str_plain_retval );
    const_str_plain__pool_num = UNSTREAM_STRING( &constant_bin[ 51827 ], 9, 1 );
    const_str_plain_feed = UNSTREAM_STRING( &constant_bin[ 51836 ], 4, 1 );
    const_tuple_str_plain_FortunaAccumulator_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_FortunaAccumulator_tuple, 0, const_str_plain_FortunaAccumulator ); Py_INCREF( const_str_plain_FortunaAccumulator );
    const_str_plain_accumulator = UNSTREAM_STRING( &constant_bin[ 51840 ], 11, 1 );
    const_str_plain__singleton = UNSTREAM_STRING( &constant_bin[ 51851 ], 10, 1 );
    const_str_digest_01c6d8a35086a093c2ac6df61af602f3 = UNSTREAM_STRING( &constant_bin[ 51861 ], 107, 0 );
    const_str_plain__EntropySource = UNSTREAM_STRING( &constant_bin[ 51968 ], 14, 1 );
    const_str_digest_a235f187109089f5b7574351d5f844ef = UNSTREAM_STRING( &constant_bin[ 51982 ], 84, 0 );
    const_tuple_str_plain_floor_tuple = PyTuple_New( 1 );
    const_str_plain_floor = UNSTREAM_STRING( &constant_bin[ 52066 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_floor_tuple, 0, const_str_plain_floor ); Py_INCREF( const_str_plain_floor );
    const_str_plain_threading = UNSTREAM_STRING( &constant_bin[ 52071 ], 9, 1 );
    const_str_plain__fortuna = UNSTREAM_STRING( &constant_bin[ 52080 ], 8, 1 );
    const_str_plain__lock = UNSTREAM_STRING( &constant_bin[ 52088 ], 5, 1 );
    const_str_plain_release = UNSTREAM_STRING( &constant_bin[ 52093 ], 7, 1 );
    const_tuple_str_plain_self_str_plain_singleton_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_singleton_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_singleton = UNSTREAM_STRING( &constant_bin[ 51852 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_singleton_tuple, 1, const_str_plain_singleton ); Py_INCREF( const_str_plain_singleton );
    const_str_plain_getpid = UNSTREAM_STRING( &constant_bin[ 52100 ], 6, 1 );
    const_tuple_str_plain_self_str_plain_t_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_t_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_t_tuple, 1, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    const_int_pos_254 = PyInt_FromLong( 254l );
    const_int_pos_253 = PyInt_FromLong( 253l );
    const_str_plain_RNGFile = UNSTREAM_STRING( &constant_bin[ 52106 ], 7, 1 );
    const_str_plain__EntropyCollector = UNSTREAM_STRING( &constant_bin[ 52113 ], 17, 1 );
    const_str_plain_collect = UNSTREAM_STRING( &constant_bin[ 161 ], 7, 1 );
    const_int_pos_1073741824 = PyInt_FromLong( 1073741824l );
    const_str_plain__LockingUserFriendlyRNG = UNSTREAM_STRING( &constant_bin[ 52130 ], 23, 1 );
    const_str_digest_0828cd0aae9cadddf91574ffefcf1425 = UNSTREAM_STRING( &constant_bin[ 52153 ], 30, 0 );
    const_str_plain__ec = UNSTREAM_STRING( &constant_bin[ 52183 ], 3, 1 );
    const_str_plain_Lock = UNSTREAM_STRING( &constant_bin[ 52131 ], 4, 1 );
    const_str_plain_clock = UNSTREAM_STRING( &constant_bin[ 51735 ], 5, 1 );
    const_str_plain__singleton_lock = UNSTREAM_STRING( &constant_bin[ 52186 ], 15, 1 );
    const_tuple_str_plain_self_str_plain_i_str_plain_block_str_plain_p_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_i_str_plain_block_str_plain_p_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_i_str_plain_block_str_plain_p_tuple, 1, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_i_str_plain_block_str_plain_p_tuple, 2, const_str_plain_block ); Py_INCREF( const_str_plain_block );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_i_str_plain_block_str_plain_p_tuple, 3, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    const_str_plain__time_es = UNSTREAM_STRING( &constant_bin[ 52201 ], 8, 1 );
    const_tuple_str_plain_self_str_plain_accumulator_str_plain_src_num_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_accumulator_str_plain_src_num_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_accumulator_str_plain_src_num_tuple, 1, const_str_plain_accumulator ); Py_INCREF( const_str_plain_accumulator );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_accumulator_str_plain_src_num_tuple, 2, const_str_plain_src_num ); Py_INCREF( const_str_plain_src_num );
    const_str_plain__osrng_es = UNSTREAM_STRING( &constant_bin[ 52209 ], 9, 1 );
    const_str_plain__get_singleton = UNSTREAM_STRING( &constant_bin[ 52218 ], 14, 1 );
    const_str_plain__osrng = UNSTREAM_STRING( &constant_bin[ 52209 ], 6, 1 );
    const_str_plain__pid = UNSTREAM_STRING( &constant_bin[ 51823 ], 4, 1 );
    const_tuple_str_plain_self_str_plain_accumulator_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_accumulator_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_accumulator_tuple, 1, const_str_plain_accumulator ); Py_INCREF( const_str_plain_accumulator );
    const_str_digest_91acf85d3abded5b2d21911dcd1c43a1 = UNSTREAM_STRING( &constant_bin[ 52232 ], 2, 0 );
    const_str_digest_5b082c50734df93a797aa33573daea8f = UNSTREAM_STRING( &constant_bin[ 52234 ], 39, 0 );
    const_str_plain_acquire = UNSTREAM_STRING( &constant_bin[ 52273 ], 7, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Crypto$Random$_UserFriendlyRNG( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_bfe3f6fd85139ee32f18b4651599bd55;
static PyCodeObject *codeobj_dd83b8114af5620548e8aff675d1a4ce;
static PyCodeObject *codeobj_fc2dae5b2c36af1ff4597c07117bb0a6;
static PyCodeObject *codeobj_66b3b2859e58b595f12b1f8ac391baa7;
static PyCodeObject *codeobj_103a98957de9889cffaaaf015834ac32;
static PyCodeObject *codeobj_2a7aedb2d1a0734f20dc5d01c3b1edd2;
static PyCodeObject *codeobj_06c6fdb043e0d2a321fe087e6236c232;
static PyCodeObject *codeobj_ae42a8ed57bd6c5ac979c844aeff8589;
static PyCodeObject *codeobj_0d7a3476ee9bbbae7f26cb34f2ec5cb7;
static PyCodeObject *codeobj_80c8ef500281fae0ae3b7880b394fd6e;
static PyCodeObject *codeobj_df715d0de22f47628d570d09a798981f;
static PyCodeObject *codeobj_57c3f89473dd96c29235e4b1914bafa3;
static PyCodeObject *codeobj_fac2d5ef9c36e35ad33b7e61215748aa;
static PyCodeObject *codeobj_341bfd4ec4a80d06ca4478b72b8e31d5;
static PyCodeObject *codeobj_9605e4fbf36fba9c1600ec8c259f3067;
static PyCodeObject *codeobj_f7a442f017f599aaae0d5a7a488eae24;
static PyCodeObject *codeobj_edebea08f8a96c780674835fce36830a;
static PyCodeObject *codeobj_a8171752eb07664e8547e01b11458bb4;
static PyCodeObject *codeobj_e6e2807b154070c5abc5863f90eb5eec;
static PyCodeObject *codeobj_25f7bf711fb96dcdbc68275140cdcb24;
static PyCodeObject *codeobj_95c846883aeb25b7bd9496bee819e308;
static PyCodeObject *codeobj_99bf1f9fbf80920a0b71f70fcbc54de3;
static PyCodeObject *codeobj_615d7e1d08476274fec686af29ed9aa7;
static PyCodeObject *codeobj_daf6508b68e0b2fd40314fee6d599a15;
static PyCodeObject *codeobj_28bcedf200340f576eb94ac362d39344;
static PyCodeObject *codeobj_d8e795def13389e6b107ae61e7625a00;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_cae860d1803e5df993bed821c07a4e16;
    codeobj_bfe3f6fd85139ee32f18b4651599bd55 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_5b082c50734df93a797aa33573daea8f, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_dd83b8114af5620548e8aff675d1a4ce = MAKE_CODEOBJ( module_filename_obj, const_str_plain___enter__, 188, const_tuple_str_plain_self_tuple, 1, CO_NOFREE );
    codeobj_fc2dae5b2c36af1ff4597c07117bb0a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___exit__, 190, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_66b3b2859e58b595f12b1f8ac391baa7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 41, const_tuple_str_plain_self_str_plain_accumulator_str_plain_src_num_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_103a98957de9889cffaaaf015834ac32 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 52, const_tuple_str_plain_self_str_plain_accumulator_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2a7aedb2d1a0734f20dc5d01c3b1edd2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 83, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_06c6fdb043e0d2a321fe087e6236c232 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 157, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ae42a8ed57bd6c5ac979c844aeff8589 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 183, const_tuple_str_plain_self_str_plain_singleton_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0d7a3476ee9bbbae7f26cb34f2ec5cb7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__check_pid, 142, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_80c8ef500281fae0ae3b7880b394fd6e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_singleton, 210, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_df715d0de22f47628d570d09a798981f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 111, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_57c3f89473dd96c29235e4b1914bafa3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 161, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fac2d5ef9c36e35ad33b7e61215748aa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 194, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_341bfd4ec4a80d06ca4478b72b8e31d5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_collect, 68, const_tuple_str_plain_self_str_plain_t_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9605e4fbf36fba9c1600ec8c259f3067 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_feed, 46, const_tuple_str_plain_self_str_plain_data_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f7a442f017f599aaae0d5a7a488eae24 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_flush, 116, const_tuple_str_plain_self_tuple, 1, CO_NOFREE );
    codeobj_edebea08f8a96c780674835fce36830a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_flush, 204, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a8171752eb07664e8547e01b11458bb4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_random_bytes, 226, const_tuple_str_plain_n_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e6e2807b154070c5abc5863f90eb5eec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_new, 220, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_25f7bf711fb96dcdbc68275140cdcb24 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read, 119, const_tuple_str_plain_self_str_plain_N_str_plain_retval_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_95c846883aeb25b7bd9496bee819e308 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read, 175, const_tuple_str_plain_self_str_plain_bytes_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_99bf1f9fbf80920a0b71f70fcbc54de3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read, 199, const_tuple_str_plain_self_str_plain_bytes_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_615d7e1d08476274fec686af29ed9aa7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reinit, 58, const_tuple_str_plain_self_str_plain_i_str_plain_block_str_plain_p_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_daf6508b68e0b2fd40314fee6d599a15 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reinit, 89, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_28bcedf200340f576eb94ac362d39344 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reinit, 168, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d8e795def13389e6b107ae61e7625a00 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reinit, 223, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_10_read(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_11__check_pid(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_12___init__(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_13_close(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_14_reinit(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_15_read(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_16___init__(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_17___enter__(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_18___exit__(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_19_close(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_20_read(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_21_flush(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_22__get_singleton(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_23_new(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_24_reinit(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_25_get_random_bytes(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_2_feed(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_3___init__(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_4_reinit(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_5_collect(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_6___init__(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_7_reinit(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_8_close(  );


static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_9_flush(  );


// The module function definitions.
static PyObject *impl_Crypto$Random$_UserFriendlyRNG$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_accumulator = python_pars[ 1 ];
    PyObject *par_src_num = python_pars[ 2 ];
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
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_66b3b2859e58b595f12b1f8ac391baa7 = NULL;

    struct Nuitka_FrameObject *frame_66b3b2859e58b595f12b1f8ac391baa7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_66b3b2859e58b595f12b1f8ac391baa7, codeobj_66b3b2859e58b595f12b1f8ac391baa7, module_Crypto$Random$_UserFriendlyRNG, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_66b3b2859e58b595f12b1f8ac391baa7 = cache_frame_66b3b2859e58b595f12b1f8ac391baa7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_66b3b2859e58b595f12b1f8ac391baa7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_66b3b2859e58b595f12b1f8ac391baa7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_accumulator;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__fortuna, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_src_num;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__src_num, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = const_int_0;
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__pool_num, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_66b3b2859e58b595f12b1f8ac391baa7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_66b3b2859e58b595f12b1f8ac391baa7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_66b3b2859e58b595f12b1f8ac391baa7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_66b3b2859e58b595f12b1f8ac391baa7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_66b3b2859e58b595f12b1f8ac391baa7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_66b3b2859e58b595f12b1f8ac391baa7,
        type_description_1,
        par_self,
        par_accumulator,
        par_src_num
    );


    // Release cached frame.
    if ( frame_66b3b2859e58b595f12b1f8ac391baa7 == cache_frame_66b3b2859e58b595f12b1f8ac391baa7 )
    {
        Py_DECREF( frame_66b3b2859e58b595f12b1f8ac391baa7 );
    }
    cache_frame_66b3b2859e58b595f12b1f8ac391baa7 = NULL;

    assertFrameObject( frame_66b3b2859e58b595f12b1f8ac391baa7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_accumulator );
    Py_DECREF( par_accumulator );
    par_accumulator = NULL;

    CHECK_OBJECT( (PyObject *)par_src_num );
    Py_DECREF( par_src_num );
    par_src_num = NULL;

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

    CHECK_OBJECT( (PyObject *)par_accumulator );
    Py_DECREF( par_accumulator );
    par_accumulator = NULL;

    CHECK_OBJECT( (PyObject *)par_src_num );
    Py_DECREF( par_src_num );
    par_src_num = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_1___init__ );
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


static PyObject *impl_Crypto$Random$_UserFriendlyRNG$$$function_2_feed( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_9605e4fbf36fba9c1600ec8c259f3067 = NULL;

    struct Nuitka_FrameObject *frame_9605e4fbf36fba9c1600ec8c259f3067;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9605e4fbf36fba9c1600ec8c259f3067, codeobj_9605e4fbf36fba9c1600ec8c259f3067, module_Crypto$Random$_UserFriendlyRNG, sizeof(void *)+sizeof(void *) );
    frame_9605e4fbf36fba9c1600ec8c259f3067 = cache_frame_9605e4fbf36fba9c1600ec8c259f3067;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9605e4fbf36fba9c1600ec8c259f3067 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9605e4fbf36fba9c1600ec8c259f3067 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__fortuna );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_random_event );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__src_num );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 47;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__pool_num );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 47;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_data;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_9605e4fbf36fba9c1600ec8c259f3067->m_frame.f_lineno = 47;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__pool_num );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1;
    tmp_left_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_31;
    tmp_assattr_name_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__pool_num, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 48;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9605e4fbf36fba9c1600ec8c259f3067 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9605e4fbf36fba9c1600ec8c259f3067 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9605e4fbf36fba9c1600ec8c259f3067, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9605e4fbf36fba9c1600ec8c259f3067->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9605e4fbf36fba9c1600ec8c259f3067, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9605e4fbf36fba9c1600ec8c259f3067,
        type_description_1,
        par_self,
        par_data
    );


    // Release cached frame.
    if ( frame_9605e4fbf36fba9c1600ec8c259f3067 == cache_frame_9605e4fbf36fba9c1600ec8c259f3067 )
    {
        Py_DECREF( frame_9605e4fbf36fba9c1600ec8c259f3067 );
    }
    cache_frame_9605e4fbf36fba9c1600ec8c259f3067 = NULL;

    assertFrameObject( frame_9605e4fbf36fba9c1600ec8c259f3067 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_2_feed );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_2_feed );
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


static PyObject *impl_Crypto$Random$_UserFriendlyRNG$$$function_3___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_accumulator = python_pars[ 1 ];
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_103a98957de9889cffaaaf015834ac32 = NULL;

    struct Nuitka_FrameObject *frame_103a98957de9889cffaaaf015834ac32;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_103a98957de9889cffaaaf015834ac32, codeobj_103a98957de9889cffaaaf015834ac32, module_Crypto$Random$_UserFriendlyRNG, sizeof(void *)+sizeof(void *) );
    frame_103a98957de9889cffaaaf015834ac32 = cache_frame_103a98957de9889cffaaaf015834ac32;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_103a98957de9889cffaaaf015834ac32 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_103a98957de9889cffaaaf015834ac32 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_OSRNG );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OSRNG );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "OSRNG" );
        exception_tb = NULL;

        exception_lineno = 53;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_103a98957de9889cffaaaf015834ac32->m_frame.f_lineno = 53;
    tmp_assattr_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_new );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__osrng, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 53;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__EntropySource );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__EntropySource );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_EntropySource" );
        exception_tb = NULL;

        exception_lineno = 54;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_accumulator;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = const_int_pos_255;
    frame_103a98957de9889cffaaaf015834ac32->m_frame.f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__osrng_es, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 54;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__EntropySource );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__EntropySource );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_EntropySource" );
        exception_tb = NULL;

        exception_lineno = 55;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_accumulator;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = const_int_pos_254;
    frame_103a98957de9889cffaaaf015834ac32->m_frame.f_lineno = 55;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assattr_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__time_es, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 55;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__EntropySource );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__EntropySource );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_EntropySource" );
        exception_tb = NULL;

        exception_lineno = 56;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_accumulator;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = const_int_pos_253;
    frame_103a98957de9889cffaaaf015834ac32->m_frame.f_lineno = 56;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assattr_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__clock_es, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 56;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_103a98957de9889cffaaaf015834ac32 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_103a98957de9889cffaaaf015834ac32 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_103a98957de9889cffaaaf015834ac32, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_103a98957de9889cffaaaf015834ac32->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_103a98957de9889cffaaaf015834ac32, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_103a98957de9889cffaaaf015834ac32,
        type_description_1,
        par_self,
        par_accumulator
    );


    // Release cached frame.
    if ( frame_103a98957de9889cffaaaf015834ac32 == cache_frame_103a98957de9889cffaaaf015834ac32 )
    {
        Py_DECREF( frame_103a98957de9889cffaaaf015834ac32 );
    }
    cache_frame_103a98957de9889cffaaaf015834ac32 = NULL;

    assertFrameObject( frame_103a98957de9889cffaaaf015834ac32 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_3___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_accumulator );
    Py_DECREF( par_accumulator );
    par_accumulator = NULL;

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

    CHECK_OBJECT( (PyObject *)par_accumulator );
    Py_DECREF( par_accumulator );
    par_accumulator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_3___init__ );
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


static PyObject *impl_Crypto$Random$_UserFriendlyRNG$$$function_4_reinit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_i = NULL;
    PyObject *var_block = NULL;
    PyObject *var_p = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_615d7e1d08476274fec686af29ed9aa7 = NULL;

    struct Nuitka_FrameObject *frame_615d7e1d08476274fec686af29ed9aa7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_iter_arg_1 = const_tuple_int_0_int_pos_1_tuple;
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    assert( tmp_assign_source_1 != NULL );
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_615d7e1d08476274fec686af29ed9aa7, codeobj_615d7e1d08476274fec686af29ed9aa7, module_Crypto$Random$_UserFriendlyRNG, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_615d7e1d08476274fec686af29ed9aa7 = cache_frame_615d7e1d08476274fec686af29ed9aa7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_615d7e1d08476274fec686af29ed9aa7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_615d7e1d08476274fec686af29ed9aa7 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
            exception_lineno = 61;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_3 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_3;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__osrng );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    frame_615d7e1d08476274fec686af29ed9aa7->m_frame.f_lineno = 62;
    tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_read, &PyTuple_GET_ITEM( const_tuple_int_pos_1024_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_block;
        var_block = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_iter_arg_2 = const_tuple_41f70ed433b6a426d4c5af53d3948dac_tuple;
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
    assert( tmp_assign_source_5 != NULL );
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
            exception_lineno = 63;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_assign_source_7 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_7 );
    {
        PyObject *old = var_p;
        var_p = tmp_assign_source_7;
        Py_INCREF( var_p );
        Py_XDECREF( old );
    }

    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__osrng_es );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_feed );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    tmp_slice_source_1 = var_block;

    CHECK_OBJECT( tmp_slice_source_1 );
    tmp_left_name_1 = var_p;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = const_int_pos_32;
    tmp_slice_lower_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_slice_lower_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 64;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    tmp_left_name_3 = var_p;

    CHECK_OBJECT( tmp_left_name_3 );
    tmp_right_name_2 = const_int_pos_1;
    tmp_left_name_2 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_slice_lower_1 );

        exception_lineno = 64;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    tmp_right_name_3 = const_int_pos_32;
    tmp_slice_upper_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_slice_upper_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_slice_lower_1 );

        exception_lineno = 64;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    tmp_args_element_name_1 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_lower_1 );
    Py_DECREF( tmp_slice_upper_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 64;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    frame_615d7e1d08476274fec686af29ed9aa7->m_frame.f_lineno = 64;
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


        exception_lineno = 64;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_assign_source_8 = Py_None;
    {
        PyObject *old = var_block;
        assert( old != NULL );
        var_block = tmp_assign_source_8;
        Py_INCREF( var_block );
        Py_DECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__osrng );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_615d7e1d08476274fec686af29ed9aa7->m_frame.f_lineno = 66;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_flush );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_615d7e1d08476274fec686af29ed9aa7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_615d7e1d08476274fec686af29ed9aa7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_615d7e1d08476274fec686af29ed9aa7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_615d7e1d08476274fec686af29ed9aa7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_615d7e1d08476274fec686af29ed9aa7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_615d7e1d08476274fec686af29ed9aa7,
        type_description_1,
        par_self,
        var_i,
        var_block,
        var_p
    );


    // Release cached frame.
    if ( frame_615d7e1d08476274fec686af29ed9aa7 == cache_frame_615d7e1d08476274fec686af29ed9aa7 )
    {
        Py_DECREF( frame_615d7e1d08476274fec686af29ed9aa7 );
    }
    cache_frame_615d7e1d08476274fec686af29ed9aa7 = NULL;

    assertFrameObject( frame_615d7e1d08476274fec686af29ed9aa7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_4_reinit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_block );
    var_block = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

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

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_block );
    var_block = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_4_reinit );
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


static PyObject *impl_Crypto$Random$_UserFriendlyRNG$$$function_5_collect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_t = NULL;
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_341bfd4ec4a80d06ca4478b72b8e31d5 = NULL;

    struct Nuitka_FrameObject *frame_341bfd4ec4a80d06ca4478b72b8e31d5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_341bfd4ec4a80d06ca4478b72b8e31d5, codeobj_341bfd4ec4a80d06ca4478b72b8e31d5, module_Crypto$Random$_UserFriendlyRNG, sizeof(void *)+sizeof(void *) );
    frame_341bfd4ec4a80d06ca4478b72b8e31d5 = cache_frame_341bfd4ec4a80d06ca4478b72b8e31d5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_341bfd4ec4a80d06ca4478b72b8e31d5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_341bfd4ec4a80d06ca4478b72b8e31d5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__osrng_es );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_feed );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__osrng );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 70;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_341bfd4ec4a80d06ca4478b72b8e31d5->m_frame.f_lineno = 70;
    tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_read, &PyTuple_GET_ITEM( const_tuple_int_pos_8_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 70;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_341bfd4ec4a80d06ca4478b72b8e31d5->m_frame.f_lineno = 70;
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


        exception_lineno = 70;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "time" );
        exception_tb = NULL;

        exception_lineno = 73;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_341bfd4ec4a80d06ca4478b72b8e31d5->m_frame.f_lineno = 73;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_time );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_t == NULL );
    var_t = tmp_assign_source_1;

    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__time_es );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_feed );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_struct );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_struct );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "struct" );
        exception_tb = NULL;

        exception_lineno = 74;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_pack );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 74;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = const_str_digest_91acf85d3abded5b2d21911dcd1c43a1;
    tmp_left_name_1 = const_int_pos_1073741824;
    tmp_left_name_2 = var_t;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_floor );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_floor );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "floor" );
        exception_tb = NULL;

        exception_lineno = 74;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = var_t;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_341bfd4ec4a80d06ca4478b72b8e31d5->m_frame.f_lineno = 74;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 74;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 74;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_int_arg_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 74;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 74;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_341bfd4ec4a80d06ca4478b72b8e31d5->m_frame.f_lineno = 74;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 74;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_341bfd4ec4a80d06ca4478b72b8e31d5->m_frame.f_lineno = 74;
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


        exception_lineno = 74;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "time" );
        exception_tb = NULL;

        exception_lineno = 77;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_341bfd4ec4a80d06ca4478b72b8e31d5->m_frame.f_lineno = 77;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_clock );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_t;
        assert( old != NULL );
        var_t = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_source_name_8 = par_self;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__clock_es );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_feed );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_struct );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_struct );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "struct" );
        exception_tb = NULL;

        exception_lineno = 78;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_pack );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 78;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = const_str_digest_91acf85d3abded5b2d21911dcd1c43a1;
    tmp_left_name_3 = const_int_pos_1073741824;
    tmp_left_name_4 = var_t;

    CHECK_OBJECT( tmp_left_name_4 );
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_floor );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_floor );
    }

    if ( tmp_called_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "floor" );
        exception_tb = NULL;

        exception_lineno = 78;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = var_t;

    CHECK_OBJECT( tmp_args_element_name_9 );
    frame_341bfd4ec4a80d06ca4478b72b8e31d5->m_frame.f_lineno = 78;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 78;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 78;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_int_arg_2 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_int_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 78;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = PyNumber_Int( tmp_int_arg_2 );
    Py_DECREF( tmp_int_arg_2 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 78;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_341bfd4ec4a80d06ca4478b72b8e31d5->m_frame.f_lineno = 78;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 78;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_341bfd4ec4a80d06ca4478b72b8e31d5->m_frame.f_lineno = 78;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_341bfd4ec4a80d06ca4478b72b8e31d5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_341bfd4ec4a80d06ca4478b72b8e31d5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_341bfd4ec4a80d06ca4478b72b8e31d5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_341bfd4ec4a80d06ca4478b72b8e31d5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_341bfd4ec4a80d06ca4478b72b8e31d5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_341bfd4ec4a80d06ca4478b72b8e31d5,
        type_description_1,
        par_self,
        var_t
    );


    // Release cached frame.
    if ( frame_341bfd4ec4a80d06ca4478b72b8e31d5 == cache_frame_341bfd4ec4a80d06ca4478b72b8e31d5 )
    {
        Py_DECREF( frame_341bfd4ec4a80d06ca4478b72b8e31d5 );
    }
    cache_frame_341bfd4ec4a80d06ca4478b72b8e31d5 = NULL;

    assertFrameObject( frame_341bfd4ec4a80d06ca4478b72b8e31d5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_5_collect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_t );
    Py_DECREF( var_t );
    var_t = NULL;

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

    Py_XDECREF( var_t );
    var_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_5_collect );
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


static PyObject *impl_Crypto$Random$_UserFriendlyRNG$$$function_6___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2a7aedb2d1a0734f20dc5d01c3b1edd2 = NULL;

    struct Nuitka_FrameObject *frame_2a7aedb2d1a0734f20dc5d01c3b1edd2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2a7aedb2d1a0734f20dc5d01c3b1edd2, codeobj_2a7aedb2d1a0734f20dc5d01c3b1edd2, module_Crypto$Random$_UserFriendlyRNG, sizeof(void *) );
    frame_2a7aedb2d1a0734f20dc5d01c3b1edd2 = cache_frame_2a7aedb2d1a0734f20dc5d01c3b1edd2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2a7aedb2d1a0734f20dc5d01c3b1edd2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2a7aedb2d1a0734f20dc5d01c3b1edd2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = Py_False;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_closed, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_FortunaAccumulator );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FortunaAccumulator );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "FortunaAccumulator" );
        exception_tb = NULL;

        exception_lineno = 85;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_2a7aedb2d1a0734f20dc5d01c3b1edd2->m_frame.f_lineno = 85;
    tmp_assattr_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_FortunaAccumulator );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__fa, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 85;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__EntropyCollector );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__EntropyCollector );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_EntropyCollector" );
        exception_tb = NULL;

        exception_lineno = 86;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__fa );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_2a7aedb2d1a0734f20dc5d01c3b1edd2->m_frame.f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assattr_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__ec, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 86;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_called_instance_2 = par_self;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_2a7aedb2d1a0734f20dc5d01c3b1edd2->m_frame.f_lineno = 87;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_reinit );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a7aedb2d1a0734f20dc5d01c3b1edd2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a7aedb2d1a0734f20dc5d01c3b1edd2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2a7aedb2d1a0734f20dc5d01c3b1edd2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2a7aedb2d1a0734f20dc5d01c3b1edd2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2a7aedb2d1a0734f20dc5d01c3b1edd2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2a7aedb2d1a0734f20dc5d01c3b1edd2,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_2a7aedb2d1a0734f20dc5d01c3b1edd2 == cache_frame_2a7aedb2d1a0734f20dc5d01c3b1edd2 )
    {
        Py_DECREF( frame_2a7aedb2d1a0734f20dc5d01c3b1edd2 );
    }
    cache_frame_2a7aedb2d1a0734f20dc5d01c3b1edd2 = NULL;

    assertFrameObject( frame_2a7aedb2d1a0734f20dc5d01c3b1edd2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_6___init__ );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_6___init__ );
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


static PyObject *impl_Crypto$Random$_UserFriendlyRNG$$$function_7_reinit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_daf6508b68e0b2fd40314fee6d599a15 = NULL;

    struct Nuitka_FrameObject *frame_daf6508b68e0b2fd40314fee6d599a15;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_daf6508b68e0b2fd40314fee6d599a15, codeobj_daf6508b68e0b2fd40314fee6d599a15, module_Crypto$Random$_UserFriendlyRNG, sizeof(void *) );
    frame_daf6508b68e0b2fd40314fee6d599a15 = cache_frame_daf6508b68e0b2fd40314fee6d599a15;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_daf6508b68e0b2fd40314fee6d599a15 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_daf6508b68e0b2fd40314fee6d599a15 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 95;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_daf6508b68e0b2fd40314fee6d599a15->m_frame.f_lineno = 95;
    tmp_assattr_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getpid );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__pid, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 95;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__ec );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_daf6508b68e0b2fd40314fee6d599a15->m_frame.f_lineno = 99;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_reinit );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__fa );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_daf6508b68e0b2fd40314fee6d599a15->m_frame.f_lineno = 109;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain__forget_last_reseed );
    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_daf6508b68e0b2fd40314fee6d599a15 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_daf6508b68e0b2fd40314fee6d599a15 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_daf6508b68e0b2fd40314fee6d599a15, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_daf6508b68e0b2fd40314fee6d599a15->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_daf6508b68e0b2fd40314fee6d599a15, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_daf6508b68e0b2fd40314fee6d599a15,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_daf6508b68e0b2fd40314fee6d599a15 == cache_frame_daf6508b68e0b2fd40314fee6d599a15 )
    {
        Py_DECREF( frame_daf6508b68e0b2fd40314fee6d599a15 );
    }
    cache_frame_daf6508b68e0b2fd40314fee6d599a15 = NULL;

    assertFrameObject( frame_daf6508b68e0b2fd40314fee6d599a15 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_7_reinit );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_7_reinit );
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


static PyObject *impl_Crypto$Random$_UserFriendlyRNG$$$function_8_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_df715d0de22f47628d570d09a798981f = NULL;

    struct Nuitka_FrameObject *frame_df715d0de22f47628d570d09a798981f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_df715d0de22f47628d570d09a798981f, codeobj_df715d0de22f47628d570d09a798981f, module_Crypto$Random$_UserFriendlyRNG, sizeof(void *) );
    frame_df715d0de22f47628d570d09a798981f = cache_frame_df715d0de22f47628d570d09a798981f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_df715d0de22f47628d570d09a798981f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_df715d0de22f47628d570d09a798981f ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = Py_True;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_closed, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = Py_None;
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__osrng, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = Py_None;
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__fa, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_df715d0de22f47628d570d09a798981f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_df715d0de22f47628d570d09a798981f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_df715d0de22f47628d570d09a798981f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_df715d0de22f47628d570d09a798981f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_df715d0de22f47628d570d09a798981f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_df715d0de22f47628d570d09a798981f,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_df715d0de22f47628d570d09a798981f == cache_frame_df715d0de22f47628d570d09a798981f )
    {
        Py_DECREF( frame_df715d0de22f47628d570d09a798981f );
    }
    cache_frame_df715d0de22f47628d570d09a798981f = NULL;

    assertFrameObject( frame_df715d0de22f47628d570d09a798981f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_8_close );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_8_close );
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


static PyObject *impl_Crypto$Random$_UserFriendlyRNG$$$function_9_flush( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_9_flush );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_9_flush );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_Crypto$Random$_UserFriendlyRNG$$$function_10_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_N = python_pars[ 1 ];
    PyObject *var_retval = NULL;
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
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_25f7bf711fb96dcdbc68275140cdcb24 = NULL;

    struct Nuitka_FrameObject *frame_25f7bf711fb96dcdbc68275140cdcb24;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_25f7bf711fb96dcdbc68275140cdcb24, codeobj_25f7bf711fb96dcdbc68275140cdcb24, module_Crypto$Random$_UserFriendlyRNG, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_25f7bf711fb96dcdbc68275140cdcb24 = cache_frame_25f7bf711fb96dcdbc68275140cdcb24;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_25f7bf711fb96dcdbc68275140cdcb24 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_25f7bf711fb96dcdbc68275140cdcb24 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_closed );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 121;
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
    frame_25f7bf711fb96dcdbc68275140cdcb24->m_frame.f_lineno = 122;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 122;
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


        exception_lineno = 123;
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
    frame_25f7bf711fb96dcdbc68275140cdcb24->m_frame.f_lineno = 124;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 124;
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


        exception_lineno = 125;
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
    frame_25f7bf711fb96dcdbc68275140cdcb24->m_frame.f_lineno = 126;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 126;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__ec );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_25f7bf711fb96dcdbc68275140cdcb24->m_frame.f_lineno = 129;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_collect );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__fa );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_N;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_25f7bf711fb96dcdbc68275140cdcb24->m_frame.f_lineno = 132;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_random_data, call_args );
    }

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_retval == NULL );
    var_retval = tmp_assign_source_1;

    tmp_called_instance_3 = par_self;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_25f7bf711fb96dcdbc68275140cdcb24->m_frame.f_lineno = 137;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain__check_pid );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_25f7bf711fb96dcdbc68275140cdcb24 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_25f7bf711fb96dcdbc68275140cdcb24 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_25f7bf711fb96dcdbc68275140cdcb24, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_25f7bf711fb96dcdbc68275140cdcb24->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_25f7bf711fb96dcdbc68275140cdcb24, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_25f7bf711fb96dcdbc68275140cdcb24,
        type_description_1,
        par_self,
        par_N,
        var_retval
    );


    // Release cached frame.
    if ( frame_25f7bf711fb96dcdbc68275140cdcb24 == cache_frame_25f7bf711fb96dcdbc68275140cdcb24 )
    {
        Py_DECREF( frame_25f7bf711fb96dcdbc68275140cdcb24 );
    }
    cache_frame_25f7bf711fb96dcdbc68275140cdcb24 = NULL;

    assertFrameObject( frame_25f7bf711fb96dcdbc68275140cdcb24 );

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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_10_read );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_N );
    Py_DECREF( par_N );
    par_N = NULL;

    CHECK_OBJECT( (PyObject *)var_retval );
    Py_DECREF( var_retval );
    var_retval = NULL;

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

    Py_XDECREF( var_retval );
    var_retval = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_10_read );
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


static PyObject *impl_Crypto$Random$_UserFriendlyRNG$$$function_11__check_pid( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_0d7a3476ee9bbbae7f26cb34f2ec5cb7 = NULL;

    struct Nuitka_FrameObject *frame_0d7a3476ee9bbbae7f26cb34f2ec5cb7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0d7a3476ee9bbbae7f26cb34f2ec5cb7, codeobj_0d7a3476ee9bbbae7f26cb34f2ec5cb7, module_Crypto$Random$_UserFriendlyRNG, sizeof(void *) );
    frame_0d7a3476ee9bbbae7f26cb34f2ec5cb7 = cache_frame_0d7a3476ee9bbbae7f26cb34f2ec5cb7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0d7a3476ee9bbbae7f26cb34f2ec5cb7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0d7a3476ee9bbbae7f26cb34f2ec5cb7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 152;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_0d7a3476ee9bbbae7f26cb34f2ec5cb7->m_frame.f_lineno = 152;
    tmp_compare_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getpid );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__pid );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 152;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 152;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_a235f187109089f5b7574351d5f844ef;
    frame_0d7a3476ee9bbbae7f26cb34f2ec5cb7->m_frame.f_lineno = 153;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_AssertionError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 153;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "o";
    goto frame_exception_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0d7a3476ee9bbbae7f26cb34f2ec5cb7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0d7a3476ee9bbbae7f26cb34f2ec5cb7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0d7a3476ee9bbbae7f26cb34f2ec5cb7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0d7a3476ee9bbbae7f26cb34f2ec5cb7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0d7a3476ee9bbbae7f26cb34f2ec5cb7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0d7a3476ee9bbbae7f26cb34f2ec5cb7,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_0d7a3476ee9bbbae7f26cb34f2ec5cb7 == cache_frame_0d7a3476ee9bbbae7f26cb34f2ec5cb7 )
    {
        Py_DECREF( frame_0d7a3476ee9bbbae7f26cb34f2ec5cb7 );
    }
    cache_frame_0d7a3476ee9bbbae7f26cb34f2ec5cb7 = NULL;

    assertFrameObject( frame_0d7a3476ee9bbbae7f26cb34f2ec5cb7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_11__check_pid );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_11__check_pid );
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


static PyObject *impl_Crypto$Random$_UserFriendlyRNG$$$function_12___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_06c6fdb043e0d2a321fe087e6236c232 = NULL;

    struct Nuitka_FrameObject *frame_06c6fdb043e0d2a321fe087e6236c232;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_06c6fdb043e0d2a321fe087e6236c232, codeobj_06c6fdb043e0d2a321fe087e6236c232, module_Crypto$Random$_UserFriendlyRNG, sizeof(void *) );
    frame_06c6fdb043e0d2a321fe087e6236c232 = cache_frame_06c6fdb043e0d2a321fe087e6236c232;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_06c6fdb043e0d2a321fe087e6236c232 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_06c6fdb043e0d2a321fe087e6236c232 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_threading );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_threading );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "threading" );
        exception_tb = NULL;

        exception_lineno = 158;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_06c6fdb043e0d2a321fe087e6236c232->m_frame.f_lineno = 158;
    tmp_assattr_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_Lock );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__lock, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 158;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__UserFriendlyRNG );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__UserFriendlyRNG );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_UserFriendlyRNG" );
        exception_tb = NULL;

        exception_lineno = 159;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_06c6fdb043e0d2a321fe087e6236c232->m_frame.f_lineno = 159;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain___init__, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_06c6fdb043e0d2a321fe087e6236c232 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_06c6fdb043e0d2a321fe087e6236c232 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_06c6fdb043e0d2a321fe087e6236c232, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_06c6fdb043e0d2a321fe087e6236c232->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_06c6fdb043e0d2a321fe087e6236c232, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_06c6fdb043e0d2a321fe087e6236c232,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_06c6fdb043e0d2a321fe087e6236c232 == cache_frame_06c6fdb043e0d2a321fe087e6236c232 )
    {
        Py_DECREF( frame_06c6fdb043e0d2a321fe087e6236c232 );
    }
    cache_frame_06c6fdb043e0d2a321fe087e6236c232 = NULL;

    assertFrameObject( frame_06c6fdb043e0d2a321fe087e6236c232 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_12___init__ );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_12___init__ );
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


static PyObject *impl_Crypto$Random$_UserFriendlyRNG$$$function_13_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_57c3f89473dd96c29235e4b1914bafa3 = NULL;

    struct Nuitka_FrameObject *frame_57c3f89473dd96c29235e4b1914bafa3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_57c3f89473dd96c29235e4b1914bafa3, codeobj_57c3f89473dd96c29235e4b1914bafa3, module_Crypto$Random$_UserFriendlyRNG, sizeof(void *) );
    frame_57c3f89473dd96c29235e4b1914bafa3 = cache_frame_57c3f89473dd96c29235e4b1914bafa3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_57c3f89473dd96c29235e4b1914bafa3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_57c3f89473dd96c29235e4b1914bafa3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__lock );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_57c3f89473dd96c29235e4b1914bafa3->m_frame.f_lineno = 162;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_acquire );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code:
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__UserFriendlyRNG );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__UserFriendlyRNG );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_UserFriendlyRNG" );
        exception_tb = NULL;

        exception_lineno = 164;
        type_description_1 = "o";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_57c3f89473dd96c29235e4b1914bafa3->m_frame.f_lineno = 164;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_close, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        type_description_1 = "o";
        goto try_except_handler_2;
    }
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_13_close );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__lock );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_57c3f89473dd96c29235e4b1914bafa3->m_frame.f_lineno = 166;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_release );
    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto frame_return_exit_1;
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

    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__lock );
    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 166;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_57c3f89473dd96c29235e4b1914bafa3->m_frame.f_lineno = 166;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_release );
    Py_DECREF( tmp_called_instance_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 166;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_57c3f89473dd96c29235e4b1914bafa3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_57c3f89473dd96c29235e4b1914bafa3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_57c3f89473dd96c29235e4b1914bafa3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_57c3f89473dd96c29235e4b1914bafa3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_57c3f89473dd96c29235e4b1914bafa3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_57c3f89473dd96c29235e4b1914bafa3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_57c3f89473dd96c29235e4b1914bafa3,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_57c3f89473dd96c29235e4b1914bafa3 == cache_frame_57c3f89473dd96c29235e4b1914bafa3 )
    {
        Py_DECREF( frame_57c3f89473dd96c29235e4b1914bafa3 );
    }
    cache_frame_57c3f89473dd96c29235e4b1914bafa3 = NULL;

    assertFrameObject( frame_57c3f89473dd96c29235e4b1914bafa3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_13_close );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_13_close );
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


static PyObject *impl_Crypto$Random$_UserFriendlyRNG$$$function_14_reinit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_28bcedf200340f576eb94ac362d39344 = NULL;

    struct Nuitka_FrameObject *frame_28bcedf200340f576eb94ac362d39344;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_28bcedf200340f576eb94ac362d39344, codeobj_28bcedf200340f576eb94ac362d39344, module_Crypto$Random$_UserFriendlyRNG, sizeof(void *) );
    frame_28bcedf200340f576eb94ac362d39344 = cache_frame_28bcedf200340f576eb94ac362d39344;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_28bcedf200340f576eb94ac362d39344 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_28bcedf200340f576eb94ac362d39344 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__lock );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_28bcedf200340f576eb94ac362d39344->m_frame.f_lineno = 169;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_acquire );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code:
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__UserFriendlyRNG );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__UserFriendlyRNG );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_UserFriendlyRNG" );
        exception_tb = NULL;

        exception_lineno = 171;
        type_description_1 = "o";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_28bcedf200340f576eb94ac362d39344->m_frame.f_lineno = 171;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_reinit, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_1 = "o";
        goto try_except_handler_2;
    }
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_14_reinit );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__lock );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_28bcedf200340f576eb94ac362d39344->m_frame.f_lineno = 173;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_release );
    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto frame_return_exit_1;
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

    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__lock );
    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 173;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_28bcedf200340f576eb94ac362d39344->m_frame.f_lineno = 173;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_release );
    Py_DECREF( tmp_called_instance_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 173;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_28bcedf200340f576eb94ac362d39344 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_28bcedf200340f576eb94ac362d39344 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_28bcedf200340f576eb94ac362d39344 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_28bcedf200340f576eb94ac362d39344, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_28bcedf200340f576eb94ac362d39344->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_28bcedf200340f576eb94ac362d39344, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_28bcedf200340f576eb94ac362d39344,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_28bcedf200340f576eb94ac362d39344 == cache_frame_28bcedf200340f576eb94ac362d39344 )
    {
        Py_DECREF( frame_28bcedf200340f576eb94ac362d39344 );
    }
    cache_frame_28bcedf200340f576eb94ac362d39344 = NULL;

    assertFrameObject( frame_28bcedf200340f576eb94ac362d39344 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_14_reinit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_14_reinit );
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


static PyObject *impl_Crypto$Random$_UserFriendlyRNG$$$function_15_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_bytes = python_pars[ 1 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_95c846883aeb25b7bd9496bee819e308 = NULL;

    struct Nuitka_FrameObject *frame_95c846883aeb25b7bd9496bee819e308;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_95c846883aeb25b7bd9496bee819e308, codeobj_95c846883aeb25b7bd9496bee819e308, module_Crypto$Random$_UserFriendlyRNG, sizeof(void *)+sizeof(void *) );
    frame_95c846883aeb25b7bd9496bee819e308 = cache_frame_95c846883aeb25b7bd9496bee819e308;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_95c846883aeb25b7bd9496bee819e308 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_95c846883aeb25b7bd9496bee819e308 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__lock );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_95c846883aeb25b7bd9496bee819e308->m_frame.f_lineno = 176;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_acquire );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code:
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__UserFriendlyRNG );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__UserFriendlyRNG );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_UserFriendlyRNG" );
        exception_tb = NULL;

        exception_lineno = 178;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_bytes;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_95c846883aeb25b7bd9496bee819e308->m_frame.f_lineno = 178;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_read, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_15_read );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__lock );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_95c846883aeb25b7bd9496bee819e308->m_frame.f_lineno = 180;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_release );
    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto frame_return_exit_1;
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

    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__lock );
    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 180;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_95c846883aeb25b7bd9496bee819e308->m_frame.f_lineno = 180;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_release );
    Py_DECREF( tmp_called_instance_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 180;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_95c846883aeb25b7bd9496bee819e308 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_95c846883aeb25b7bd9496bee819e308 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_95c846883aeb25b7bd9496bee819e308 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_95c846883aeb25b7bd9496bee819e308, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_95c846883aeb25b7bd9496bee819e308->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_95c846883aeb25b7bd9496bee819e308, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_95c846883aeb25b7bd9496bee819e308,
        type_description_1,
        par_self,
        par_bytes
    );


    // Release cached frame.
    if ( frame_95c846883aeb25b7bd9496bee819e308 == cache_frame_95c846883aeb25b7bd9496bee819e308 )
    {
        Py_DECREF( frame_95c846883aeb25b7bd9496bee819e308 );
    }
    cache_frame_95c846883aeb25b7bd9496bee819e308 = NULL;

    assertFrameObject( frame_95c846883aeb25b7bd9496bee819e308 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_15_read );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_bytes );
    Py_DECREF( par_bytes );
    par_bytes = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_15_read );
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


static PyObject *impl_Crypto$Random$_UserFriendlyRNG$$$function_16___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_singleton = python_pars[ 1 ];
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
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_ae42a8ed57bd6c5ac979c844aeff8589 = NULL;

    struct Nuitka_FrameObject *frame_ae42a8ed57bd6c5ac979c844aeff8589;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ae42a8ed57bd6c5ac979c844aeff8589, codeobj_ae42a8ed57bd6c5ac979c844aeff8589, module_Crypto$Random$_UserFriendlyRNG, sizeof(void *)+sizeof(void *) );
    frame_ae42a8ed57bd6c5ac979c844aeff8589 = cache_frame_ae42a8ed57bd6c5ac979c844aeff8589;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ae42a8ed57bd6c5ac979c844aeff8589 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ae42a8ed57bd6c5ac979c844aeff8589 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = Py_False;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_closed, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_singleton;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__singleton, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ae42a8ed57bd6c5ac979c844aeff8589 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ae42a8ed57bd6c5ac979c844aeff8589 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ae42a8ed57bd6c5ac979c844aeff8589, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ae42a8ed57bd6c5ac979c844aeff8589->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ae42a8ed57bd6c5ac979c844aeff8589, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ae42a8ed57bd6c5ac979c844aeff8589,
        type_description_1,
        par_self,
        par_singleton
    );


    // Release cached frame.
    if ( frame_ae42a8ed57bd6c5ac979c844aeff8589 == cache_frame_ae42a8ed57bd6c5ac979c844aeff8589 )
    {
        Py_DECREF( frame_ae42a8ed57bd6c5ac979c844aeff8589 );
    }
    cache_frame_ae42a8ed57bd6c5ac979c844aeff8589 = NULL;

    assertFrameObject( frame_ae42a8ed57bd6c5ac979c844aeff8589 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_16___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_singleton );
    Py_DECREF( par_singleton );
    par_singleton = NULL;

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

    CHECK_OBJECT( (PyObject *)par_singleton );
    Py_DECREF( par_singleton );
    par_singleton = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_16___init__ );
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


static PyObject *impl_Crypto$Random$_UserFriendlyRNG$$$function_17___enter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_17___enter__ );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_17___enter__ );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_Crypto$Random$_UserFriendlyRNG$$$function_18___exit__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_fc2dae5b2c36af1ff4597c07117bb0a6 = NULL;

    struct Nuitka_FrameObject *frame_fc2dae5b2c36af1ff4597c07117bb0a6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fc2dae5b2c36af1ff4597c07117bb0a6, codeobj_fc2dae5b2c36af1ff4597c07117bb0a6, module_Crypto$Random$_UserFriendlyRNG, sizeof(void *) );
    frame_fc2dae5b2c36af1ff4597c07117bb0a6 = cache_frame_fc2dae5b2c36af1ff4597c07117bb0a6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fc2dae5b2c36af1ff4597c07117bb0a6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fc2dae5b2c36af1ff4597c07117bb0a6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_fc2dae5b2c36af1ff4597c07117bb0a6->m_frame.f_lineno = 192;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc2dae5b2c36af1ff4597c07117bb0a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc2dae5b2c36af1ff4597c07117bb0a6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fc2dae5b2c36af1ff4597c07117bb0a6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fc2dae5b2c36af1ff4597c07117bb0a6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fc2dae5b2c36af1ff4597c07117bb0a6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fc2dae5b2c36af1ff4597c07117bb0a6,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_fc2dae5b2c36af1ff4597c07117bb0a6 == cache_frame_fc2dae5b2c36af1ff4597c07117bb0a6 )
    {
        Py_DECREF( frame_fc2dae5b2c36af1ff4597c07117bb0a6 );
    }
    cache_frame_fc2dae5b2c36af1ff4597c07117bb0a6 = NULL;

    assertFrameObject( frame_fc2dae5b2c36af1ff4597c07117bb0a6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_18___exit__ );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_18___exit__ );
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


static PyObject *impl_Crypto$Random$_UserFriendlyRNG$$$function_19_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_fac2d5ef9c36e35ad33b7e61215748aa = NULL;

    struct Nuitka_FrameObject *frame_fac2d5ef9c36e35ad33b7e61215748aa;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fac2d5ef9c36e35ad33b7e61215748aa, codeobj_fac2d5ef9c36e35ad33b7e61215748aa, module_Crypto$Random$_UserFriendlyRNG, sizeof(void *) );
    frame_fac2d5ef9c36e35ad33b7e61215748aa = cache_frame_fac2d5ef9c36e35ad33b7e61215748aa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fac2d5ef9c36e35ad33b7e61215748aa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fac2d5ef9c36e35ad33b7e61215748aa ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = Py_True;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_closed, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = Py_None;
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__singleton, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fac2d5ef9c36e35ad33b7e61215748aa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fac2d5ef9c36e35ad33b7e61215748aa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fac2d5ef9c36e35ad33b7e61215748aa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fac2d5ef9c36e35ad33b7e61215748aa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fac2d5ef9c36e35ad33b7e61215748aa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fac2d5ef9c36e35ad33b7e61215748aa,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_fac2d5ef9c36e35ad33b7e61215748aa == cache_frame_fac2d5ef9c36e35ad33b7e61215748aa )
    {
        Py_DECREF( frame_fac2d5ef9c36e35ad33b7e61215748aa );
    }
    cache_frame_fac2d5ef9c36e35ad33b7e61215748aa = NULL;

    assertFrameObject( frame_fac2d5ef9c36e35ad33b7e61215748aa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_19_close );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_19_close );
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


static PyObject *impl_Crypto$Random$_UserFriendlyRNG$$$function_20_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_bytes = python_pars[ 1 ];
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_99bf1f9fbf80920a0b71f70fcbc54de3 = NULL;

    struct Nuitka_FrameObject *frame_99bf1f9fbf80920a0b71f70fcbc54de3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_99bf1f9fbf80920a0b71f70fcbc54de3, codeobj_99bf1f9fbf80920a0b71f70fcbc54de3, module_Crypto$Random$_UserFriendlyRNG, sizeof(void *)+sizeof(void *) );
    frame_99bf1f9fbf80920a0b71f70fcbc54de3 = cache_frame_99bf1f9fbf80920a0b71f70fcbc54de3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_99bf1f9fbf80920a0b71f70fcbc54de3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_99bf1f9fbf80920a0b71f70fcbc54de3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_closed );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 200;
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
    frame_99bf1f9fbf80920a0b71f70fcbc54de3->m_frame.f_lineno = 201;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 201;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__singleton );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_bytes;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_99bf1f9fbf80920a0b71f70fcbc54de3->m_frame.f_lineno = 202;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_read, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_99bf1f9fbf80920a0b71f70fcbc54de3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_99bf1f9fbf80920a0b71f70fcbc54de3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_99bf1f9fbf80920a0b71f70fcbc54de3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_99bf1f9fbf80920a0b71f70fcbc54de3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_99bf1f9fbf80920a0b71f70fcbc54de3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_99bf1f9fbf80920a0b71f70fcbc54de3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_99bf1f9fbf80920a0b71f70fcbc54de3,
        type_description_1,
        par_self,
        par_bytes
    );


    // Release cached frame.
    if ( frame_99bf1f9fbf80920a0b71f70fcbc54de3 == cache_frame_99bf1f9fbf80920a0b71f70fcbc54de3 )
    {
        Py_DECREF( frame_99bf1f9fbf80920a0b71f70fcbc54de3 );
    }
    cache_frame_99bf1f9fbf80920a0b71f70fcbc54de3 = NULL;

    assertFrameObject( frame_99bf1f9fbf80920a0b71f70fcbc54de3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_20_read );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_bytes );
    Py_DECREF( par_bytes );
    par_bytes = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_20_read );
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


static PyObject *impl_Crypto$Random$_UserFriendlyRNG$$$function_21_flush( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_edebea08f8a96c780674835fce36830a = NULL;

    struct Nuitka_FrameObject *frame_edebea08f8a96c780674835fce36830a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_edebea08f8a96c780674835fce36830a, codeobj_edebea08f8a96c780674835fce36830a, module_Crypto$Random$_UserFriendlyRNG, sizeof(void *) );
    frame_edebea08f8a96c780674835fce36830a = cache_frame_edebea08f8a96c780674835fce36830a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_edebea08f8a96c780674835fce36830a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_edebea08f8a96c780674835fce36830a ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_closed );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 205;
        type_description_1 = "o";
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
    frame_edebea08f8a96c780674835fce36830a->m_frame.f_lineno = 206;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 206;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "o";
    goto frame_exception_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_edebea08f8a96c780674835fce36830a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_edebea08f8a96c780674835fce36830a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_edebea08f8a96c780674835fce36830a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_edebea08f8a96c780674835fce36830a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_edebea08f8a96c780674835fce36830a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_edebea08f8a96c780674835fce36830a,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_edebea08f8a96c780674835fce36830a == cache_frame_edebea08f8a96c780674835fce36830a )
    {
        Py_DECREF( frame_edebea08f8a96c780674835fce36830a );
    }
    cache_frame_edebea08f8a96c780674835fce36830a = NULL;

    assertFrameObject( frame_edebea08f8a96c780674835fce36830a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_21_flush );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_21_flush );
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


static PyObject *impl_Crypto$Random$_UserFriendlyRNG$$$function_22__get_singleton( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_80c8ef500281fae0ae3b7880b394fd6e = NULL;

    struct Nuitka_FrameObject *frame_80c8ef500281fae0ae3b7880b394fd6e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_80c8ef500281fae0ae3b7880b394fd6e, codeobj_80c8ef500281fae0ae3b7880b394fd6e, module_Crypto$Random$_UserFriendlyRNG, 0 );
    frame_80c8ef500281fae0ae3b7880b394fd6e = cache_frame_80c8ef500281fae0ae3b7880b394fd6e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_80c8ef500281fae0ae3b7880b394fd6e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_80c8ef500281fae0ae3b7880b394fd6e ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__singleton_lock );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__singleton_lock );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_singleton_lock" );
        exception_tb = NULL;

        exception_lineno = 212;

        goto frame_exception_exit_1;
    }

    frame_80c8ef500281fae0ae3b7880b394fd6e->m_frame.f_lineno = 212;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_acquire );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code:
    tmp_compare_left_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__singleton );

    if (unlikely( tmp_compare_left_1 == NULL ))
    {
        tmp_compare_left_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__singleton );
    }

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_singleton" );
        exception_tb = NULL;

        exception_lineno = 214;

        goto try_except_handler_1;
    }

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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__LockingUserFriendlyRNG );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__LockingUserFriendlyRNG );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_LockingUserFriendlyRNG" );
        exception_tb = NULL;

        exception_lineno = 215;

        goto try_except_handler_1;
    }

    frame_80c8ef500281fae0ae3b7880b394fd6e->m_frame.f_lineno = 215;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__singleton, tmp_assign_source_1 );
    branch_no_1:;
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__singleton );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__singleton );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_singleton" );
        exception_tb = NULL;

        exception_lineno = 216;

        goto try_except_handler_1;
    }

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_22__get_singleton );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__singleton_lock );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__singleton_lock );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_singleton_lock" );
        exception_tb = NULL;

        exception_lineno = 218;

        goto frame_exception_exit_1;
    }

    frame_80c8ef500281fae0ae3b7880b394fd6e->m_frame.f_lineno = 218;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_release );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto frame_return_exit_1;
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

    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__singleton_lock );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__singleton_lock );
    }

    if ( tmp_called_instance_3 == NULL )
    {

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_singleton_lock" );
        exception_tb = NULL;

        exception_lineno = 218;

        goto frame_exception_exit_1;
    }

    frame_80c8ef500281fae0ae3b7880b394fd6e->m_frame.f_lineno = 218;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_release );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 218;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_80c8ef500281fae0ae3b7880b394fd6e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_80c8ef500281fae0ae3b7880b394fd6e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_80c8ef500281fae0ae3b7880b394fd6e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_80c8ef500281fae0ae3b7880b394fd6e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_80c8ef500281fae0ae3b7880b394fd6e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_80c8ef500281fae0ae3b7880b394fd6e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_80c8ef500281fae0ae3b7880b394fd6e,
        type_description_1
    );


    // Release cached frame.
    if ( frame_80c8ef500281fae0ae3b7880b394fd6e == cache_frame_80c8ef500281fae0ae3b7880b394fd6e )
    {
        Py_DECREF( frame_80c8ef500281fae0ae3b7880b394fd6e );
    }
    cache_frame_80c8ef500281fae0ae3b7880b394fd6e = NULL;

    assertFrameObject( frame_80c8ef500281fae0ae3b7880b394fd6e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_22__get_singleton );
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


static PyObject *impl_Crypto$Random$_UserFriendlyRNG$$$function_23_new( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_e6e2807b154070c5abc5863f90eb5eec = NULL;

    struct Nuitka_FrameObject *frame_e6e2807b154070c5abc5863f90eb5eec;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_e6e2807b154070c5abc5863f90eb5eec, codeobj_e6e2807b154070c5abc5863f90eb5eec, module_Crypto$Random$_UserFriendlyRNG, 0 );
    frame_e6e2807b154070c5abc5863f90eb5eec = cache_frame_e6e2807b154070c5abc5863f90eb5eec;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e6e2807b154070c5abc5863f90eb5eec );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e6e2807b154070c5abc5863f90eb5eec ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_RNGFile );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RNGFile );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "RNGFile" );
        exception_tb = NULL;

        exception_lineno = 221;

        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__get_singleton );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_singleton );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_get_singleton" );
        exception_tb = NULL;

        exception_lineno = 221;

        goto frame_exception_exit_1;
    }

    frame_e6e2807b154070c5abc5863f90eb5eec->m_frame.f_lineno = 221;
    tmp_args_element_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;

        goto frame_exception_exit_1;
    }
    frame_e6e2807b154070c5abc5863f90eb5eec->m_frame.f_lineno = 221;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;

        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6e2807b154070c5abc5863f90eb5eec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6e2807b154070c5abc5863f90eb5eec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6e2807b154070c5abc5863f90eb5eec );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e6e2807b154070c5abc5863f90eb5eec, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e6e2807b154070c5abc5863f90eb5eec->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e6e2807b154070c5abc5863f90eb5eec, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e6e2807b154070c5abc5863f90eb5eec,
        type_description_1
    );


    // Release cached frame.
    if ( frame_e6e2807b154070c5abc5863f90eb5eec == cache_frame_e6e2807b154070c5abc5863f90eb5eec )
    {
        Py_DECREF( frame_e6e2807b154070c5abc5863f90eb5eec );
    }
    cache_frame_e6e2807b154070c5abc5863f90eb5eec = NULL;

    assertFrameObject( frame_e6e2807b154070c5abc5863f90eb5eec );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_23_new );
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


static PyObject *impl_Crypto$Random$_UserFriendlyRNG$$$function_24_reinit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d8e795def13389e6b107ae61e7625a00 = NULL;

    struct Nuitka_FrameObject *frame_d8e795def13389e6b107ae61e7625a00;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_d8e795def13389e6b107ae61e7625a00, codeobj_d8e795def13389e6b107ae61e7625a00, module_Crypto$Random$_UserFriendlyRNG, 0 );
    frame_d8e795def13389e6b107ae61e7625a00 = cache_frame_d8e795def13389e6b107ae61e7625a00;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d8e795def13389e6b107ae61e7625a00 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d8e795def13389e6b107ae61e7625a00 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__get_singleton );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_singleton );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_get_singleton" );
        exception_tb = NULL;

        exception_lineno = 224;

        goto frame_exception_exit_1;
    }

    frame_d8e795def13389e6b107ae61e7625a00->m_frame.f_lineno = 224;
    tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;

        goto frame_exception_exit_1;
    }
    frame_d8e795def13389e6b107ae61e7625a00->m_frame.f_lineno = 224;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_reinit );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d8e795def13389e6b107ae61e7625a00 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d8e795def13389e6b107ae61e7625a00 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d8e795def13389e6b107ae61e7625a00, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d8e795def13389e6b107ae61e7625a00->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d8e795def13389e6b107ae61e7625a00, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d8e795def13389e6b107ae61e7625a00,
        type_description_1
    );


    // Release cached frame.
    if ( frame_d8e795def13389e6b107ae61e7625a00 == cache_frame_d8e795def13389e6b107ae61e7625a00 )
    {
        Py_DECREF( frame_d8e795def13389e6b107ae61e7625a00 );
    }
    cache_frame_d8e795def13389e6b107ae61e7625a00 = NULL;

    assertFrameObject( frame_d8e795def13389e6b107ae61e7625a00 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_24_reinit );
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


static PyObject *impl_Crypto$Random$_UserFriendlyRNG$$$function_25_get_random_bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_a8171752eb07664e8547e01b11458bb4 = NULL;

    struct Nuitka_FrameObject *frame_a8171752eb07664e8547e01b11458bb4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a8171752eb07664e8547e01b11458bb4, codeobj_a8171752eb07664e8547e01b11458bb4, module_Crypto$Random$_UserFriendlyRNG, sizeof(void *) );
    frame_a8171752eb07664e8547e01b11458bb4 = cache_frame_a8171752eb07664e8547e01b11458bb4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a8171752eb07664e8547e01b11458bb4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a8171752eb07664e8547e01b11458bb4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__get_singleton );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_singleton );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_get_singleton" );
        exception_tb = NULL;

        exception_lineno = 228;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_a8171752eb07664e8547e01b11458bb4->m_frame.f_lineno = 228;
    tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_n;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_a8171752eb07664e8547e01b11458bb4->m_frame.f_lineno = 228;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_read, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8171752eb07664e8547e01b11458bb4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8171752eb07664e8547e01b11458bb4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8171752eb07664e8547e01b11458bb4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a8171752eb07664e8547e01b11458bb4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a8171752eb07664e8547e01b11458bb4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a8171752eb07664e8547e01b11458bb4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a8171752eb07664e8547e01b11458bb4,
        type_description_1,
        par_n
    );


    // Release cached frame.
    if ( frame_a8171752eb07664e8547e01b11458bb4 == cache_frame_a8171752eb07664e8547e01b11458bb4 )
    {
        Py_DECREF( frame_a8171752eb07664e8547e01b11458bb4 );
    }
    cache_frame_a8171752eb07664e8547e01b11458bb4 = NULL;

    assertFrameObject( frame_a8171752eb07664e8547e01b11458bb4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_25_get_random_bytes );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG$$$function_25_get_random_bytes );
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



static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_10_read(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$_UserFriendlyRNG$$$function_10_read,
        const_str_plain_read,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_25f7bf711fb96dcdbc68275140cdcb24,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$_UserFriendlyRNG,
        const_str_digest_60206ba42ec06a3a165aaf03c1cfa3c8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_11__check_pid(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$_UserFriendlyRNG$$$function_11__check_pid,
        const_str_plain__check_pid,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0d7a3476ee9bbbae7f26cb34f2ec5cb7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$_UserFriendlyRNG,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_12___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$_UserFriendlyRNG$$$function_12___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_06c6fdb043e0d2a321fe087e6236c232,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$_UserFriendlyRNG,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_13_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$_UserFriendlyRNG$$$function_13_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_57c3f89473dd96c29235e4b1914bafa3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$_UserFriendlyRNG,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_14_reinit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$_UserFriendlyRNG$$$function_14_reinit,
        const_str_plain_reinit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_28bcedf200340f576eb94ac362d39344,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$_UserFriendlyRNG,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_15_read(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$_UserFriendlyRNG$$$function_15_read,
        const_str_plain_read,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_95c846883aeb25b7bd9496bee819e308,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$_UserFriendlyRNG,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_16___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$_UserFriendlyRNG$$$function_16___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ae42a8ed57bd6c5ac979c844aeff8589,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$_UserFriendlyRNG,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_17___enter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$_UserFriendlyRNG$$$function_17___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dd83b8114af5620548e8aff675d1a4ce,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$_UserFriendlyRNG,
        const_str_digest_7297039c3ba7a6819c92a3ebf29a5b51,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_18___exit__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$_UserFriendlyRNG$$$function_18___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fc2dae5b2c36af1ff4597c07117bb0a6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$_UserFriendlyRNG,
        const_str_digest_7297039c3ba7a6819c92a3ebf29a5b51,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_19_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$_UserFriendlyRNG$$$function_19_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fac2d5ef9c36e35ad33b7e61215748aa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$_UserFriendlyRNG,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$_UserFriendlyRNG$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_66b3b2859e58b595f12b1f8ac391baa7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$_UserFriendlyRNG,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_20_read(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$_UserFriendlyRNG$$$function_20_read,
        const_str_plain_read,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_99bf1f9fbf80920a0b71f70fcbc54de3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$_UserFriendlyRNG,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_21_flush(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$_UserFriendlyRNG$$$function_21_flush,
        const_str_plain_flush,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_edebea08f8a96c780674835fce36830a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$_UserFriendlyRNG,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_22__get_singleton(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$_UserFriendlyRNG$$$function_22__get_singleton,
        const_str_plain__get_singleton,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_80c8ef500281fae0ae3b7880b394fd6e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$_UserFriendlyRNG,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_23_new(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$_UserFriendlyRNG$$$function_23_new,
        const_str_plain_new,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e6e2807b154070c5abc5863f90eb5eec,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$_UserFriendlyRNG,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_24_reinit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$_UserFriendlyRNG$$$function_24_reinit,
        const_str_plain_reinit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d8e795def13389e6b107ae61e7625a00,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$_UserFriendlyRNG,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_25_get_random_bytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$_UserFriendlyRNG$$$function_25_get_random_bytes,
        const_str_plain_get_random_bytes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a8171752eb07664e8547e01b11458bb4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$_UserFriendlyRNG,
        const_str_digest_1e5478800040fcfd12cfc695d2c1888b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_2_feed(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$_UserFriendlyRNG$$$function_2_feed,
        const_str_plain_feed,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9605e4fbf36fba9c1600ec8c259f3067,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$_UserFriendlyRNG,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_3___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$_UserFriendlyRNG$$$function_3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_103a98957de9889cffaaaf015834ac32,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$_UserFriendlyRNG,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_4_reinit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$_UserFriendlyRNG$$$function_4_reinit,
        const_str_plain_reinit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_615d7e1d08476274fec686af29ed9aa7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$_UserFriendlyRNG,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_5_collect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$_UserFriendlyRNG$$$function_5_collect,
        const_str_plain_collect,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_341bfd4ec4a80d06ca4478b72b8e31d5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$_UserFriendlyRNG,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_6___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$_UserFriendlyRNG$$$function_6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2a7aedb2d1a0734f20dc5d01c3b1edd2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$_UserFriendlyRNG,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_7_reinit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$_UserFriendlyRNG$$$function_7_reinit,
        const_str_plain_reinit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_daf6508b68e0b2fd40314fee6d599a15,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$_UserFriendlyRNG,
        const_str_digest_01c6d8a35086a093c2ac6df61af602f3,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_8_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$_UserFriendlyRNG$$$function_8_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_df715d0de22f47628d570d09a798981f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$_UserFriendlyRNG,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_9_flush(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Random$_UserFriendlyRNG$$$function_9_flush,
        const_str_plain_flush,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f7a442f017f599aaae0d5a7a488eae24,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Random$_UserFriendlyRNG,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Crypto$Random$_UserFriendlyRNG =
{
    PyModuleDef_HEAD_INIT,
    "Crypto.Random._UserFriendlyRNG",   /* m_name */
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

MOD_INIT_DECL( Crypto$Random$_UserFriendlyRNG )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto$Random$_UserFriendlyRNG );
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
    puts("Crypto.Random._UserFriendlyRNG: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.Random._UserFriendlyRNG: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initCrypto$Random$_UserFriendlyRNG" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto$Random$_UserFriendlyRNG = Py_InitModule4(
        "Crypto.Random._UserFriendlyRNG",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Crypto$Random$_UserFriendlyRNG = PyModule_Create( &mdef_Crypto$Random$_UserFriendlyRNG );
#endif

    moduledict_Crypto$Random$_UserFriendlyRNG = MODULE_DICT( module_Crypto$Random$_UserFriendlyRNG );

    CHECK_OBJECT( module_Crypto$Random$_UserFriendlyRNG );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_0828cd0aae9cadddf91574ffefcf1425, module_Crypto$Random$_UserFriendlyRNG );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___init__ = NULL;
    PyObject *outline_0_var_feed = NULL;
    PyObject *outline_1_var___module__ = NULL;
    PyObject *outline_1_var___init__ = NULL;
    PyObject *outline_1_var_reinit = NULL;
    PyObject *outline_1_var_collect = NULL;
    PyObject *outline_2_var___module__ = NULL;
    PyObject *outline_2_var___init__ = NULL;
    PyObject *outline_2_var_reinit = NULL;
    PyObject *outline_2_var_close = NULL;
    PyObject *outline_2_var_flush = NULL;
    PyObject *outline_2_var_read = NULL;
    PyObject *outline_2_var__check_pid = NULL;
    PyObject *outline_3_var___module__ = NULL;
    PyObject *outline_3_var___init__ = NULL;
    PyObject *outline_3_var_close = NULL;
    PyObject *outline_3_var_reinit = NULL;
    PyObject *outline_3_var_read = NULL;
    PyObject *outline_4_var___module__ = NULL;
    PyObject *outline_4_var___init__ = NULL;
    PyObject *outline_4_var___enter__ = NULL;
    PyObject *outline_4_var___exit__ = NULL;
    PyObject *outline_4_var_close = NULL;
    PyObject *outline_4_var_read = NULL;
    PyObject *outline_4_var_flush = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class = NULL;
    PyObject *tmp_class_creation_4__class_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_5__class = NULL;
    PyObject *tmp_class_creation_5__class_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_select_metaclass_4__base = NULL;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
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
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_assign_source_57;
    PyObject *tmp_assign_source_58;
    PyObject *tmp_assign_source_59;
    PyObject *tmp_assign_source_60;
    PyObject *tmp_assign_source_61;
    PyObject *tmp_assign_source_62;
    PyObject *tmp_assign_source_63;
    PyObject *tmp_assign_source_64;
    PyObject *tmp_assign_source_65;
    PyObject *tmp_assign_source_66;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
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
    PyObject *tmp_dict_key_13;
    PyObject *tmp_dict_key_14;
    PyObject *tmp_dict_key_15;
    PyObject *tmp_dict_key_16;
    PyObject *tmp_dict_key_17;
    PyObject *tmp_dict_key_18;
    PyObject *tmp_dict_key_19;
    PyObject *tmp_dict_key_20;
    PyObject *tmp_dict_key_21;
    PyObject *tmp_dict_key_22;
    PyObject *tmp_dict_key_23;
    PyObject *tmp_dict_key_24;
    PyObject *tmp_dict_key_25;
    PyObject *tmp_dict_key_26;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
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
    PyObject *tmp_dict_value_17;
    PyObject *tmp_dict_value_18;
    PyObject *tmp_dict_value_19;
    PyObject *tmp_dict_value_20;
    PyObject *tmp_dict_value_21;
    PyObject *tmp_dict_value_22;
    PyObject *tmp_dict_value_23;
    PyObject *tmp_dict_value_24;
    PyObject *tmp_dict_value_25;
    PyObject *tmp_dict_value_26;
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
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
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
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_outline_return_value_4;
    PyObject *tmp_outline_return_value_5;
    PyObject *tmp_outline_return_value_6;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_star_imported_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    struct Nuitka_FrameObject *frame_bfe3f6fd85139ee32f18b4651599bd55;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    tmp_outline_return_value_5 = NULL;
    tmp_outline_return_value_6 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_cae860d1803e5df993bed821c07a4e16;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_10c675d39d154a59cf6207a839b0661f;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain___revision__, tmp_assign_source_4 );
    tmp_name_name_1 = const_str_plain_sys;
    tmp_globals_name_1 = (PyObject *)moduledict_Crypto$Random$_UserFriendlyRNG;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    assert( tmp_assign_source_5 != NULL );
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_5 );
    // Frame without reuse.
    frame_bfe3f6fd85139ee32f18b4651599bd55 = MAKE_MODULE_FRAME( codeobj_bfe3f6fd85139ee32f18b4651599bd55, module_Crypto$Random$_UserFriendlyRNG );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_bfe3f6fd85139ee32f18b4651599bd55 );
    assert( Py_REFCNT( frame_bfe3f6fd85139ee32f18b4651599bd55 ) == 2 );

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_sys );

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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_sys );

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
    tmp_globals_name_2 = (PyObject *)moduledict_Crypto$Random$_UserFriendlyRNG;
    tmp_locals_name_2 = (PyObject *)moduledict_Crypto$Random$_UserFriendlyRNG;
    tmp_fromlist_name_2 = const_tuple_str_chr_42_tuple;
    frame_bfe3f6fd85139ee32f18b4651599bd55->m_frame.f_lineno = 29;
    tmp_star_imported_1 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_Crypto$Random$_UserFriendlyRNG, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_name_name_3 = const_str_plain_os;
    tmp_globals_name_3 = (PyObject *)moduledict_Crypto$Random$_UserFriendlyRNG;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    frame_bfe3f6fd85139ee32f18b4651599bd55->m_frame.f_lineno = 31;
    tmp_assign_source_6 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_6 );
    tmp_name_name_4 = const_str_plain_threading;
    tmp_globals_name_4 = (PyObject *)moduledict_Crypto$Random$_UserFriendlyRNG;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = Py_None;
    frame_bfe3f6fd85139ee32f18b4651599bd55->m_frame.f_lineno = 32;
    tmp_assign_source_7 = IMPORT_MODULE4( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_threading, tmp_assign_source_7 );
    tmp_name_name_5 = const_str_plain_struct;
    tmp_globals_name_5 = (PyObject *)moduledict_Crypto$Random$_UserFriendlyRNG;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = Py_None;
    frame_bfe3f6fd85139ee32f18b4651599bd55->m_frame.f_lineno = 33;
    tmp_assign_source_8 = IMPORT_MODULE4( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_struct, tmp_assign_source_8 );
    tmp_name_name_6 = const_str_plain_time;
    tmp_globals_name_6 = (PyObject *)moduledict_Crypto$Random$_UserFriendlyRNG;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = Py_None;
    frame_bfe3f6fd85139ee32f18b4651599bd55->m_frame.f_lineno = 34;
    tmp_assign_source_9 = IMPORT_MODULE4( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6 );
    assert( tmp_assign_source_9 != NULL );
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_9 );
    tmp_name_name_7 = const_str_plain_math;
    tmp_globals_name_7 = (PyObject *)moduledict_Crypto$Random$_UserFriendlyRNG;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_floor_tuple;
    frame_bfe3f6fd85139ee32f18b4651599bd55->m_frame.f_lineno = 35;
    tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7 );
    assert( tmp_import_name_from_1 != NULL );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_floor );
    Py_DECREF( tmp_import_name_from_1 );
    assert( tmp_assign_source_10 != NULL );
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_floor, tmp_assign_source_10 );
    tmp_name_name_8 = const_str_digest_f6ae169f842d2e5a780003f644103f6a;
    tmp_globals_name_8 = (PyObject *)moduledict_Crypto$Random$_UserFriendlyRNG;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_OSRNG_tuple;
    frame_bfe3f6fd85139ee32f18b4651599bd55->m_frame.f_lineno = 37;
    tmp_import_name_from_2 = IMPORT_MODULE4( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_OSRNG );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_OSRNG, tmp_assign_source_11 );
    tmp_name_name_9 = const_str_digest_caddcc232c5cb161cd557a68427895a8;
    tmp_globals_name_9 = (PyObject *)moduledict_Crypto$Random$_UserFriendlyRNG;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_FortunaAccumulator_tuple;
    frame_bfe3f6fd85139ee32f18b4651599bd55->m_frame.f_lineno = 38;
    tmp_import_name_from_3 = IMPORT_MODULE4( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_FortunaAccumulator );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_FortunaAccumulator, tmp_assign_source_12 );
    tmp_assign_source_14 = const_str_digest_0828cd0aae9cadddf91574ffefcf1425;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_14 );
    outline_0_var___module__ = tmp_assign_source_14;

    tmp_assign_source_15 = MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_1___init__(  );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_15;

    tmp_assign_source_16 = MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_2_feed(  );
    assert( outline_0_var_feed == NULL );
    outline_0_var_feed = tmp_assign_source_16;

    // Tried code:
    tmp_outline_return_value_1 = _PyDict_NewPresized( 3 );
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
    tmp_dict_value_3 = outline_0_var_feed;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_feed;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___init__ );
    Py_DECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_feed );
    Py_DECREF( outline_0_var_feed );
    outline_0_var_feed = NULL;

    goto outline_result_1;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___init__ );
    Py_DECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_feed );
    Py_DECREF( outline_0_var_feed );
    outline_0_var_feed = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_13 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_13;

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


        exception_lineno = 40;

        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_17 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_17 );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_17;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain__EntropySource;
    tmp_args_element_name_2 = const_tuple_type_object_tuple;
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_bfe3f6fd85139ee32f18b4651599bd55->m_frame.f_lineno = 40;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_18;

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
    tmp_assign_source_19 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_19 );
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__EntropySource, tmp_assign_source_19 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    tmp_assign_source_21 = const_str_digest_0828cd0aae9cadddf91574ffefcf1425;
    assert( outline_1_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_21 );
    outline_1_var___module__ = tmp_assign_source_21;

    tmp_assign_source_22 = MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_3___init__(  );
    assert( outline_1_var___init__ == NULL );
    outline_1_var___init__ = tmp_assign_source_22;

    tmp_assign_source_23 = MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_4_reinit(  );
    assert( outline_1_var_reinit == NULL );
    outline_1_var_reinit = tmp_assign_source_23;

    tmp_assign_source_24 = MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_5_collect(  );
    assert( outline_1_var_collect == NULL );
    outline_1_var_collect = tmp_assign_source_24;

    // Tried code:
    tmp_outline_return_value_2 = _PyDict_NewPresized( 4 );
    tmp_dict_value_4 = outline_1_var___module__;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = outline_1_var___init__;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = outline_1_var_reinit;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain_reinit;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = outline_1_var_collect;

    CHECK_OBJECT( tmp_dict_value_7 );
    tmp_dict_key_7 = const_str_plain_collect;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)outline_1_var___module__ );
    Py_DECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___init__ );
    Py_DECREF( outline_1_var___init__ );
    outline_1_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_reinit );
    Py_DECREF( outline_1_var_reinit );
    outline_1_var_reinit = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_collect );
    Py_DECREF( outline_1_var_collect );
    outline_1_var_collect = NULL;

    goto outline_result_2;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_1_var___module__ );
    Py_DECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___init__ );
    Py_DECREF( outline_1_var___init__ );
    outline_1_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_reinit );
    Py_DECREF( outline_1_var_reinit );
    outline_1_var_reinit = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_collect );
    Py_DECREF( outline_1_var_collect );
    outline_1_var_collect = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG );
    return MOD_RETURN_VALUE( NULL );
    outline_result_2:;
    tmp_assign_source_20 = tmp_outline_return_value_2;
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_20;

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
    tmp_assign_source_25 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_4;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_25 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_25 );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_25;

    tmp_called_name_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_4 = const_str_plain__EntropyCollector;
    tmp_args_element_name_5 = const_tuple_type_object_tuple;
    tmp_args_element_name_6 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_bfe3f6fd85139ee32f18b4651599bd55->m_frame.f_lineno = 50;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_4;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_26;

    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
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
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_27 = tmp_class_creation_2__class;

    CHECK_OBJECT( tmp_assign_source_27 );
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__EntropyCollector, tmp_assign_source_27 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class );
    Py_DECREF( tmp_class_creation_2__class );
    tmp_class_creation_2__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    tmp_assign_source_29 = const_str_digest_0828cd0aae9cadddf91574ffefcf1425;
    assert( outline_2_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_29 );
    outline_2_var___module__ = tmp_assign_source_29;

    tmp_assign_source_30 = MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_6___init__(  );
    assert( outline_2_var___init__ == NULL );
    outline_2_var___init__ = tmp_assign_source_30;

    tmp_assign_source_31 = MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_7_reinit(  );
    assert( outline_2_var_reinit == NULL );
    outline_2_var_reinit = tmp_assign_source_31;

    tmp_assign_source_32 = MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_8_close(  );
    assert( outline_2_var_close == NULL );
    outline_2_var_close = tmp_assign_source_32;

    tmp_assign_source_33 = MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_9_flush(  );
    assert( outline_2_var_flush == NULL );
    outline_2_var_flush = tmp_assign_source_33;

    tmp_assign_source_34 = MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_10_read(  );
    assert( outline_2_var_read == NULL );
    outline_2_var_read = tmp_assign_source_34;

    tmp_assign_source_35 = MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_11__check_pid(  );
    assert( outline_2_var__check_pid == NULL );
    outline_2_var__check_pid = tmp_assign_source_35;

    // Tried code:
    tmp_outline_return_value_3 = _PyDict_NewPresized( 7 );
    tmp_dict_value_8 = outline_2_var___module__;

    CHECK_OBJECT( tmp_dict_value_8 );
    tmp_dict_key_8 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_9 = outline_2_var___init__;

    CHECK_OBJECT( tmp_dict_value_9 );
    tmp_dict_key_9 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_10 = outline_2_var_reinit;

    CHECK_OBJECT( tmp_dict_value_10 );
    tmp_dict_key_10 = const_str_plain_reinit;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_11 = outline_2_var_close;

    CHECK_OBJECT( tmp_dict_value_11 );
    tmp_dict_key_11 = const_str_plain_close;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_11, tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_12 = outline_2_var_flush;

    CHECK_OBJECT( tmp_dict_value_12 );
    tmp_dict_key_12 = const_str_plain_flush;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_12, tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_13 = outline_2_var_read;

    CHECK_OBJECT( tmp_dict_value_13 );
    tmp_dict_key_13 = const_str_plain_read;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_13, tmp_dict_value_13 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_14 = outline_2_var__check_pid;

    CHECK_OBJECT( tmp_dict_value_14 );
    tmp_dict_key_14 = const_str_plain__check_pid;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_14, tmp_dict_value_14 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_5:;
    CHECK_OBJECT( (PyObject *)outline_2_var___module__ );
    Py_DECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var___init__ );
    Py_DECREF( outline_2_var___init__ );
    outline_2_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var_reinit );
    Py_DECREF( outline_2_var_reinit );
    outline_2_var_reinit = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var_close );
    Py_DECREF( outline_2_var_close );
    outline_2_var_close = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var_flush );
    Py_DECREF( outline_2_var_flush );
    outline_2_var_flush = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var_read );
    Py_DECREF( outline_2_var_read );
    outline_2_var_read = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var__check_pid );
    Py_DECREF( outline_2_var__check_pid );
    outline_2_var__check_pid = NULL;

    goto outline_result_3;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_2_var___module__ );
    Py_DECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var___init__ );
    Py_DECREF( outline_2_var___init__ );
    outline_2_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var_reinit );
    Py_DECREF( outline_2_var_reinit );
    outline_2_var_reinit = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var_close );
    Py_DECREF( outline_2_var_close );
    outline_2_var_close = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var_flush );
    Py_DECREF( outline_2_var_flush );
    outline_2_var_flush = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var_read );
    Py_DECREF( outline_2_var_read );
    outline_2_var_read = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var__check_pid );
    Py_DECREF( outline_2_var__check_pid );
    outline_2_var__check_pid = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG );
    return MOD_RETURN_VALUE( NULL );
    outline_result_3:;
    tmp_assign_source_28 = tmp_outline_return_value_3;
    assert( tmp_class_creation_3__class_dict == NULL );
    tmp_class_creation_3__class_dict = tmp_assign_source_28;

    // Tried code:
    tmp_compare_left_3 = const_str_plain___metaclass__;
    tmp_compare_right_3 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_3 == -1) );
    if ( tmp_cmp_In_3 == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_dict_name_3 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_key_name_3 = const_str_plain___metaclass__;
    tmp_assign_source_36 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;

        goto try_except_handler_6;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_36 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_36 );
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_36;

    tmp_called_name_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_element_name_7 = const_str_plain__UserFriendlyRNG;
    tmp_args_element_name_8 = const_tuple_type_object_tuple;
    tmp_args_element_name_9 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_args_element_name_9 );
    frame_bfe3f6fd85139ee32f18b4651599bd55->m_frame.f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;

        goto try_except_handler_6;
    }
    assert( tmp_class_creation_3__class == NULL );
    tmp_class_creation_3__class = tmp_assign_source_37;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    tmp_assign_source_38 = tmp_class_creation_3__class;

    CHECK_OBJECT( tmp_assign_source_38 );
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__UserFriendlyRNG, tmp_assign_source_38 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class );
    Py_DECREF( tmp_class_creation_3__class );
    tmp_class_creation_3__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Tried code:
    tmp_assign_source_39 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__UserFriendlyRNG );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__UserFriendlyRNG );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_39 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_UserFriendlyRNG" );
        exception_tb = NULL;

        exception_lineno = 156;

        goto try_except_handler_7;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_39, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_39;

    tmp_assign_source_41 = const_str_digest_0828cd0aae9cadddf91574ffefcf1425;
    assert( outline_3_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_41 );
    outline_3_var___module__ = tmp_assign_source_41;

    tmp_assign_source_42 = MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_12___init__(  );
    assert( outline_3_var___init__ == NULL );
    outline_3_var___init__ = tmp_assign_source_42;

    tmp_assign_source_43 = MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_13_close(  );
    assert( outline_3_var_close == NULL );
    outline_3_var_close = tmp_assign_source_43;

    tmp_assign_source_44 = MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_14_reinit(  );
    assert( outline_3_var_reinit == NULL );
    outline_3_var_reinit = tmp_assign_source_44;

    tmp_assign_source_45 = MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_15_read(  );
    assert( outline_3_var_read == NULL );
    outline_3_var_read = tmp_assign_source_45;

    // Tried code:
    tmp_outline_return_value_4 = _PyDict_NewPresized( 5 );
    tmp_dict_value_15 = outline_3_var___module__;

    CHECK_OBJECT( tmp_dict_value_15 );
    tmp_dict_key_15 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_4, tmp_dict_key_15, tmp_dict_value_15 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_16 = outline_3_var___init__;

    CHECK_OBJECT( tmp_dict_value_16 );
    tmp_dict_key_16 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_4, tmp_dict_key_16, tmp_dict_value_16 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_17 = outline_3_var_close;

    CHECK_OBJECT( tmp_dict_value_17 );
    tmp_dict_key_17 = const_str_plain_close;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_4, tmp_dict_key_17, tmp_dict_value_17 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_18 = outline_3_var_reinit;

    CHECK_OBJECT( tmp_dict_value_18 );
    tmp_dict_key_18 = const_str_plain_reinit;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_4, tmp_dict_key_18, tmp_dict_value_18 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_19 = outline_3_var_read;

    CHECK_OBJECT( tmp_dict_value_19 );
    tmp_dict_key_19 = const_str_plain_read;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_4, tmp_dict_key_19, tmp_dict_value_19 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_8;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_8:;
    CHECK_OBJECT( (PyObject *)outline_3_var___module__ );
    Py_DECREF( outline_3_var___module__ );
    outline_3_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_3_var___init__ );
    Py_DECREF( outline_3_var___init__ );
    outline_3_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_3_var_close );
    Py_DECREF( outline_3_var_close );
    outline_3_var_close = NULL;

    CHECK_OBJECT( (PyObject *)outline_3_var_reinit );
    Py_DECREF( outline_3_var_reinit );
    outline_3_var_reinit = NULL;

    CHECK_OBJECT( (PyObject *)outline_3_var_read );
    Py_DECREF( outline_3_var_read );
    outline_3_var_read = NULL;

    goto outline_result_4;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_3_var___module__ );
    Py_DECREF( outline_3_var___module__ );
    outline_3_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_3_var___init__ );
    Py_DECREF( outline_3_var___init__ );
    outline_3_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_3_var_close );
    Py_DECREF( outline_3_var_close );
    outline_3_var_close = NULL;

    CHECK_OBJECT( (PyObject *)outline_3_var_reinit );
    Py_DECREF( outline_3_var_reinit );
    outline_3_var_reinit = NULL;

    CHECK_OBJECT( (PyObject *)outline_3_var_read );
    Py_DECREF( outline_3_var_read );
    outline_3_var_read = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG );
    return MOD_RETURN_VALUE( NULL );
    outline_result_4:;
    tmp_assign_source_40 = tmp_outline_return_value_4;
    assert( tmp_class_creation_4__class_dict == NULL );
    tmp_class_creation_4__class_dict = tmp_assign_source_40;

    tmp_compare_left_4 = const_str_plain___metaclass__;
    tmp_compare_right_4 = tmp_class_creation_4__class_dict;

    CHECK_OBJECT( tmp_compare_right_4 );
    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    assert( !(tmp_cmp_In_4 == -1) );
    if ( tmp_cmp_In_4 == 1 )
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_dict_name_4 = tmp_class_creation_4__class_dict;

    CHECK_OBJECT( tmp_dict_name_4 );
    tmp_key_name_4 = const_str_plain___metaclass__;
    tmp_assign_source_46 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_7;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_subscribed_name_3 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = const_int_0;
    tmp_assign_source_47 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_7;
    }
    assert( tmp_select_metaclass_4__base == NULL );
    tmp_select_metaclass_4__base = tmp_assign_source_47;

    // Tried code:
    // Tried code:
    tmp_source_name_3 = tmp_select_metaclass_4__base;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_outline_return_value_5 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_outline_return_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_10;
    }
    goto try_return_handler_9;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_4 );
    Py_XDECREF( exception_keeper_value_4 );
    Py_XDECREF( exception_keeper_tb_4 );
    tmp_type_arg_1 = tmp_select_metaclass_4__base;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_outline_return_value_5 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_outline_return_value_5 != NULL );
    goto try_return_handler_9;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_9:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
    Py_DECREF( tmp_select_metaclass_4__base );
    tmp_select_metaclass_4__base = NULL;

    goto outline_result_5;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
    Py_DECREF( tmp_select_metaclass_4__base );
    tmp_select_metaclass_4__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG );
    return MOD_RETURN_VALUE( NULL );
    outline_result_5:;
    tmp_assign_source_46 = tmp_outline_return_value_5;
    condexpr_end_4:;
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_46;

    tmp_called_name_4 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_args_element_name_10 = const_str_plain__LockingUserFriendlyRNG;
    tmp_args_element_name_11 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_args_element_name_11 );
    tmp_args_element_name_12 = tmp_class_creation_4__class_dict;

    CHECK_OBJECT( tmp_args_element_name_12 );
    frame_bfe3f6fd85139ee32f18b4651599bd55->m_frame.f_lineno = 156;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_assign_source_48 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_7;
    }
    assert( tmp_class_creation_4__class == NULL );
    tmp_class_creation_4__class = tmp_assign_source_48;

    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    tmp_assign_source_49 = tmp_class_creation_4__class;

    CHECK_OBJECT( tmp_assign_source_49 );
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__LockingUserFriendlyRNG, tmp_assign_source_49 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class );
    Py_DECREF( tmp_class_creation_4__class );
    tmp_class_creation_4__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases );
    Py_DECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_dict );
    Py_DECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    tmp_assign_source_51 = const_str_digest_0828cd0aae9cadddf91574ffefcf1425;
    assert( outline_4_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_51 );
    outline_4_var___module__ = tmp_assign_source_51;

    tmp_assign_source_52 = MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_16___init__(  );
    assert( outline_4_var___init__ == NULL );
    outline_4_var___init__ = tmp_assign_source_52;

    tmp_assign_source_53 = MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_17___enter__(  );
    assert( outline_4_var___enter__ == NULL );
    outline_4_var___enter__ = tmp_assign_source_53;

    tmp_assign_source_54 = MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_18___exit__(  );
    assert( outline_4_var___exit__ == NULL );
    outline_4_var___exit__ = tmp_assign_source_54;

    tmp_assign_source_55 = MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_19_close(  );
    assert( outline_4_var_close == NULL );
    outline_4_var_close = tmp_assign_source_55;

    tmp_assign_source_56 = MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_20_read(  );
    assert( outline_4_var_read == NULL );
    outline_4_var_read = tmp_assign_source_56;

    tmp_assign_source_57 = MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_21_flush(  );
    assert( outline_4_var_flush == NULL );
    outline_4_var_flush = tmp_assign_source_57;

    // Tried code:
    tmp_outline_return_value_6 = _PyDict_NewPresized( 7 );
    tmp_dict_value_20 = outline_4_var___module__;

    CHECK_OBJECT( tmp_dict_value_20 );
    tmp_dict_key_20 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_6, tmp_dict_key_20, tmp_dict_value_20 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_21 = outline_4_var___init__;

    CHECK_OBJECT( tmp_dict_value_21 );
    tmp_dict_key_21 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_6, tmp_dict_key_21, tmp_dict_value_21 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_22 = outline_4_var___enter__;

    CHECK_OBJECT( tmp_dict_value_22 );
    tmp_dict_key_22 = const_str_plain___enter__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_6, tmp_dict_key_22, tmp_dict_value_22 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_23 = outline_4_var___exit__;

    CHECK_OBJECT( tmp_dict_value_23 );
    tmp_dict_key_23 = const_str_plain___exit__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_6, tmp_dict_key_23, tmp_dict_value_23 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_24 = outline_4_var_close;

    CHECK_OBJECT( tmp_dict_value_24 );
    tmp_dict_key_24 = const_str_plain_close;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_6, tmp_dict_key_24, tmp_dict_value_24 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_25 = outline_4_var_read;

    CHECK_OBJECT( tmp_dict_value_25 );
    tmp_dict_key_25 = const_str_plain_read;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_6, tmp_dict_key_25, tmp_dict_value_25 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_26 = outline_4_var_flush;

    CHECK_OBJECT( tmp_dict_value_26 );
    tmp_dict_key_26 = const_str_plain_flush;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_6, tmp_dict_key_26, tmp_dict_value_26 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_11;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_11:;
    CHECK_OBJECT( (PyObject *)outline_4_var___module__ );
    Py_DECREF( outline_4_var___module__ );
    outline_4_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_4_var___init__ );
    Py_DECREF( outline_4_var___init__ );
    outline_4_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_4_var___enter__ );
    Py_DECREF( outline_4_var___enter__ );
    outline_4_var___enter__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_4_var___exit__ );
    Py_DECREF( outline_4_var___exit__ );
    outline_4_var___exit__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_4_var_close );
    Py_DECREF( outline_4_var_close );
    outline_4_var_close = NULL;

    CHECK_OBJECT( (PyObject *)outline_4_var_read );
    Py_DECREF( outline_4_var_read );
    outline_4_var_read = NULL;

    CHECK_OBJECT( (PyObject *)outline_4_var_flush );
    Py_DECREF( outline_4_var_flush );
    outline_4_var_flush = NULL;

    goto outline_result_6;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_4_var___module__ );
    Py_DECREF( outline_4_var___module__ );
    outline_4_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_4_var___init__ );
    Py_DECREF( outline_4_var___init__ );
    outline_4_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_4_var___enter__ );
    Py_DECREF( outline_4_var___enter__ );
    outline_4_var___enter__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_4_var___exit__ );
    Py_DECREF( outline_4_var___exit__ );
    outline_4_var___exit__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_4_var_close );
    Py_DECREF( outline_4_var_close );
    outline_4_var_close = NULL;

    CHECK_OBJECT( (PyObject *)outline_4_var_read );
    Py_DECREF( outline_4_var_read );
    outline_4_var_read = NULL;

    CHECK_OBJECT( (PyObject *)outline_4_var_flush );
    Py_DECREF( outline_4_var_flush );
    outline_4_var_flush = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Random$_UserFriendlyRNG );
    return MOD_RETURN_VALUE( NULL );
    outline_result_6:;
    tmp_assign_source_50 = tmp_outline_return_value_6;
    assert( tmp_class_creation_5__class_dict == NULL );
    tmp_class_creation_5__class_dict = tmp_assign_source_50;

    // Tried code:
    tmp_compare_left_5 = const_str_plain___metaclass__;
    tmp_compare_right_5 = tmp_class_creation_5__class_dict;

    CHECK_OBJECT( tmp_compare_right_5 );
    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    assert( !(tmp_cmp_In_5 == -1) );
    if ( tmp_cmp_In_5 == 1 )
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_dict_name_5 = tmp_class_creation_5__class_dict;

    CHECK_OBJECT( tmp_dict_name_5 );
    tmp_key_name_5 = const_str_plain___metaclass__;
    tmp_assign_source_58 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;

        goto try_except_handler_12;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_assign_source_58 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_58 );
    condexpr_end_5:;
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_58;

    tmp_called_name_5 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_5 );
    tmp_args_element_name_13 = const_str_plain_RNGFile;
    tmp_args_element_name_14 = const_tuple_type_object_tuple;
    tmp_args_element_name_15 = tmp_class_creation_5__class_dict;

    CHECK_OBJECT( tmp_args_element_name_15 );
    frame_bfe3f6fd85139ee32f18b4651599bd55->m_frame.f_lineno = 182;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_assign_source_59 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;

        goto try_except_handler_12;
    }
    assert( tmp_class_creation_5__class == NULL );
    tmp_class_creation_5__class = tmp_assign_source_59;

    goto try_end_5;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_dict );
    Py_DECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    tmp_assign_source_60 = tmp_class_creation_5__class;

    CHECK_OBJECT( tmp_assign_source_60 );
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_RNGFile, tmp_assign_source_60 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class );
    Py_DECREF( tmp_class_creation_5__class );
    tmp_class_creation_5__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_dict );
    Py_DECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_threading );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_threading );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "threading" );
        exception_tb = NULL;

        exception_lineno = 208;

        goto frame_exception_exit_1;
    }

    frame_bfe3f6fd85139ee32f18b4651599bd55->m_frame.f_lineno = 208;
    tmp_assign_source_61 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_Lock );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__singleton_lock, tmp_assign_source_61 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bfe3f6fd85139ee32f18b4651599bd55 );
#endif
    popFrameStack();

    assertFrameObject( frame_bfe3f6fd85139ee32f18b4651599bd55 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bfe3f6fd85139ee32f18b4651599bd55 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bfe3f6fd85139ee32f18b4651599bd55, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bfe3f6fd85139ee32f18b4651599bd55->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bfe3f6fd85139ee32f18b4651599bd55, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_62 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__singleton, tmp_assign_source_62 );
    tmp_assign_source_63 = MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_22__get_singleton(  );
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain__get_singleton, tmp_assign_source_63 );
    tmp_assign_source_64 = MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_23_new(  );
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_new, tmp_assign_source_64 );
    tmp_assign_source_65 = MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_24_reinit(  );
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_reinit, tmp_assign_source_65 );
    tmp_assign_source_66 = MAKE_FUNCTION_Crypto$Random$_UserFriendlyRNG$$$function_25_get_random_bytes(  );
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$_UserFriendlyRNG, (Nuitka_StringObject *)const_str_plain_get_random_bytes, tmp_assign_source_66 );

    return MOD_RETURN_VALUE( module_Crypto$Random$_UserFriendlyRNG );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
