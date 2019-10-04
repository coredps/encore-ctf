/* Generated code for Python source for module 'Crypto.pct_warnings'
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

/* The _module_Crypto$pct_warnings is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$pct_warnings;
PyDictObject *moduledict_Crypto$pct_warnings;

/* The module constants used, if any. */
static PyObject *const_str_plain__warnings;
static PyObject *const_str_digest_0db240bf5345c3d4b2f3f21ac8755a6a;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_digest_81d3fa50b1a7ea12d42f366d0f6fc733;
extern PyObject *const_str_digest_9d234be5735c76ce8a4d0c7014a1d635;
static PyObject *const_tuple_str_plain_always_tuple;
static PyObject *const_str_plain_CryptoWarning;
static PyObject *const_str_plain_always;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_CryptoRuntimeWarning;
static PyObject *const_str_digest_9ae4ea33c6c9b82597be23b36eda00b1;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_filterwarnings;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_GetRandomNumber_DeprecationWarning;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_PowmInsecureWarning;
static PyObject *const_str_digest_3fb0f3f83948deac8aefcf638d94cf9f;
static PyObject *const_str_digest_753369274f51681ba3982674f9e194bd;
extern PyObject *const_str_plain_ClockRewindWarning;
static PyObject *const_str_digest_c984fe62dcb037fb12320a5a47b23dba;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_RandomPool_DeprecationWarning;
static PyObject *const_str_plain_Warning;
static PyObject *const_str_plain_category;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_append;
static PyObject *const_str_digest_fd830f1053d4e181a3e1322babb018c4;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_DeprecationWarning;
static PyObject *const_str_plain_CryptoDeprecationWarning;
static PyObject *const_str_digest_ce5de9ddbe5e7bfab39ddd4c53484b46;
static PyObject *const_str_plain_RuntimeWarning;
static PyObject *const_str_digest_28dad2a7e59b0be9b17cefb800350e01;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain__warnings = UNSTREAM_STRING( &constant_bin[ 118728 ], 9, 1 );
    const_str_digest_0db240bf5345c3d4b2f3f21ac8755a6a = UNSTREAM_STRING( &constant_bin[ 118737 ], 32, 0 );
    const_str_digest_81d3fa50b1a7ea12d42f366d0f6fc733 = UNSTREAM_STRING( &constant_bin[ 118769 ], 38, 0 );
    const_tuple_str_plain_always_tuple = PyTuple_New( 1 );
    const_str_plain_always = UNSTREAM_STRING( &constant_bin[ 11520 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_always_tuple, 0, const_str_plain_always ); Py_INCREF( const_str_plain_always );
    const_str_plain_CryptoWarning = UNSTREAM_STRING( &constant_bin[ 118807 ], 13, 1 );
    const_str_plain_CryptoRuntimeWarning = UNSTREAM_STRING( &constant_bin[ 118820 ], 20, 1 );
    const_str_digest_9ae4ea33c6c9b82597be23b36eda00b1 = UNSTREAM_STRING( &constant_bin[ 118840 ], 55, 0 );
    const_str_plain_filterwarnings = UNSTREAM_STRING( &constant_bin[ 118895 ], 14, 1 );
    const_str_digest_3fb0f3f83948deac8aefcf638d94cf9f = UNSTREAM_STRING( &constant_bin[ 118909 ], 50, 0 );
    const_str_digest_753369274f51681ba3982674f9e194bd = UNSTREAM_STRING( &constant_bin[ 118959 ], 34, 0 );
    const_str_digest_c984fe62dcb037fb12320a5a47b23dba = UNSTREAM_STRING( &constant_bin[ 118993 ], 60, 0 );
    const_str_plain_RandomPool_DeprecationWarning = UNSTREAM_STRING( &constant_bin[ 119053 ], 29, 1 );
    const_str_plain_Warning = UNSTREAM_STRING( &constant_bin[ 118794 ], 7, 1 );
    const_str_plain_category = UNSTREAM_STRING( &constant_bin[ 119082 ], 8, 1 );
    const_str_digest_fd830f1053d4e181a3e1322babb018c4 = UNSTREAM_STRING( &constant_bin[ 119090 ], 56, 0 );
    const_str_plain_CryptoDeprecationWarning = UNSTREAM_STRING( &constant_bin[ 119146 ], 24, 1 );
    const_str_digest_ce5de9ddbe5e7bfab39ddd4c53484b46 = UNSTREAM_STRING( &constant_bin[ 119170 ], 58, 0 );
    const_str_plain_RuntimeWarning = UNSTREAM_STRING( &constant_bin[ 118826 ], 14, 1 );
    const_str_digest_28dad2a7e59b0be9b17cefb800350e01 = UNSTREAM_STRING( &constant_bin[ 119228 ], 28, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Crypto$pct_warnings( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_3aee19159c6298d33d7024852d7282bc;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_9ae4ea33c6c9b82597be23b36eda00b1;
    codeobj_3aee19159c6298d33d7024852d7282bc = MAKE_CODEOBJ( module_filename_obj, const_str_digest_28dad2a7e59b0be9b17cefb800350e01, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Crypto$pct_warnings =
{
    PyModuleDef_HEAD_INIT,
    "Crypto.pct_warnings",   /* m_name */
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

MOD_INIT_DECL( Crypto$pct_warnings )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto$pct_warnings );
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
    puts("Crypto.pct_warnings: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.pct_warnings: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initCrypto$pct_warnings" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto$pct_warnings = Py_InitModule4(
        "Crypto.pct_warnings",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Crypto$pct_warnings = PyModule_Create( &mdef_Crypto$pct_warnings );
#endif

    moduledict_Crypto$pct_warnings = MODULE_DICT( module_Crypto$pct_warnings );

    CHECK_OBJECT( module_Crypto$pct_warnings );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_9d234be5735c76ce8a4d0c7014a1d635, module_Crypto$pct_warnings );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Crypto$pct_warnings, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Crypto$pct_warnings, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_Crypto$pct_warnings, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_1_var___module__ = NULL;
    PyObject *outline_1_var___doc__ = NULL;
    PyObject *outline_2_var___module__ = NULL;
    PyObject *outline_2_var___doc__ = NULL;
    PyObject *outline_3_var___module__ = NULL;
    PyObject *outline_3_var___doc__ = NULL;
    PyObject *outline_4_var___module__ = NULL;
    PyObject *outline_4_var___doc__ = NULL;
    PyObject *outline_5_var___module__ = NULL;
    PyObject *outline_5_var___doc__ = NULL;
    PyObject *outline_6_var___module__ = NULL;
    PyObject *outline_6_var___doc__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class = NULL;
    PyObject *tmp_class_creation_4__class_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__class = NULL;
    PyObject *tmp_class_creation_5__class_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__class = NULL;
    PyObject *tmp_class_creation_6__class_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__class = NULL;
    PyObject *tmp_class_creation_7__class_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
    PyObject *tmp_select_metaclass_3__base = NULL;
    PyObject *tmp_select_metaclass_4__base = NULL;
    PyObject *tmp_select_metaclass_5__base = NULL;
    PyObject *tmp_select_metaclass_6__base = NULL;
    PyObject *tmp_select_metaclass_7__base = NULL;
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
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
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
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
    PyObject *tmp_args_element_name_21;
    PyObject *tmp_args_name_1;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_In_7;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
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
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_name_6;
    PyObject *tmp_dict_name_7;
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
    PyObject *tmp_globals_name_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
    PyObject *tmp_key_name_6;
    PyObject *tmp_key_name_7;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_outline_return_value_4;
    PyObject *tmp_outline_return_value_5;
    PyObject *tmp_outline_return_value_6;
    PyObject *tmp_outline_return_value_7;
    PyObject *tmp_outline_return_value_8;
    PyObject *tmp_outline_return_value_9;
    PyObject *tmp_outline_return_value_10;
    PyObject *tmp_outline_return_value_11;
    PyObject *tmp_outline_return_value_12;
    PyObject *tmp_outline_return_value_13;
    PyObject *tmp_outline_return_value_14;
    int tmp_res;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    PyObject *tmp_type_arg_4;
    PyObject *tmp_type_arg_5;
    PyObject *tmp_type_arg_6;
    PyObject *tmp_type_arg_7;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    struct Nuitka_FrameObject *frame_3aee19159c6298d33d7024852d7282bc;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    tmp_outline_return_value_5 = NULL;
    tmp_outline_return_value_6 = NULL;
    tmp_outline_return_value_7 = NULL;
    tmp_outline_return_value_8 = NULL;
    tmp_outline_return_value_9 = NULL;
    tmp_outline_return_value_10 = NULL;
    tmp_outline_return_value_11 = NULL;
    tmp_outline_return_value_12 = NULL;
    tmp_outline_return_value_13 = NULL;
    tmp_outline_return_value_14 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$pct_warnings, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_9ae4ea33c6c9b82597be23b36eda00b1;
    UPDATE_STRING_DICT0( moduledict_Crypto$pct_warnings, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Crypto$pct_warnings, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_3aee19159c6298d33d7024852d7282bc = MAKE_MODULE_FRAME( codeobj_3aee19159c6298d33d7024852d7282bc, module_Crypto$pct_warnings );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_3aee19159c6298d33d7024852d7282bc );
    assert( Py_REFCNT( frame_3aee19159c6298d33d7024852d7282bc ) == 2 );

    // Framed code:
    // Tried code:
    tmp_assign_source_4 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_Crypto$pct_warnings, (Nuitka_StringObject *)const_str_plain_Warning );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Warning" );
        exception_tb = NULL;

        exception_lineno = 30;

        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_4, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_4;

    tmp_assign_source_6 = const_str_digest_9d234be5735c76ce8a4d0c7014a1d635;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_6 );
    outline_0_var___module__ = tmp_assign_source_6;

    tmp_assign_source_7 = const_str_digest_0db240bf5345c3d4b2f3f21ac8755a6a;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_7 );
    outline_0_var___doc__ = tmp_assign_source_7;

    // Tried code:
    tmp_outline_return_value_1 = _PyDict_NewPresized( 2 );
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
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___doc__ );
    Py_DECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    goto outline_result_1;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___doc__ );
    Py_DECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_5 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_5;

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
    tmp_assign_source_8 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_1;
    }
    assert( tmp_select_metaclass_1__base == NULL );
    tmp_select_metaclass_1__base = tmp_assign_source_9;

    // Tried code:
    // Tried code:
    tmp_source_name_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_outline_return_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_outline_return_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
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
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
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
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    outline_result_2:;
    tmp_assign_source_8 = tmp_outline_return_value_2;
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_8;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_CryptoWarning;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_3aee19159c6298d33d7024852d7282bc->m_frame.f_lineno = 30;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_10;

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
    tmp_assign_source_11 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_11 );
    UPDATE_STRING_DICT0( moduledict_Crypto$pct_warnings, (Nuitka_StringObject *)const_str_plain_CryptoWarning, tmp_assign_source_11 );
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

    // Tried code:
    tmp_assign_source_12 = PyTuple_New( 2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$pct_warnings, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "DeprecationWarning" );
        exception_tb = NULL;

        exception_lineno = 33;

        goto try_except_handler_5;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_12, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_Crypto$pct_warnings, (Nuitka_StringObject *)const_str_plain_CryptoWarning );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CryptoWarning );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "CryptoWarning" );
        exception_tb = NULL;

        exception_lineno = 33;

        goto try_except_handler_5;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_12, 1, tmp_tuple_element_2 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_12;

    tmp_assign_source_14 = const_str_digest_9d234be5735c76ce8a4d0c7014a1d635;
    assert( outline_1_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_14 );
    outline_1_var___module__ = tmp_assign_source_14;

    tmp_assign_source_15 = const_str_digest_81d3fa50b1a7ea12d42f366d0f6fc733;
    assert( outline_1_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_15 );
    outline_1_var___doc__ = tmp_assign_source_15;

    // Tried code:
    tmp_outline_return_value_3 = _PyDict_NewPresized( 2 );
    tmp_dict_value_3 = outline_1_var___module__;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = outline_1_var___doc__;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain___doc__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
    CHECK_OBJECT( (PyObject *)outline_1_var___module__ );
    Py_DECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___doc__ );
    Py_DECREF( outline_1_var___doc__ );
    outline_1_var___doc__ = NULL;

    goto outline_result_3;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_1_var___module__ );
    Py_DECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___doc__ );
    Py_DECREF( outline_1_var___doc__ );
    outline_1_var___doc__ = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    outline_result_3:;
    tmp_assign_source_13 = tmp_outline_return_value_3;
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_13;

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
    tmp_assign_source_16 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_5;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_subscribed_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_0;
    tmp_assign_source_17 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_5;
    }
    assert( tmp_select_metaclass_2__base == NULL );
    tmp_select_metaclass_2__base = tmp_assign_source_17;

    // Tried code:
    // Tried code:
    tmp_source_name_2 = tmp_select_metaclass_2__base;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_outline_return_value_4 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
    if ( tmp_outline_return_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_8;
    }
    goto try_return_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_3 );
    Py_XDECREF( exception_keeper_value_3 );
    Py_XDECREF( exception_keeper_tb_3 );
    tmp_type_arg_2 = tmp_select_metaclass_2__base;

    CHECK_OBJECT( tmp_type_arg_2 );
    tmp_outline_return_value_4 = BUILTIN_TYPE1( tmp_type_arg_2 );
    assert( tmp_outline_return_value_4 != NULL );
    goto try_return_handler_7;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_7:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
    Py_DECREF( tmp_select_metaclass_2__base );
    tmp_select_metaclass_2__base = NULL;

    goto outline_result_4;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
    Py_DECREF( tmp_select_metaclass_2__base );
    tmp_select_metaclass_2__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    outline_result_4:;
    tmp_assign_source_16 = tmp_outline_return_value_4;
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_16;

    tmp_called_name_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_4 = const_str_plain_CryptoDeprecationWarning;
    tmp_args_element_name_5 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_3aee19159c6298d33d7024852d7282bc->m_frame.f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_5;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_18;

    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict );
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
    try_end_2:;
    tmp_assign_source_19 = tmp_class_creation_2__class;

    CHECK_OBJECT( tmp_assign_source_19 );
    UPDATE_STRING_DICT0( moduledict_Crypto$pct_warnings, (Nuitka_StringObject *)const_str_plain_CryptoDeprecationWarning, tmp_assign_source_19 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class );
    Py_DECREF( tmp_class_creation_2__class );
    tmp_class_creation_2__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Tried code:
    tmp_assign_source_20 = PyTuple_New( 2 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_Crypto$pct_warnings, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_20 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
        exception_tb = NULL;

        exception_lineno = 36;

        goto try_except_handler_9;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_20, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_Crypto$pct_warnings, (Nuitka_StringObject *)const_str_plain_CryptoWarning );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CryptoWarning );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_20 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "CryptoWarning" );
        exception_tb = NULL;

        exception_lineno = 36;

        goto try_except_handler_9;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_20, 1, tmp_tuple_element_3 );
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_20;

    tmp_assign_source_22 = const_str_digest_9d234be5735c76ce8a4d0c7014a1d635;
    assert( outline_2_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_22 );
    outline_2_var___module__ = tmp_assign_source_22;

    tmp_assign_source_23 = const_str_digest_753369274f51681ba3982674f9e194bd;
    assert( outline_2_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_23 );
    outline_2_var___doc__ = tmp_assign_source_23;

    // Tried code:
    tmp_outline_return_value_5 = _PyDict_NewPresized( 2 );
    tmp_dict_value_5 = outline_2_var___module__;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_5, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = outline_2_var___doc__;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain___doc__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_5, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_10;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_10:;
    CHECK_OBJECT( (PyObject *)outline_2_var___module__ );
    Py_DECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var___doc__ );
    Py_DECREF( outline_2_var___doc__ );
    outline_2_var___doc__ = NULL;

    goto outline_result_5;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_2_var___module__ );
    Py_DECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var___doc__ );
    Py_DECREF( outline_2_var___doc__ );
    outline_2_var___doc__ = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    outline_result_5:;
    tmp_assign_source_21 = tmp_outline_return_value_5;
    assert( tmp_class_creation_3__class_dict == NULL );
    tmp_class_creation_3__class_dict = tmp_assign_source_21;

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
    tmp_assign_source_24 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_9;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_subscribed_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = const_int_0;
    tmp_assign_source_25 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_9;
    }
    assert( tmp_select_metaclass_3__base == NULL );
    tmp_select_metaclass_3__base = tmp_assign_source_25;

    // Tried code:
    // Tried code:
    tmp_source_name_3 = tmp_select_metaclass_3__base;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_outline_return_value_6 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_outline_return_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_12;
    }
    goto try_return_handler_11;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_5 );
    Py_XDECREF( exception_keeper_value_5 );
    Py_XDECREF( exception_keeper_tb_5 );
    tmp_type_arg_3 = tmp_select_metaclass_3__base;

    CHECK_OBJECT( tmp_type_arg_3 );
    tmp_outline_return_value_6 = BUILTIN_TYPE1( tmp_type_arg_3 );
    assert( tmp_outline_return_value_6 != NULL );
    goto try_return_handler_11;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_11:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
    Py_DECREF( tmp_select_metaclass_3__base );
    tmp_select_metaclass_3__base = NULL;

    goto outline_result_6;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
    Py_DECREF( tmp_select_metaclass_3__base );
    tmp_select_metaclass_3__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    outline_result_6:;
    tmp_assign_source_24 = tmp_outline_return_value_6;
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_24;

    tmp_called_name_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_element_name_7 = const_str_plain_CryptoRuntimeWarning;
    tmp_args_element_name_8 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_args_element_name_8 );
    tmp_args_element_name_9 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_args_element_name_9 );
    frame_3aee19159c6298d33d7024852d7282bc->m_frame.f_lineno = 36;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_9;
    }
    assert( tmp_class_creation_3__class == NULL );
    tmp_class_creation_3__class = tmp_assign_source_26;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    tmp_assign_source_27 = tmp_class_creation_3__class;

    CHECK_OBJECT( tmp_assign_source_27 );
    UPDATE_STRING_DICT0( moduledict_Crypto$pct_warnings, (Nuitka_StringObject *)const_str_plain_CryptoRuntimeWarning, tmp_assign_source_27 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class );
    Py_DECREF( tmp_class_creation_3__class );
    tmp_class_creation_3__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Tried code:
    tmp_assign_source_28 = PyTuple_New( 1 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_Crypto$pct_warnings, (Nuitka_StringObject *)const_str_plain_CryptoDeprecationWarning );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CryptoDeprecationWarning );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_28 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "CryptoDeprecationWarning" );
        exception_tb = NULL;

        exception_lineno = 43;

        goto try_except_handler_13;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_28, 0, tmp_tuple_element_4 );
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_28;

    tmp_assign_source_30 = const_str_digest_9d234be5735c76ce8a4d0c7014a1d635;
    assert( outline_3_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_30 );
    outline_3_var___module__ = tmp_assign_source_30;

    tmp_assign_source_31 = const_str_digest_c984fe62dcb037fb12320a5a47b23dba;
    assert( outline_3_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_31 );
    outline_3_var___doc__ = tmp_assign_source_31;

    // Tried code:
    tmp_outline_return_value_7 = _PyDict_NewPresized( 2 );
    tmp_dict_value_7 = outline_3_var___module__;

    CHECK_OBJECT( tmp_dict_value_7 );
    tmp_dict_key_7 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_7, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_8 = outline_3_var___doc__;

    CHECK_OBJECT( tmp_dict_value_8 );
    tmp_dict_key_8 = const_str_plain___doc__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_7, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_14;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_14:;
    CHECK_OBJECT( (PyObject *)outline_3_var___module__ );
    Py_DECREF( outline_3_var___module__ );
    outline_3_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_3_var___doc__ );
    Py_DECREF( outline_3_var___doc__ );
    outline_3_var___doc__ = NULL;

    goto outline_result_7;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_3_var___module__ );
    Py_DECREF( outline_3_var___module__ );
    outline_3_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_3_var___doc__ );
    Py_DECREF( outline_3_var___doc__ );
    outline_3_var___doc__ = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    outline_result_7:;
    tmp_assign_source_29 = tmp_outline_return_value_7;
    assert( tmp_class_creation_4__class_dict == NULL );
    tmp_class_creation_4__class_dict = tmp_assign_source_29;

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
    tmp_assign_source_32 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_13;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_subscribed_name_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_subscribed_name_4 );
    tmp_subscript_name_4 = const_int_0;
    tmp_assign_source_33 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_13;
    }
    assert( tmp_select_metaclass_4__base == NULL );
    tmp_select_metaclass_4__base = tmp_assign_source_33;

    // Tried code:
    // Tried code:
    tmp_source_name_4 = tmp_select_metaclass_4__base;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_outline_return_value_8 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
    if ( tmp_outline_return_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_16;
    }
    goto try_return_handler_15;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_7 );
    Py_XDECREF( exception_keeper_value_7 );
    Py_XDECREF( exception_keeper_tb_7 );
    tmp_type_arg_4 = tmp_select_metaclass_4__base;

    CHECK_OBJECT( tmp_type_arg_4 );
    tmp_outline_return_value_8 = BUILTIN_TYPE1( tmp_type_arg_4 );
    assert( tmp_outline_return_value_8 != NULL );
    goto try_return_handler_15;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_15:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
    Py_DECREF( tmp_select_metaclass_4__base );
    tmp_select_metaclass_4__base = NULL;

    goto outline_result_8;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
    Py_DECREF( tmp_select_metaclass_4__base );
    tmp_select_metaclass_4__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    outline_result_8:;
    tmp_assign_source_32 = tmp_outline_return_value_8;
    condexpr_end_4:;
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_32;

    tmp_called_name_4 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_args_element_name_10 = const_str_plain_RandomPool_DeprecationWarning;
    tmp_args_element_name_11 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_args_element_name_11 );
    tmp_args_element_name_12 = tmp_class_creation_4__class_dict;

    CHECK_OBJECT( tmp_args_element_name_12 );
    frame_3aee19159c6298d33d7024852d7282bc->m_frame.f_lineno = 43;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_13;
    }
    assert( tmp_class_creation_4__class == NULL );
    tmp_class_creation_4__class = tmp_assign_source_34;

    goto try_end_4;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    tmp_assign_source_35 = tmp_class_creation_4__class;

    CHECK_OBJECT( tmp_assign_source_35 );
    UPDATE_STRING_DICT0( moduledict_Crypto$pct_warnings, (Nuitka_StringObject *)const_str_plain_RandomPool_DeprecationWarning, tmp_assign_source_35 );
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

    // Tried code:
    tmp_assign_source_36 = PyTuple_New( 1 );
    tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_Crypto$pct_warnings, (Nuitka_StringObject *)const_str_plain_CryptoRuntimeWarning );

    if (unlikely( tmp_tuple_element_5 == NULL ))
    {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CryptoRuntimeWarning );
    }

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_36 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "CryptoRuntimeWarning" );
        exception_tb = NULL;

        exception_lineno = 46;

        goto try_except_handler_17;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_assign_source_36, 0, tmp_tuple_element_5 );
    assert( tmp_class_creation_5__bases == NULL );
    tmp_class_creation_5__bases = tmp_assign_source_36;

    tmp_assign_source_38 = const_str_digest_9d234be5735c76ce8a4d0c7014a1d635;
    assert( outline_4_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_38 );
    outline_4_var___module__ = tmp_assign_source_38;

    tmp_assign_source_39 = const_str_digest_3fb0f3f83948deac8aefcf638d94cf9f;
    assert( outline_4_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_39 );
    outline_4_var___doc__ = tmp_assign_source_39;

    // Tried code:
    tmp_outline_return_value_9 = _PyDict_NewPresized( 2 );
    tmp_dict_value_9 = outline_4_var___module__;

    CHECK_OBJECT( tmp_dict_value_9 );
    tmp_dict_key_9 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_9, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_10 = outline_4_var___doc__;

    CHECK_OBJECT( tmp_dict_value_10 );
    tmp_dict_key_10 = const_str_plain___doc__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_9, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_18;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_18:;
    CHECK_OBJECT( (PyObject *)outline_4_var___module__ );
    Py_DECREF( outline_4_var___module__ );
    outline_4_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_4_var___doc__ );
    Py_DECREF( outline_4_var___doc__ );
    outline_4_var___doc__ = NULL;

    goto outline_result_9;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_4_var___module__ );
    Py_DECREF( outline_4_var___module__ );
    outline_4_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_4_var___doc__ );
    Py_DECREF( outline_4_var___doc__ );
    outline_4_var___doc__ = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    outline_result_9:;
    tmp_assign_source_37 = tmp_outline_return_value_9;
    assert( tmp_class_creation_5__class_dict == NULL );
    tmp_class_creation_5__class_dict = tmp_assign_source_37;

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
    tmp_assign_source_40 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_17;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_subscribed_name_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_subscribed_name_5 );
    tmp_subscript_name_5 = const_int_0;
    tmp_assign_source_41 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_17;
    }
    assert( tmp_select_metaclass_5__base == NULL );
    tmp_select_metaclass_5__base = tmp_assign_source_41;

    // Tried code:
    // Tried code:
    tmp_source_name_5 = tmp_select_metaclass_5__base;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_outline_return_value_10 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_5 );
    if ( tmp_outline_return_value_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_20;
    }
    goto try_return_handler_19;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_9 );
    Py_XDECREF( exception_keeper_value_9 );
    Py_XDECREF( exception_keeper_tb_9 );
    tmp_type_arg_5 = tmp_select_metaclass_5__base;

    CHECK_OBJECT( tmp_type_arg_5 );
    tmp_outline_return_value_10 = BUILTIN_TYPE1( tmp_type_arg_5 );
    assert( tmp_outline_return_value_10 != NULL );
    goto try_return_handler_19;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_19:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_5__base );
    Py_DECREF( tmp_select_metaclass_5__base );
    tmp_select_metaclass_5__base = NULL;

    goto outline_result_10;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_5__base );
    Py_DECREF( tmp_select_metaclass_5__base );
    tmp_select_metaclass_5__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    outline_result_10:;
    tmp_assign_source_40 = tmp_outline_return_value_10;
    condexpr_end_5:;
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_40;

    tmp_called_name_5 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_5 );
    tmp_args_element_name_13 = const_str_plain_ClockRewindWarning;
    tmp_args_element_name_14 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_args_element_name_14 );
    tmp_args_element_name_15 = tmp_class_creation_5__class_dict;

    CHECK_OBJECT( tmp_args_element_name_15 );
    frame_3aee19159c6298d33d7024852d7282bc->m_frame.f_lineno = 46;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_17;
    }
    assert( tmp_class_creation_5__class == NULL );
    tmp_class_creation_5__class = tmp_assign_source_42;

    goto try_end_5;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    tmp_assign_source_43 = tmp_class_creation_5__class;

    CHECK_OBJECT( tmp_assign_source_43 );
    UPDATE_STRING_DICT0( moduledict_Crypto$pct_warnings, (Nuitka_StringObject *)const_str_plain_ClockRewindWarning, tmp_assign_source_43 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class );
    Py_DECREF( tmp_class_creation_5__class );
    tmp_class_creation_5__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__bases );
    Py_DECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_dict );
    Py_DECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    // Tried code:
    tmp_assign_source_44 = PyTuple_New( 1 );
    tmp_tuple_element_6 = GET_STRING_DICT_VALUE( moduledict_Crypto$pct_warnings, (Nuitka_StringObject *)const_str_plain_CryptoDeprecationWarning );

    if (unlikely( tmp_tuple_element_6 == NULL ))
    {
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CryptoDeprecationWarning );
    }

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_44 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "CryptoDeprecationWarning" );
        exception_tb = NULL;

        exception_lineno = 49;

        goto try_except_handler_21;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_assign_source_44, 0, tmp_tuple_element_6 );
    assert( tmp_class_creation_6__bases == NULL );
    tmp_class_creation_6__bases = tmp_assign_source_44;

    tmp_assign_source_46 = const_str_digest_9d234be5735c76ce8a4d0c7014a1d635;
    assert( outline_5_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_46 );
    outline_5_var___module__ = tmp_assign_source_46;

    tmp_assign_source_47 = const_str_digest_ce5de9ddbe5e7bfab39ddd4c53484b46;
    assert( outline_5_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_47 );
    outline_5_var___doc__ = tmp_assign_source_47;

    // Tried code:
    tmp_outline_return_value_11 = _PyDict_NewPresized( 2 );
    tmp_dict_value_11 = outline_5_var___module__;

    CHECK_OBJECT( tmp_dict_value_11 );
    tmp_dict_key_11 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_11, tmp_dict_key_11, tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_12 = outline_5_var___doc__;

    CHECK_OBJECT( tmp_dict_value_12 );
    tmp_dict_key_12 = const_str_plain___doc__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_11, tmp_dict_key_12, tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_22;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_22:;
    CHECK_OBJECT( (PyObject *)outline_5_var___module__ );
    Py_DECREF( outline_5_var___module__ );
    outline_5_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_5_var___doc__ );
    Py_DECREF( outline_5_var___doc__ );
    outline_5_var___doc__ = NULL;

    goto outline_result_11;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_5_var___module__ );
    Py_DECREF( outline_5_var___module__ );
    outline_5_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_5_var___doc__ );
    Py_DECREF( outline_5_var___doc__ );
    outline_5_var___doc__ = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    outline_result_11:;
    tmp_assign_source_45 = tmp_outline_return_value_11;
    assert( tmp_class_creation_6__class_dict == NULL );
    tmp_class_creation_6__class_dict = tmp_assign_source_45;

    tmp_compare_left_6 = const_str_plain___metaclass__;
    tmp_compare_right_6 = tmp_class_creation_6__class_dict;

    CHECK_OBJECT( tmp_compare_right_6 );
    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    assert( !(tmp_cmp_In_6 == -1) );
    if ( tmp_cmp_In_6 == 1 )
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_dict_name_6 = tmp_class_creation_6__class_dict;

    CHECK_OBJECT( tmp_dict_name_6 );
    tmp_key_name_6 = const_str_plain___metaclass__;
    tmp_assign_source_48 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_21;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_subscribed_name_6 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_subscribed_name_6 );
    tmp_subscript_name_6 = const_int_0;
    tmp_assign_source_49 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_21;
    }
    assert( tmp_select_metaclass_6__base == NULL );
    tmp_select_metaclass_6__base = tmp_assign_source_49;

    // Tried code:
    // Tried code:
    tmp_source_name_6 = tmp_select_metaclass_6__base;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_outline_return_value_12 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_6 );
    if ( tmp_outline_return_value_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_24;
    }
    goto try_return_handler_23;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_11 );
    Py_XDECREF( exception_keeper_value_11 );
    Py_XDECREF( exception_keeper_tb_11 );
    tmp_type_arg_6 = tmp_select_metaclass_6__base;

    CHECK_OBJECT( tmp_type_arg_6 );
    tmp_outline_return_value_12 = BUILTIN_TYPE1( tmp_type_arg_6 );
    assert( tmp_outline_return_value_12 != NULL );
    goto try_return_handler_23;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_23:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_6__base );
    Py_DECREF( tmp_select_metaclass_6__base );
    tmp_select_metaclass_6__base = NULL;

    goto outline_result_12;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_6__base );
    Py_DECREF( tmp_select_metaclass_6__base );
    tmp_select_metaclass_6__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    outline_result_12:;
    tmp_assign_source_48 = tmp_outline_return_value_12;
    condexpr_end_6:;
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_48;

    tmp_called_name_6 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_called_name_6 );
    tmp_args_element_name_16 = const_str_plain_GetRandomNumber_DeprecationWarning;
    tmp_args_element_name_17 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_args_element_name_17 );
    tmp_args_element_name_18 = tmp_class_creation_6__class_dict;

    CHECK_OBJECT( tmp_args_element_name_18 );
    frame_3aee19159c6298d33d7024852d7282bc->m_frame.f_lineno = 49;
    {
        PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
        tmp_assign_source_50 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
    }

    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_21;
    }
    assert( tmp_class_creation_6__class == NULL );
    tmp_class_creation_6__class = tmp_assign_source_50;

    goto try_end_6;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_class_creation_6__class_dict );
    tmp_class_creation_6__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    tmp_assign_source_51 = tmp_class_creation_6__class;

    CHECK_OBJECT( tmp_assign_source_51 );
    UPDATE_STRING_DICT0( moduledict_Crypto$pct_warnings, (Nuitka_StringObject *)const_str_plain_GetRandomNumber_DeprecationWarning, tmp_assign_source_51 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class );
    Py_DECREF( tmp_class_creation_6__class );
    tmp_class_creation_6__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__bases );
    Py_DECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_dict );
    Py_DECREF( tmp_class_creation_6__class_dict );
    tmp_class_creation_6__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__metaclass );
    Py_DECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    // Tried code:
    tmp_assign_source_52 = PyTuple_New( 1 );
    tmp_tuple_element_7 = GET_STRING_DICT_VALUE( moduledict_Crypto$pct_warnings, (Nuitka_StringObject *)const_str_plain_CryptoRuntimeWarning );

    if (unlikely( tmp_tuple_element_7 == NULL ))
    {
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CryptoRuntimeWarning );
    }

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_52 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "CryptoRuntimeWarning" );
        exception_tb = NULL;

        exception_lineno = 52;

        goto try_except_handler_25;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_assign_source_52, 0, tmp_tuple_element_7 );
    assert( tmp_class_creation_7__bases == NULL );
    tmp_class_creation_7__bases = tmp_assign_source_52;

    tmp_assign_source_54 = const_str_digest_9d234be5735c76ce8a4d0c7014a1d635;
    assert( outline_6_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_54 );
    outline_6_var___module__ = tmp_assign_source_54;

    tmp_assign_source_55 = const_str_digest_fd830f1053d4e181a3e1322babb018c4;
    assert( outline_6_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_55 );
    outline_6_var___doc__ = tmp_assign_source_55;

    // Tried code:
    tmp_outline_return_value_13 = _PyDict_NewPresized( 2 );
    tmp_dict_value_13 = outline_6_var___module__;

    CHECK_OBJECT( tmp_dict_value_13 );
    tmp_dict_key_13 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_13, tmp_dict_key_13, tmp_dict_value_13 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_14 = outline_6_var___doc__;

    CHECK_OBJECT( tmp_dict_value_14 );
    tmp_dict_key_14 = const_str_plain___doc__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_13, tmp_dict_key_14, tmp_dict_value_14 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_26;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_26:;
    CHECK_OBJECT( (PyObject *)outline_6_var___module__ );
    Py_DECREF( outline_6_var___module__ );
    outline_6_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_6_var___doc__ );
    Py_DECREF( outline_6_var___doc__ );
    outline_6_var___doc__ = NULL;

    goto outline_result_13;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_6_var___module__ );
    Py_DECREF( outline_6_var___module__ );
    outline_6_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_6_var___doc__ );
    Py_DECREF( outline_6_var___doc__ );
    outline_6_var___doc__ = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    outline_result_13:;
    tmp_assign_source_53 = tmp_outline_return_value_13;
    assert( tmp_class_creation_7__class_dict == NULL );
    tmp_class_creation_7__class_dict = tmp_assign_source_53;

    tmp_compare_left_7 = const_str_plain___metaclass__;
    tmp_compare_right_7 = tmp_class_creation_7__class_dict;

    CHECK_OBJECT( tmp_compare_right_7 );
    tmp_cmp_In_7 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    assert( !(tmp_cmp_In_7 == -1) );
    if ( tmp_cmp_In_7 == 1 )
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    tmp_dict_name_7 = tmp_class_creation_7__class_dict;

    CHECK_OBJECT( tmp_dict_name_7 );
    tmp_key_name_7 = const_str_plain___metaclass__;
    tmp_assign_source_56 = DICT_GET_ITEM( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto try_except_handler_25;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_subscribed_name_7 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_subscribed_name_7 );
    tmp_subscript_name_7 = const_int_0;
    tmp_assign_source_57 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto try_except_handler_25;
    }
    assert( tmp_select_metaclass_7__base == NULL );
    tmp_select_metaclass_7__base = tmp_assign_source_57;

    // Tried code:
    // Tried code:
    tmp_source_name_7 = tmp_select_metaclass_7__base;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_outline_return_value_14 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_7 );
    if ( tmp_outline_return_value_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto try_except_handler_28;
    }
    goto try_return_handler_27;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_13 );
    Py_XDECREF( exception_keeper_value_13 );
    Py_XDECREF( exception_keeper_tb_13 );
    tmp_type_arg_7 = tmp_select_metaclass_7__base;

    CHECK_OBJECT( tmp_type_arg_7 );
    tmp_outline_return_value_14 = BUILTIN_TYPE1( tmp_type_arg_7 );
    assert( tmp_outline_return_value_14 != NULL );
    goto try_return_handler_27;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_27:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_7__base );
    Py_DECREF( tmp_select_metaclass_7__base );
    tmp_select_metaclass_7__base = NULL;

    goto outline_result_14;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_7__base );
    Py_DECREF( tmp_select_metaclass_7__base );
    tmp_select_metaclass_7__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Crypto$pct_warnings );
    return MOD_RETURN_VALUE( NULL );
    outline_result_14:;
    tmp_assign_source_56 = tmp_outline_return_value_14;
    condexpr_end_7:;
    assert( tmp_class_creation_7__metaclass == NULL );
    tmp_class_creation_7__metaclass = tmp_assign_source_56;

    tmp_called_name_7 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_called_name_7 );
    tmp_args_element_name_19 = const_str_plain_PowmInsecureWarning;
    tmp_args_element_name_20 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_args_element_name_20 );
    tmp_args_element_name_21 = tmp_class_creation_7__class_dict;

    CHECK_OBJECT( tmp_args_element_name_21 );
    frame_3aee19159c6298d33d7024852d7282bc->m_frame.f_lineno = 52;
    {
        PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21 };
        tmp_assign_source_58 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
    }

    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto try_except_handler_25;
    }
    assert( tmp_class_creation_7__class == NULL );
    tmp_class_creation_7__class = tmp_assign_source_58;

    goto try_end_7;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_class_creation_7__class_dict );
    tmp_class_creation_7__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    tmp_assign_source_59 = tmp_class_creation_7__class;

    CHECK_OBJECT( tmp_assign_source_59 );
    UPDATE_STRING_DICT0( moduledict_Crypto$pct_warnings, (Nuitka_StringObject *)const_str_plain_PowmInsecureWarning, tmp_assign_source_59 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class );
    Py_DECREF( tmp_class_creation_7__class );
    tmp_class_creation_7__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__bases );
    Py_DECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_dict );
    Py_DECREF( tmp_class_creation_7__class_dict );
    tmp_class_creation_7__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__metaclass );
    Py_DECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    tmp_name_name_1 = const_str_plain_warnings;
    tmp_globals_name_1 = (PyObject *)moduledict_Crypto$pct_warnings;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    frame_3aee19159c6298d33d7024852d7282bc->m_frame.f_lineno = 57;
    tmp_assign_source_60 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Crypto$pct_warnings, (Nuitka_StringObject *)const_str_plain__warnings, tmp_assign_source_60 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_Crypto$pct_warnings, (Nuitka_StringObject *)const_str_plain__warnings );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__warnings );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_warnings" );
        exception_tb = NULL;

        exception_lineno = 58;

        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_filterwarnings );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = const_tuple_str_plain_always_tuple;
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_15 = GET_STRING_DICT_VALUE( moduledict_Crypto$pct_warnings, (Nuitka_StringObject *)const_str_plain_ClockRewindWarning );

    if (unlikely( tmp_dict_value_15 == NULL ))
    {
        tmp_dict_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ClockRewindWarning );
    }

    if ( tmp_dict_value_15 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ClockRewindWarning" );
        exception_tb = NULL;

        exception_lineno = 58;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_15 = const_str_plain_category;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_15, tmp_dict_value_15 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_16 = const_int_pos_1;
    tmp_dict_key_16 = const_str_plain_append;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_16, tmp_dict_value_16 );
    assert( !(tmp_res != 0) );
    frame_3aee19159c6298d33d7024852d7282bc->m_frame.f_lineno = 58;
    tmp_unused = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3aee19159c6298d33d7024852d7282bc );
#endif
    popFrameStack();

    assertFrameObject( frame_3aee19159c6298d33d7024852d7282bc );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3aee19159c6298d33d7024852d7282bc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3aee19159c6298d33d7024852d7282bc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3aee19159c6298d33d7024852d7282bc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3aee19159c6298d33d7024852d7282bc, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_Crypto$pct_warnings );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
