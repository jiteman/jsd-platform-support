#pragma once


#define JSD_UNKNOWN_STRING_LITERAL		"unknown"
#define JSD_UNKNOWN_LITERAL			-1
#define JSD_DUMMY_DEFINE				-1
#define JSD_C_TRUE						1
#define JSD_C_FALSE					0


#include "platform_detection/compilers/cpp_preprocessor_boolean_values_support.h"


#if defined( JSD_CPP_PREPROCESSOR_SUPPORTS_BOOLEAN_VALUES )
	#define JSD_CPP_TRUE				true
	#define	JSD_CPP_FALSE				false

#else
	#define JSD_CPP_TRUE				JSD_C_TRUE
	#define	JSD_CPP_FALSE				JSD_C_FALSE

#endif
