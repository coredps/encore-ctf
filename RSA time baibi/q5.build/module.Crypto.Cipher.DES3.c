/* Generated code for Python source for module 'Crypto.Cipher.DES3'
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

/* The _module_Crypto$Cipher$DES3 is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$Cipher$DES3;
PyDictObject *moduledict_Crypto$Cipher$DES3;

/* The module constants used, if any. */
static PyObject *const_tuple_str_plain__DES3_tuple;
extern PyObject *const_str_digest_3094a3153522c449dea0453cbf4eb75a;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_new;
static PyObject *const_str_digest_91311e0ed524164010144f76ac572ec5;
extern PyObject *const_str_plain_MODE_PGP;
static PyObject *const_str_plain_DES3Cipher;
extern PyObject *const_str_plain_MODE_OFB;
extern PyObject *const_str_plain_MODE_ECB;
extern PyObject *const_dict_empty;
extern PyObject *const_str_digest_10c675d39d154a59cf6207a839b0661f;
static PyObject *const_str_plain__DES3;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_MODE_CTR;
static PyObject *const_str_digest_5e7f16f78e5412a3c128d59d031f1d4e;
extern PyObject *const_int_pos_16;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_plain_BlockAlgo;
static PyObject *const_str_digest_44d43bcaf69bc44f16f761bf8d2977e7;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___revision__;
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_MODE_OPENPGP;
static PyObject *const_str_digest_b26468f64c0cdae9332bf519a2b1b071;
static PyObject *const_str_digest_270be2863cf7ddb9f1f211fc3a49ddc1;
extern PyObject *const_str_plain_block_size;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_MODE_CFB;
extern PyObject *const_int_pos_6;
extern PyObject *const_int_pos_7;
extern PyObject *const_tuple_str_plain_blockalgo_tuple;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_55f4517f3b14c7b508d0db419953d669;
static PyObject *const_tuple_int_pos_16_int_pos_24_tuple;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_MODE_CBC;
extern PyObject *const_int_pos_4;
extern PyObject *const_tuple_str_plain_self_str_plain_key_str_plain_args_str_plain_kwargs_tuple;
static PyObject *const_str_digest_754d61d9c041189897e895f8365e0e42;
extern PyObject *const_int_pos_24;
extern PyObject *const_str_plain_blockalgo;
extern PyObject *const_str_plain_key_size;
extern PyObject *const_str_plain___init__;
extern PyObject *const_tuple_str_plain_key_str_plain_args_str_plain_kwargs_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain__DES3_tuple = PyTuple_New( 1 );
    const_str_plain__DES3 = UNSTREAM_STRING( &constant_bin[ 3116 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__DES3_tuple, 0, const_str_plain__DES3 ); Py_INCREF( const_str_plain__DES3 );
    const_str_digest_91311e0ed524164010144f76ac572ec5 = UNSTREAM_STRING( &constant_bin[ 7968 ], 1430, 0 );
    const_str_plain_DES3Cipher = UNSTREAM_STRING( &constant_bin[ 9375 ], 10, 1 );
    const_str_digest_5e7f16f78e5412a3c128d59d031f1d4e = UNSTREAM_STRING( &constant_bin[ 9398 ], 1576, 0 );
    const_str_digest_44d43bcaf69bc44f16f761bf8d2977e7 = UNSTREAM_STRING( &constant_bin[ 10974 ], 86, 0 );
    const_str_digest_b26468f64c0cdae9332bf519a2b1b071 = UNSTREAM_STRING( &constant_bin[ 2114 ], 18, 0 );
    const_str_digest_270be2863cf7ddb9f1f211fc3a49ddc1 = UNSTREAM_STRING( &constant_bin[ 10987 ], 18, 0 );
    const_str_digest_55f4517f3b14c7b508d0db419953d669 = UNSTREAM_STRING( &constant_bin[ 11060 ], 54, 0 );
    const_tuple_int_pos_16_int_pos_24_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_16_int_pos_24_tuple, 0, const_int_pos_16 ); Py_INCREF( const_int_pos_16 );
    PyTuple_SET_ITEM( const_tuple_int_pos_16_int_pos_24_tuple, 1, const_int_pos_24 ); Py_INCREF( const_int_pos_24 );
    const_str_digest_754d61d9c041189897e895f8365e0e42 = UNSTREAM_STRING( &constant_bin[ 11114 ], 27, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Crypto$Cipher$DES3( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_931ecfe48992b1962a06171d0830526f;
static PyCodeObject *codeobj_7569841838b816fd4e387c8b5ce014af;
static PyCodeObject *codeobj_67e441c4f5b6f812485c42cf38c306bb;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_55f4517f3b14c7b508d0db419953d669;
    codeobj_931ecfe48992b1962a06171d0830526f = MAKE_CODEOBJ( module_filename_obj, const_str_digest_754d61d9c041189897e895f8365e0e42, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_7569841838b816fd4e387c8b5ce014af = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 72, const_tuple_str_plain_self_str_plain_key_str_plain_args_str_plain_kwargs_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_67e441c4f5b6f812485c42cf38c306bb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_new, 78, const_tuple_str_plain_key_str_plain_args_str_plain_kwargs_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3_complex_call_helper_pos_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_Crypto$Cipher$DES3$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_Crypto$Cipher$DES3$$$function_2_new(  );


// The module function definitions.
static PyObject *impl_Crypto$Cipher$DES3$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *par_kwargs = python_pars[ 3 ];
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
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7569841838b816fd4e387c8b5ce014af = NULL;

    struct Nuitka_FrameObject *frame_7569841838b816fd4e387c8b5ce014af;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7569841838b816fd4e387c8b5ce014af, codeobj_7569841838b816fd4e387c8b5ce014af, module_Crypto$Cipher$DES3, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7569841838b816fd4e387c8b5ce014af = cache_frame_7569841838b816fd4e387c8b5ce014af;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7569841838b816fd4e387c8b5ce014af );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7569841838b816fd4e387c8b5ce014af ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$DES3, (Nuitka_StringObject *)const_str_plain_blockalgo );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_blockalgo );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "blockalgo" );
        exception_tb = NULL;

        exception_lineno = 76;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_BlockAlgo );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = par_self;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$DES3, (Nuitka_StringObject *)const_str_plain__DES3 );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__DES3 );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_DES3" );
        exception_tb = NULL;

        exception_lineno = 76;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_key;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 2, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = par_args;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    tmp_dircall_arg4_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_unused = impl___internal__$$$function_3_complex_call_helper_pos_star_list_star_dict( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7569841838b816fd4e387c8b5ce014af );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7569841838b816fd4e387c8b5ce014af );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7569841838b816fd4e387c8b5ce014af, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7569841838b816fd4e387c8b5ce014af->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7569841838b816fd4e387c8b5ce014af, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7569841838b816fd4e387c8b5ce014af,
        type_description_1,
        par_self,
        par_key,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_7569841838b816fd4e387c8b5ce014af == cache_frame_7569841838b816fd4e387c8b5ce014af )
    {
        Py_DECREF( frame_7569841838b816fd4e387c8b5ce014af );
    }
    cache_frame_7569841838b816fd4e387c8b5ce014af = NULL;

    assertFrameObject( frame_7569841838b816fd4e387c8b5ce014af );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Cipher$DES3$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

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
    NUITKA_CANNOT_GET_HERE( Crypto$Cipher$DES3$$$function_1___init__ );
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


static PyObject *impl_Crypto$Cipher$DES3$$$function_2_new( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
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
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_67e441c4f5b6f812485c42cf38c306bb = NULL;

    struct Nuitka_FrameObject *frame_67e441c4f5b6f812485c42cf38c306bb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_67e441c4f5b6f812485c42cf38c306bb, codeobj_67e441c4f5b6f812485c42cf38c306bb, module_Crypto$Cipher$DES3, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_67e441c4f5b6f812485c42cf38c306bb = cache_frame_67e441c4f5b6f812485c42cf38c306bb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_67e441c4f5b6f812485c42cf38c306bb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_67e441c4f5b6f812485c42cf38c306bb ) == 2 ); // Frame stack

    // Framed code:
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$DES3, (Nuitka_StringObject *)const_str_plain_DES3Cipher );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DES3Cipher );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "DES3Cipher" );
        exception_tb = NULL;

        exception_lineno = 113;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_key;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = par_args;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    tmp_dircall_arg4_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_3_complex_call_helper_pos_star_list_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67e441c4f5b6f812485c42cf38c306bb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_67e441c4f5b6f812485c42cf38c306bb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67e441c4f5b6f812485c42cf38c306bb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_67e441c4f5b6f812485c42cf38c306bb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_67e441c4f5b6f812485c42cf38c306bb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_67e441c4f5b6f812485c42cf38c306bb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_67e441c4f5b6f812485c42cf38c306bb,
        type_description_1,
        par_key,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_67e441c4f5b6f812485c42cf38c306bb == cache_frame_67e441c4f5b6f812485c42cf38c306bb )
    {
        Py_DECREF( frame_67e441c4f5b6f812485c42cf38c306bb );
    }
    cache_frame_67e441c4f5b6f812485c42cf38c306bb = NULL;

    assertFrameObject( frame_67e441c4f5b6f812485c42cf38c306bb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Cipher$DES3$$$function_2_new );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

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

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

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
    NUITKA_CANNOT_GET_HERE( Crypto$Cipher$DES3$$$function_2_new );
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



static PyObject *MAKE_FUNCTION_Crypto$Cipher$DES3$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$DES3$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7569841838b816fd4e387c8b5ce014af,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Cipher$DES3,
        const_str_digest_44d43bcaf69bc44f16f761bf8d2977e7,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Crypto$Cipher$DES3$$$function_2_new(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Crypto$Cipher$DES3$$$function_2_new,
        const_str_plain_new,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_67e441c4f5b6f812485c42cf38c306bb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Crypto$Cipher$DES3,
        const_str_digest_91311e0ed524164010144f76ac572ec5,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Crypto$Cipher$DES3 =
{
    PyModuleDef_HEAD_INIT,
    "Crypto.Cipher.DES3",   /* m_name */
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

MOD_INIT_DECL( Crypto$Cipher$DES3 )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto$Cipher$DES3 );
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
    puts("Crypto.Cipher.DES3: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.Cipher.DES3: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initCrypto$Cipher$DES3" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto$Cipher$DES3 = Py_InitModule4(
        "Crypto.Cipher.DES3",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Crypto$Cipher$DES3 = PyModule_Create( &mdef_Crypto$Cipher$DES3 );
#endif

    moduledict_Crypto$Cipher$DES3 = MODULE_DICT( module_Crypto$Cipher$DES3 );

    CHECK_OBJECT( module_Crypto$Cipher$DES3 );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_b26468f64c0cdae9332bf519a2b1b071, module_Crypto$Cipher$DES3 );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$DES3, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$DES3, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$DES3, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_0_var___init__ = NULL;
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
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_key_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    struct Nuitka_FrameObject *frame_931ecfe48992b1962a06171d0830526f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_5e7f16f78e5412a3c128d59d031f1d4e;
    UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$DES3, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_55f4517f3b14c7b508d0db419953d669;
    UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$DES3, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$DES3, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_10c675d39d154a59cf6207a839b0661f;
    UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$DES3, (Nuitka_StringObject *)const_str_plain___revision__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_931ecfe48992b1962a06171d0830526f = MAKE_MODULE_FRAME( codeobj_931ecfe48992b1962a06171d0830526f, module_Crypto$Cipher$DES3 );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_931ecfe48992b1962a06171d0830526f );
    assert( Py_REFCNT( frame_931ecfe48992b1962a06171d0830526f ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_digest_3094a3153522c449dea0453cbf4eb75a;
    tmp_globals_name_1 = (PyObject *)moduledict_Crypto$Cipher$DES3;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_blockalgo_tuple;
    frame_931ecfe48992b1962a06171d0830526f->m_frame.f_lineno = 66;
    tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_blockalgo );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Cipher$DES3, (Nuitka_StringObject *)const_str_plain_blockalgo, tmp_assign_source_5 );
    tmp_name_name_2 = const_str_digest_3094a3153522c449dea0453cbf4eb75a;
    tmp_globals_name_2 = (PyObject *)moduledict_Crypto$Cipher$DES3;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain__DES3_tuple;
    frame_931ecfe48992b1962a06171d0830526f->m_frame.f_lineno = 67;
    tmp_import_name_from_2 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain__DES3 );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Cipher$DES3, (Nuitka_StringObject *)const_str_plain__DES3, tmp_assign_source_6 );
    // Tried code:
    tmp_assign_source_7 = PyTuple_New( 1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher$DES3, (Nuitka_StringObject *)const_str_plain_blockalgo );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_blockalgo );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "blockalgo" );
        exception_tb = NULL;

        exception_lineno = 69;

        goto try_except_handler_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_BlockAlgo );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_7 );

        exception_lineno = 69;

        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_7, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_7;

    tmp_assign_source_9 = const_str_digest_b26468f64c0cdae9332bf519a2b1b071;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_9 );
    outline_0_var___module__ = tmp_assign_source_9;

    tmp_assign_source_10 = const_str_digest_270be2863cf7ddb9f1f211fc3a49ddc1;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_10 );
    outline_0_var___doc__ = tmp_assign_source_10;

    tmp_assign_source_11 = MAKE_FUNCTION_Crypto$Cipher$DES3$$$function_1___init__(  );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_11;

    // Tried code:
    tmp_outline_return_value_1 = _PyDict_NewPresized( 3 );
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
    tmp_dict_value_3 = outline_0_var___init__;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Cipher$DES3 );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___doc__ );
    Py_DECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___init__ );
    Py_DECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    goto outline_result_1;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___doc__ );
    Py_DECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___init__ );
    Py_DECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$Cipher$DES3 );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_8 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_8;

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
    tmp_assign_source_12 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto try_except_handler_1;
    }
    assert( tmp_select_metaclass_1__base == NULL );
    tmp_select_metaclass_1__base = tmp_assign_source_13;

    // Tried code:
    // Tried code:
    tmp_source_name_2 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_outline_return_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
    if ( tmp_outline_return_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto try_except_handler_4;
    }
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$Cipher$DES3 );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Cipher$DES3 );
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
    NUITKA_CANNOT_GET_HERE( Crypto$Cipher$DES3 );
    return MOD_RETURN_VALUE( NULL );
    outline_result_2:;
    tmp_assign_source_12 = tmp_outline_return_value_2;
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_12;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_DES3Cipher;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_931ecfe48992b1962a06171d0830526f->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_14;

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
    RESTORE_FRAME_EXCEPTION( frame_931ecfe48992b1962a06171d0830526f );
#endif
    popFrameStack();

    assertFrameObject( frame_931ecfe48992b1962a06171d0830526f );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_931ecfe48992b1962a06171d0830526f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_931ecfe48992b1962a06171d0830526f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_931ecfe48992b1962a06171d0830526f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_931ecfe48992b1962a06171d0830526f, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_15 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_15 );
    UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$DES3, (Nuitka_StringObject *)const_str_plain_DES3Cipher, tmp_assign_source_15 );
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

    tmp_assign_source_16 = MAKE_FUNCTION_Crypto$Cipher$DES3$$$function_2_new(  );
    UPDATE_STRING_DICT1( moduledict_Crypto$Cipher$DES3, (Nuitka_StringObject *)const_str_plain_new, tmp_assign_source_16 );
    tmp_assign_source_17 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$DES3, (Nuitka_StringObject *)const_str_plain_MODE_ECB, tmp_assign_source_17 );
    tmp_assign_source_18 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$DES3, (Nuitka_StringObject *)const_str_plain_MODE_CBC, tmp_assign_source_18 );
    tmp_assign_source_19 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$DES3, (Nuitka_StringObject *)const_str_plain_MODE_CFB, tmp_assign_source_19 );
    tmp_assign_source_20 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$DES3, (Nuitka_StringObject *)const_str_plain_MODE_PGP, tmp_assign_source_20 );
    tmp_assign_source_21 = const_int_pos_5;
    UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$DES3, (Nuitka_StringObject *)const_str_plain_MODE_OFB, tmp_assign_source_21 );
    tmp_assign_source_22 = const_int_pos_6;
    UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$DES3, (Nuitka_StringObject *)const_str_plain_MODE_CTR, tmp_assign_source_22 );
    tmp_assign_source_23 = const_int_pos_7;
    UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$DES3, (Nuitka_StringObject *)const_str_plain_MODE_OPENPGP, tmp_assign_source_23 );
    tmp_assign_source_24 = const_int_pos_8;
    UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$DES3, (Nuitka_StringObject *)const_str_plain_block_size, tmp_assign_source_24 );
    tmp_assign_source_25 = const_tuple_int_pos_16_int_pos_24_tuple;
    UPDATE_STRING_DICT0( moduledict_Crypto$Cipher$DES3, (Nuitka_StringObject *)const_str_plain_key_size, tmp_assign_source_25 );

    return MOD_RETURN_VALUE( module_Crypto$Cipher$DES3 );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
