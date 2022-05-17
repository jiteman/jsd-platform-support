#pragma once


#include "platform_detection/compiler_detection.h"


#if defined( JSD_MICROSOFT_VISUAL_CPP_COMPILER_IS_DETECTED )

//#if !defined( JSD_APIENTRY_CONVENTION )
	//	#define JSD_APIENTRY_CONVENTION	__stdcall
	//#endif


	#if !defined( JSD_SHARED_EXPORT_CONVENTION )
		#define JSD_SHARED_EXPORT_CONVENTION	__declspec( dllexport )
	#endif


	#if !defined( JSD_SHARED_IMPORT_CONVENTION )
		#define JSD_SHARED_IMPORT_CONVENTION	__declspec( dllimport )
	#endif


#else // #if defined( JSD_MICROSOFT_VISUAL_CPP_COMPILER_IS_DETECTED ) // Another compiler (GCC/Linux) build

	#if !defined( JSD_APIENTRY_CONVENTION )
		#define JSD_APIENTRY_CONVENTION
	#endif


	#if !defined( JSD_SHARED_EXPORT_CONVENTION )
		#define JSD_SHARED_EXPORT_CONVENTION	__attribute__( ( visibility( "default" ) ) )
	#endif


	#if !defined( JSD_SHARED_IMPORT_CONVENTION )
		#define JSD_SHARED_IMPORT_CONVENTION	__attribute__( ( visibility( "default" ) ) )
	#endif


#endif
