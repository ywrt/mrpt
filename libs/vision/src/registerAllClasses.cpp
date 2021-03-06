/* +---------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)               |
   |                          http://www.mrpt.org/                             |
   |                                                                           |
   | Copyright (c) 2005-2014, Individual contributors, see AUTHORS file        |
   | See: http://www.mrpt.org/Authors - All rights reserved.                   |
   | Released under BSD License. See details in http://www.mrpt.org/License    |
   +---------------------------------------------------------------------------+ */

#include <mrpt/vision.h>
#include <mrpt/utils/CSerializable.h>

#ifndef MRPT_ENABLE_PRECOMPILED_HDRS
#	define MRPT_ALWAYS_INCLUDE_ALL_HEADERS
#	undef __mrpt_vision_H
#	include <mrpt/vision.h>
#endif

#include <mrpt/utils/CStartUpClassesRegister.h>

using namespace mrpt::vision;
using namespace mrpt::utils;
using namespace mrpt::slam;

void registerAllClasses_mrpt_vision();

CStartUpClassesRegister  mrpt_vision_class_reg(&registerAllClasses_mrpt_vision);
//const int dumm = mrpt_vision_class_reg.do_nothing(); // Avoid compiler removing this class in static linking

/*---------------------------------------------------------------
					registerAllClasses_mrpt_vision
  ---------------------------------------------------------------*/
void registerAllClasses_mrpt_vision()
{
	registerClass( CLASS_ID( CFeature ) );

	registerClass( CLASS_ID( CLandmark ) );
	registerClass( CLASS_ID( CLandmarksMap ) );

	registerClass( CLASS_ID( CObservationVisualLandmarks ) );
}

