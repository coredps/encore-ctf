/* Generated code for Python source for module 'Crypto.Random.OSRNG'
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

/* The _module_Crypto$Random$OSRNG is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$Random$OSRNG;
PyDictObject *moduledict_Crypto$Random$OSRNG;

/* The module constants used, if any. */
extern PyObject *const_str_plain___package__;
static PyObject *const_str_digest_a0d2077fed3e3bb5283130f6b7223263;
static PyObject *const_list_str_digest_98ef53659886a92196f89409f934b094_list;
extern PyObject *const_str_plain_new;
extern PyObject *const_str_plain_urandom;
extern PyObject *const_str_digest_f14b663be9f0bf90ccebd098b9687874;
extern PyObject *const_str_digest_10c675d39d154a59cf6207a839b0661f;
static PyObject *const_str_digest_a435d77ed725e450cef4045b38c5685b;
static PyObject *const_str_digest_98ef53659886a92196f89409f934b094;
static PyObject *const_str_digest_75d2ca363015e3973e72aeb526830bd2;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___revision__;
extern PyObject *const_str_plain_name;
static PyObject *const_str_plain_posix;
static PyObject *const_tuple_str_plain_new_tuple;
extern PyObject *const_str_digest_57bef3f6a897874e5c439116c59ee540;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_9d805c61f3cf68cc3326aa28b0821f84;
static PyObject *const_str_digest_4f145f473d4c24c6d64b56a677d9761b;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_digest_e32a9f566e3be35b10436f5e6301eafb;
static PyObject *const_str_plain_nt;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_a0d2077fed3e3bb5283130f6b7223263 = UNSTREAM_STRING( &constant_bin[ 50162 ], 15, 0 );
    const_list_str_digest_98ef53659886a92196f89409f934b094_list = PyList_New( 1 );
    const_str_digest_98ef53659886a92196f89409f934b094 = UNSTREAM_STRING( &constant_bin[ 50177 ], 52, 0 );
    PyList_SET_ITEM( const_list_str_digest_98ef53659886a92196f89409f934b094_list, 0, const_str_digest_98ef53659886a92196f89409f934b094 ); Py_INCREF( const_str_digest_98ef53659886a92196f89409f934b094 );
    const_str_digest_a435d77ed725e450cef4045b38c5685b = UNSTREAM_STRING( &constant_bin[ 50229 ], 112, 0 );
    const_str_digest_75d2ca363015e3973e72aeb526830bd2 = UNSTREAM_STRING( &constant_bin[ 50341 ], 28, 0 );
    const_str_plain_posix = UNSTREAM_STRING( &constant_bin[ 50369 ], 5, 1 );
    const_tuple_str_plain_new_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_new_tuple, 0, const_str_plain_new ); Py_INCREF( const_str_plain_new );
    const_str_digest_9d805c61f3cf68cc3326aa28b0821f84 = UNSTREAM_STRING( &constant_bin[ 50349 ], 19, 0 );
    const_str_digest_4f145f473d4c24c6d64b56a677d9761b = UNSTREAM_STRING( &constant_bin[ 50374 ], 64, 0 );
    const_str_plain_nt = UNSTREAM_STRING( &constant_bin[ 204 ], 2, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Crypto$Random$OSRNG( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_8eed2a392188bbbe4b3eea363210f120;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_4f145f473d4c24c6d64b56a677d9761b;
    codeobj_8eed2a392188bbbe4b3eea363210f120 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_75d2ca363015e3973e72aeb526830bd2, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Crypto$Random$OSRNG =
{
    PyModuleDef_HEAD_INIT,
    "Crypto.Random.OSRNG",   /* m_name */
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

MOD_INIT_DECL( Crypto$Random$OSRNG )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto$Random$OSRNG );
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
    puts("Crypto.Random.OSRNG: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.Random.OSRNG: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initCrypto$Random$OSRNG" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto$Random$OSRNG = Py_InitModule4(
        "Crypto.Random.OSRNG",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Crypto$Random$OSRNG = PyModule_Create( &mdef_Crypto$Random$OSRNG );
#endif

    moduledict_Crypto$Random$OSRNG = MODULE_DICT( module_Crypto$Random$OSRNG );

    CHECK_OBJECT( module_Crypto$Random$OSRNG );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_9d805c61f3cf68cc3326aa28b0821f84, module_Crypto$Random$OSRNG );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Crypto$Random$OSRNG, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    struct Nuitka_FrameObject *frame_8eed2a392188bbbe4b3eea363210f120;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_a435d77ed725e450cef4045b38c5685b;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_4f145f473d4c24c6d64b56a677d9761b;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_98ef53659886a92196f89409f934b094_list );
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$OSRNG, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_9d805c61f3cf68cc3326aa28b0821f84;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_digest_10c675d39d154a59cf6207a839b0661f;
    UPDATE_STRING_DICT0( moduledict_Crypto$Random$OSRNG, (Nuitka_StringObject *)const_str_plain___revision__, tmp_assign_source_5 );
    // Frame without reuse.
    frame_8eed2a392188bbbe4b3eea363210f120 = MAKE_MODULE_FRAME( codeobj_8eed2a392188bbbe4b3eea363210f120, module_Crypto$Random$OSRNG );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_8eed2a392188bbbe4b3eea363210f120 );
    assert( Py_REFCNT( frame_8eed2a392188bbbe4b3eea363210f120 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_os;
    tmp_globals_name_1 = (PyObject *)moduledict_Crypto$Random$OSRNG;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    frame_8eed2a392188bbbe4b3eea363210f120->m_frame.f_lineno = 29;
    tmp_assign_source_6 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$OSRNG, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_6 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$OSRNG, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 31;

        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_name );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_posix;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 31;

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
    tmp_name_name_2 = const_str_digest_f14b663be9f0bf90ccebd098b9687874;
    tmp_globals_name_2 = (PyObject *)moduledict_Crypto$Random$OSRNG;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_new_tuple;
    frame_8eed2a392188bbbe4b3eea363210f120->m_frame.f_lineno = 32;
    tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_new );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$OSRNG, (Nuitka_StringObject *)const_str_plain_new, tmp_assign_source_7 );
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$OSRNG, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 33;

        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_name );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_str_plain_nt;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 33;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_name_name_3 = const_str_digest_57bef3f6a897874e5c439116c59ee540;
    tmp_globals_name_3 = (PyObject *)moduledict_Crypto$Random$OSRNG;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_new_tuple;
    frame_8eed2a392188bbbe4b3eea363210f120->m_frame.f_lineno = 34;
    tmp_import_name_from_2 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_new );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$OSRNG, (Nuitka_StringObject *)const_str_plain_new, tmp_assign_source_8 );
    goto branch_end_2;
    branch_no_2:;
    tmp_hasattr_source_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$Random$OSRNG, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_hasattr_source_1 == NULL ))
    {
        tmp_hasattr_source_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_hasattr_source_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 35;

        goto frame_exception_exit_1;
    }

    tmp_hasattr_attr_1 = const_str_plain_urandom;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_name_name_4 = const_str_digest_e32a9f566e3be35b10436f5e6301eafb;
    tmp_globals_name_4 = (PyObject *)moduledict_Crypto$Random$OSRNG;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_new_tuple;
    frame_8eed2a392188bbbe4b3eea363210f120->m_frame.f_lineno = 36;
    tmp_import_name_from_3 = IMPORT_MODULE4( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_new );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$Random$OSRNG, (Nuitka_StringObject *)const_str_plain_new, tmp_assign_source_9 );
    goto branch_end_3;
    branch_no_3:;
    tmp_make_exception_arg_1 = const_str_digest_a0d2077fed3e3bb5283130f6b7223263;
    frame_8eed2a392188bbbe4b3eea363210f120->m_frame.f_lineno = 38;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ImportError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 38;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );

    goto frame_exception_exit_1;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8eed2a392188bbbe4b3eea363210f120 );
#endif
    popFrameStack();

    assertFrameObject( frame_8eed2a392188bbbe4b3eea363210f120 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8eed2a392188bbbe4b3eea363210f120 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8eed2a392188bbbe4b3eea363210f120, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8eed2a392188bbbe4b3eea363210f120->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8eed2a392188bbbe4b3eea363210f120, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_Crypto$Random$OSRNG );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
