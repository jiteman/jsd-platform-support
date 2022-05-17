#pragma once


#include "linux_operating_system_detection.h"


#if !defined( JSD_LINUX_OPERATING_SYSTEM_IS_DETECTED )
	#error This file "jmsd/platform_support/platform_detection/operating_systems/Linux/linux_operating_system_information.h" is included, but no Linux operating system detected.

#endif


#define JSD_OPERATING_SYSTEM_TYPE	JSD_OPERATING_SYSTEM_TYPE_LINUX
#define JSD_OPERATING_SYSTEM_NAME	JSD_OPERATING_SYSTEM_NAME_LINUX
