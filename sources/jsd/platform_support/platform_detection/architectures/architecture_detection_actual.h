#pragma once


#if defined( JSD_ARCHITECTURE_DETECTION_IS_COMPLETED )
	#error This file "jmsd/platform_support/platform_detection/architectures/architecture_detection_actual.h" - architecture is already detected.

#endif

#define JSD_ARCHITECTURE_TYPE_UNKNOWN					0x01
#define JSD_ARCHITECTURE_NAME_UNKNOWN					JSD_UNKNOWN_STRING_LITERAL
#define JSD_ARCHITECTURE_TYPE_AMD64					0x02
#define JSD_ARCHITECTURE_NAME_AMD64					"AMD64"
#define JSD_ARCHITECTURE_TYPE_INTEL_X86				0x03
#define JSD_ARCHITECTURE_NAME_INTEL_X86				"Intel x86"


// detect AMD64
#if !defined( JSD_ARCHITECTURE_DETECTION_IS_COMPLETED )
	#include "AMD64/amd64_architecture_detection.h"

	#if JSD_AMD64_ARCHITECTURE_IS_DEFINED == JSD_CPP_TRUE
		#define JSD_ARCHITECTURE_DETECTION_IS_COMPLETED	JSD_CPP_TRUE
		#define JSD_ARCHITECTURE_TYPE						JSD_ARCHITECTURE_TYPE_AMD64
		#define JSD_ARCHITECTURE_NAME						JSD_ARCHITECTURE_NAME_AMD64

	#endif // #if JSD_AMD64_ARCHITECTURE_IS_DEFINED == JSD_CPP_TRUE

#endif // #if !defined( JSD_ARCHITECTURE_DETECTION_IS_COMPLETED )


// detect Intel x86
#if !defined( JSD_ARCHITECTURE_DETECTION_IS_COMPLETED )
	#include "Intel_x86/intel_x86_architecture_detection.h"

	#if JSD_INTEL_X86_ARCHITECTURE_IS_DEFINED == JSD_CPP_TRUE
		#define JSD_ARCHITECTURE_DETECTION_IS_COMPLETED	JSD_CPP_TRUE
		#define JSD_ARCHITECTURE_TYPE						JSD_ARCHITECTURE_TYPE_INTEL_X86
		#define JSD_ARCHITECTURE_NAME						JSD_ARCHITECTURE_NAME_INTEL_X86

	#endif // #if JSD_INTEL_X86_ARCHITECTURE_IS_DEFINED == JSD_CPP_TRUE

#endif // #if !defined( JSD_ARCHITECTURE_DETECTION_IS_COMPLETED )


// set unknown
#if !defined( JSD_ARCHITECTURE_DETECTION_IS_COMPLETED )
	#define JSD_ARCHITECTURE_DETECTION_IS_COMPLETED	JSD_CPP_FALSE
	#define JSD_ARCHITECTURE_TYPE						JSD_ARCHITECTURE_TYPE_UNKNOWN
	#define JSD_ARCHITECTURE_NAME						JSD_ARCHITECTURE_NAME_UNKNOWN

	#error This file "jmsd/platform_support/platform_detection/architectures/architecture_detection_actual.h" - no supported architecture is detected.
#endif // #if !defined( JSD_ARCHITECTURE_DETECTION_IS_COMPLETED )
