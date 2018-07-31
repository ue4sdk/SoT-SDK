#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Occlusion.EOcclusionTypes
enum class EOcclusionTypes : uint8_t
{
	EOcclusionTypes__Visible       = 0,
	None                           = 1,
	EOcclusionTypes__EOcclusionTypes_MAX = 2,
	FloatProperty                  = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
