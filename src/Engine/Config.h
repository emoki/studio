/****************************************************************************
**
** Copyright 2019 neuromore co
** Contact: https://neuromore.com/contact
**
** Commercial License Usage
** Licensees holding valid commercial neuromore licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and neuromore. For licensing terms
** and conditions see https://neuromore.com/licensing. For further
** information use the contact form at https://neuromore.com/contact.
**
** neuromore Public License Usage
** Alternatively, this file may be used under the terms of the neuromore
** Public License version 1 as published by neuromore co with exceptions as 
** appearing in the file neuromore-class-exception.md included in the 
** packaging of this file. Please review the following information to 
** ensure the neuromore Public License requirements will be met: 
** https://neuromore.com/npl
**
****************************************************************************/

#ifndef __NEUROMORE_ENGINECONFIG_H
#define __NEUROMORE_ENGINECONFIG_H

#include "Core/Config.h"
#include "Core/StandardHeaders.h"

// Branding (private for b2b)
#ifdef NEUROMORE_BRANDING
#include <Engine/ConfigPrivate.h>
#else
#define INCLUDE_DEVICE_TEST
#define INCLUDE_DEVICE_INTERAXON_MUSE
#define INCLUDE_DEVICE_SENSELABS_VERSUS
#define INCLUDE_DEVICE_OPENBCI
#define INCLUDE_DEVICE_ESENSESKINRESPONSE
#define INCLUDE_DEVICE_NEUROSITY_NOTION
#define INCLUDE_DEVICE_BRAINFLOW
#if defined(NEUROMORE_PLATFORM_WINDOWS)
  #define INCLUDE_DEVICE_EEMAGINE
  #define INCLUDE_DEVICE_MITSAR
  //#define INCLUDE_DEVICE_EMOTIV
  //#define INCLUDE_DEVICE_NEUROSKY_MINDWAVE
  //#define INCLUDE_DEVICE_TOBIIEYEX
  //#define INCLUDE_DEVICE_ACTICHAMP
  // X86 ONLY
  #if (defined(_M_IX86) || defined(_X86_) || defined(__i386__) || defined(__i686__))
    #define INCLUDE_DEVICE_BRAINMASTER
    //#define INCLUDE_DEVICE_ADVANCEDBRAINMONITORING
    //#define INCLUDE_DEVICE_BRAINQUIRY
  #endif
#elif defined(NEUROMORE_PLATFORM_LINUX)
  #define INCLUDE_DEVICE_EEMAGINE
#endif
#endif

// generic devices
#define INCLUDE_DEVICE_GENERIC_HEARTRATE
#define INCLUDE_DEVICE_GENERIC_ACCELEROMETER
#define INCLUDE_DEVICE_GENERIC_GYROSCOPE
#define INCLUDE_DEVICE_GENERIC_GEOPOSITION

// gamepad
#define INCLUDE_DEVICE_GAMEPAD

// others disabled
//#define INCLUDE_DEVICE_GENERIC_AUDIO

// memory categories
enum
{
	MEMCATEGORY_CORE							= 1,

	// FIXME rework the memcategories
	// signal processing
	MEMCATEGORY_CORE_CHANNEL					= 300,
	MEMCATEGORY_CORE_CHANNELPROCESSOR			= 301,
	MEMCATEGORY_CORE_CHANNELFILTER				= 302,
	MEMCATEGORY_CORE_CHANNELSTATISTICS			= 303,
	MEMCATEGORY_CORE_CHANNELRESAMPLER			= 304,
	MEMCATEGORY_CORE_MULTICHANNEL				= 305,
	MEMCATEGORY_CORE_SPNODE						= 306,
	MEMCATEGORY_CORE_CHANNELREADER				= 307,
	MEMCATEGORY_CORE_MULTICHANNELREADER			= 308,	// unused, see MultiChannel.h
	MEMCATEGORY_CORE_SPECTRUMANALYZER			= 310,
	MEMCATEGORY_CORE_SPECTRUMANALYZERSETTINGS	= 311,
	MEMCATEGORY_CORE_SPECTRUMCHANNEL			= 312,
	MEMCATEGORY_CORE_SPECTRUMPROCESSOR			= 313,
	MEMCATEGORY_CORE_SPECTRUMRESAMPLER			= 314,
	MEMCATEGORY_CORE_FFT						= 320,
	MEMCATEGORY_CORE_WINDOWFUNCTION				= 321,
	MEMCATEGORY_CORE_SAMPLEDATA					= 322,
	MEMCATEGORY_CORE_FREQUENCYBAND				= 323,
	MEMCATEGORY_CORE_SPECTRUM					= 324,
	MEMCATEGORY_CORE_HISTOGRAM					= 325,
	MEMCATEGORY_CORE_FILTER						= 330,
	MEMCATEGORY_CORE_FILTERBUFFER				= 331,
	MEMCATEGORY_CORE_HRV						= 332,

	// devices and sensors
	MEMCATEGORY_CORE_DEVICE						= 400,
	MEMCATEGORY_CORE_HEADSET					= 401,
	MEMCATEGORY_CORE_SENSOR						= 402,
	MEMCATEGORY_CORE_EEGELECTRODES				= 403,

	MEMCATEGORY_DRIVER_MANAGER					= 854,
	MEMCATEGORY_DEVICES_TESTDEVICES				= 855,
	MEMCATEGORY_DEVICES_NEUROSKY				= 856,
	MEMCATEGORY_DEVICES_ZEPHYR					= 857,
	MEMCATEGORY_DEVICES_MUSE					= 858,
	MEMCATEGORY_DEVICES_VERSUS					= 859,
	MEMCATEGORY_DEVICES_ABM						= 860,
	MEMCATEGORY_DEVICES_OPENBCI					= 861,
	MEMCATEGORY_DEVICES_EMOTIV					= 862,
	MEMCATEGORY_DEVICES_MITSAR					= 863,
	MEMCATEGORY_DEVICES_BRAINQUIRY				= 864,
	MEMCATEGORY_DEVICES_TOBIIEYEX				= 865,
	MEMCATEGORY_DEVICES_ESENSE					= 866,
	MEMCATEGORY_DEVICES_ACTICHAMP               = 867,
	MEMCATEGORY_DEVICES_GENERIC					= 880,

	// graphs
	MEMCATEGORY_GRAPH							= 500,
	MEMCATEGORY_GRAPH_NODE						= 501,
	MEMCATEGORY_GRAPH_CONNECTION				= 502,
	MEMCATEGORY_GRAPH_STATEMACHINE				= 503,
	MEMCATEGORY_GRAPH_TRANSITION				= 504,
	MEMCATEGORY_GRAPH_CONDITION					= 505,
	MEMCATEGORY_GRAPH_OBJECT					= 506,
	MEMCATEGORY_GRAPH_STATE						= 507,
	MEMCATEGORY_GRAPH_ACTION					= 508,
	MEMCATEGORY_GRAPH_OBJECTFACTORY				= 509,
	MEMCATEGORY_GRAPH_PORT						= 510,

	// misc
	MEMCATEGORY_CORE_LICENSING					= 600,
	MEMCATEGORY_CORE_SESSION					= 601, 
	MEMCATEGORY_ENGINE_USER						= 602,
	MEMCATEGORY_CORE_COLORMAPPING				= 603,
	MEMCATEGORY_CORE_IMPORTER					= 604,
	MEMCATEGORY_CORE_EXPORTER					= 605,
	MEMCATEGORY_CORE_ENGINEMANAGER				= 606,
	MEMCATEGORY_CORE_DEVICEMANAGER				= 607,
	MEMCATEGORY_CORE_SERIALPORT					= 608,
	MEMCATEGORY_SERIALIZATION					= 609,
	
	MEMCATEGORY_CORE_NETWORK					= 700,
	MEMCATEGORY_CORE_NETWORKPACKET				= 701,
	MEMCATEGORY_CORE_OSCLISTENER				= 702,
	MEMCATEGORY_CORE_OSCMESSAGEQUEUE			= 703,
	MEMCATEGORY_CORE_OSCPARSING					= 704,
	MEMCATEGORY_CORE_OSCROUTER					= 705,

	// rendering
	MEMCATEGORY_RENDERING_CAMERA				= 801,

	// neuromore Engine API
	MEMCATEGORY_NEUROMOREENGINE_API				= 901	
};

#endif
