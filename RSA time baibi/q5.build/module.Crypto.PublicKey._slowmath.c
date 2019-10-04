/* Generated code for Python source for module 'Crypto.PublicKey._slowmath'
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

/* The _module_Crypto$PublicKey$_slowmath is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$PublicKey$_slowmath;
PyDictObject *moduledict_Crypto$PublicKey$_slowmath;

/* The module constants used, if any. */
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_int_pos_100;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_plain_dsa_construct;
static PyObject *const_str_plain_u2;
extern PyObject *const_str_plain_u1;
extern PyObject *const_dict_empty;
extern PyObject *const_str_digest_10c675d39d154a59cf6207a839b0661f;
static PyObject *const_list_str_plain_rsa_construct_list;
extern PyObject *const_str_plain_has_private;
extern PyObject *const_str_plain___revision__;
extern PyObject *const_str_plain_inverse;
static PyObject *const_str_plain_inv_k;
static PyObject *const_tuple_a30a6b01e67fcfff05bdd7a3c767552e_tuple;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_self;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_74ba315069266703540e145c62869e9e;
static PyObject *const_tuple_457987ceb2d9e1e4726da45bc25a4f7c_tuple;
extern PyObject *const_str_plain__encrypt;
static PyObject *const_str_digest_8bbf9085a6910cb95e01214c9fcc8aff;
static PyObject *const_str_plain_m1;
static PyObject *const_tuple_75a192b3577cb9013c3472ee9a6cfa4f_tuple;
static PyObject *const_str_digest_0964f73c309d839286eab0a68231928d;
static PyObject *const_str_digest_c1dd047e2466de2993cd27b8226c4265;
static PyObject *const_str_plain_m2;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_tuple_str_plain_size_str_plain_inverse_str_plain_GCD_tuple;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain__unblind;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_9118098c6ddc7d86c17ec1818f00f49b;
static PyObject *const_str_plain__DSAKey;
static PyObject *const_tuple_ac9845ad52be3213f653fa21f1702bb5_tuple;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain__decrypt;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_long_pos_1;
static PyObject *const_str_digest_ff286ea5dbcb26ffc3afbd1b9dc51122;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_ce0b9579bddc68bd4509fd6ecaf75e67;
extern PyObject *const_str_plain__blind;
extern PyObject *const_str_chr_42;
static PyObject *const_str_digest_2771761c63fa422db11e30be6e5dbf5f;
static PyObject *const_tuple_none_none_none_none_tuple;
static PyObject *const_str_digest_cc142d739802c24318e419e3fa07d38f;
extern PyObject *const_tuple_str_plain_self_str_plain_m_str_plain_r_tuple;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_h;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_e;
static PyObject *const_str_plain_g;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_c;
static PyObject *const_str_plain_spotted;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_y;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_u;
extern PyObject *const_str_plain_v;
static PyObject *const_str_plain_w;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_q;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_s;
static PyObject *const_tuple_ed4b09bc6133953c1945710cd7db0b6b_tuple;
static PyObject *const_str_digest_606f291ffb8a9f0c77780a2539896d20;
static PyObject *const_str_plain__RSAKey;
static PyObject *const_str_plain_ktot;
static PyObject *const_tuple_str_plain_self_str_plain_m_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_rsa_construct;
static PyObject *const_str_plain_cand;
static PyObject *const_tuple_str_plain_self_str_plain_m_str_plain_sig_tuple;
extern PyObject *const_str_plain_pow;
extern PyObject *const_str_plain_sig;
static PyObject *const_str_digest_cfee8603fd6f0dccf21deb1a9b05299f;
extern PyObject *const_str_plain__verify;
extern PyObject *const_str_plain_GCD;
extern PyObject *const_str_plain__sign;
extern PyObject *const_tuple_none_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_int_pos_100 = PyInt_FromLong( 100l );
    const_str_plain_dsa_construct = UNSTREAM_STRING( &constant_bin[ 43292 ], 13, 1 );
    const_str_plain_u2 = UNSTREAM_STRING( &constant_bin[ 43305 ], 2, 1 );
    const_list_str_plain_rsa_construct_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_rsa_construct_list, 0, const_str_plain_rsa_construct ); Py_INCREF( const_str_plain_rsa_construct );
    const_str_plain_inv_k = UNSTREAM_STRING( &constant_bin[ 43307 ], 5, 1 );
    const_tuple_a30a6b01e67fcfff05bdd7a3c767552e_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_a30a6b01e67fcfff05bdd7a3c767552e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a30a6b01e67fcfff05bdd7a3c767552e_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_a30a6b01e67fcfff05bdd7a3c767552e_tuple, 2, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_a30a6b01e67fcfff05bdd7a3c767552e_tuple, 3, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_str_plain_w = UNSTREAM_CHAR( 119, 1 );
    PyTuple_SET_ITEM( const_tuple_a30a6b01e67fcfff05bdd7a3c767552e_tuple, 4, const_str_plain_w ); Py_INCREF( const_str_plain_w );
    PyTuple_SET_ITEM( const_tuple_a30a6b01e67fcfff05bdd7a3c767552e_tuple, 5, const_str_plain_u1 ); Py_INCREF( const_str_plain_u1 );
    PyTuple_SET_ITEM( const_tuple_a30a6b01e67fcfff05bdd7a3c767552e_tuple, 6, const_str_plain_u2 ); Py_INCREF( const_str_plain_u2 );
    PyTuple_SET_ITEM( const_tuple_a30a6b01e67fcfff05bdd7a3c767552e_tuple, 7, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_tuple_457987ceb2d9e1e4726da45bc25a4f7c_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_457987ceb2d9e1e4726da45bc25a4f7c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_457987ceb2d9e1e4726da45bc25a4f7c_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_457987ceb2d9e1e4726da45bc25a4f7c_tuple, 2, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_457987ceb2d9e1e4726da45bc25a4f7c_tuple, 3, const_str_plain_inv_k ); Py_INCREF( const_str_plain_inv_k );
    PyTuple_SET_ITEM( const_tuple_457987ceb2d9e1e4726da45bc25a4f7c_tuple, 4, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_457987ceb2d9e1e4726da45bc25a4f7c_tuple, 5, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_str_digest_8bbf9085a6910cb95e01214c9fcc8aff = UNSTREAM_STRING( &constant_bin[ 43312 ], 14, 0 );
    const_str_plain_m1 = UNSTREAM_STRING( &constant_bin[ 43326 ], 2, 1 );
    const_tuple_75a192b3577cb9013c3472ee9a6cfa4f_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_75a192b3577cb9013c3472ee9a6cfa4f_tuple, 0, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_75a192b3577cb9013c3472ee9a6cfa4f_tuple, 1, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    PyTuple_SET_ITEM( const_tuple_75a192b3577cb9013c3472ee9a6cfa4f_tuple, 2, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_75a192b3577cb9013c3472ee9a6cfa4f_tuple, 3, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_75a192b3577cb9013c3472ee9a6cfa4f_tuple, 4, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_75a192b3577cb9013c3472ee9a6cfa4f_tuple, 5, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    PyTuple_SET_ITEM( const_tuple_75a192b3577cb9013c3472ee9a6cfa4f_tuple, 6, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    const_str_plain_ktot = UNSTREAM_STRING( &constant_bin[ 43328 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_75a192b3577cb9013c3472ee9a6cfa4f_tuple, 7, const_str_plain_ktot ); Py_INCREF( const_str_plain_ktot );
    PyTuple_SET_ITEM( const_tuple_75a192b3577cb9013c3472ee9a6cfa4f_tuple, 8, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    const_str_plain_spotted = UNSTREAM_STRING( &constant_bin[ 43332 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_75a192b3577cb9013c3472ee9a6cfa4f_tuple, 9, const_str_plain_spotted ); Py_INCREF( const_str_plain_spotted );
    PyTuple_SET_ITEM( const_tuple_75a192b3577cb9013c3472ee9a6cfa4f_tuple, 10, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_75a192b3577cb9013c3472ee9a6cfa4f_tuple, 11, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    const_str_plain_cand = UNSTREAM_STRING( &constant_bin[ 43339 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_75a192b3577cb9013c3472ee9a6cfa4f_tuple, 12, const_str_plain_cand ); Py_INCREF( const_str_plain_cand );
    const_str_digest_0964f73c309d839286eab0a68231928d = UNSTREAM_STRING( &constant_bin[ 43343 ], 26, 0 );
    const_str_digest_c1dd047e2466de2993cd27b8226c4265 = UNSTREAM_STRING( &constant_bin[ 43369 ], 85, 0 );
    const_str_plain_m2 = UNSTREAM_STRING( &constant_bin[ 43454 ], 2, 1 );
    const_tuple_str_plain_size_str_plain_inverse_str_plain_GCD_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_size_str_plain_inverse_str_plain_GCD_tuple, 0, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_str_plain_size_str_plain_inverse_str_plain_GCD_tuple, 1, const_str_plain_inverse ); Py_INCREF( const_str_plain_inverse );
    PyTuple_SET_ITEM( const_tuple_str_plain_size_str_plain_inverse_str_plain_GCD_tuple, 2, const_str_plain_GCD ); Py_INCREF( const_str_plain_GCD );
    const_str_plain__DSAKey = UNSTREAM_STRING( &constant_bin[ 43456 ], 7, 1 );
    const_tuple_ac9845ad52be3213f653fa21f1702bb5_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_ac9845ad52be3213f653fa21f1702bb5_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_ac9845ad52be3213f653fa21f1702bb5_tuple, 1, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_ac9845ad52be3213f653fa21f1702bb5_tuple, 2, const_str_plain_m1 ); Py_INCREF( const_str_plain_m1 );
    PyTuple_SET_ITEM( const_tuple_ac9845ad52be3213f653fa21f1702bb5_tuple, 3, const_str_plain_m2 ); Py_INCREF( const_str_plain_m2 );
    PyTuple_SET_ITEM( const_tuple_ac9845ad52be3213f653fa21f1702bb5_tuple, 4, const_str_plain_h ); Py_INCREF( const_str_plain_h );
    const_str_digest_ff286ea5dbcb26ffc3afbd1b9dc51122 = UNSTREAM_STRING( &constant_bin[ 43463 ], 26, 0 );
    const_str_digest_ce0b9579bddc68bd4509fd6ecaf75e67 = UNSTREAM_STRING( &constant_bin[ 43489 ], 26, 0 );
    const_str_digest_2771761c63fa422db11e30be6e5dbf5f = UNSTREAM_STRING( &constant_bin[ 43515 ], 50, 0 );
    const_tuple_none_none_none_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_str_digest_cc142d739802c24318e419e3fa07d38f = UNSTREAM_STRING( &constant_bin[ 43565 ], 35, 0 );
    const_str_plain_g = UNSTREAM_CHAR( 103, 1 );
    const_tuple_ed4b09bc6133953c1945710cd7db0b6b_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_ed4b09bc6133953c1945710cd7db0b6b_tuple, 0, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_ed4b09bc6133953c1945710cd7db0b6b_tuple, 1, const_str_plain_g ); Py_INCREF( const_str_plain_g );
    PyTuple_SET_ITEM( const_tuple_ed4b09bc6133953c1945710cd7db0b6b_tuple, 2, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_ed4b09bc6133953c1945710cd7db0b6b_tuple, 3, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_ed4b09bc6133953c1945710cd7db0b6b_tuple, 4, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_ed4b09bc6133953c1945710cd7db0b6b_tuple, 5, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    const_str_digest_606f291ffb8a9f0c77780a2539896d20 = UNSTREAM_STRING( &constant_bin[ 43600 ], 55, 0 );
    const_str_plain__RSAKey = UNSTREAM_STRING( &constant_bin[ 43655 ], 7, 1 );
    const_tuple_str_plain_self_str_plain_m_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_m_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_m_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    const_tuple_str_plain_self_str_plain_m_str_plain_sig_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_m_str_plain_sig_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_m_str_plain_sig_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_m_str_plain_sig_tuple, 2, const_str_plain_sig ); Py_INCREF( const_str_plain_sig );
    const_str_digest_cfee8603fd6f0dccf21deb1a9b05299f = UNSTREAM_STRING( &constant_bin[ 43662 ], 62, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Crypto$PublicKey$_slowmath( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b5c2e04366e159b025c05be050ce2f49;
static PyCodeObject *codeobj_6006d89a6ce26913336b2a6735ee5ba6;
static PyCodeObject *codeobj_02e6a1ae7efa5a0a8dce1585196b6d23;
static PyCodeObject *codeobj_be0060cb2e45ea7d668e19bfcfdba554;
static PyCodeObject *codeobj_2a78b71ed8e51b05937b5d0de8a289ff;
static PyCodeObject *codeobj_b428bb3c867d5d4f6453201d658ee7d8;
static PyCodeObject *codeobj_d76159de508fa4720d4d01f81ac02fc3;
static PyCodeObject *codeobj_3d8bbf1cbee4aa74eef31ec23d814c5b;
static PyCodeObject *codeobj_26759e6c504e9d56cbed033deaf53f2e;
static PyCodeObject *codeobj_1d2efd1a445b163162cd2761a1dfc47a;
static PyCodeObject *codeobj_4fb852d65a099a3b10f51cf5973ee4a2;
static PyCodeObject *codeobj_2cb01c78cdb496b01f07805e4e6df62e;
static PyCodeObject *codeobj_ce4cf3939689190c07909b7b82103b5f;
static PyCodeObject *codeobj_6458a0dc6b5e130bf4e284b32bd0ee43;
static PyCodeObject *codeobj_caaf9f8098c94705186f2e63ad1a63b3;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_cfee8603fd6f0dccf21deb1a9b05299f;
    codeobj_b5c2e04366e159b025c05be050ce2f49 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_cc142d739802c24318e419e3fa07d38f, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_6006d89a6ce26913336b2a6735ee5ba6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__blind, 41, const_tuple_str_plain_self_str_plain_m_str_plain_r_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_02e6a1ae7efa5a0a8dce1585196b6d23 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__decrypt, 49, const_tuple_ac9845ad52be3213f653fa21f1702bb5_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_be0060cb2e45ea7d668e19bfcfdba554 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__encrypt, 63, const_tuple_str_plain_self_str_plain_m_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2a78b71ed8e51b05937b5d0de8a289ff = MAKE_CODEOBJ( module_filename_obj, const_str_plain__sign, 67, const_tuple_str_plain_self_str_plain_m_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b428bb3c867d5d4f6453201d658ee7d8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__sign, 150, const_tuple_457987ceb2d9e1e4726da45bc25a4f7c_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d76159de508fa4720d4d01f81ac02fc3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__unblind, 45, const_tuple_str_plain_self_str_plain_m_str_plain_r_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3d8bbf1cbee4aa74eef31ec23d814c5b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__verify, 72, const_tuple_str_plain_self_str_plain_m_str_plain_sig_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_26759e6c504e9d56cbed033deaf53f2e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__verify, 161, const_tuple_a30a6b01e67fcfff05bdd7a3c767552e_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1d2efd1a445b163162cd2761a1dfc47a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dsa_construct, 171, const_tuple_ed4b09bc6133953c1945710cd7db0b6b_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4fb852d65a099a3b10f51cf5973ee4a2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_has_private, 75, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2cb01c78cdb496b01f07805e4e6df62e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_has_private, 147, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ce4cf3939689190c07909b7b82103b5f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rsa_construct, 82, const_tuple_75a192b3577cb9013c3472ee9a6cfa4f_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6458a0dc6b5e130bf4e284b32bd0ee43 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_size, 78, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_caaf9f8098c94705186f2e63ad1a63b3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_size, 143, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_10_size(  );


static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_11_has_private(  );


static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_12__sign(  );


static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_13__verify(  );


static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_14_dsa_construct( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_1__blind(  );


static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_2__unblind(  );


static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_3__decrypt(  );


static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_4__encrypt(  );


static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_5__sign(  );


static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_6__verify(  );


static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_7_has_private(  );


static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_8_size(  );


static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_9_rsa_construct( PyObject *defaults );


// The module function definitions.
static PyObject *impl_Crypto$PublicKey$_slowmath$$$function_1__blind( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
    PyObject *par_r = python_pars[ 2 ];
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
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_6006d89a6ce26913336b2a6735ee5ba6 = NULL;

    struct Nuitka_FrameObject *frame_6006d89a6ce26913336b2a6735ee5ba6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6006d89a6ce26913336b2a6735ee5ba6, codeobj_6006d89a6ce26913336b2a6735ee5ba6, module_Crypto$PublicKey$_slowmath, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6006d89a6ce26913336b2a6735ee5ba6 = cache_frame_6006d89a6ce26913336b2a6735ee5ba6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6006d89a6ce26913336b2a6735ee5ba6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6006d89a6ce26913336b2a6735ee5ba6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = par_m;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_pow );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pow );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pow" );
        exception_tb = NULL;

        exception_lineno = 43;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_r;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_e );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_n );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 43;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_6006d89a6ce26913336b2a6735ee5ba6->m_frame.f_lineno = 43;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6006d89a6ce26913336b2a6735ee5ba6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6006d89a6ce26913336b2a6735ee5ba6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6006d89a6ce26913336b2a6735ee5ba6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6006d89a6ce26913336b2a6735ee5ba6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6006d89a6ce26913336b2a6735ee5ba6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6006d89a6ce26913336b2a6735ee5ba6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6006d89a6ce26913336b2a6735ee5ba6,
        type_description_1,
        par_self,
        par_m,
        par_r
    );


    // Release cached frame.
    if ( frame_6006d89a6ce26913336b2a6735ee5ba6 == cache_frame_6006d89a6ce26913336b2a6735ee5ba6 )
    {
        Py_DECREF( frame_6006d89a6ce26913336b2a6735ee5ba6 );
    }
    cache_frame_6006d89a6ce26913336b2a6735ee5ba6 = NULL;

    assertFrameObject( frame_6006d89a6ce26913336b2a6735ee5ba6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_1__blind );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

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

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_1__blind );
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


static PyObject *impl_Crypto$PublicKey$_slowmath$$$function_2__unblind( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
    PyObject *par_r = python_pars[ 2 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_d76159de508fa4720d4d01f81ac02fc3 = NULL;

    struct Nuitka_FrameObject *frame_d76159de508fa4720d4d01f81ac02fc3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d76159de508fa4720d4d01f81ac02fc3, codeobj_d76159de508fa4720d4d01f81ac02fc3, module_Crypto$PublicKey$_slowmath, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d76159de508fa4720d4d01f81ac02fc3 = cache_frame_d76159de508fa4720d4d01f81ac02fc3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d76159de508fa4720d4d01f81ac02fc3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d76159de508fa4720d4d01f81ac02fc3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_inverse );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inverse );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "inverse" );
        exception_tb = NULL;

        exception_lineno = 47;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_r;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_n );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_d76159de508fa4720d4d01f81ac02fc3->m_frame.f_lineno = 47;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_left_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = par_m;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_left_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_n );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 47;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d76159de508fa4720d4d01f81ac02fc3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d76159de508fa4720d4d01f81ac02fc3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d76159de508fa4720d4d01f81ac02fc3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d76159de508fa4720d4d01f81ac02fc3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d76159de508fa4720d4d01f81ac02fc3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d76159de508fa4720d4d01f81ac02fc3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d76159de508fa4720d4d01f81ac02fc3,
        type_description_1,
        par_self,
        par_m,
        par_r
    );


    // Release cached frame.
    if ( frame_d76159de508fa4720d4d01f81ac02fc3 == cache_frame_d76159de508fa4720d4d01f81ac02fc3 )
    {
        Py_DECREF( frame_d76159de508fa4720d4d01f81ac02fc3 );
    }
    cache_frame_d76159de508fa4720d4d01f81ac02fc3 = NULL;

    assertFrameObject( frame_d76159de508fa4720d4d01f81ac02fc3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_2__unblind );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

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

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_2__unblind );
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


static PyObject *impl_Crypto$PublicKey$_slowmath$$$function_3__decrypt( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_c = python_pars[ 1 ];
    PyObject *var_m1 = NULL;
    PyObject *var_m2 = NULL;
    PyObject *var_h = NULL;
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
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_attr_3;
    PyObject *tmp_hasattr_value_1;
    PyObject *tmp_hasattr_value_2;
    PyObject *tmp_hasattr_value_3;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_left_name_9;
    PyObject *tmp_left_name_10;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
    PyObject *tmp_right_name_9;
    PyObject *tmp_right_name_10;
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
    static struct Nuitka_FrameObject *cache_frame_02e6a1ae7efa5a0a8dce1585196b6d23 = NULL;

    struct Nuitka_FrameObject *frame_02e6a1ae7efa5a0a8dce1585196b6d23;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_02e6a1ae7efa5a0a8dce1585196b6d23, codeobj_02e6a1ae7efa5a0a8dce1585196b6d23, module_Crypto$PublicKey$_slowmath, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_02e6a1ae7efa5a0a8dce1585196b6d23 = cache_frame_02e6a1ae7efa5a0a8dce1585196b6d23;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_02e6a1ae7efa5a0a8dce1585196b6d23 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_02e6a1ae7efa5a0a8dce1585196b6d23 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_02e6a1ae7efa5a0a8dce1585196b6d23->m_frame.f_lineno = 51;
    tmp_cond_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_has_private );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 51;
        type_description_1 = "ooooo";
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
    tmp_make_exception_arg_1 = const_str_digest_8bbf9085a6910cb95e01214c9fcc8aff;
    frame_02e6a1ae7efa5a0a8dce1585196b6d23->m_frame.f_lineno = 52;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 52;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_hasattr_value_1 = par_self;

    CHECK_OBJECT( tmp_hasattr_value_1 );
    tmp_hasattr_attr_1 = const_str_plain_p;
    tmp_and_left_value_1 = BUILTIN_HASATTR( tmp_hasattr_value_1, tmp_hasattr_attr_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "ooooo";
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
    tmp_hasattr_value_2 = par_self;

    CHECK_OBJECT( tmp_hasattr_value_2 );
    tmp_hasattr_attr_2 = const_str_plain_q;
    tmp_and_left_value_2 = BUILTIN_HASATTR( tmp_hasattr_value_2, tmp_hasattr_attr_2 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "ooooo";
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
    tmp_hasattr_value_3 = par_self;

    CHECK_OBJECT( tmp_hasattr_value_3 );
    tmp_hasattr_attr_3 = const_str_plain_u;
    tmp_and_right_value_2 = BUILTIN_HASATTR( tmp_hasattr_value_3, tmp_hasattr_attr_3 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_and_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_value_2 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_2 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_pow );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pow );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pow" );
        exception_tb = NULL;

        exception_lineno = 54;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_c;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_d );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_p );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 54;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_1;
    tmp_right_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 54;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_p );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 54;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_02e6a1ae7efa5a0a8dce1585196b6d23->m_frame.f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_m1 == NULL );
    var_m1 = tmp_assign_source_1;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_pow );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pow );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pow" );
        exception_tb = NULL;

        exception_lineno = 55;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_c;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_d );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_left_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_q );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_3 );

        exception_lineno = 55;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = const_int_pos_1;
    tmp_right_name_3 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_3 );

        exception_lineno = 55;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_q );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 55;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_02e6a1ae7efa5a0a8dce1585196b6d23->m_frame.f_lineno = 55;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_m2 == NULL );
    var_m2 = tmp_assign_source_2;

    tmp_left_name_5 = var_m2;

    CHECK_OBJECT( tmp_left_name_5 );
    tmp_right_name_5 = var_m1;

    CHECK_OBJECT( tmp_right_name_5 );
    tmp_assign_source_3 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_h == NULL );
    var_h = tmp_assign_source_3;

    tmp_compare_left_1 = var_h;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "ooooo";
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
    tmp_left_name_6 = var_h;

    CHECK_OBJECT( tmp_left_name_6 );
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_right_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_q );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = BINARY_OPERATION_ADD( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_h;
        assert( old != NULL );
        var_h = tmp_assign_source_4;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_left_name_8 = var_h;

    CHECK_OBJECT( tmp_left_name_8 );
    tmp_source_name_8 = par_self;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_right_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_u );
    if ( tmp_right_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_7 = BINARY_OPERATION_MUL( tmp_left_name_8, tmp_right_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_left_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = par_self;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_right_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_q );
    if ( tmp_right_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_7 );

        exception_lineno = 59;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_7, tmp_right_name_8 );
    Py_DECREF( tmp_left_name_7 );
    Py_DECREF( tmp_right_name_8 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_h;
        assert( old != NULL );
        var_h = tmp_assign_source_5;
        Py_DECREF( old );
    }

    tmp_left_name_10 = var_h;

    CHECK_OBJECT( tmp_left_name_10 );
    tmp_source_name_10 = par_self;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_right_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_p );
    if ( tmp_right_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_9 = BINARY_OPERATION_MUL( tmp_left_name_10, tmp_right_name_9 );
    Py_DECREF( tmp_right_name_9 );
    if ( tmp_left_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_10 = var_m1;

    CHECK_OBJECT( tmp_right_name_10 );
    tmp_return_value = BINARY_OPERATION_ADD( tmp_left_name_9, tmp_right_name_10 );
    Py_DECREF( tmp_left_name_9 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_pow );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pow );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pow" );
        exception_tb = NULL;

        exception_lineno = 61;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = par_c;

    CHECK_OBJECT( tmp_args_element_name_7 );
    tmp_source_name_11 = par_self;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_d );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = par_self;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_n );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_8 );

        exception_lineno = 61;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_02e6a1ae7efa5a0a8dce1585196b6d23->m_frame.f_lineno = 61;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_02e6a1ae7efa5a0a8dce1585196b6d23 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_02e6a1ae7efa5a0a8dce1585196b6d23 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_02e6a1ae7efa5a0a8dce1585196b6d23 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_02e6a1ae7efa5a0a8dce1585196b6d23, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_02e6a1ae7efa5a0a8dce1585196b6d23->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_02e6a1ae7efa5a0a8dce1585196b6d23, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_02e6a1ae7efa5a0a8dce1585196b6d23,
        type_description_1,
        par_self,
        par_c,
        var_m1,
        var_m2,
        var_h
    );


    // Release cached frame.
    if ( frame_02e6a1ae7efa5a0a8dce1585196b6d23 == cache_frame_02e6a1ae7efa5a0a8dce1585196b6d23 )
    {
        Py_DECREF( frame_02e6a1ae7efa5a0a8dce1585196b6d23 );
    }
    cache_frame_02e6a1ae7efa5a0a8dce1585196b6d23 = NULL;

    assertFrameObject( frame_02e6a1ae7efa5a0a8dce1585196b6d23 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_3__decrypt );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    Py_XDECREF( var_m1 );
    var_m1 = NULL;

    Py_XDECREF( var_m2 );
    var_m2 = NULL;

    Py_XDECREF( var_h );
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

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    Py_XDECREF( var_m1 );
    var_m1 = NULL;

    Py_XDECREF( var_m2 );
    var_m2 = NULL;

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
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_3__decrypt );
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


static PyObject *impl_Crypto$PublicKey$_slowmath$$$function_4__encrypt( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
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
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_be0060cb2e45ea7d668e19bfcfdba554 = NULL;

    struct Nuitka_FrameObject *frame_be0060cb2e45ea7d668e19bfcfdba554;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_be0060cb2e45ea7d668e19bfcfdba554, codeobj_be0060cb2e45ea7d668e19bfcfdba554, module_Crypto$PublicKey$_slowmath, sizeof(void *)+sizeof(void *) );
    frame_be0060cb2e45ea7d668e19bfcfdba554 = cache_frame_be0060cb2e45ea7d668e19bfcfdba554;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_be0060cb2e45ea7d668e19bfcfdba554 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_be0060cb2e45ea7d668e19bfcfdba554 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_pow );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pow );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pow" );
        exception_tb = NULL;

        exception_lineno = 65;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_m;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_e );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_n );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 65;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_be0060cb2e45ea7d668e19bfcfdba554->m_frame.f_lineno = 65;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be0060cb2e45ea7d668e19bfcfdba554 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_be0060cb2e45ea7d668e19bfcfdba554 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be0060cb2e45ea7d668e19bfcfdba554 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_be0060cb2e45ea7d668e19bfcfdba554, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_be0060cb2e45ea7d668e19bfcfdba554->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_be0060cb2e45ea7d668e19bfcfdba554, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_be0060cb2e45ea7d668e19bfcfdba554,
        type_description_1,
        par_self,
        par_m
    );


    // Release cached frame.
    if ( frame_be0060cb2e45ea7d668e19bfcfdba554 == cache_frame_be0060cb2e45ea7d668e19bfcfdba554 )
    {
        Py_DECREF( frame_be0060cb2e45ea7d668e19bfcfdba554 );
    }
    cache_frame_be0060cb2e45ea7d668e19bfcfdba554 = NULL;

    assertFrameObject( frame_be0060cb2e45ea7d668e19bfcfdba554 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_4__encrypt );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

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

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_4__encrypt );
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


static PyObject *impl_Crypto$PublicKey$_slowmath$$$function_5__sign( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_2a78b71ed8e51b05937b5d0de8a289ff = NULL;

    struct Nuitka_FrameObject *frame_2a78b71ed8e51b05937b5d0de8a289ff;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2a78b71ed8e51b05937b5d0de8a289ff, codeobj_2a78b71ed8e51b05937b5d0de8a289ff, module_Crypto$PublicKey$_slowmath, sizeof(void *)+sizeof(void *) );
    frame_2a78b71ed8e51b05937b5d0de8a289ff = cache_frame_2a78b71ed8e51b05937b5d0de8a289ff;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2a78b71ed8e51b05937b5d0de8a289ff );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2a78b71ed8e51b05937b5d0de8a289ff ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_2a78b71ed8e51b05937b5d0de8a289ff->m_frame.f_lineno = 68;
    tmp_cond_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_has_private );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 68;
        type_description_1 = "oo";
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
    tmp_make_exception_arg_1 = const_str_digest_8bbf9085a6910cb95e01214c9fcc8aff;
    frame_2a78b71ed8e51b05937b5d0de8a289ff->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 69;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_instance_2 = par_self;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_1 = par_m;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_2a78b71ed8e51b05937b5d0de8a289ff->m_frame.f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__decrypt, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a78b71ed8e51b05937b5d0de8a289ff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a78b71ed8e51b05937b5d0de8a289ff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a78b71ed8e51b05937b5d0de8a289ff );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2a78b71ed8e51b05937b5d0de8a289ff, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2a78b71ed8e51b05937b5d0de8a289ff->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2a78b71ed8e51b05937b5d0de8a289ff, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2a78b71ed8e51b05937b5d0de8a289ff,
        type_description_1,
        par_self,
        par_m
    );


    // Release cached frame.
    if ( frame_2a78b71ed8e51b05937b5d0de8a289ff == cache_frame_2a78b71ed8e51b05937b5d0de8a289ff )
    {
        Py_DECREF( frame_2a78b71ed8e51b05937b5d0de8a289ff );
    }
    cache_frame_2a78b71ed8e51b05937b5d0de8a289ff = NULL;

    assertFrameObject( frame_2a78b71ed8e51b05937b5d0de8a289ff );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_5__sign );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

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

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_5__sign );
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


static PyObject *impl_Crypto$PublicKey$_slowmath$$$function_6__verify( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
    PyObject *par_sig = python_pars[ 2 ];
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_3d8bbf1cbee4aa74eef31ec23d814c5b = NULL;

    struct Nuitka_FrameObject *frame_3d8bbf1cbee4aa74eef31ec23d814c5b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3d8bbf1cbee4aa74eef31ec23d814c5b, codeobj_3d8bbf1cbee4aa74eef31ec23d814c5b, module_Crypto$PublicKey$_slowmath, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3d8bbf1cbee4aa74eef31ec23d814c5b = cache_frame_3d8bbf1cbee4aa74eef31ec23d814c5b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3d8bbf1cbee4aa74eef31ec23d814c5b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3d8bbf1cbee4aa74eef31ec23d814c5b ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_sig;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_3d8bbf1cbee4aa74eef31ec23d814c5b->m_frame.f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_compexpr_left_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__encrypt, call_args );
    }

    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = par_m;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d8bbf1cbee4aa74eef31ec23d814c5b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d8bbf1cbee4aa74eef31ec23d814c5b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d8bbf1cbee4aa74eef31ec23d814c5b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3d8bbf1cbee4aa74eef31ec23d814c5b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3d8bbf1cbee4aa74eef31ec23d814c5b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3d8bbf1cbee4aa74eef31ec23d814c5b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3d8bbf1cbee4aa74eef31ec23d814c5b,
        type_description_1,
        par_self,
        par_m,
        par_sig
    );


    // Release cached frame.
    if ( frame_3d8bbf1cbee4aa74eef31ec23d814c5b == cache_frame_3d8bbf1cbee4aa74eef31ec23d814c5b )
    {
        Py_DECREF( frame_3d8bbf1cbee4aa74eef31ec23d814c5b );
    }
    cache_frame_3d8bbf1cbee4aa74eef31ec23d814c5b = NULL;

    assertFrameObject( frame_3d8bbf1cbee4aa74eef31ec23d814c5b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_6__verify );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_sig );
    Py_DECREF( par_sig );
    par_sig = NULL;

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

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_sig );
    Py_DECREF( par_sig );
    par_sig = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_6__verify );
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


static PyObject *impl_Crypto$PublicKey$_slowmath$$$function_7_has_private( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_value_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_4fb852d65a099a3b10f51cf5973ee4a2 = NULL;

    struct Nuitka_FrameObject *frame_4fb852d65a099a3b10f51cf5973ee4a2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4fb852d65a099a3b10f51cf5973ee4a2, codeobj_4fb852d65a099a3b10f51cf5973ee4a2, module_Crypto$PublicKey$_slowmath, sizeof(void *) );
    frame_4fb852d65a099a3b10f51cf5973ee4a2 = cache_frame_4fb852d65a099a3b10f51cf5973ee4a2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4fb852d65a099a3b10f51cf5973ee4a2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4fb852d65a099a3b10f51cf5973ee4a2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_hasattr_value_1 = par_self;

    CHECK_OBJECT( tmp_hasattr_value_1 );
    tmp_hasattr_attr_1 = const_str_plain_d;
    tmp_return_value = BUILTIN_HASATTR( tmp_hasattr_value_1, tmp_hasattr_attr_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4fb852d65a099a3b10f51cf5973ee4a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4fb852d65a099a3b10f51cf5973ee4a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4fb852d65a099a3b10f51cf5973ee4a2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4fb852d65a099a3b10f51cf5973ee4a2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4fb852d65a099a3b10f51cf5973ee4a2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4fb852d65a099a3b10f51cf5973ee4a2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4fb852d65a099a3b10f51cf5973ee4a2,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_4fb852d65a099a3b10f51cf5973ee4a2 == cache_frame_4fb852d65a099a3b10f51cf5973ee4a2 )
    {
        Py_DECREF( frame_4fb852d65a099a3b10f51cf5973ee4a2 );
    }
    cache_frame_4fb852d65a099a3b10f51cf5973ee4a2 = NULL;

    assertFrameObject( frame_4fb852d65a099a3b10f51cf5973ee4a2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_7_has_private );
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
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_7_has_private );
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


static PyObject *impl_Crypto$PublicKey$_slowmath$$$function_8_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_6458a0dc6b5e130bf4e284b32bd0ee43 = NULL;

    struct Nuitka_FrameObject *frame_6458a0dc6b5e130bf4e284b32bd0ee43;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6458a0dc6b5e130bf4e284b32bd0ee43, codeobj_6458a0dc6b5e130bf4e284b32bd0ee43, module_Crypto$PublicKey$_slowmath, sizeof(void *) );
    frame_6458a0dc6b5e130bf4e284b32bd0ee43 = cache_frame_6458a0dc6b5e130bf4e284b32bd0ee43;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6458a0dc6b5e130bf4e284b32bd0ee43 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6458a0dc6b5e130bf4e284b32bd0ee43 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_size );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_size );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "size" );
        exception_tb = NULL;

        exception_lineno = 80;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_n );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_6458a0dc6b5e130bf4e284b32bd0ee43->m_frame.f_lineno = 80;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1;
    tmp_return_value = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
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
    RESTORE_FRAME_EXCEPTION( frame_6458a0dc6b5e130bf4e284b32bd0ee43 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6458a0dc6b5e130bf4e284b32bd0ee43 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6458a0dc6b5e130bf4e284b32bd0ee43 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6458a0dc6b5e130bf4e284b32bd0ee43, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6458a0dc6b5e130bf4e284b32bd0ee43->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6458a0dc6b5e130bf4e284b32bd0ee43, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6458a0dc6b5e130bf4e284b32bd0ee43,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_6458a0dc6b5e130bf4e284b32bd0ee43 == cache_frame_6458a0dc6b5e130bf4e284b32bd0ee43 )
    {
        Py_DECREF( frame_6458a0dc6b5e130bf4e284b32bd0ee43 );
    }
    cache_frame_6458a0dc6b5e130bf4e284b32bd0ee43 = NULL;

    assertFrameObject( frame_6458a0dc6b5e130bf4e284b32bd0ee43 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_8_size );
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
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_8_size );
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


static PyObject *impl_Crypto$PublicKey$_slowmath$$$function_9_rsa_construct( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *par_e = python_pars[ 1 ];
    PyObject *par_d = python_pars[ 2 ];
    PyObject *par_p = python_pars[ 3 ];
    PyObject *par_q = python_pars[ 4 ];
    PyObject *par_u = python_pars[ 5 ];
    PyObject *var_obj = NULL;
    PyObject *var_ktot = NULL;
    PyObject *var_t = NULL;
    PyObject *var_spotted = NULL;
    PyObject *var_a = NULL;
    PyObject *var_k = NULL;
    PyObject *var_cand = NULL;
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
    int tmp_and_left_truth_3;
    int tmp_and_left_truth_4;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_left_value_4;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_and_right_value_4;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Lt_1;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_cls_4;
    PyObject *tmp_isinstance_cls_5;
    PyObject *tmp_isinstance_cls_6;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    PyObject *tmp_isinstance_inst_4;
    PyObject *tmp_isinstance_inst_5;
    PyObject *tmp_isinstance_inst_6;
    bool tmp_isnot_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_left_name_9;
    PyObject *tmp_left_name_10;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_type_5;
    PyObject *tmp_raise_type_6;
    PyObject *tmp_raise_type_7;
    PyObject *tmp_raise_type_8;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
    PyObject *tmp_right_name_9;
    PyObject *tmp_right_name_10;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    static struct Nuitka_FrameObject *cache_frame_ce4cf3939689190c07909b7b82103b5f = NULL;

    struct Nuitka_FrameObject *frame_ce4cf3939689190c07909b7b82103b5f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ce4cf3939689190c07909b7b82103b5f, codeobj_ce4cf3939689190c07909b7b82103b5f, module_Crypto$PublicKey$_slowmath, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ce4cf3939689190c07909b7b82103b5f = cache_frame_ce4cf3939689190c07909b7b82103b5f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ce4cf3939689190c07909b7b82103b5f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ce4cf3939689190c07909b7b82103b5f ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_n;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
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
    exception_lineno = 84;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_isinstance_inst_2 = par_e;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_isinstance_cls_2 = (PyObject *)&PyLong_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "ooooooooooooo";
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
    tmp_raise_type_2 = PyExc_AssertionError;
    exception_type = tmp_raise_type_2;
    Py_INCREF( tmp_raise_type_2 );
    exception_lineno = 85;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_isinstance_inst_3 = par_d;

    CHECK_OBJECT( tmp_isinstance_inst_3 );
    tmp_isinstance_cls_3 = PyTuple_New( 2 );
    tmp_tuple_element_1 = (PyObject *)&PyLong_Type;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_3, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = (PyObject *)Py_TYPE( Py_None );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_3, 1, tmp_tuple_element_1 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    Py_DECREF( tmp_isinstance_cls_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_raise_type_3 = PyExc_AssertionError;
    exception_type = tmp_raise_type_3;
    Py_INCREF( tmp_raise_type_3 );
    exception_lineno = 86;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_isinstance_inst_4 = par_p;

    CHECK_OBJECT( tmp_isinstance_inst_4 );
    tmp_isinstance_cls_4 = PyTuple_New( 2 );
    tmp_tuple_element_2 = (PyObject *)&PyLong_Type;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_4, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = (PyObject *)Py_TYPE( Py_None );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_4, 1, tmp_tuple_element_2 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
    Py_DECREF( tmp_isinstance_cls_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_raise_type_4 = PyExc_AssertionError;
    exception_type = tmp_raise_type_4;
    Py_INCREF( tmp_raise_type_4 );
    exception_lineno = 87;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_isinstance_inst_5 = par_q;

    CHECK_OBJECT( tmp_isinstance_inst_5 );
    tmp_isinstance_cls_5 = PyTuple_New( 2 );
    tmp_tuple_element_3 = (PyObject *)&PyLong_Type;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_5, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = (PyObject *)Py_TYPE( Py_None );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_5, 1, tmp_tuple_element_3 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_5, tmp_isinstance_cls_5 );
    Py_DECREF( tmp_isinstance_cls_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_5;
    }
    else
    {
        goto branch_yes_5;
    }
    branch_yes_5:;
    tmp_raise_type_5 = PyExc_AssertionError;
    exception_type = tmp_raise_type_5;
    Py_INCREF( tmp_raise_type_5 );
    exception_lineno = 88;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_5:;
    tmp_isinstance_inst_6 = par_u;

    CHECK_OBJECT( tmp_isinstance_inst_6 );
    tmp_isinstance_cls_6 = PyTuple_New( 2 );
    tmp_tuple_element_4 = (PyObject *)&PyLong_Type;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_6, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = (PyObject *)Py_TYPE( Py_None );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_6, 1, tmp_tuple_element_4 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_6, tmp_isinstance_cls_6 );
    Py_DECREF( tmp_isinstance_cls_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_6;
    }
    else
    {
        goto branch_yes_6;
    }
    branch_yes_6:;
    tmp_raise_type_6 = PyExc_AssertionError;
    exception_type = tmp_raise_type_6;
    Py_INCREF( tmp_raise_type_6 );
    exception_lineno = 89;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_6:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain__RSAKey );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__RSAKey );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_RSAKey" );
        exception_tb = NULL;

        exception_lineno = 90;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_ce4cf3939689190c07909b7b82103b5f->m_frame.f_lineno = 90;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_obj == NULL );
    var_obj = tmp_assign_source_1;

    tmp_assattr_name_1 = par_n;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = var_obj;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_n, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_e;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = var_obj;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_e, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = par_d;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_return_value = var_obj;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_7:;
    tmp_assattr_name_3 = par_d;

    CHECK_OBJECT( tmp_assattr_name_3 );
    tmp_assattr_target_3 = var_obj;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_d, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = par_p;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 != tmp_compexpr_right_1 );
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
    tmp_compexpr_left_2 = par_q;

    CHECK_OBJECT( tmp_compexpr_left_2 );
    tmp_compexpr_right_2 = Py_None;
    tmp_and_right_value_1 = BOOL_FROM( tmp_compexpr_left_2 != tmp_compexpr_right_2 );
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    assert( !(tmp_cond_truth_1 == -1) );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assattr_name_4 = par_p;

    CHECK_OBJECT( tmp_assattr_name_4 );
    tmp_assattr_target_4 = var_obj;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_p, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = par_q;

    CHECK_OBJECT( tmp_assattr_name_5 );
    tmp_assattr_target_5 = var_obj;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_q, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_8;
    branch_no_8:;
    tmp_left_name_2 = par_d;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_1 = par_e;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_left_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_1;
    tmp_assign_source_2 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ktot == NULL );
    var_ktot = tmp_assign_source_2;

    tmp_assign_source_3 = var_ktot;

    CHECK_OBJECT( tmp_assign_source_3 );
    assert( var_t == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_t = tmp_assign_source_3;

    loop_start_1:;
    tmp_left_name_3 = var_t;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;

        exception_lineno = 107;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = const_int_pos_2;
    tmp_compare_left_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 107;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_no_9;
    }
    else
    {
        goto branch_yes_9;
    }
    branch_yes_9:;
    goto loop_end_1;
    branch_no_9:;
    tmp_left_name_4 = var_t;

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;

        exception_lineno = 108;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_4 = const_int_pos_2;
    tmp_subscribed_name_1 = BUILTIN_DIVMOD( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_t;
        var_t = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_assign_source_5 = const_int_0;
    assert( var_spotted == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_spotted = tmp_assign_source_5;

    tmp_assign_source_6 = const_int_pos_2;
    assert( var_a == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_a = tmp_assign_source_6;

    loop_start_2:;
    tmp_operand_name_1 = var_spotted;

    if ( tmp_operand_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "spotted" );
        exception_tb = NULL;

        exception_lineno = 116;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "ooooooooooooo";
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
    tmp_compexpr_left_3 = var_a;

    if ( tmp_compexpr_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;

        exception_lineno = 116;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_3 = const_int_pos_100;
    tmp_and_right_value_2 = RICH_COMPARE_LT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    Py_INCREF( tmp_and_left_value_2 );
    tmp_cond_value_2 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 116;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_10;
    }
    else
    {
        goto branch_yes_10;
    }
    branch_yes_10:;
    goto loop_end_2;
    branch_no_10:;
    tmp_assign_source_7 = var_t;

    if ( tmp_assign_source_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;

        exception_lineno = 117;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_7;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    loop_start_3:;
    tmp_compare_left_3 = var_k;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "k" );
        exception_tb = NULL;

        exception_lineno = 119;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = var_ktot;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_no_11;
    }
    else
    {
        goto branch_yes_11;
    }
    branch_yes_11:;
    goto loop_end_3;
    branch_no_11:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_pow );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pow );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pow" );
        exception_tb = NULL;

        exception_lineno = 120;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = var_a;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;

        exception_lineno = 120;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_k;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "k" );
        exception_tb = NULL;

        exception_lineno = 120;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_n;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_ce4cf3939689190c07909b7b82103b5f->m_frame.f_lineno = 120;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_cand;
        var_cand = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_compexpr_left_4 = var_cand;

    CHECK_OBJECT( tmp_compexpr_left_4 );
    tmp_compexpr_right_4 = const_int_pos_1;
    tmp_and_left_value_3 = RICH_COMPARE_NE( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_and_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_3 );

        exception_lineno = 122;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_3 == 1 )
    {
        goto and_right_3;
    }
    else
    {
        goto and_left_3;
    }
    and_right_3:;
    Py_DECREF( tmp_and_left_value_3 );
    tmp_compexpr_left_5 = var_cand;

    CHECK_OBJECT( tmp_compexpr_left_5 );
    tmp_left_name_5 = par_n;

    CHECK_OBJECT( tmp_left_name_5 );
    tmp_right_name_5 = const_int_pos_1;
    tmp_compexpr_right_5 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_compexpr_right_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_4 = RICH_COMPARE_NE( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    Py_DECREF( tmp_compexpr_right_5 );
    if ( tmp_and_left_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    if ( tmp_and_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_4 );

        exception_lineno = 122;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_4 == 1 )
    {
        goto and_right_4;
    }
    else
    {
        goto and_left_4;
    }
    and_right_4:;
    Py_DECREF( tmp_and_left_value_4 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_pow );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pow );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pow" );
        exception_tb = NULL;

        exception_lineno = 122;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = var_cand;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_args_element_name_5 = const_int_pos_2;
    tmp_args_element_name_6 = par_n;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_ce4cf3939689190c07909b7b82103b5f->m_frame.f_lineno = 122;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_compexpr_left_6 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    if ( tmp_compexpr_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_6 = const_int_pos_1;
    tmp_and_right_value_4 = RICH_COMPARE_EQ( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    Py_DECREF( tmp_compexpr_left_6 );
    if ( tmp_and_right_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_3 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    tmp_and_right_value_3 = tmp_and_left_value_4;
    and_end_4:;
    tmp_cond_value_3 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_cond_value_3 = tmp_and_left_value_3;
    and_end_3:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 122;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_GCD );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GCD );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "GCD" );
        exception_tb = NULL;

        exception_lineno = 125;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_6 = var_cand;

    CHECK_OBJECT( tmp_left_name_6 );
    tmp_right_name_6 = const_int_pos_1;
    tmp_args_element_name_7 = BINARY_OPERATION_ADD( tmp_left_name_6, tmp_right_name_6 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = par_n;

    CHECK_OBJECT( tmp_args_element_name_8 );
    frame_ce4cf3939689190c07909b7b82103b5f->m_frame.f_lineno = 125;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assattr_name_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assattr_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_6 = var_obj;

    CHECK_OBJECT( tmp_assattr_target_6 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_p, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        exception_lineno = 125;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_6 );
    tmp_assign_source_9 = const_int_pos_1;
    {
        PyObject *old = var_spotted;
        var_spotted = tmp_assign_source_9;
        Py_INCREF( var_spotted );
        Py_XDECREF( old );
    }

    goto loop_end_3;
    branch_no_12:;
    tmp_left_name_7 = var_k;

    if ( tmp_left_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "k" );
        exception_tb = NULL;

        exception_lineno = 128;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_7 = const_int_pos_2;
    tmp_assign_source_10 = BINARY_OPERATION_MUL( tmp_left_name_7, tmp_right_name_7 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_3;
    loop_end_3:;
    tmp_left_name_8 = var_a;

    if ( tmp_left_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;

        exception_lineno = 130;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_8 = const_int_pos_2;
    tmp_assign_source_11 = BINARY_OPERATION_ADD( tmp_left_name_8, tmp_right_name_8 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_a;
        var_a = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_cond_value_4 = var_spotted;

    if ( tmp_cond_value_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "spotted" );
        exception_tb = NULL;

        exception_lineno = 131;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_no_13;
    }
    else
    {
        goto branch_yes_13;
    }
    branch_yes_13:;
    tmp_make_exception_arg_1 = const_str_digest_2771761c63fa422db11e30be6e5dbf5f;
    frame_ce4cf3939689190c07909b7b82103b5f->m_frame.f_lineno = 132;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_7 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_7 != NULL );
    exception_type = tmp_raise_type_7;
    exception_lineno = 132;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_13:;
    tmp_left_name_9 = par_n;

    CHECK_OBJECT( tmp_left_name_9 );
    tmp_source_name_1 = var_obj;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_right_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_p );
    if ( tmp_right_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_9, tmp_right_name_9 );
    Py_DECREF( tmp_right_name_9 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = const_int_0;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 134;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_no_14;
    }
    else
    {
        goto branch_yes_14;
    }
    branch_yes_14:;
    tmp_raise_type_8 = PyExc_AssertionError;
    exception_type = tmp_raise_type_8;
    Py_INCREF( tmp_raise_type_8 );
    exception_lineno = 134;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_14:;
    tmp_left_name_10 = par_n;

    CHECK_OBJECT( tmp_left_name_10 );
    tmp_source_name_2 = var_obj;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_right_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_p );
    if ( tmp_right_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = BUILTIN_DIVMOD( tmp_left_name_10, tmp_right_name_10 );
    Py_DECREF( tmp_right_name_10 );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_0;
    tmp_assattr_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_assattr_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_7 = var_obj;

    CHECK_OBJECT( tmp_assattr_target_7 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_q, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_7 );

        exception_lineno = 135;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_7 );
    branch_end_8:;
    tmp_compare_left_5 = par_u;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_5 != tmp_compare_right_5 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_assattr_name_8 = par_u;

    CHECK_OBJECT( tmp_assattr_name_8 );
    tmp_assattr_target_8 = var_obj;

    CHECK_OBJECT( tmp_assattr_target_8 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_u, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_15;
    branch_no_15:;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_inverse );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inverse );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "inverse" );
        exception_tb = NULL;

        exception_lineno = 139;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = var_obj;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_p );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = var_obj;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_q );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_9 );

        exception_lineno = 139;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_ce4cf3939689190c07909b7b82103b5f->m_frame.f_lineno = 139;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_assattr_name_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_assattr_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_9 = var_obj;

    CHECK_OBJECT( tmp_assattr_target_9 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_u, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_9 );

        exception_lineno = 139;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_9 );
    branch_end_15:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce4cf3939689190c07909b7b82103b5f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce4cf3939689190c07909b7b82103b5f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce4cf3939689190c07909b7b82103b5f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ce4cf3939689190c07909b7b82103b5f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ce4cf3939689190c07909b7b82103b5f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ce4cf3939689190c07909b7b82103b5f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ce4cf3939689190c07909b7b82103b5f,
        type_description_1,
        par_n,
        par_e,
        par_d,
        par_p,
        par_q,
        par_u,
        var_obj,
        var_ktot,
        var_t,
        var_spotted,
        var_a,
        var_k,
        var_cand
    );


    // Release cached frame.
    if ( frame_ce4cf3939689190c07909b7b82103b5f == cache_frame_ce4cf3939689190c07909b7b82103b5f )
    {
        Py_DECREF( frame_ce4cf3939689190c07909b7b82103b5f );
    }
    cache_frame_ce4cf3939689190c07909b7b82103b5f = NULL;

    assertFrameObject( frame_ce4cf3939689190c07909b7b82103b5f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_obj;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_9_rsa_construct );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_e );
    Py_DECREF( par_e );
    par_e = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_u );
    Py_DECREF( par_u );
    par_u = NULL;

    CHECK_OBJECT( (PyObject *)var_obj );
    Py_DECREF( var_obj );
    var_obj = NULL;

    Py_XDECREF( var_ktot );
    var_ktot = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_spotted );
    var_spotted = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_cand );
    var_cand = NULL;

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

    CHECK_OBJECT( (PyObject *)par_e );
    Py_DECREF( par_e );
    par_e = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_u );
    Py_DECREF( par_u );
    par_u = NULL;

    Py_XDECREF( var_obj );
    var_obj = NULL;

    Py_XDECREF( var_ktot );
    var_ktot = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_spotted );
    var_spotted = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_cand );
    var_cand = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_9_rsa_construct );
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


static PyObject *impl_Crypto$PublicKey$_slowmath$$$function_10_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_caaf9f8098c94705186f2e63ad1a63b3 = NULL;

    struct Nuitka_FrameObject *frame_caaf9f8098c94705186f2e63ad1a63b3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_caaf9f8098c94705186f2e63ad1a63b3, codeobj_caaf9f8098c94705186f2e63ad1a63b3, module_Crypto$PublicKey$_slowmath, sizeof(void *) );
    frame_caaf9f8098c94705186f2e63ad1a63b3 = cache_frame_caaf9f8098c94705186f2e63ad1a63b3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_caaf9f8098c94705186f2e63ad1a63b3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_caaf9f8098c94705186f2e63ad1a63b3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_size );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_size );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "size" );
        exception_tb = NULL;

        exception_lineno = 145;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_p );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_caaf9f8098c94705186f2e63ad1a63b3->m_frame.f_lineno = 145;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1;
    tmp_return_value = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_caaf9f8098c94705186f2e63ad1a63b3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_caaf9f8098c94705186f2e63ad1a63b3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_caaf9f8098c94705186f2e63ad1a63b3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_caaf9f8098c94705186f2e63ad1a63b3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_caaf9f8098c94705186f2e63ad1a63b3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_caaf9f8098c94705186f2e63ad1a63b3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_caaf9f8098c94705186f2e63ad1a63b3,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_caaf9f8098c94705186f2e63ad1a63b3 == cache_frame_caaf9f8098c94705186f2e63ad1a63b3 )
    {
        Py_DECREF( frame_caaf9f8098c94705186f2e63ad1a63b3 );
    }
    cache_frame_caaf9f8098c94705186f2e63ad1a63b3 = NULL;

    assertFrameObject( frame_caaf9f8098c94705186f2e63ad1a63b3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_10_size );
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
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_10_size );
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


static PyObject *impl_Crypto$PublicKey$_slowmath$$$function_11_has_private( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_value_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_2cb01c78cdb496b01f07805e4e6df62e = NULL;

    struct Nuitka_FrameObject *frame_2cb01c78cdb496b01f07805e4e6df62e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2cb01c78cdb496b01f07805e4e6df62e, codeobj_2cb01c78cdb496b01f07805e4e6df62e, module_Crypto$PublicKey$_slowmath, sizeof(void *) );
    frame_2cb01c78cdb496b01f07805e4e6df62e = cache_frame_2cb01c78cdb496b01f07805e4e6df62e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2cb01c78cdb496b01f07805e4e6df62e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2cb01c78cdb496b01f07805e4e6df62e ) == 2 ); // Frame stack

    // Framed code:
    tmp_hasattr_value_1 = par_self;

    CHECK_OBJECT( tmp_hasattr_value_1 );
    tmp_hasattr_attr_1 = const_str_plain_x;
    tmp_return_value = BUILTIN_HASATTR( tmp_hasattr_value_1, tmp_hasattr_attr_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2cb01c78cdb496b01f07805e4e6df62e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2cb01c78cdb496b01f07805e4e6df62e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2cb01c78cdb496b01f07805e4e6df62e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2cb01c78cdb496b01f07805e4e6df62e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2cb01c78cdb496b01f07805e4e6df62e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2cb01c78cdb496b01f07805e4e6df62e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2cb01c78cdb496b01f07805e4e6df62e,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_2cb01c78cdb496b01f07805e4e6df62e == cache_frame_2cb01c78cdb496b01f07805e4e6df62e )
    {
        Py_DECREF( frame_2cb01c78cdb496b01f07805e4e6df62e );
    }
    cache_frame_2cb01c78cdb496b01f07805e4e6df62e = NULL;

    assertFrameObject( frame_2cb01c78cdb496b01f07805e4e6df62e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_11_has_private );
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
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_11_has_private );
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


static PyObject *impl_Crypto$PublicKey$_slowmath$$$function_12__sign( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
    PyObject *par_k = python_pars[ 2 ];
    PyObject *var_inv_k = NULL;
    PyObject *var_r = NULL;
    PyObject *var_s = NULL;
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
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_b428bb3c867d5d4f6453201d658ee7d8 = NULL;

    struct Nuitka_FrameObject *frame_b428bb3c867d5d4f6453201d658ee7d8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b428bb3c867d5d4f6453201d658ee7d8, codeobj_b428bb3c867d5d4f6453201d658ee7d8, module_Crypto$PublicKey$_slowmath, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b428bb3c867d5d4f6453201d658ee7d8 = cache_frame_b428bb3c867d5d4f6453201d658ee7d8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b428bb3c867d5d4f6453201d658ee7d8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b428bb3c867d5d4f6453201d658ee7d8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_b428bb3c867d5d4f6453201d658ee7d8->m_frame.f_lineno = 152;
    tmp_cond_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_has_private );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 152;
        type_description_1 = "oooooo";
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
    tmp_make_exception_arg_1 = const_str_digest_8bbf9085a6910cb95e01214c9fcc8aff;
    frame_b428bb3c867d5d4f6453201d658ee7d8->m_frame.f_lineno = 153;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 153;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assign_source_1 = par_k;

    CHECK_OBJECT( tmp_assign_source_1 );
    assert( tmp_comparison_chain_1__operand_2 == NULL );
    Py_INCREF( tmp_assign_source_1 );
    tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;

    // Tried code:
    tmp_compexpr_left_1 = const_long_pos_1;
    tmp_compexpr_right_1 = tmp_comparison_chain_1__operand_2;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_assign_source_2 = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    assert( tmp_comparison_chain_1__comparison_result == NULL );
    tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;

    tmp_cond_value_3 = tmp_comparison_chain_1__comparison_result;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_3 == 1 )
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
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_q );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_outline_return_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_outline_return_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_12__sign );
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
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_12__sign );
    return NULL;
    outline_result_1:;
    tmp_cond_value_2 = tmp_outline_return_value_1;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 154;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_2 = const_str_digest_ff286ea5dbcb26ffc3afbd1b9dc51122;
    frame_b428bb3c867d5d4f6453201d658ee7d8->m_frame.f_lineno = 155;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 155;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_inverse );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inverse );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "inverse" );
        exception_tb = NULL;

        exception_lineno = 156;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_k;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_q );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_b428bb3c867d5d4f6453201d658ee7d8->m_frame.f_lineno = 156;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_inv_k == NULL );
    var_inv_k = tmp_assign_source_3;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_pow );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pow );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pow" );
        exception_tb = NULL;

        exception_lineno = 157;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_g );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_k;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_p );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 157;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_b428bb3c867d5d4f6453201d658ee7d8->m_frame.f_lineno = 157;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_q );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 157;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_r == NULL );
    var_r = tmp_assign_source_4;

    tmp_left_name_3 = var_inv_k;

    CHECK_OBJECT( tmp_left_name_3 );
    tmp_left_name_4 = par_m;

    CHECK_OBJECT( tmp_left_name_4 );
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_left_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_x );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = var_r;

    CHECK_OBJECT( tmp_right_name_4 );
    tmp_right_name_3 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_5 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_right_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_q );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 158;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_s == NULL );
    var_s = tmp_assign_source_5;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_b428bb3c867d5d4f6453201d658ee7d8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b428bb3c867d5d4f6453201d658ee7d8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b428bb3c867d5d4f6453201d658ee7d8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b428bb3c867d5d4f6453201d658ee7d8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b428bb3c867d5d4f6453201d658ee7d8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b428bb3c867d5d4f6453201d658ee7d8,
        type_description_1,
        par_self,
        par_m,
        par_k,
        var_inv_k,
        var_r,
        var_s
    );


    // Release cached frame.
    if ( frame_b428bb3c867d5d4f6453201d658ee7d8 == cache_frame_b428bb3c867d5d4f6453201d658ee7d8 )
    {
        Py_DECREF( frame_b428bb3c867d5d4f6453201d658ee7d8 );
    }
    cache_frame_b428bb3c867d5d4f6453201d658ee7d8 = NULL;

    assertFrameObject( frame_b428bb3c867d5d4f6453201d658ee7d8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_r;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_s;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_12__sign );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)var_inv_k );
    Py_DECREF( var_inv_k );
    var_inv_k = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)var_s );
    Py_DECREF( var_s );
    var_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    Py_XDECREF( var_inv_k );
    var_inv_k = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_12__sign );
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


static PyObject *impl_Crypto$PublicKey$_slowmath$$$function_13__verify( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
    PyObject *par_r = python_pars[ 2 ];
    PyObject *par_s = python_pars[ 3 ];
    PyObject *var_w = NULL;
    PyObject *var_u1 = NULL;
    PyObject *var_u2 = NULL;
    PyObject *var_v = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_comparison_chain_2__comparison_result = NULL;
    PyObject *tmp_comparison_chain_2__operand_2 = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
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
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
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
    static struct Nuitka_FrameObject *cache_frame_26759e6c504e9d56cbed033deaf53f2e = NULL;

    struct Nuitka_FrameObject *frame_26759e6c504e9d56cbed033deaf53f2e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_26759e6c504e9d56cbed033deaf53f2e, codeobj_26759e6c504e9d56cbed033deaf53f2e, module_Crypto$PublicKey$_slowmath, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_26759e6c504e9d56cbed033deaf53f2e = cache_frame_26759e6c504e9d56cbed033deaf53f2e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_26759e6c504e9d56cbed033deaf53f2e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_26759e6c504e9d56cbed033deaf53f2e ) == 2 ); // Frame stack

    // Framed code:
    tmp_assign_source_1 = par_r;

    CHECK_OBJECT( tmp_assign_source_1 );
    assert( tmp_comparison_chain_1__operand_2 == NULL );
    Py_INCREF( tmp_assign_source_1 );
    tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;

    // Tried code:
    tmp_compexpr_left_1 = const_int_0;
    tmp_compexpr_right_1 = tmp_comparison_chain_1__operand_2;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_assign_source_2 = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "oooooooo";
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


        exception_lineno = 163;
        type_description_1 = "oooooooo";
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
    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_q );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_outline_return_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_outline_return_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_13__verify );
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
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_13__verify );
    return NULL;
    outline_result_1:;
    tmp_operand_name_1 = tmp_outline_return_value_1;
    tmp_or_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_assign_source_3 = par_s;

    CHECK_OBJECT( tmp_assign_source_3 );
    assert( tmp_comparison_chain_2__operand_2 == NULL );
    Py_INCREF( tmp_assign_source_3 );
    tmp_comparison_chain_2__operand_2 = tmp_assign_source_3;

    // Tried code:
    tmp_compexpr_left_3 = const_int_0;
    tmp_compexpr_right_3 = tmp_comparison_chain_2__operand_2;

    CHECK_OBJECT( tmp_compexpr_right_3 );
    tmp_assign_source_4 = RICH_COMPARE_LT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "oooooooo";
        goto try_except_handler_3;
    }
    assert( tmp_comparison_chain_2__comparison_result == NULL );
    tmp_comparison_chain_2__comparison_result = tmp_assign_source_4;

    tmp_cond_value_3 = tmp_comparison_chain_2__comparison_result;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "oooooooo";
        goto try_except_handler_3;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_outline_return_value_2 = tmp_comparison_chain_2__comparison_result;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_3;
    branch_no_3:;
    tmp_compexpr_left_4 = tmp_comparison_chain_2__operand_2;

    CHECK_OBJECT( tmp_compexpr_left_4 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_q );
    if ( tmp_compexpr_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "oooooooo";
        goto try_except_handler_3;
    }
    tmp_outline_return_value_2 = RICH_COMPARE_LT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_right_4 );
    if ( tmp_outline_return_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "oooooooo";
        goto try_except_handler_3;
    }
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_13__verify );
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
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_13__verify );
    return NULL;
    outline_result_2:;
    tmp_operand_name_2 = tmp_outline_return_value_2;
    tmp_or_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    Py_DECREF( tmp_operand_name_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_inverse );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inverse );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "inverse" );
        exception_tb = NULL;

        exception_lineno = 165;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_s;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_q );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_26759e6c504e9d56cbed033deaf53f2e->m_frame.f_lineno = 165;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_w == NULL );
    var_w = tmp_assign_source_5;

    tmp_left_name_2 = par_m;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_1 = var_w;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_left_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_q );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 166;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_u1 == NULL );
    var_u1 = tmp_assign_source_6;

    tmp_left_name_4 = par_r;

    CHECK_OBJECT( tmp_left_name_4 );
    tmp_right_name_3 = var_w;

    CHECK_OBJECT( tmp_right_name_3 );
    tmp_left_name_3 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_3 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_q );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_3 );

        exception_lineno = 167;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_3 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_u2 == NULL );
    var_u2 = tmp_assign_source_7;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_pow );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pow );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pow" );
        exception_tb = NULL;

        exception_lineno = 168;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_g );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_u1;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_p );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 168;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_26759e6c504e9d56cbed033deaf53f2e->m_frame.f_lineno = 168;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_left_name_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_left_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_pow );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pow );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_left_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pow" );
        exception_tb = NULL;

        exception_lineno = 168;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = par_self;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_y );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_7 );

        exception_lineno = 168;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = var_u2;

    CHECK_OBJECT( tmp_args_element_name_7 );
    tmp_source_name_9 = par_self;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_p );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_7 );
        Py_DECREF( tmp_args_element_name_6 );

        exception_lineno = 168;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_26759e6c504e9d56cbed033deaf53f2e->m_frame.f_lineno = 168;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_right_name_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_7 );

        exception_lineno = 168;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_6 = BINARY_OPERATION_MUL( tmp_left_name_7, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_7 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_left_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = par_self;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_right_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_p );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_6 );

        exception_lineno = 168;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_left_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = par_self;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_right_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_q );
    if ( tmp_right_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_5 );

        exception_lineno = 168;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_7 );
    Py_DECREF( tmp_left_name_5 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_v == NULL );
    var_v = tmp_assign_source_8;

    tmp_compexpr_left_5 = var_v;

    CHECK_OBJECT( tmp_compexpr_left_5 );
    tmp_compexpr_right_5 = par_r;

    CHECK_OBJECT( tmp_compexpr_right_5 );
    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_26759e6c504e9d56cbed033deaf53f2e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_26759e6c504e9d56cbed033deaf53f2e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_26759e6c504e9d56cbed033deaf53f2e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_26759e6c504e9d56cbed033deaf53f2e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_26759e6c504e9d56cbed033deaf53f2e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_26759e6c504e9d56cbed033deaf53f2e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_26759e6c504e9d56cbed033deaf53f2e,
        type_description_1,
        par_self,
        par_m,
        par_r,
        par_s,
        var_w,
        var_u1,
        var_u2,
        var_v
    );


    // Release cached frame.
    if ( frame_26759e6c504e9d56cbed033deaf53f2e == cache_frame_26759e6c504e9d56cbed033deaf53f2e )
    {
        Py_DECREF( frame_26759e6c504e9d56cbed033deaf53f2e );
    }
    cache_frame_26759e6c504e9d56cbed033deaf53f2e = NULL;

    assertFrameObject( frame_26759e6c504e9d56cbed033deaf53f2e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_13__verify );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_u1 );
    var_u1 = NULL;

    Py_XDECREF( var_u2 );
    var_u2 = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_u1 );
    var_u1 = NULL;

    Py_XDECREF( var_u2 );
    var_u2 = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_13__verify );
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


static PyObject *impl_Crypto$PublicKey$_slowmath$$$function_14_dsa_construct( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_y = python_pars[ 0 ];
    PyObject *par_g = python_pars[ 1 ];
    PyObject *par_p = python_pars[ 2 ];
    PyObject *par_q = python_pars[ 3 ];
    PyObject *par_x = python_pars[ 4 ];
    PyObject *var_obj = NULL;
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
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_cls_4;
    PyObject *tmp_isinstance_cls_5;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    PyObject *tmp_isinstance_inst_4;
    PyObject *tmp_isinstance_inst_5;
    bool tmp_isnot_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_type_5;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_1d2efd1a445b163162cd2761a1dfc47a = NULL;

    struct Nuitka_FrameObject *frame_1d2efd1a445b163162cd2761a1dfc47a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1d2efd1a445b163162cd2761a1dfc47a, codeobj_1d2efd1a445b163162cd2761a1dfc47a, module_Crypto$PublicKey$_slowmath, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1d2efd1a445b163162cd2761a1dfc47a = cache_frame_1d2efd1a445b163162cd2761a1dfc47a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1d2efd1a445b163162cd2761a1dfc47a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1d2efd1a445b163162cd2761a1dfc47a ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_y;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
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
    exception_lineno = 172;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_isinstance_inst_2 = par_g;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_isinstance_cls_2 = (PyObject *)&PyLong_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "oooooo";
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
    tmp_raise_type_2 = PyExc_AssertionError;
    exception_type = tmp_raise_type_2;
    Py_INCREF( tmp_raise_type_2 );
    exception_lineno = 173;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_isinstance_inst_3 = par_p;

    CHECK_OBJECT( tmp_isinstance_inst_3 );
    tmp_isinstance_cls_3 = (PyObject *)&PyLong_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_raise_type_3 = PyExc_AssertionError;
    exception_type = tmp_raise_type_3;
    Py_INCREF( tmp_raise_type_3 );
    exception_lineno = 174;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_isinstance_inst_4 = par_q;

    CHECK_OBJECT( tmp_isinstance_inst_4 );
    tmp_isinstance_cls_4 = (PyObject *)&PyLong_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_raise_type_4 = PyExc_AssertionError;
    exception_type = tmp_raise_type_4;
    Py_INCREF( tmp_raise_type_4 );
    exception_lineno = 175;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_isinstance_inst_5 = par_x;

    CHECK_OBJECT( tmp_isinstance_inst_5 );
    tmp_isinstance_cls_5 = PyTuple_New( 2 );
    tmp_tuple_element_1 = (PyObject *)&PyLong_Type;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_5, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = (PyObject *)Py_TYPE( Py_None );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_5, 1, tmp_tuple_element_1 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_5, tmp_isinstance_cls_5 );
    Py_DECREF( tmp_isinstance_cls_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_5;
    }
    else
    {
        goto branch_yes_5;
    }
    branch_yes_5:;
    tmp_raise_type_5 = PyExc_AssertionError;
    exception_type = tmp_raise_type_5;
    Py_INCREF( tmp_raise_type_5 );
    exception_lineno = 176;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_5:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain__DSAKey );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__DSAKey );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_DSAKey" );
        exception_tb = NULL;

        exception_lineno = 177;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_1d2efd1a445b163162cd2761a1dfc47a->m_frame.f_lineno = 177;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_obj == NULL );
    var_obj = tmp_assign_source_1;

    tmp_assattr_name_1 = par_y;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = var_obj;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_y, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_g;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = var_obj;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_g, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_p;

    CHECK_OBJECT( tmp_assattr_name_3 );
    tmp_assattr_target_3 = var_obj;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_p, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = par_q;

    CHECK_OBJECT( tmp_assattr_name_4 );
    tmp_assattr_target_4 = var_obj;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_q, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = par_x;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assattr_name_5 = par_x;

    CHECK_OBJECT( tmp_assattr_name_5 );
    tmp_assattr_target_5 = var_obj;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_x, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1d2efd1a445b163162cd2761a1dfc47a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1d2efd1a445b163162cd2761a1dfc47a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1d2efd1a445b163162cd2761a1dfc47a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1d2efd1a445b163162cd2761a1dfc47a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1d2efd1a445b163162cd2761a1dfc47a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1d2efd1a445b163162cd2761a1dfc47a,
        type_description_1,
        par_y,
        par_g,
        par_p,
        par_q,
        par_x,
        var_obj
    );


    // Release cached frame.
    if ( frame_1d2efd1a445b163162cd2761a1dfc47a == cache_frame_1d2efd1a445b163162cd2761a1dfc47a )
    {
        Py_DECREF( frame_1d2efd1a445b163162cd2761a1dfc47a );
    }
    cache_frame_1d2efd1a445b163162cd2761a1dfc47a = NULL;

    assertFrameObject( frame_1d2efd1a445b163162cd2761a1dfc47a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_obj;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_14_dsa_construct );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)var_obj );
    Py_DECREF( var_obj );
    var_obj = NULL;

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

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_obj );
    var_obj = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath$$$function_14_dsa_construct );
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



static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_10_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$PublicKey$_slowmath$$$function_10_size,
        const_str_plain_size,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_caaf9f8098c94705186f2e63ad1a63b3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$PublicKey$_slowmath,
        const_str_digest_606f291ffb8a9f0c77780a2539896d20,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_11_has_private(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$PublicKey$_slowmath$$$function_11_has_private,
        const_str_plain_has_private,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2cb01c78cdb496b01f07805e4e6df62e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$PublicKey$_slowmath,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_12__sign(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$PublicKey$_slowmath$$$function_12__sign,
        const_str_plain__sign,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b428bb3c867d5d4f6453201d658ee7d8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$PublicKey$_slowmath,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_13__verify(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$PublicKey$_slowmath$$$function_13__verify,
        const_str_plain__verify,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_26759e6c504e9d56cbed033deaf53f2e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$PublicKey$_slowmath,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_14_dsa_construct( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$PublicKey$_slowmath$$$function_14_dsa_construct,
        const_str_plain_dsa_construct,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1d2efd1a445b163162cd2761a1dfc47a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$PublicKey$_slowmath,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_1__blind(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$PublicKey$_slowmath$$$function_1__blind,
        const_str_plain__blind,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6006d89a6ce26913336b2a6735ee5ba6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$PublicKey$_slowmath,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_2__unblind(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$PublicKey$_slowmath$$$function_2__unblind,
        const_str_plain__unblind,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d76159de508fa4720d4d01f81ac02fc3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$PublicKey$_slowmath,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_3__decrypt(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$PublicKey$_slowmath$$$function_3__decrypt,
        const_str_plain__decrypt,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_02e6a1ae7efa5a0a8dce1585196b6d23,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$PublicKey$_slowmath,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_4__encrypt(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$PublicKey$_slowmath$$$function_4__encrypt,
        const_str_plain__encrypt,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_be0060cb2e45ea7d668e19bfcfdba554,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$PublicKey$_slowmath,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_5__sign(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$PublicKey$_slowmath$$$function_5__sign,
        const_str_plain__sign,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2a78b71ed8e51b05937b5d0de8a289ff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$PublicKey$_slowmath,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_6__verify(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$PublicKey$_slowmath$$$function_6__verify,
        const_str_plain__verify,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3d8bbf1cbee4aa74eef31ec23d814c5b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$PublicKey$_slowmath,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_7_has_private(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$PublicKey$_slowmath$$$function_7_has_private,
        const_str_plain_has_private,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4fb852d65a099a3b10f51cf5973ee4a2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$PublicKey$_slowmath,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_8_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$PublicKey$_slowmath$$$function_8_size,
        const_str_plain_size,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6458a0dc6b5e130bf4e284b32bd0ee43,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$PublicKey$_slowmath,
        const_str_digest_606f291ffb8a9f0c77780a2539896d20,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_9_rsa_construct( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$PublicKey$_slowmath$$$function_9_rsa_construct,
        const_str_plain_rsa_construct,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ce4cf3939689190c07909b7b82103b5f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$PublicKey$_slowmath,
        const_str_digest_ce0b9579bddc68bd4509fd6ecaf75e67,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Crypto$PublicKey$_slowmath =
{
    PyModuleDef_HEAD_INIT,
    "Crypto.PublicKey._slowmath",   /* m_name */
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

MOD_INIT_DECL( Crypto$PublicKey$_slowmath )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto$PublicKey$_slowmath );
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
    puts("Crypto.PublicKey._slowmath: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.PublicKey._slowmath: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initCrypto$PublicKey$_slowmath" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto$PublicKey$_slowmath = Py_InitModule4(
        "Crypto.PublicKey._slowmath",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Crypto$PublicKey$_slowmath = PyModule_Create( &mdef_Crypto$PublicKey$_slowmath );
#endif

    moduledict_Crypto$PublicKey$_slowmath = MODULE_DICT( module_Crypto$PublicKey$_slowmath );

    CHECK_OBJECT( module_Crypto$PublicKey$_slowmath );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_0964f73c309d839286eab0a68231928d, module_Crypto$PublicKey$_slowmath );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_1_var___module__ = NULL;
    PyObject *outline_1_var__blind = NULL;
    PyObject *outline_1_var__unblind = NULL;
    PyObject *outline_1_var__decrypt = NULL;
    PyObject *outline_1_var__encrypt = NULL;
    PyObject *outline_1_var__sign = NULL;
    PyObject *outline_1_var__verify = NULL;
    PyObject *outline_1_var_has_private = NULL;
    PyObject *outline_1_var_size = NULL;
    PyObject *outline_2_var___module__ = NULL;
    PyObject *outline_2_var_size = NULL;
    PyObject *outline_2_var_has_private = NULL;
    PyObject *outline_2_var__sign = NULL;
    PyObject *outline_2_var__verify = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
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
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_key_13;
    PyObject *tmp_dict_key_14;
    PyObject *tmp_dict_key_15;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
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
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_outline_return_value_4;
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
    struct Nuitka_FrameObject *frame_b5c2e04366e159b025c05be050ce2f49;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_c1dd047e2466de2993cd27b8226c4265;
    UPDATE_STRING_DICT0( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_cfee8603fd6f0dccf21deb1a9b05299f;
    UPDATE_STRING_DICT0( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_10c675d39d154a59cf6207a839b0661f;
    UPDATE_STRING_DICT0( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain___revision__, tmp_assign_source_4 );
    tmp_assign_source_5 = LIST_COPY( const_list_str_plain_rsa_construct_list );
    UPDATE_STRING_DICT1( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );
    tmp_name_name_1 = const_str_plain_sys;
    tmp_globals_name_1 = (PyObject *)moduledict_Crypto$PublicKey$_slowmath;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_assign_source_6 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    assert( tmp_assign_source_6 != NULL );
    UPDATE_STRING_DICT1( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_6 );
    // Frame without reuse.
    frame_b5c2e04366e159b025c05be050ce2f49 = MAKE_MODULE_FRAME( codeobj_b5c2e04366e159b025c05be050ce2f49, module_Crypto$PublicKey$_slowmath );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_b5c2e04366e159b025c05be050ce2f49 );
    assert( Py_REFCNT( frame_b5c2e04366e159b025c05be050ce2f49 ) == 2 );

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_sys );

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

        exception_lineno = 33;

        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_2;
    tmp_and_left_value_1 = RICH_COMPARE_EQ_NORECURSE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 33;

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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_sys );

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

        exception_lineno = 33;

        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_version_info );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_pos_1;
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_int_pos_1;
    tmp_and_right_value_1 = RICH_COMPARE_EQ_NORECURSE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

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

        exception_lineno = 33;

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
    tmp_globals_name_2 = (PyObject *)moduledict_Crypto$PublicKey$_slowmath;
    tmp_locals_name_2 = (PyObject *)moduledict_Crypto$PublicKey$_slowmath;
    tmp_fromlist_name_2 = const_tuple_str_chr_42_tuple;
    frame_b5c2e04366e159b025c05be050ce2f49->m_frame.f_lineno = 34;
    tmp_star_imported_1 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_Crypto$PublicKey$_slowmath, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_name_name_3 = const_str_digest_9118098c6ddc7d86c17ec1818f00f49b;
    tmp_globals_name_3 = (PyObject *)moduledict_Crypto$PublicKey$_slowmath;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_size_str_plain_inverse_str_plain_GCD_tuple;
    frame_b5c2e04366e159b025c05be050ce2f49->m_frame.f_lineno = 35;
    tmp_assign_source_7 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_7;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_size );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_size, tmp_assign_source_8 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_inverse );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_inverse, tmp_assign_source_9 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_GCD );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_GCD, tmp_assign_source_10 );
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

    tmp_assign_source_11 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyExc_Exception;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_11, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_11;

    tmp_assign_source_13 = const_str_digest_0964f73c309d839286eab0a68231928d;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_13 );
    outline_0_var___module__ = tmp_assign_source_13;

    // Tried code:
    tmp_outline_return_value_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = outline_0_var___module__;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    goto outline_result_1;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_12 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_12;

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
    tmp_assign_source_14 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_3;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_subscribed_name_3 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = const_int_0;
    tmp_assign_source_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_3;
    }
    assert( tmp_select_metaclass_1__base == NULL );
    tmp_select_metaclass_1__base = tmp_assign_source_15;

    // Tried code:
    // Tried code:
    tmp_source_name_3 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_outline_return_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_outline_return_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_5;
    }
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_2 );
    Py_XDECREF( exception_keeper_value_2 );
    Py_XDECREF( exception_keeper_tb_2 );
    tmp_type_arg_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_outline_return_value_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_outline_return_value_2 != NULL );
    goto try_return_handler_4;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath );
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
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath );
    return MOD_RETURN_VALUE( NULL );
    outline_result_2:;
    tmp_assign_source_14 = tmp_outline_return_value_2;
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_14;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_error;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_b5c2e04366e159b025c05be050ce2f49->m_frame.f_lineno = 37;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_3;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_16;

    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
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
    tmp_assign_source_17 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_17 );
    UPDATE_STRING_DICT0( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_error, tmp_assign_source_17 );
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

    tmp_assign_source_19 = const_str_digest_0964f73c309d839286eab0a68231928d;
    assert( outline_1_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_19 );
    outline_1_var___module__ = tmp_assign_source_19;

    tmp_assign_source_20 = MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_1__blind(  );
    assert( outline_1_var__blind == NULL );
    outline_1_var__blind = tmp_assign_source_20;

    tmp_assign_source_21 = MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_2__unblind(  );
    assert( outline_1_var__unblind == NULL );
    outline_1_var__unblind = tmp_assign_source_21;

    tmp_assign_source_22 = MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_3__decrypt(  );
    assert( outline_1_var__decrypt == NULL );
    outline_1_var__decrypt = tmp_assign_source_22;

    tmp_assign_source_23 = MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_4__encrypt(  );
    assert( outline_1_var__encrypt == NULL );
    outline_1_var__encrypt = tmp_assign_source_23;

    tmp_assign_source_24 = MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_5__sign(  );
    assert( outline_1_var__sign == NULL );
    outline_1_var__sign = tmp_assign_source_24;

    tmp_assign_source_25 = MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_6__verify(  );
    assert( outline_1_var__verify == NULL );
    outline_1_var__verify = tmp_assign_source_25;

    tmp_assign_source_26 = MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_7_has_private(  );
    assert( outline_1_var_has_private == NULL );
    outline_1_var_has_private = tmp_assign_source_26;

    tmp_assign_source_27 = MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_8_size(  );
    assert( outline_1_var_size == NULL );
    outline_1_var_size = tmp_assign_source_27;

    // Tried code:
    tmp_outline_return_value_3 = _PyDict_NewPresized( 9 );
    tmp_dict_value_2 = outline_1_var___module__;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = outline_1_var__blind;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain__blind;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = outline_1_var__unblind;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain__unblind;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = outline_1_var__decrypt;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain__decrypt;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = outline_1_var__encrypt;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain__encrypt;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = outline_1_var__sign;

    CHECK_OBJECT( tmp_dict_value_7 );
    tmp_dict_key_7 = const_str_plain__sign;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_8 = outline_1_var__verify;

    CHECK_OBJECT( tmp_dict_value_8 );
    tmp_dict_key_8 = const_str_plain__verify;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_9 = outline_1_var_has_private;

    CHECK_OBJECT( tmp_dict_value_9 );
    tmp_dict_key_9 = const_str_plain_has_private;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_10 = outline_1_var_size;

    CHECK_OBJECT( tmp_dict_value_10 );
    tmp_dict_key_10 = const_str_plain_size;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
    CHECK_OBJECT( (PyObject *)outline_1_var___module__ );
    Py_DECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var__blind );
    Py_DECREF( outline_1_var__blind );
    outline_1_var__blind = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var__unblind );
    Py_DECREF( outline_1_var__unblind );
    outline_1_var__unblind = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var__decrypt );
    Py_DECREF( outline_1_var__decrypt );
    outline_1_var__decrypt = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var__encrypt );
    Py_DECREF( outline_1_var__encrypt );
    outline_1_var__encrypt = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var__sign );
    Py_DECREF( outline_1_var__sign );
    outline_1_var__sign = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var__verify );
    Py_DECREF( outline_1_var__verify );
    outline_1_var__verify = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_has_private );
    Py_DECREF( outline_1_var_has_private );
    outline_1_var_has_private = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_size );
    Py_DECREF( outline_1_var_size );
    outline_1_var_size = NULL;

    goto outline_result_3;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_1_var___module__ );
    Py_DECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var__blind );
    Py_DECREF( outline_1_var__blind );
    outline_1_var__blind = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var__unblind );
    Py_DECREF( outline_1_var__unblind );
    outline_1_var__unblind = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var__decrypt );
    Py_DECREF( outline_1_var__decrypt );
    outline_1_var__decrypt = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var__encrypt );
    Py_DECREF( outline_1_var__encrypt );
    outline_1_var__encrypt = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var__sign );
    Py_DECREF( outline_1_var__sign );
    outline_1_var__sign = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var__verify );
    Py_DECREF( outline_1_var__verify );
    outline_1_var__verify = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_has_private );
    Py_DECREF( outline_1_var_has_private );
    outline_1_var_has_private = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_size );
    Py_DECREF( outline_1_var_size );
    outline_1_var_size = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath );
    return MOD_RETURN_VALUE( NULL );
    outline_result_3:;
    tmp_assign_source_18 = tmp_outline_return_value_3;
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_18;

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
    tmp_assign_source_28 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_7;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_28 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_28 );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_28;

    tmp_called_name_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_4 = const_str_plain__RSAKey;
    tmp_args_element_name_5 = const_tuple_type_object_tuple;
    tmp_args_element_name_6 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_b5c2e04366e159b025c05be050ce2f49->m_frame.f_lineno = 40;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_7;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_29;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    tmp_assign_source_30 = tmp_class_creation_2__class;

    CHECK_OBJECT( tmp_assign_source_30 );
    UPDATE_STRING_DICT0( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain__RSAKey, tmp_assign_source_30 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class );
    Py_DECREF( tmp_class_creation_2__class );
    tmp_class_creation_2__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    tmp_defaults_1 = const_tuple_none_none_none_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_31 = MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_9_rsa_construct( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_rsa_construct, tmp_assign_source_31 );
    tmp_assign_source_33 = const_str_digest_0964f73c309d839286eab0a68231928d;
    assert( outline_2_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_33 );
    outline_2_var___module__ = tmp_assign_source_33;

    tmp_assign_source_34 = MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_10_size(  );
    assert( outline_2_var_size == NULL );
    outline_2_var_size = tmp_assign_source_34;

    tmp_assign_source_35 = MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_11_has_private(  );
    assert( outline_2_var_has_private == NULL );
    outline_2_var_has_private = tmp_assign_source_35;

    tmp_assign_source_36 = MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_12__sign(  );
    assert( outline_2_var__sign == NULL );
    outline_2_var__sign = tmp_assign_source_36;

    tmp_assign_source_37 = MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_13__verify(  );
    assert( outline_2_var__verify == NULL );
    outline_2_var__verify = tmp_assign_source_37;

    // Tried code:
    tmp_outline_return_value_4 = _PyDict_NewPresized( 5 );
    tmp_dict_value_11 = outline_2_var___module__;

    CHECK_OBJECT( tmp_dict_value_11 );
    tmp_dict_key_11 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_4, tmp_dict_key_11, tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_12 = outline_2_var_size;

    CHECK_OBJECT( tmp_dict_value_12 );
    tmp_dict_key_12 = const_str_plain_size;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_4, tmp_dict_key_12, tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_13 = outline_2_var_has_private;

    CHECK_OBJECT( tmp_dict_value_13 );
    tmp_dict_key_13 = const_str_plain_has_private;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_4, tmp_dict_key_13, tmp_dict_value_13 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_14 = outline_2_var__sign;

    CHECK_OBJECT( tmp_dict_value_14 );
    tmp_dict_key_14 = const_str_plain__sign;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_4, tmp_dict_key_14, tmp_dict_value_14 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_15 = outline_2_var__verify;

    CHECK_OBJECT( tmp_dict_value_15 );
    tmp_dict_key_15 = const_str_plain__verify;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_4, tmp_dict_key_15, tmp_dict_value_15 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_8;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_8:;
    CHECK_OBJECT( (PyObject *)outline_2_var___module__ );
    Py_DECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var_size );
    Py_DECREF( outline_2_var_size );
    outline_2_var_size = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var_has_private );
    Py_DECREF( outline_2_var_has_private );
    outline_2_var_has_private = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var__sign );
    Py_DECREF( outline_2_var__sign );
    outline_2_var__sign = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var__verify );
    Py_DECREF( outline_2_var__verify );
    outline_2_var__verify = NULL;

    goto outline_result_4;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_2_var___module__ );
    Py_DECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var_size );
    Py_DECREF( outline_2_var_size );
    outline_2_var_size = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var_has_private );
    Py_DECREF( outline_2_var_has_private );
    outline_2_var_has_private = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var__sign );
    Py_DECREF( outline_2_var__sign );
    outline_2_var__sign = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var__verify );
    Py_DECREF( outline_2_var__verify );
    outline_2_var__verify = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$PublicKey$_slowmath );
    return MOD_RETURN_VALUE( NULL );
    outline_result_4:;
    tmp_assign_source_32 = tmp_outline_return_value_4;
    assert( tmp_class_creation_3__class_dict == NULL );
    tmp_class_creation_3__class_dict = tmp_assign_source_32;

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
    tmp_assign_source_38 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;

        goto try_except_handler_9;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_38 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_38 );
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_38;

    tmp_called_name_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_element_name_7 = const_str_plain__DSAKey;
    tmp_args_element_name_8 = const_tuple_type_object_tuple;
    tmp_args_element_name_9 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_args_element_name_9 );
    frame_b5c2e04366e159b025c05be050ce2f49->m_frame.f_lineno = 142;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;

        goto try_except_handler_9;
    }
    assert( tmp_class_creation_3__class == NULL );
    tmp_class_creation_3__class = tmp_assign_source_39;

    goto try_end_4;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b5c2e04366e159b025c05be050ce2f49 );
#endif
    popFrameStack();

    assertFrameObject( frame_b5c2e04366e159b025c05be050ce2f49 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b5c2e04366e159b025c05be050ce2f49 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b5c2e04366e159b025c05be050ce2f49, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b5c2e04366e159b025c05be050ce2f49->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b5c2e04366e159b025c05be050ce2f49, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_40 = tmp_class_creation_3__class;

    CHECK_OBJECT( tmp_assign_source_40 );
    UPDATE_STRING_DICT0( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain__DSAKey, tmp_assign_source_40 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class );
    Py_DECREF( tmp_class_creation_3__class );
    tmp_class_creation_3__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    tmp_defaults_2 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_41 = MAKE_FUNCTION_Crypto$PublicKey$_slowmath$$$function_14_dsa_construct( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_Crypto$PublicKey$_slowmath, (Nuitka_StringObject *)const_str_plain_dsa_construct, tmp_assign_source_41 );

    return MOD_RETURN_VALUE( module_Crypto$PublicKey$_slowmath );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
