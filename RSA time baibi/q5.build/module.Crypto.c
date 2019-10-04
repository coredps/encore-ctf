/* Generated code for Python source for module 'Crypto'
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

/* The _module_Crypto is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto;
PyDictObject *moduledict_Crypto;

/* The module constants used, if any. */
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_Hash;
static PyObject *const_str_digest_bfa92130771d3754e8a504412a61776a;
static PyObject *const_tuple_int_pos_2_int_pos_6_int_pos_1_str_plain_final_int_0_tuple;
static PyObject *const_str_plain_PublicKey;
static PyObject *const_str_digest_3965d99b9f28334d0e3ccd7923a5a919;
static PyObject *const_list_55054b935cf4996ed49afe2fd40aea72_list;
extern PyObject *const_str_digest_10c675d39d154a59cf6207a839b0661f;
extern PyObject *const_str_plain_Cipher;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_7a91afa281a03a428680434d22d43c55;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___revision__;
extern PyObject *const_int_0;
static PyObject *const_str_plain_Signature;
static PyObject *const_str_plain_final;
static PyObject *const_str_digest_8d94abb6454075a22f17b896afefa120;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain___version__;
extern PyObject *const_int_pos_6;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___path__;
static PyObject *const_list_str_digest_3965d99b9f28334d0e3ccd7923a5a919_list;
static PyObject *const_str_plain_Protocol;
extern PyObject *const_str_plain_Crypto;
static PyObject *const_str_plain_Util;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_bfa92130771d3754e8a504412a61776a = UNSTREAM_STRING( &constant_bin[ 0 ], 5, 0 );
    const_tuple_int_pos_2_int_pos_6_int_pos_1_str_plain_final_int_0_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2_int_pos_6_int_pos_1_str_plain_final_int_0_tuple, 0, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2_int_pos_6_int_pos_1_str_plain_final_int_0_tuple, 1, const_int_pos_6 ); Py_INCREF( const_int_pos_6 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2_int_pos_6_int_pos_1_str_plain_final_int_0_tuple, 2, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_str_plain_final = UNSTREAM_STRING( &constant_bin[ 5 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2_int_pos_6_int_pos_1_str_plain_final_int_0_tuple, 3, const_str_plain_final ); Py_INCREF( const_str_plain_final );
    PyTuple_SET_ITEM( const_tuple_int_pos_2_int_pos_6_int_pos_1_str_plain_final_int_0_tuple, 4, const_int_0 ); Py_INCREF( const_int_0 );
    const_str_plain_PublicKey = UNSTREAM_STRING( &constant_bin[ 10 ], 9, 1 );
    const_str_digest_3965d99b9f28334d0e3ccd7923a5a919 = UNSTREAM_STRING( &constant_bin[ 19 ], 39, 0 );
    const_list_55054b935cf4996ed49afe2fd40aea72_list = PyList_New( 6 );
    PyList_SET_ITEM( const_list_55054b935cf4996ed49afe2fd40aea72_list, 0, const_str_plain_Cipher ); Py_INCREF( const_str_plain_Cipher );
    PyList_SET_ITEM( const_list_55054b935cf4996ed49afe2fd40aea72_list, 1, const_str_plain_Hash ); Py_INCREF( const_str_plain_Hash );
    const_str_plain_Protocol = UNSTREAM_STRING( &constant_bin[ 58 ], 8, 1 );
    PyList_SET_ITEM( const_list_55054b935cf4996ed49afe2fd40aea72_list, 2, const_str_plain_Protocol ); Py_INCREF( const_str_plain_Protocol );
    PyList_SET_ITEM( const_list_55054b935cf4996ed49afe2fd40aea72_list, 3, const_str_plain_PublicKey ); Py_INCREF( const_str_plain_PublicKey );
    const_str_plain_Util = UNSTREAM_STRING( &constant_bin[ 66 ], 4, 1 );
    PyList_SET_ITEM( const_list_55054b935cf4996ed49afe2fd40aea72_list, 4, const_str_plain_Util ); Py_INCREF( const_str_plain_Util );
    const_str_plain_Signature = UNSTREAM_STRING( &constant_bin[ 70 ], 9, 1 );
    PyList_SET_ITEM( const_list_55054b935cf4996ed49afe2fd40aea72_list, 5, const_str_plain_Signature ); Py_INCREF( const_str_plain_Signature );
    const_str_digest_7a91afa281a03a428680434d22d43c55 = UNSTREAM_STRING( &constant_bin[ 79 ], 51, 0 );
    const_str_digest_8d94abb6454075a22f17b896afefa120 = UNSTREAM_STRING( &constant_bin[ 130 ], 703, 0 );
    const_str_plain___version__ = UNSTREAM_STRING( &constant_bin[ 833 ], 11, 1 );
    const_list_str_digest_3965d99b9f28334d0e3ccd7923a5a919_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_3965d99b9f28334d0e3ccd7923a5a919_list, 0, const_str_digest_3965d99b9f28334d0e3ccd7923a5a919 ); Py_INCREF( const_str_digest_3965d99b9f28334d0e3ccd7923a5a919 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Crypto( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.


static void createModuleCodeObjects(void)
{

}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Crypto =
{
    PyModuleDef_HEAD_INIT,
    "Crypto",   /* m_name */
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

MOD_INIT_DECL( Crypto )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto );
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
    puts("Crypto: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initCrypto" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto = Py_InitModule4(
        "Crypto",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Crypto = PyModule_Create( &mdef_Crypto );
#endif

    moduledict_Crypto = MODULE_DICT( module_Crypto );

    CHECK_OBJECT( module_Crypto );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_Crypto, module_Crypto );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Crypto, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Crypto, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_Crypto, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;

    // Module code.
    tmp_assign_source_1 = const_str_digest_8d94abb6454075a22f17b896afefa120;
    UPDATE_STRING_DICT0( moduledict_Crypto, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_7a91afa281a03a428680434d22d43c55;
    UPDATE_STRING_DICT0( moduledict_Crypto, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_3965d99b9f28334d0e3ccd7923a5a919_list );
    UPDATE_STRING_DICT1( moduledict_Crypto, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = LIST_COPY( const_list_55054b935cf4996ed49afe2fd40aea72_list );
    UPDATE_STRING_DICT1( moduledict_Crypto, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_bfa92130771d3754e8a504412a61776a;
    UPDATE_STRING_DICT0( moduledict_Crypto, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_10c675d39d154a59cf6207a839b0661f;
    UPDATE_STRING_DICT0( moduledict_Crypto, (Nuitka_StringObject *)const_str_plain___revision__, tmp_assign_source_7 );
    tmp_assign_source_8 = const_tuple_int_pos_2_int_pos_6_int_pos_1_str_plain_final_int_0_tuple;
    UPDATE_STRING_DICT0( moduledict_Crypto, (Nuitka_StringObject *)const_str_plain_version_info, tmp_assign_source_8 );

    return MOD_RETURN_VALUE( module_Crypto );
}
