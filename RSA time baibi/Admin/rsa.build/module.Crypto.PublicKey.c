/* Generated code for Python source for module 'Crypto.PublicKey'
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

/* The _module_Crypto$PublicKey is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$PublicKey;
PyDictObject *moduledict_Crypto$PublicKey;

/* The module constants used, if any. */
extern PyObject *const_str_digest_65d97903ab4949452c79ee278e7e3fcb;
static PyObject *const_str_digest_5288a4785bdc53069f762a2ef3287745;
static PyObject *const_list_str_plain_RSA_str_plain_DSA_str_plain_ElGamal_list;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_RSA;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_ElGamal;
static PyObject *const_str_digest_5231d28cf7216f1184299ebffd8d36c8;
extern PyObject *const_str_plain___doc__;
static PyObject *const_list_str_digest_5288a4785bdc53069f762a2ef3287745_list;
static PyObject *const_str_plain_DSA;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___revision__;
static PyObject *const_str_digest_4787f5d4d938140e438ce96d9feaa9cb;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_digest_10c675d39d154a59cf6207a839b0661f;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_5288a4785bdc53069f762a2ef3287745 = UNSTREAM_STRING( &constant_bin[ 27854 ], 49, 0 );
    const_list_str_plain_RSA_str_plain_DSA_str_plain_ElGamal_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_RSA_str_plain_DSA_str_plain_ElGamal_list, 0, const_str_plain_RSA ); Py_INCREF( const_str_plain_RSA );
    const_str_plain_DSA = UNSTREAM_STRING( &constant_bin[ 631 ], 3, 1 );
    PyList_SET_ITEM( const_list_str_plain_RSA_str_plain_DSA_str_plain_ElGamal_list, 1, const_str_plain_DSA ); Py_INCREF( const_str_plain_DSA );
    const_str_plain_ElGamal = UNSTREAM_STRING( &constant_bin[ 27903 ], 7, 1 );
    PyList_SET_ITEM( const_list_str_plain_RSA_str_plain_DSA_str_plain_ElGamal_list, 2, const_str_plain_ElGamal ); Py_INCREF( const_str_plain_ElGamal );
    const_str_digest_5231d28cf7216f1184299ebffd8d36c8 = UNSTREAM_STRING( &constant_bin[ 27910 ], 61, 0 );
    const_list_str_digest_5288a4785bdc53069f762a2ef3287745_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_5288a4785bdc53069f762a2ef3287745_list, 0, const_str_digest_5288a4785bdc53069f762a2ef3287745 ); Py_INCREF( const_str_digest_5288a4785bdc53069f762a2ef3287745 );
    const_str_digest_4787f5d4d938140e438ce96d9feaa9cb = UNSTREAM_STRING( &constant_bin[ 27971 ], 822, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Crypto$PublicKey( void )
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
static struct PyModuleDef mdef_Crypto$PublicKey =
{
    PyModuleDef_HEAD_INIT,
    "Crypto.PublicKey",   /* m_name */
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

MOD_INIT_DECL( Crypto$PublicKey )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto$PublicKey );
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
    puts("Crypto.PublicKey: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.PublicKey: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initCrypto$PublicKey" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto$PublicKey = Py_InitModule4(
        "Crypto.PublicKey",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Crypto$PublicKey = PyModule_Create( &mdef_Crypto$PublicKey );
#endif

    moduledict_Crypto$PublicKey = MODULE_DICT( module_Crypto$PublicKey );

    CHECK_OBJECT( module_Crypto$PublicKey );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_65d97903ab4949452c79ee278e7e3fcb, module_Crypto$PublicKey );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Crypto$PublicKey, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Crypto$PublicKey, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_Crypto$PublicKey, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;

    // Module code.
    tmp_assign_source_1 = const_str_digest_4787f5d4d938140e438ce96d9feaa9cb;
    UPDATE_STRING_DICT0( moduledict_Crypto$PublicKey, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_5231d28cf7216f1184299ebffd8d36c8;
    UPDATE_STRING_DICT0( moduledict_Crypto$PublicKey, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_5288a4785bdc53069f762a2ef3287745_list );
    UPDATE_STRING_DICT1( moduledict_Crypto$PublicKey, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_65d97903ab4949452c79ee278e7e3fcb;
    UPDATE_STRING_DICT0( moduledict_Crypto$PublicKey, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = LIST_COPY( const_list_str_plain_RSA_str_plain_DSA_str_plain_ElGamal_list );
    UPDATE_STRING_DICT1( moduledict_Crypto$PublicKey, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_10c675d39d154a59cf6207a839b0661f;
    UPDATE_STRING_DICT0( moduledict_Crypto$PublicKey, (Nuitka_StringObject *)const_str_plain___revision__, tmp_assign_source_6 );

    return MOD_RETURN_VALUE( module_Crypto$PublicKey );
}
