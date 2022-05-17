#pragma once


#if defined( __GNUC__ )
	#define JSD_GNU_CCPP_COMPILER_IS_DETECTED
	
#endif


// #if defined( __GNUC__ )
// 	#define JSD_COMPILER_IS_GNU_CCPP			JSD_CPP_TRUE
// 	#define JSD_GNU_CCPP_COMPILER_IS_DEFINED	JSD_CPP_TRUE
// 	
// 	#if defined( __GNUC_PATCHLEVEL__ )
// 		#define JSD_GNU_CCPP_COMPILER_VERSION_VALUE ( __GNUC__ * 10000 + __GNUC_MINOR__ * 100 + __GNUC_PATCHLEVEL__ )
// 	#else
// 		#define JSD_GNU_CCPP_COMPILER_VERSION_VALUE (__GNUC__ * 10000 + __GNUC_MINOR__ * 100 )
// 	#endif
// 	
// #else
// 	#define JSD_GNU_CCPP_COMPILER_IS_DEFINED	JSD_CPP_FALSE
// 	
// #endif
