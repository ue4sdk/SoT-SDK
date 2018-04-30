#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_cave_rocks_06_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wsp_cave_rocks_06.wsp_cave_rocks_06_C
// 0x0028 (0x04D8 - 0x04B0)
class Awsp_cave_rocks_06_C : public ABP_Placement_HeightDrop_C
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x04B0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass wsp_cave_rocks_06.wsp_cave_rocks_06_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
