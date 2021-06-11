#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Occlusion.EOcclusionTypes
enum class EOcclusionTypes : uint8_t
{
	EOcclusionTypes__Visible       = 0,
	EOcclusionTypes__Occluded      = 1,
	EOcclusionTypes__Unknown       = 2,
	EOcclusionTypes__MAX           = 3,
	EOcclusionTypes__EOcclusionTypes_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
