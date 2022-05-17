#pragma once


#if !defined( __cplusplus )
	#error This file "jmsd/platform_support/platform_detection/standards/cpp_language/cpp_standard_detection.h" is included, but not in C++ context.

#endif // #if !defined( __cplusplus )


#include "jmsd/platform_support/common_preprocessor_constants.h"


#define JSD_CPLUSPLUS98_VERSION_CONSTANT		199711L
#define JSD_CPLUSPLUS11_VERSION_CONSTANT		201103L
#define JSD_CPLUSPLUS14_VERSION_CONSTANT		201402L
#define JSD_CPLUSPLUS17_VERSION_CONSTANT_03	201703L
#define JSD_CPLUSPLUS17_VERSION_CONSTANT_04	201704L
#define JSD_CPLUSPLUS17_VERSION_CONSTANT_05	201705L
#define JSD_CPLUSPLUS20_VERSION_CONSTANT		202001L

#define JSD_CPLUSPLUS_IS_DEFINED				JSD_CPP_TRUE


#include "jmsd/platform_support/platform_detection/compiler_detection.h"
#include "jmsd/platform_support/platform_detection/compiler_information.h"


#if defined( JSD_MICROSOFT_VISUAL_CPP_COMPILER_IS_DETECTED ) && ( JSD_COMPILER_VERSION < JSD_MICROSOFT_VISUAL_CPP_COMPILER_VERSION_1920_VS2019 )
	#include "jmsd/platform_support/platform_detection/compilers/ms_visual_cpp/ms_vcpp_cpp_standard_detection_support.h"

#else
	#define JSD_CPLUSPLUS_VERSION_VALUE		__cplusplus

//	#define STRING2(x) #x
//	#define STRING(x) STRING2(x)
//	#pragma message(STRING(__cplusplus))
//	#error __cplusplus

#endif
