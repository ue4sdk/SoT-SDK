#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_bush_cluster_01_g_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wsp_bush_cluster_01_g.wsp_bush_cluster_01_g_C
// 0x0040 (0x04F0 - 0x04B0)
class Awsp_bush_cluster_01_g_C : public ABP_Placement_HeightDrop_C
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x04B0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass wsp_bush_cluster_01_g.wsp_bush_cluster_01_g_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
