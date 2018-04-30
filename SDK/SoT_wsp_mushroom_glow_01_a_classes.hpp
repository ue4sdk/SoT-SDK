#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_mushroom_glow_01_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wsp_mushroom_glow_01_a.wsp_mushroom_glow_01_a_C
// 0x0060 (0x0510 - 0x04B0)
class Awsp_mushroom_glow_01_a_C : public ABP_Placement_HeightDrop_C
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x04B0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass wsp_mushroom_glow_01_a.wsp_mushroom_glow_01_a_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
