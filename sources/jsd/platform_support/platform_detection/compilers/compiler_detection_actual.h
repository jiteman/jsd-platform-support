#pragma once


#if defined( JSD_COMPILER_DETECTION_IS_COMPLETED )
	#error This file "jmsd/platform_support/platform_detection/compilers/compiler_detection_actual.h" - compiler is already detected.

#endif

// detect GCC C/C++
#if !defined( JSD_COMPILER_DETECTION_IS_COMPLETED )
	#include "gccpp/gcc_compiler_detection.h"

	#if defined( JSD_GNU_CCPP_COMPILER_IS_DETECTED )
		#define JSD_COMPILER_DETECTION_IS_COMPLETED
	#endif // #if defined( JSD_GNU_CCPP_COMPILER_DETECTED )

#endif // #if !defined( JSD_COMPILER_DETECTION_IS_COMPLETED )


// detect Microsoft Visual C++
#if !defined( JSD_COMPILER_DETECTION_IS_COMPLETED )
	#include "ms_visual_cpp/ms_vcpp_compiler_detection.h"

	#if defined( JSD_MICROSOFT_VISUAL_CPP_COMPILER_IS_DETECTED )
		#define JSD_COMPILER_DETECTION_IS_COMPLETED

	#endif // #if defined( JSD_MICROSOFT_VISUAL_CPP_COMPILER_IS_DETECTED )

#endif // #if !defined( JSD_COMPILER_DETECTION_IS_COMPLETED )


// report of unsupported compiler
#if !defined( JSD_COMPILER_DETECTION_IS_COMPLETED )
	#error File this "jmsd/platform_support/platform_detection/compilers/compiler_detection_actual.h" - no supported compiler is detected.

#endif // #if !defined( JSD_COMPILER_DETECTION_IS_COMPLETED )
