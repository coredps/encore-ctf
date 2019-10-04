/* Generated code for Python source for module 'Crypto.Protocol.KDF'
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

/* The _module_Crypto$Protocol$KDF is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$Protocol$KDF;
PyDictObject *moduledict_Crypto$Protocol$KDF;

/* The module constants used, if any. */
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_digest_2ecfa924570d0430dff748b485849476;
static PyObject *const_str_plain_password;
extern PyObject *const_str_plain_strxor;
extern PyObject *const_str_digest_3f4c3045abd507ba326e1daf737b53ee;
extern PyObject *const_str_plain_struct;
static PyObject *const_tuple_bb6aec0b2e0e536df690cb74e309d2a5_tuple;
static PyObject *const_str_plain_SHA1;
extern PyObject *const_str_empty;
extern PyObject *const_str_digest_391b5dc084c9caede4445b681a10e649;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_plain_b;
static PyObject *const_str_plain_hashAlgo;
extern PyObject *const_str_plain_PBKDF1;
extern PyObject *const_dict_empty;
extern PyObject *const_str_digest_10c675d39d154a59cf6207a839b0661f;
static PyObject *const_str_plain_previousU;
static PyObject *const_str_plain_salt;
static PyObject *const_str_digest_bf8019e11826f99e034a78a0b37e3d1a;
extern PyObject *const_str_digest_7c65783ea592da7deacc72a90fc07e1d;
extern PyObject *const_int_pos_16;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_count;
extern PyObject *const_str_plain_tobytes;
extern PyObject *const_str_plain_SHA;
static PyObject *const_str_plain_PBKDF2;
static PyObject *const_str_digest_3acb1104417bf5a2bd1c6711d58b709a;
extern PyObject *const_str_plain_math;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_d9322dcc9a5c601e8c719a6b7e5fc0aa;
extern PyObject *const_str_plain___revision__;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_digest;
static PyObject *const_tuple_str_plain_p_str_plain_s_tuple;
extern PyObject *const_str_plain_digest_size;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_7d65e38a771b2293a217e3fea744a59b;
extern PyObject *const_str_plain_pack;
static PyObject *const_str_plain_prf;
static PyObject *const_str_digest_ed2336825b484d51a04cb6de3569f8cd;
static PyObject *const_str_plain_pHash;
extern PyObject *const_str_plain_HMAC;
extern PyObject *const_str_plain_s;
static PyObject *const_tuple_str_plain_SHA_str_plain_HMAC_tuple;
extern PyObject *const_str_chr_42;
extern PyObject *const_int_pos_1;
extern PyObject *const_tuple_str_empty_tuple;
static PyObject *const_str_plain_U;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_plain_new;
static PyObject *const_str_digest_0d8e347daa324ecbfc833e6f84bf4f50;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_j;
static PyObject *const_int_pos_1000;
static PyObject *const_tuple_bf5bc55bfdb23b055205780e68019162_tuple;
static PyObject *const_tuple_int_pos_16_int_pos_1000_none_tuple;
extern PyObject *const_str_digest_e32643bbdc087df0169bdbc4edb2d9da;
static PyObject *const_str_plain_dkLen;
static PyObject *const_str_digest_19e1dce36c4d81014f047f463f423b57;
static PyObject *const_str_angle_lambda;
extern PyObject *const_str_plain_p;
static PyObject *const_tuple_int_pos_1000_none_tuple;
static PyObject *const_tuple_str_plain_strxor_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_password = UNSTREAM_STRING( &constant_bin[ 24786 ], 8, 1 );
    const_tuple_bb6aec0b2e0e536df690cb74e309d2a5_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_bb6aec0b2e0e536df690cb74e309d2a5_tuple, 0, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    const_str_plain_salt = UNSTREAM_STRING( &constant_bin[ 24794 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_bb6aec0b2e0e536df690cb74e309d2a5_tuple, 1, const_str_plain_salt ); Py_INCREF( const_str_plain_salt );
    const_str_plain_dkLen = UNSTREAM_STRING( &constant_bin[ 24798 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_bb6aec0b2e0e536df690cb74e309d2a5_tuple, 2, const_str_plain_dkLen ); Py_INCREF( const_str_plain_dkLen );
    const_str_plain_count = UNSTREAM_STRING( &constant_bin[ 4067 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_bb6aec0b2e0e536df690cb74e309d2a5_tuple, 3, const_str_plain_count ); Py_INCREF( const_str_plain_count );
    const_str_plain_prf = UNSTREAM_STRING( &constant_bin[ 24803 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_bb6aec0b2e0e536df690cb74e309d2a5_tuple, 4, const_str_plain_prf ); Py_INCREF( const_str_plain_prf );
    PyTuple_SET_ITEM( const_tuple_bb6aec0b2e0e536df690cb74e309d2a5_tuple, 5, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_bb6aec0b2e0e536df690cb74e309d2a5_tuple, 6, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_str_plain_U = UNSTREAM_CHAR( 85, 1 );
    PyTuple_SET_ITEM( const_tuple_bb6aec0b2e0e536df690cb74e309d2a5_tuple, 7, const_str_plain_U ); Py_INCREF( const_str_plain_U );
    const_str_plain_previousU = UNSTREAM_STRING( &constant_bin[ 24806 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_bb6aec0b2e0e536df690cb74e309d2a5_tuple, 8, const_str_plain_previousU ); Py_INCREF( const_str_plain_previousU );
    PyTuple_SET_ITEM( const_tuple_bb6aec0b2e0e536df690cb74e309d2a5_tuple, 9, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_bb6aec0b2e0e536df690cb74e309d2a5_tuple, 10, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    const_str_plain_SHA1 = UNSTREAM_STRING( &constant_bin[ 18860 ], 4, 1 );
    const_str_plain_hashAlgo = UNSTREAM_STRING( &constant_bin[ 24815 ], 8, 1 );
    const_str_digest_bf8019e11826f99e034a78a0b37e3d1a = UNSTREAM_STRING( &constant_bin[ 24823 ], 446, 0 );
    const_str_plain_PBKDF2 = UNSTREAM_STRING( &constant_bin[ 25269 ], 6, 1 );
    const_str_digest_3acb1104417bf5a2bd1c6711d58b709a = UNSTREAM_STRING( &constant_bin[ 25275 ], 58, 0 );
    const_str_digest_d9322dcc9a5c601e8c719a6b7e5fc0aa = UNSTREAM_STRING( &constant_bin[ 25333 ], 1241, 0 );
    const_tuple_str_plain_p_str_plain_s_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_s_tuple, 0, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_s_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_str_digest_7d65e38a771b2293a217e3fea744a59b = UNSTREAM_STRING( &constant_bin[ 26574 ], 25, 0 );
    const_str_digest_ed2336825b484d51a04cb6de3569f8cd = UNSTREAM_STRING( &constant_bin[ 26599 ], 28, 0 );
    const_str_plain_pHash = UNSTREAM_STRING( &constant_bin[ 26627 ], 5, 1 );
    const_tuple_str_plain_SHA_str_plain_HMAC_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SHA_str_plain_HMAC_tuple, 0, const_str_plain_SHA ); Py_INCREF( const_str_plain_SHA );
    PyTuple_SET_ITEM( const_tuple_str_plain_SHA_str_plain_HMAC_tuple, 1, const_str_plain_HMAC ); Py_INCREF( const_str_plain_HMAC );
    const_str_digest_0d8e347daa324ecbfc833e6f84bf4f50 = UNSTREAM_STRING( &constant_bin[ 26632 ], 1159, 0 );
    const_int_pos_1000 = PyInt_FromLong( 1000l );
    const_tuple_bf5bc55bfdb23b055205780e68019162_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_bf5bc55bfdb23b055205780e68019162_tuple, 0, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    PyTuple_SET_ITEM( const_tuple_bf5bc55bfdb23b055205780e68019162_tuple, 1, const_str_plain_salt ); Py_INCREF( const_str_plain_salt );
    PyTuple_SET_ITEM( const_tuple_bf5bc55bfdb23b055205780e68019162_tuple, 2, const_str_plain_dkLen ); Py_INCREF( const_str_plain_dkLen );
    PyTuple_SET_ITEM( const_tuple_bf5bc55bfdb23b055205780e68019162_tuple, 3, const_str_plain_count ); Py_INCREF( const_str_plain_count );
    PyTuple_SET_ITEM( const_tuple_bf5bc55bfdb23b055205780e68019162_tuple, 4, const_str_plain_hashAlgo ); Py_INCREF( const_str_plain_hashAlgo );
    PyTuple_SET_ITEM( const_tuple_bf5bc55bfdb23b055205780e68019162_tuple, 5, const_str_plain_pHash ); Py_INCREF( const_str_plain_pHash );
    PyTuple_SET_ITEM( const_tuple_bf5bc55bfdb23b055205780e68019162_tuple, 6, const_str_plain_digest ); Py_INCREF( const_str_plain_digest );
    PyTuple_SET_ITEM( const_tuple_bf5bc55bfdb23b055205780e68019162_tuple, 7, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_tuple_int_pos_16_int_pos_1000_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_pos_16_int_pos_1000_none_tuple, 0, const_int_pos_16 ); Py_INCREF( const_int_pos_16 );
    PyTuple_SET_ITEM( const_tuple_int_pos_16_int_pos_1000_none_tuple, 1, const_int_pos_1000 ); Py_INCREF( const_int_pos_1000 );
    PyTuple_SET_ITEM( const_tuple_int_pos_16_int_pos_1000_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_str_digest_19e1dce36c4d81014f047f463f423b57 = UNSTREAM_STRING( &constant_bin[ 27791 ], 55, 0 );
    const_str_angle_lambda = UNSTREAM_STRING( &constant_bin[ 27846 ], 8, 0 );
    const_tuple_int_pos_1000_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1000_none_tuple, 0, const_int_pos_1000 ); Py_INCREF( const_int_pos_1000 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1000_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_plain_strxor_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_strxor_tuple, 0, const_str_plain_strxor ); Py_INCREF( const_str_plain_strxor );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Crypto$Protocol$KDF( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_63b68559181e6e9c5fb6ceccfb52ccc2;
static PyCodeObject *codeobj_2c5cd945450ad96d6612c624f2b66132;
static PyCodeObject *codeobj_cc79f4f47287de112d9a1202997b2f1c;
static PyCodeObject *codeobj_d0b6cba714a842f1ae00f00842bd05d8;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_19e1dce36c4d81014f047f463f423b57;
    codeobj_63b68559181e6e9c5fb6ceccfb52ccc2 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 112, const_tuple_str_plain_p_str_plain_s_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2c5cd945450ad96d6612c624f2b66132 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_ed2336825b484d51a04cb6de3569f8cd, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_cc79f4f47287de112d9a1202997b2f1c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_PBKDF1, 45, const_tuple_bf5bc55bfdb23b055205780e68019162_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d0b6cba714a842f1ae00f00842bd05d8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_PBKDF2, 86, const_tuple_bb6aec0b2e0e536df690cb74e309d2a5_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_Crypto$Protocol$KDF$$$function_1_PBKDF1( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Crypto$Protocol$KDF$$$function_2_PBKDF2( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Crypto$Protocol$KDF$$$function_2_PBKDF2$$$function_1_lambda(  );


// The module function definitions.
static PyObject *impl_Crypto$Protocol$KDF$$$function_1_PBKDF1( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_password = python_pars[ 0 ];
    PyObject *par_salt = python_pars[ 1 ];
    PyObject *par_dkLen = python_pars[ 2 ];
    PyObject *par_count = python_pars[ 3 ];
    PyObject *par_hashAlgo = python_pars[ 4 ];
    PyObject *var_pHash = NULL;
    PyObject *var_digest = NULL;
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
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_Gt_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_next_source_1;
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
    PyObject *tmp_xrange_low_1;
    static struct Nuitka_FrameObject *cache_frame_cc79f4f47287de112d9a1202997b2f1c = NULL;

    struct Nuitka_FrameObject *frame_cc79f4f47287de112d9a1202997b2f1c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cc79f4f47287de112d9a1202997b2f1c, codeobj_cc79f4f47287de112d9a1202997b2f1c, module_Crypto$Protocol$KDF, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cc79f4f47287de112d9a1202997b2f1c = cache_frame_cc79f4f47287de112d9a1202997b2f1c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cc79f4f47287de112d9a1202997b2f1c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cc79f4f47287de112d9a1202997b2f1c ) == 2 ); // Frame stack

    // Framed code:
    tmp_cond_value_1 = par_hashAlgo;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_assign_source_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Protocol$KDF, (Nuitka_StringObject *)const_str_plain_SHA1 );

    if (unlikely( tmp_assign_source_1 == NULL ))
    {
        tmp_assign_source_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SHA1 );
    }

    if ( tmp_assign_source_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SHA1" );
        exception_tb = NULL;

        exception_lineno = 74;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    {
        PyObject *old = par_hashAlgo;
        assert( old != NULL );
        par_hashAlgo = tmp_assign_source_1;
        Py_INCREF( par_hashAlgo );
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Protocol$KDF, (Nuitka_StringObject *)const_str_plain_tobytes );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tobytes );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "tobytes" );
        exception_tb = NULL;

        exception_lineno = 75;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_password;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_cc79f4f47287de112d9a1202997b2f1c->m_frame.f_lineno = 75;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_password;
        assert( old != NULL );
        par_password = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_source_name_1 = par_hashAlgo;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_new );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = par_password;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = par_salt;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_args_element_name_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 76;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_cc79f4f47287de112d9a1202997b2f1c->m_frame.f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_pHash == NULL );
    var_pHash = tmp_assign_source_3;

    tmp_source_name_2 = var_pHash;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_digest_size );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_digest == NULL );
    var_digest = tmp_assign_source_4;

    tmp_compare_left_1 = par_dkLen;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = var_digest;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_left_name_2 = const_str_digest_3acb1104417bf5a2bd1c6711d58b709a;
    tmp_right_name_2 = var_digest;

    CHECK_OBJECT( tmp_right_name_2 );
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_cc79f4f47287de112d9a1202997b2f1c->m_frame.f_lineno = 79;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 79;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_len_arg_1 = par_salt;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_8;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 80;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_2 = const_str_digest_7d65e38a771b2293a217e3fea744a59b;
    frame_cc79f4f47287de112d9a1202997b2f1c->m_frame.f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 81;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_left_name_3 = par_count;

    CHECK_OBJECT( tmp_left_name_3 );
    tmp_right_name_3 = const_int_pos_1;
    tmp_xrange_low_1 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_xrange_low_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
    Py_DECREF( tmp_xrange_low_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oooooooo";
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
            type_description_1 = "oooooooo";
            exception_lineno = 82;
            goto try_except_handler_2;
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

    tmp_source_name_3 = var_pHash;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "pHash" );
        exception_tb = NULL;

        exception_lineno = 83;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_new );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_called_instance_1 = var_pHash;

    if ( tmp_called_instance_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "pHash" );
        exception_tb = NULL;

        exception_lineno = 83;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    frame_cc79f4f47287de112d9a1202997b2f1c->m_frame.f_lineno = 83;
    tmp_args_element_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_digest );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 83;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    frame_cc79f4f47287de112d9a1202997b2f1c->m_frame.f_lineno = 83;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_pHash;
        var_pHash = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oooooooo";
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

    tmp_called_instance_2 = var_pHash;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "pHash" );
        exception_tb = NULL;

        exception_lineno = 84;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_cc79f4f47287de112d9a1202997b2f1c->m_frame.f_lineno = 84;
    tmp_slice_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_digest );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_slice_upper_1 = par_dkLen;

    CHECK_OBJECT( tmp_slice_upper_1 );
    tmp_return_value = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc79f4f47287de112d9a1202997b2f1c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc79f4f47287de112d9a1202997b2f1c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc79f4f47287de112d9a1202997b2f1c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cc79f4f47287de112d9a1202997b2f1c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cc79f4f47287de112d9a1202997b2f1c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cc79f4f47287de112d9a1202997b2f1c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cc79f4f47287de112d9a1202997b2f1c,
        type_description_1,
        par_password,
        par_salt,
        par_dkLen,
        par_count,
        par_hashAlgo,
        var_pHash,
        var_digest,
        var_i
    );


    // Release cached frame.
    if ( frame_cc79f4f47287de112d9a1202997b2f1c == cache_frame_cc79f4f47287de112d9a1202997b2f1c )
    {
        Py_DECREF( frame_cc79f4f47287de112d9a1202997b2f1c );
    }
    cache_frame_cc79f4f47287de112d9a1202997b2f1c = NULL;

    assertFrameObject( frame_cc79f4f47287de112d9a1202997b2f1c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Protocol$KDF$$$function_1_PBKDF1 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_password );
    Py_DECREF( par_password );
    par_password = NULL;

    CHECK_OBJECT( (PyObject *)par_salt );
    Py_DECREF( par_salt );
    par_salt = NULL;

    CHECK_OBJECT( (PyObject *)par_dkLen );
    Py_DECREF( par_dkLen );
    par_dkLen = NULL;

    CHECK_OBJECT( (PyObject *)par_count );
    Py_DECREF( par_count );
    par_count = NULL;

    CHECK_OBJECT( (PyObject *)par_hashAlgo );
    Py_DECREF( par_hashAlgo );
    par_hashAlgo = NULL;

    Py_XDECREF( var_pHash );
    var_pHash = NULL;

    CHECK_OBJECT( (PyObject *)var_digest );
    Py_DECREF( var_digest );
    var_digest = NULL;

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

    CHECK_OBJECT( (PyObject *)par_password );
    Py_DECREF( par_password );
    par_password = NULL;

    CHECK_OBJECT( (PyObject *)par_salt );
    Py_DECREF( par_salt );
    par_salt = NULL;

    CHECK_OBJECT( (PyObject *)par_dkLen );
    Py_DECREF( par_dkLen );
    par_dkLen = NULL;

    CHECK_OBJECT( (PyObject *)par_count );
    Py_DECREF( par_count );
    par_count = NULL;

    Py_XDECREF( par_hashAlgo );
    par_hashAlgo = NULL;

    Py_XDECREF( var_pHash );
    var_pHash = NULL;

    Py_XDECREF( var_digest );
    var_digest = NULL;

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
    NUITKA_CANNOT_GET_HERE( Crypto$Protocol$KDF$$$function_1_PBKDF1 );
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


static PyObject *impl_Crypto$Protocol$KDF$$$function_2_PBKDF2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_password = python_pars[ 0 ];
    PyObject *par_salt = python_pars[ 1 ];
    PyObject *par_dkLen = python_pars[ 2 ];
    PyObject *par_count = python_pars[ 3 ];
    PyObject *par_prf = python_pars[ 4 ];
    PyObject *var_key = NULL;
    PyObject *var_i = NULL;
    PyObject *var_U = NULL;
    PyObject *var_previousU = NULL;
    PyObject *var_j = NULL;
    PyObject *var_t = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_xrange_low_1;
    static struct Nuitka_FrameObject *cache_frame_d0b6cba714a842f1ae00f00842bd05d8 = NULL;

    struct Nuitka_FrameObject *frame_d0b6cba714a842f1ae00f00842bd05d8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d0b6cba714a842f1ae00f00842bd05d8, codeobj_d0b6cba714a842f1ae00f00842bd05d8, module_Crypto$Protocol$KDF, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d0b6cba714a842f1ae00f00842bd05d8 = cache_frame_d0b6cba714a842f1ae00f00842bd05d8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d0b6cba714a842f1ae00f00842bd05d8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d0b6cba714a842f1ae00f00842bd05d8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Protocol$KDF, (Nuitka_StringObject *)const_str_plain_tobytes );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tobytes );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "tobytes" );
        exception_tb = NULL;

        exception_lineno = 110;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_password;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_d0b6cba714a842f1ae00f00842bd05d8->m_frame.f_lineno = 110;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_password;
        assert( old != NULL );
        par_password = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_compare_left_1 = par_prf;

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
    tmp_assign_source_2 = MAKE_FUNCTION_Crypto$Protocol$KDF$$$function_2_PBKDF2$$$function_1_lambda(  );
    {
        PyObject *old = par_prf;
        assert( old != NULL );
        par_prf = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Protocol$KDF, (Nuitka_StringObject *)const_str_plain_b );

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

        exception_lineno = 113;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_d0b6cba714a842f1ae00f00842bd05d8->m_frame.f_lineno = 113;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_empty_tuple, 0 ) );

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_key == NULL );
    var_key = tmp_assign_source_3;

    tmp_assign_source_4 = const_int_pos_1;
    assert( var_i == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_i = tmp_assign_source_4;

    loop_start_1:;
    tmp_len_arg_1 = var_key;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;

        exception_lineno = 115;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = par_dkLen;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 115;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    goto loop_end_1;
    branch_no_2:;
    // Tried code:
    tmp_called_name_3 = par_prf;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_element_name_2 = par_password;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_left_name_1 = par_salt;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Protocol$KDF, (Nuitka_StringObject *)const_str_plain_struct );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_struct );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "struct" );
        exception_tb = NULL;

        exception_lineno = 116;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pack );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_4 = const_str_digest_e32643bbdc087df0169bdbc4edb2d9da;
    tmp_args_element_name_5 = var_i;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;

        exception_lineno = 116;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    frame_d0b6cba714a842f1ae00f00842bd05d8->m_frame.f_lineno = 116;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    frame_d0b6cba714a842f1ae00f00842bd05d8->m_frame.f_lineno = 116;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_assign_unpack_1__assign_source;
        tmp_assign_unpack_1__assign_source = tmp_assign_source_5;
        Py_XDECREF( old );
    }

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

    Py_XDECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_6 = tmp_assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = var_U;
        var_U = tmp_assign_source_6;
        Py_INCREF( var_U );
        Py_XDECREF( old );
    }

    tmp_assign_source_7 = tmp_assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_7 );
    {
        PyObject *old = var_previousU;
        var_previousU = tmp_assign_source_7;
        Py_INCREF( var_previousU );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    tmp_left_name_2 = par_count;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = const_int_pos_1;
    tmp_xrange_low_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_xrange_low_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
    Py_DECREF( tmp_xrange_low_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = tmp_for_loop_1__for_iterator;
        tmp_for_loop_1__for_iterator = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooo";
            exception_lineno = 117;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_assign_source_10 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_10 );
    {
        PyObject *old = var_j;
        var_j = tmp_assign_source_10;
        Py_INCREF( var_j );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_called_name_5 = par_prf;

    CHECK_OBJECT( tmp_called_name_5 );
    tmp_args_element_name_6 = par_password;

    CHECK_OBJECT( tmp_args_element_name_6 );
    tmp_args_element_name_7 = var_previousU;

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "previousU" );
        exception_tb = NULL;

        exception_lineno = 118;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_4;
    }

    frame_d0b6cba714a842f1ae00f00842bd05d8->m_frame.f_lineno = 118;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_assign_unpack_2__assign_source;
        tmp_assign_unpack_2__assign_source = tmp_assign_source_11;
        Py_XDECREF( old );
    }

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

    Py_XDECREF( tmp_assign_unpack_2__assign_source );
    tmp_assign_unpack_2__assign_source = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    tmp_assign_source_12 = tmp_assign_unpack_2__assign_source;

    CHECK_OBJECT( tmp_assign_source_12 );
    {
        PyObject *old = var_previousU;
        var_previousU = tmp_assign_source_12;
        Py_INCREF( var_previousU );
        Py_XDECREF( old );
    }

    tmp_assign_source_13 = tmp_assign_unpack_2__assign_source;

    CHECK_OBJECT( tmp_assign_source_13 );
    {
        PyObject *old = var_t;
        var_t = tmp_assign_source_13;
        Py_INCREF( var_t );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_2__assign_source );
    Py_DECREF( tmp_assign_unpack_2__assign_source );
    tmp_assign_unpack_2__assign_source = NULL;

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_Crypto$Protocol$KDF, (Nuitka_StringObject *)const_str_plain_strxor );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_strxor );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "strxor" );
        exception_tb = NULL;

        exception_lineno = 119;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_3;
    }

    tmp_args_element_name_8 = var_U;

    if ( tmp_args_element_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "U" );
        exception_tb = NULL;

        exception_lineno = 119;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_3;
    }

    tmp_args_element_name_9 = var_t;

    CHECK_OBJECT( tmp_args_element_name_9 );
    frame_d0b6cba714a842f1ae00f00842bd05d8->m_frame.f_lineno = 119;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_U;
        var_U = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
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

    tmp_left_name_3 = var_key;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;

        exception_lineno = 120;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = var_U;

    if ( tmp_right_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "U" );
        exception_tb = NULL;

        exception_lineno = 120;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_15 = tmp_left_name_3;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    var_key = tmp_assign_source_15;

    tmp_left_name_4 = var_i;

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;

        exception_lineno = 121;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_4 = const_int_pos_1;
    tmp_assign_source_16 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_slice_source_1 = var_key;

    if ( tmp_slice_source_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;

        exception_lineno = 122;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_slice_upper_1 = par_dkLen;

    CHECK_OBJECT( tmp_slice_upper_1 );
    tmp_return_value = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0b6cba714a842f1ae00f00842bd05d8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0b6cba714a842f1ae00f00842bd05d8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0b6cba714a842f1ae00f00842bd05d8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d0b6cba714a842f1ae00f00842bd05d8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d0b6cba714a842f1ae00f00842bd05d8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d0b6cba714a842f1ae00f00842bd05d8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d0b6cba714a842f1ae00f00842bd05d8,
        type_description_1,
        par_password,
        par_salt,
        par_dkLen,
        par_count,
        par_prf,
        var_key,
        var_i,
        var_U,
        var_previousU,
        var_j,
        var_t
    );


    // Release cached frame.
    if ( frame_d0b6cba714a842f1ae00f00842bd05d8 == cache_frame_d0b6cba714a842f1ae00f00842bd05d8 )
    {
        Py_DECREF( frame_d0b6cba714a842f1ae00f00842bd05d8 );
    }
    cache_frame_d0b6cba714a842f1ae00f00842bd05d8 = NULL;

    assertFrameObject( frame_d0b6cba714a842f1ae00f00842bd05d8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Protocol$KDF$$$function_2_PBKDF2 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_password );
    Py_DECREF( par_password );
    par_password = NULL;

    CHECK_OBJECT( (PyObject *)par_salt );
    Py_DECREF( par_salt );
    par_salt = NULL;

    CHECK_OBJECT( (PyObject *)par_dkLen );
    Py_DECREF( par_dkLen );
    par_dkLen = NULL;

    CHECK_OBJECT( (PyObject *)par_count );
    Py_DECREF( par_count );
    par_count = NULL;

    CHECK_OBJECT( (PyObject *)par_prf );
    Py_DECREF( par_prf );
    par_prf = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_U );
    var_U = NULL;

    Py_XDECREF( var_previousU );
    var_previousU = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

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

    CHECK_OBJECT( (PyObject *)par_password );
    Py_DECREF( par_password );
    par_password = NULL;

    CHECK_OBJECT( (PyObject *)par_salt );
    Py_DECREF( par_salt );
    par_salt = NULL;

    CHECK_OBJECT( (PyObject *)par_dkLen );
    Py_DECREF( par_dkLen );
    par_dkLen = NULL;

    CHECK_OBJECT( (PyObject *)par_count );
    Py_DECREF( par_count );
    par_count = NULL;

    Py_XDECREF( par_prf );
    par_prf = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_U );
    var_U = NULL;

    Py_XDECREF( var_previousU );
    var_previousU = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Protocol$KDF$$$function_2_PBKDF2 );
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


static PyObject *impl_Crypto$Protocol$KDF$$$function_2_PBKDF2$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_p = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_63b68559181e6e9c5fb6ceccfb52ccc2 = NULL;

    struct Nuitka_FrameObject *frame_63b68559181e6e9c5fb6ceccfb52ccc2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_63b68559181e6e9c5fb6ceccfb52ccc2, codeobj_63b68559181e6e9c5fb6ceccfb52ccc2, module_Crypto$Protocol$KDF, sizeof(void *)+sizeof(void *) );
    frame_63b68559181e6e9c5fb6ceccfb52ccc2 = cache_frame_63b68559181e6e9c5fb6ceccfb52ccc2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_63b68559181e6e9c5fb6ceccfb52ccc2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_63b68559181e6e9c5fb6ceccfb52ccc2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Protocol$KDF, (Nuitka_StringObject *)const_str_plain_HMAC );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HMAC );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "HMAC" );
        exception_tb = NULL;

        exception_lineno = 112;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_new );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_p;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_s;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = GET_STRING_DICT_VALUE( moduledict_Crypto$Protocol$KDF, (Nuitka_StringObject *)const_str_plain_SHA1 );

    if (unlikely( tmp_args_element_name_3 == NULL ))
    {
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SHA1 );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SHA1" );
        exception_tb = NULL;

        exception_lineno = 112;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_63b68559181e6e9c5fb6ceccfb52ccc2->m_frame.f_lineno = 112;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_63b68559181e6e9c5fb6ceccfb52ccc2->m_frame.f_lineno = 112;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_digest );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_63b68559181e6e9c5fb6ceccfb52ccc2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_63b68559181e6e9c5fb6ceccfb52ccc2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_63b68559181e6e9c5fb6ceccfb52ccc2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_63b68559181e6e9c5fb6ceccfb52ccc2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_63b68559181e6e9c5fb6ceccfb52ccc2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_63b68559181e6e9c5fb6ceccfb52ccc2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_63b68559181e6e9c5fb6ceccfb52ccc2,
        type_description_1,
        par_p,
        par_s
    );


    // Release cached frame.
    if ( frame_63b68559181e6e9c5fb6ceccfb52ccc2 == cache_frame_63b68559181e6e9c5fb6ceccfb52ccc2 )
    {
        Py_DECREF( frame_63b68559181e6e9c5fb6ceccfb52ccc2 );
    }
    cache_frame_63b68559181e6e9c5fb6ceccfb52ccc2 = NULL;

    assertFrameObject( frame_63b68559181e6e9c5fb6ceccfb52ccc2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Protocol$KDF$$$function_2_PBKDF2$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

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

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

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
    NUITKA_CANNOT_GET_HERE( Crypto$Protocol$KDF$$$function_2_PBKDF2$$$function_1_lambda );
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



static PyObject *MAKE_FUNCTION_Crypto$Protocol$KDF$$$function_1_PBKDF1( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Protocol$KDF$$$function_1_PBKDF1,
        const_str_plain_PBKDF1,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cc79f4f47287de112d9a1202997b2f1c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Protocol$KDF,
        const_str_digest_d9322dcc9a5c601e8c719a6b7e5fc0aa,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Protocol$KDF$$$function_2_PBKDF2( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Protocol$KDF$$$function_2_PBKDF2,
        const_str_plain_PBKDF2,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d0b6cba714a842f1ae00f00842bd05d8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Protocol$KDF,
        const_str_digest_0d8e347daa324ecbfc833e6f84bf4f50,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Protocol$KDF$$$function_2_PBKDF2$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Protocol$KDF$$$function_2_PBKDF2$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_63b68559181e6e9c5fb6ceccfb52ccc2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Protocol$KDF,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Crypto$Protocol$KDF =
{
    PyModuleDef_HEAD_INIT,
    "Crypto.Protocol.KDF",   /* m_name */
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

MOD_INIT_DECL( Crypto$Protocol$KDF )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto$Protocol$KDF );
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
    puts("Crypto.Protocol.KDF: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.Protocol.KDF: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initCrypto$Protocol$KDF" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto$Protocol$KDF = Py_InitModule4(
        "Crypto.Protocol.KDF",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Crypto$Protocol$KDF = PyModule_Create( &mdef_Crypto$Protocol$KDF );
#endif

    moduledict_Crypto$Protocol$KDF = MODULE_DICT( module_Crypto$Protocol$KDF );

    CHECK_OBJECT( module_Crypto$Protocol$KDF );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_2ecfa924570d0430dff748b485849476, module_Crypto$Protocol$KDF );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Crypto$Protocol$KDF, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Crypto$Protocol$KDF, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_Crypto$Protocol$KDF, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    bool tmp_result;
    PyObject *tmp_star_imported_1;
    struct Nuitka_FrameObject *frame_2c5cd945450ad96d6612c624f2b66132;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_bf8019e11826f99e034a78a0b37e3d1a;
    UPDATE_STRING_DICT0( moduledict_Crypto$Protocol$KDF, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_19e1dce36c4d81014f047f463f423b57;
    UPDATE_STRING_DICT0( moduledict_Crypto$Protocol$KDF, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$Protocol$KDF, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_10c675d39d154a59cf6207a839b0661f;
    UPDATE_STRING_DICT0( moduledict_Crypto$Protocol$KDF, (Nuitka_StringObject *)const_str_plain___revision__, tmp_assign_source_4 );
    tmp_name_name_1 = const_str_plain_math;
    tmp_globals_name_1 = (PyObject *)moduledict_Crypto$Protocol$KDF;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    assert( tmp_assign_source_5 != NULL );
    UPDATE_STRING_DICT1( moduledict_Crypto$Protocol$KDF, (Nuitka_StringObject *)const_str_plain_math, tmp_assign_source_5 );
    // Frame without reuse.
    frame_2c5cd945450ad96d6612c624f2b66132 = MAKE_MODULE_FRAME( codeobj_2c5cd945450ad96d6612c624f2b66132, module_Crypto$Protocol$KDF );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_2c5cd945450ad96d6612c624f2b66132 );
    assert( Py_REFCNT( frame_2c5cd945450ad96d6612c624f2b66132 ) == 2 );

    // Framed code:
    tmp_name_name_2 = const_str_plain_struct;
    tmp_globals_name_2 = (PyObject *)moduledict_Crypto$Protocol$KDF;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    frame_2c5cd945450ad96d6612c624f2b66132->m_frame.f_lineno = 39;
    tmp_assign_source_6 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Protocol$KDF, (Nuitka_StringObject *)const_str_plain_struct, tmp_assign_source_6 );
    tmp_name_name_3 = const_str_digest_391b5dc084c9caede4445b681a10e649;
    tmp_globals_name_3 = (PyObject *)moduledict_Crypto$Protocol$KDF;
    tmp_locals_name_3 = (PyObject *)moduledict_Crypto$Protocol$KDF;
    tmp_fromlist_name_3 = const_tuple_str_chr_42_tuple;
    frame_2c5cd945450ad96d6612c624f2b66132->m_frame.f_lineno = 41;
    tmp_star_imported_1 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_Crypto$Protocol$KDF, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto frame_exception_exit_1;
    }
    tmp_name_name_4 = const_str_digest_7c65783ea592da7deacc72a90fc07e1d;
    tmp_globals_name_4 = (PyObject *)moduledict_Crypto$Protocol$KDF;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_SHA_str_plain_HMAC_tuple;
    frame_2c5cd945450ad96d6612c624f2b66132->m_frame.f_lineno = 42;
    tmp_assign_source_7 = IMPORT_MODULE4( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_7;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_SHA );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Protocol$KDF, (Nuitka_StringObject *)const_str_plain_SHA1, tmp_assign_source_8 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_HMAC );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Protocol$KDF, (Nuitka_StringObject *)const_str_plain_HMAC, tmp_assign_source_9 );
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

    tmp_name_name_5 = const_str_digest_3f4c3045abd507ba326e1daf737b53ee;
    tmp_globals_name_5 = (PyObject *)moduledict_Crypto$Protocol$KDF;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_strxor_tuple;
    frame_2c5cd945450ad96d6612c624f2b66132->m_frame.f_lineno = 43;
    tmp_import_name_from_3 = IMPORT_MODULE4( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_strxor );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Protocol$KDF, (Nuitka_StringObject *)const_str_plain_strxor, tmp_assign_source_10 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c5cd945450ad96d6612c624f2b66132 );
#endif
    popFrameStack();

    assertFrameObject( frame_2c5cd945450ad96d6612c624f2b66132 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c5cd945450ad96d6612c624f2b66132 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2c5cd945450ad96d6612c624f2b66132, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2c5cd945450ad96d6612c624f2b66132->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2c5cd945450ad96d6612c624f2b66132, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_defaults_1 = const_tuple_int_pos_1000_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_11 = MAKE_FUNCTION_Crypto$Protocol$KDF$$$function_1_PBKDF1( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_Crypto$Protocol$KDF, (Nuitka_StringObject *)const_str_plain_PBKDF1, tmp_assign_source_11 );
    tmp_defaults_2 = const_tuple_int_pos_16_int_pos_1000_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_12 = MAKE_FUNCTION_Crypto$Protocol$KDF$$$function_2_PBKDF2( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_Crypto$Protocol$KDF, (Nuitka_StringObject *)const_str_plain_PBKDF2, tmp_assign_source_12 );

    return MOD_RETURN_VALUE( module_Crypto$Protocol$KDF );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
