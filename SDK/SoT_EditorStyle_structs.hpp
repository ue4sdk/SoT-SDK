#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum EditorStyle.EColorVisionDeficiency
enum class EColorVisionDeficiency : uint8_t
{
	CVD_NormalVision               = 0,
	None                           = 1,
	__UNKNOWN_NAME__               = 2,
	CVD_Protanopia                 = 3,
	None01                         = 4,
	__UNKNOWN_NAME__01             = 5,
	CVD_MAX                        = 6,
	EKrakenShipWrappingTentacleState__Dormant = 7,
	None02                         = 8
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
