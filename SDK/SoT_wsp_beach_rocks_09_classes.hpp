#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_beach_rocks_09_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wsp_beach_rocks_09.wsp_beach_rocks_09_C
// 0x0070 (0x0520 - 0x04B0)
class Awsp_beach_rocks_09_C : public ABP_Placement_HeightDrop_C
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x04B0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass wsp_beach_rocks_09.wsp_beach_rocks_09_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
