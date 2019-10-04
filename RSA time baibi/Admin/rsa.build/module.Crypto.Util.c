/* Generated code for Python source for module 'Crypto.Util'
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

/* The _module_Crypto$Util is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$Util;
PyDictObject *moduledict_Crypto$Util;

/* The module constants used, if any. */
static PyObject *const_list_c9502e80b601e4836ea5b2f226787166_list;
static PyObject *const_str_plain_randpool;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_digest_5a510964c5dbcb6c990bf490c7ddd002;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_number;
static PyObject *const_str_plain_RFC1751;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_asn1;
static PyObject *const_list_str_digest_f0048911f08b5e763137f33d11536154_list;
static PyObject *const_str_digest_f0048911f08b5e763137f33d11536154;
extern PyObject *const_str_plain_strxor;
static PyObject *const_str_digest_d424c3372e3ef473651e756005840d1b;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___revision__;
static PyObject *const_str_digest_d14bd2621c557fd80b638b4efcffa56b;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_digest_10c675d39d154a59cf6207a839b0661f;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_list_c9502e80b601e4836ea5b2f226787166_list = PyList_New( 5 );
    const_str_plain_randpool = UNSTREAM_STRING( &constant_bin[ 53212 ], 8, 1 );
    PyList_SET_ITEM( const_list_c9502e80b601e4836ea5b2f226787166_list, 0, const_str_plain_randpool ); Py_INCREF( const_str_plain_randpool );
    const_str_plain_RFC1751 = UNSTREAM_STRING( &constant_bin[ 53220 ], 7, 1 );
    PyList_SET_ITEM( const_list_c9502e80b601e4836ea5b2f226787166_list, 1, const_str_plain_RFC1751 ); Py_INCREF( const_str_plain_RFC1751 );
    PyList_SET_ITEM( const_list_c9502e80b601e4836ea5b2f226787166_list, 2, const_str_plain_number ); Py_INCREF( const_str_plain_number );
    PyList_SET_ITEM( const_list_c9502e80b601e4836ea5b2f226787166_list, 3, const_str_plain_strxor ); Py_INCREF( const_str_plain_strxor );
    const_str_plain_asn1 = UNSTREAM_STRING( &constant_bin[ 53227 ], 4, 1 );
    PyList_SET_ITEM( const_list_c9502e80b601e4836ea5b2f226787166_list, 4, const_str_plain_asn1 ); Py_INCREF( const_str_plain_asn1 );
    const_list_str_digest_f0048911f08b5e763137f33d11536154_list = PyList_New( 1 );
    const_str_digest_f0048911f08b5e763137f33d11536154 = UNSTREAM_STRING( &constant_bin[ 53231 ], 44, 0 );
    PyList_SET_ITEM( const_list_str_digest_f0048911f08b5e763137f33d11536154_list, 0, const_str_digest_f0048911f08b5e763137f33d11536154 ); Py_INCREF( const_str_digest_f0048911f08b5e763137f33d11536154 );
    const_str_digest_d424c3372e3ef473651e756005840d1b = UNSTREAM_STRING( &constant_bin[ 53275 ], 425, 0 );
    const_str_digest_d14bd2621c557fd80b638b4efcffa56b = UNSTREAM_STRING( &constant_bin[ 53700 ], 56, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Crypto$Util( void )
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
static struct PyModuleDef mdef_Crypto$Util =
{
    PyModuleDef_HEAD_INIT,
    "Crypto.Util",   /* m_name */
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

MOD_INIT_DECL( Crypto$Util )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto$Util );
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
    puts("Crypto.Util: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.Util: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initCrypto$Util" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto$Util = Py_InitModule4(
        "Crypto.Util",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Crypto$Util = PyModule_Create( &mdef_Crypto$Util );
#endif

    moduledict_Crypto$Util = MODULE_DICT( module_Crypto$Util );

    CHECK_OBJECT( module_Crypto$Util );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_5a510964c5dbcb6c990bf490c7ddd002, module_Crypto$Util );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Crypto$Util, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Crypto$Util, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_Crypto$Util, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;

    // Module code.
    tmp_assign_source_1 = const_str_digest_d424c3372e3ef473651e756005840d1b;
    UPDATE_STRING_DICT0( moduledict_Crypto$Util, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_d14bd2621c557fd80b638b4efcffa56b;
    UPDATE_STRING_DICT0( moduledict_Crypto$Util, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_f0048911f08b5e763137f33d11536154_list );
    UPDATE_STRING_DICT1( moduledict_Crypto$Util, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_5a510964c5dbcb6c990bf490c7ddd002;
    UPDATE_STRING_DICT0( moduledict_Crypto$Util, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = LIST_COPY( const_list_c9502e80b601e4836ea5b2f226787166_list );
    UPDATE_STRING_DICT1( moduledict_Crypto$Util, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_10c675d39d154a59cf6207a839b0661f;
    UPDATE_STRING_DICT0( moduledict_Crypto$Util, (Nuitka_StringObject *)const_str_plain___revision__, tmp_assign_source_6 );

    return MOD_RETURN_VALUE( module_Crypto$Util );
}
