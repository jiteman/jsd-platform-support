#pragma once


#if defined( JSD_MEMORY_MODEL_DETECTION_IS_COMPLETED )
	#error This file "jmsd/platform_support/platform_detection/memory_models/memory_model_detection_actual.h" - memory model is already detected.

#endif


#include "jmsd/platform_support/common_preprocessor_constants.h"


#if !defined( JSD_COMPILER_DETECTION_IS_COMPLETED )
	#include "jmsd/platform_support/platform_detection/compiler_detection.h"
#endif

#if !defined( JSD_ARCHITECTURE_DETECTION_IS_COMPLETED )
	#include "jmsd/platform_support/platform_detection/architecture_detection.h"
#endif


#define JSD_MEMORY_MODEL_TYPE_UNKNOWN			0x01
#define JSD_MEMORY_MODEL_NAME_UNKNOWN			"Unknown"

// not used
#define JSD_MEMORY_MODEL_TYPE_MODEL_LP32		0x10
#define JSD_MEMORY_MODEL_NAME_MODEL_LP32		"LP32  char8 short16 int16 long32 longlong64 pointer32"

#define JSD_MEMORY_MODEL_TYPE_MODEL_ILP32		0x11
#define JSD_MEMORY_MODEL_NAME_MODEL_ILP32		"ILP32 char8 short16 int32 long32 longlong64 pointer32"
#define JSD_MEMORY_MODEL_TYPE_MODEL_LLP64		0x20
#define JSD_MEMORY_MODEL_NAME_MODEL_LLP64		"LLP64 char8 short16 int32 long32 longlong64 pointer64"
#define JSD_MEMORY_MODEL_TYPE_MODEL_LP64		0x21
#define JSD_MEMORY_MODEL_NAME_MODEL_LP64		"LP64  char8 short16 int32 long64 longlong64 pointer64"

// not supported
#define JSD_MEMORY_MODEL_TYPE_MODEL_ILP64		0x22
#define JSD_MEMORY_MODEL_NAME_MODEL_ILP64		"ILP64 char8 short16 int64 long64 longlong64 pointer64"


// detect LP64
// Linux 64bit memory model
#if !defined( JSD_MEMORY_MODEL_DETECTION_IS_COMPLETED )
	#include "LP64/memory_model_lp64_detection.h"

	#if JSD_MEMORY_MODEL_LP64_IS_DEFINED == JSD_CPP_TRUE
		#define JSD_MEMORY_MODEL_DETECTION_IS_COMPLETED	JSD_CPP_TRUE
		#define JSD_MEMORY_MODEL_TYPE						JSD_MEMORY_MODEL_TYPE_MODEL_LP64
		#define JSD_MEMORY_MODEL_NAME						JSD_MEMORY_MODEL_NAME_MODEL_LP64

	#endif // #if JSD_MEMORY_MODEL_LP64_IS_DEFINED == JSD_CPP_TRUE

#endif // #if !defined( JSD_MEMORY_MODEL_DETECTION_IS_COMPLETED )


// detect LLP64
// Microsoft Windows 64bit memory model
#if !defined( JSD_MEMORY_MODEL_DETECTION_IS_COMPLETED )
	#include "LLP64/memory_model_llp64_detection.h"

	#if JSD_MEMORY_MODEL_LLP64_IS_DEFINED == JSD_CPP_TRUE
		#define JSD_MEMORY_MODEL_DETECTION_IS_COMPLETED	JSD_CPP_TRUE
		#define JSD_MEMORY_MODEL_TYPE						JSD_MEMORY_MODEL_TYPE_MODEL_LLP64
		#define JSD_MEMORY_MODEL_NAME						JSD_MEMORY_MODEL_NAME_MODEL_LLP64

	#endif // #if JSD_MEMORY_MODEL_LLP64_IS_DEFINED == JSD_CPP_TRUE

#endif // #if !defined( JSD_MEMORY_MODEL_DETECTION_IS_COMPLETED )


// detect ILP32
// Linux and Microsoft Windows 32bit memory model
#if !defined( JSD_MEMORY_MODEL_DETECTION_IS_COMPLETED )
	#include "ILP32/memory_model_ilp32_detection.h"

	#if JSD_MEMORY_MODEL_ILP32_IS_DEFINED == JSD_CPP_TRUE
		#define JSD_MEMORY_MODEL_DETECTION_IS_COMPLETED	JSD_CPP_TRUE
		#define JSD_MEMORY_MODEL_TYPE						JSD_MEMORY_MODEL_TYPE_MODEL_ILP32
		#define JSD_MEMORY_MODEL_NAME						JSD_MEMORY_MODEL_NAME_MODEL_ILP32

	#endif // #if JSD_MEMORY_MODEL_ILP32_IS_DEFINED == JSD_CPP_TRUE

#endif // #if !defined( JSD_MEMORY_MODEL_DETECTION_IS_COMPLETED )


#if !defined( JSD_MEMORY_MODEL_DETECTION_IS_COMPLETED )
	#define JSD_MEMORY_MODEL_DETECTION_IS_COMPLETED	JSD_CPP_FALSE
	#define JSD_MEMORY_MODEL_TYPE						JSD_MEMORY_MODEL_TYPE_UNKNOWN
	#define JSD_MEMORY_MODEL_NAME						JSD_MEMORY_MODEL_NAME_UNKNOWN

	#error This file "jmsd/platform_support/platform_detection/memory_models/memory_model_detection_actual.h" - no memory model is detected
#endif
