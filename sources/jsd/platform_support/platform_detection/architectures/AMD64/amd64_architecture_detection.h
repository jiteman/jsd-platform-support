#pragma once


#include "jmsd/platform_support/common_preprocessor_constants.h"


#if defined( __amd64__ ) || defined( __amd64 ) || defined( __x86_64__ ) || defined( __x86_64 ) || defined( _M_X64 ) || defined( _M_AMD64 )
	#define JSD_ARCHITECTURE_IS_AMD64			JSD_CPP_TRUE
	#define JSD_AMD64_ARCHITECTURE_IS_DEFINED	JSD_CPP_TRUE

#else
	#define JSD_AMD64_ARCHITECTURE_IS_DEFINED	JSD_CPP_FALSE

#endif
