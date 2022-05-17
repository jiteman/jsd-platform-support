#pragma once


#include "ms_vcpp_compiler_detection.h"


#if !defined( JSD_MICROSOFT_VISUAL_CPP_COMPILER_IS_DETECTED )
	#error This file "jmsd/platform_support/platform_detection/compilers/ms_visual_cpp/ms_vccp_cpp_standard_detection_support.h" is included, but MS Visual C++ compiler is not present.

#endif


#include "ms_vcpp_compiler_information.h"


#if JSD_COMPILER_VERSION < JSD_MICROSOFT_VISUAL_CPP_COMPILER_VERSION_1800_VS2013
	#error This file "jmsfl/environment_low/platforming/compilers/ms_visual_cpp/ms_vccp_cpp_standard_detection_support.h" - no support for compilers before MS Visual Studio 2013.

#elif JSD_COMPILER_VERSION < JSD_MICROSOFT_VISUAL_CPP_COMPILER_VERSION_1900_VS2015
	// MS Visual Studio 2013
	#define JSD_CPLUSPLUS_VERSION_VALUE		JSD_CPLUSPLUS98_VERSION_CONSTANT

#elif JSD_COMPILER_VERSION < JSD_MICROSOFT_VISUAL_CPP_COMPILER_VERSION_1910_VS2017
	// MS Visual Studio 2015
	#define JSD_CPLUSPLUS_VERSION_VALUE		JSD_CPLUSPLUS11_VERSION_CONSTANT

#elif JSD_COMPILER_VERSION < JSD_MICROSOFT_VISUAL_CPP_COMPILER_VERSION_1920_VS2019
	// MS Visual Studio 2017
	#define JSD_CPLUSPLUS_VERSION_VALUE		JSD_CPLUSPLUS17_VERSION_CONSTANT_03

#elif JSD_COMPILER_VERSION < JSD_MICROSOFT_VISUAL_CPP_COMPILER_VERSION_1924_VS2019
	// MS Visual Studio 2019
	#define JSD_CPLUSPLUS_VERSION_VALUE		JSD_CPLUSPLUS17_VERSION_CONSTANT_05

#elif JSD_COMPILER_VERSION < JSD_MICROSOFT_VISUAL_CPP_COMPILER_VERSION_LATEST
	// the plug for new versions
	#define JSD_CPLUSPLUS_VERSION_VALUE		JSD_CPLUSPLUS17_VERSION_CONSTANT_05
	#error Add new version of MSVS
#else
	#error This file "jmsd/platform_support/platform_detection/compilers/ms_visual_cpp/ms_vccp_cpp_standard_detection_support.h" - add support for latest compilers MS Visual Studio 2017.

#endif
