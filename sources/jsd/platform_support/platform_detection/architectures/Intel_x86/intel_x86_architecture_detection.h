#pragma once


#include "jmsd/platform_support/common_preprocessor_constants.h"


#if defined( i386 ) || defined( __i386 ) || defined( __i386__ ) || defined( _M_IX86 )
	#define JSD_ARCHITECTURE_IS_INTEL_X86				JSD_CPP_TRUE
	#define JSD_INTEL_X86_ARCHITECTURE_IS_DEFINED		JSD_CPP_TRUE

#else
	#define JSD_INTEL_X86_ARCHITECTURE_IS_DEFINED		JSD_CPP_FALSE

#endif
