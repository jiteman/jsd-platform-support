#pragma once


#include "gcc_compiler_detection.h"


#if !defined( JSD_GNU_CCPP_COMPILER_IS_DETECTED )
	#error This file "jmsd/platform_support/platform_detection/compilers/gccpp/gcc_compiler_information.h" is included, but there is no GCC compiler detected.

#endif


#define JSD_COMPILER_TYPE	JSD_COMPILER_TYPE_GCC_CCPP
#define JSD_COMPILER_NAME	JSD_COMPILER_NAME_GCC_CCPP


#if defined( __GNUC_PATCHLEVEL__ )
	#define JSD_COMPILER_VERSION	( __GNUC__ * 10000 + __GNUC_MINOR__ * 100 + __GNUC_PATCHLEVEL__ )

#else
	#define JSD_COMPILER_VERSION	(__GNUC__ * 10000 + __GNUC_MINOR__ * 100 )

#endif
