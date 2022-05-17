#pragma once


#include "jmsd/platform_support/common_preprocessor_constants.h"


#define JSD_OPERATING_SYSTEM_TYPE_UNKNOWN			0x01
#define JSD_OPERATING_SYSTEM_NAME_UNKNOWN			JSD_UNKNOWN_STRING_LITERAL
#define JSD_OPERATING_SYSTEM_TYPE_LINUX			0x02
#define JSD_OPERATING_SYSTEM_NAME_LINUX			"Linux"
#define JSD_OPERATING_SYSTEM_TYPE_MS_WINDOWS		0x03
#define JSD_OPERATING_SYSTEM_NAME_MS_WINDOWS		"Microsoft Windows"


#include "operating_system_detection_actual.h"


#if defined( JSD_LINUX_OPERATING_SYSTEM_IS_DETECTED )
	#include "Linux/linux_operating_system_information.h"

#elif defined( JSD_MICROSOFT_WINDOWS_OPERATING_SYSTEM_IS_DETECTED )
	#include "MS_Windows/ms_windows_operating_system_information.h"

#else
	#error This file "jmsd/platform_support/platforming/operating_systems/operating_system_information_actual.h" - no supported operating system infromation found.

#endif
