/* Generated code for Python source for module 'Crypto.Protocol'
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

/* The _module_Crypto$Protocol is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$Protocol;
PyDictObject *moduledict_Crypto$Protocol;

/* The module constants used, if any. */
extern PyObject *const_str_plain___package__;
static PyObject *const_str_plain_KDF;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_AllOrNothing;
extern PyObject *const_str_plain___revision__;
static PyObject *const_str_digest_0a58a07aefdc494ef2051c86b5a7be68;
static PyObject *const_str_digest_0d3ee8b1fa444b0e29d44077c51b9b9f;
static PyObject *const_str_digest_8a524838a0c338f5180c01e455c59c24;
static PyObject *const_str_plain_Chaffing;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_fb35d8357facedc81ac8c750c10008d0;
static PyObject *const_list_str_digest_8a524838a0c338f5180c01e455c59c24_list;
extern PyObject *const_str_plain___all__;
static PyObject *const_list_str_plain_AllOrNothing_str_plain_Chaffing_str_plain_KDF_list;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_digest_10c675d39d154a59cf6207a839b0661f;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_KDF = UNSTREAM_STRING( &constant_bin[ 24153 ], 3, 1 );
    const_str_plain_AllOrNothing = UNSTREAM_STRING( &constant_bin[ 24156 ], 12, 1 );
    const_str_digest_0a58a07aefdc494ef2051c86b5a7be68 = UNSTREAM_STRING( &constant_bin[ 24168 ], 510, 0 );
    const_str_digest_0d3ee8b1fa444b0e29d44077c51b9b9f = UNSTREAM_STRING( &constant_bin[ 401 ], 15, 0 );
    const_str_digest_8a524838a0c338f5180c01e455c59c24 = UNSTREAM_STRING( &constant_bin[ 24678 ], 48, 0 );
    const_str_plain_Chaffing = UNSTREAM_STRING( &constant_bin[ 443 ], 8, 1 );
    const_str_digest_fb35d8357facedc81ac8c750c10008d0 = UNSTREAM_STRING( &constant_bin[ 24726 ], 60, 0 );
    const_list_str_digest_8a524838a0c338f5180c01e455c59c24_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_8a524838a0c338f5180c01e455c59c24_list, 0, const_str_digest_8a524838a0c338f5180c01e455c59c24 ); Py_INCREF( const_str_digest_8a524838a0c338f5180c01e455c59c24 );
    const_list_str_plain_AllOrNothing_str_plain_Chaffing_str_plain_KDF_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_AllOrNothing_str_plain_Chaffing_str_plain_KDF_list, 0, const_str_plain_AllOrNothing ); Py_INCREF( const_str_plain_AllOrNothing );
    PyList_SET_ITEM( const_list_str_plain_AllOrNothing_str_plain_Chaffing_str_plain_KDF_list, 1, const_str_plain_Chaffing ); Py_INCREF( const_str_plain_Chaffing );
    PyList_SET_ITEM( const_list_str_plain_AllOrNothing_str_plain_Chaffing_str_plain_KDF_list, 2, const_str_plain_KDF ); Py_INCREF( const_str_plain_KDF );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Crypto$Protocol( void )
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
static struct PyModuleDef mdef_Crypto$Protocol =
{
    PyModuleDef_HEAD_INIT,
    "Crypto.Protocol",   /* m_name */
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

MOD_INIT_DECL( Crypto$Protocol )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto$Protocol );
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
    puts("Crypto.Protocol: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.Protocol: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initCrypto$Protocol" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto$Protocol = Py_InitModule4(
        "Crypto.Protocol",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Crypto$Protocol = PyModule_Create( &mdef_Crypto$Protocol );
#endif

    moduledict_Crypto$Protocol = MODULE_DICT( module_Crypto$Protocol );

    CHECK_OBJECT( module_Crypto$Protocol );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_0d3ee8b1fa444b0e29d44077c51b9b9f, module_Crypto$Protocol );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Crypto$Protocol, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Crypto$Protocol, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_Crypto$Protocol, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;

    // Module code.
    tmp_assign_source_1 = const_str_digest_0a58a07aefdc494ef2051c86b5a7be68;
    UPDATE_STRING_DICT0( moduledict_Crypto$Protocol, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_fb35d8357facedc81ac8c750c10008d0;
    UPDATE_STRING_DICT0( moduledict_Crypto$Protocol, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_8a524838a0c338f5180c01e455c59c24_list );
    UPDATE_STRING_DICT1( moduledict_Crypto$Protocol, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_0d3ee8b1fa444b0e29d44077c51b9b9f;
    UPDATE_STRING_DICT0( moduledict_Crypto$Protocol, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = LIST_COPY( const_list_str_plain_AllOrNothing_str_plain_Chaffing_str_plain_KDF_list );
    UPDATE_STRING_DICT1( moduledict_Crypto$Protocol, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_10c675d39d154a59cf6207a839b0661f;
    UPDATE_STRING_DICT0( moduledict_Crypto$Protocol, (Nuitka_StringObject *)const_str_plain___revision__, tmp_assign_source_6 );

    return MOD_RETURN_VALUE( module_Crypto$Protocol );
}
