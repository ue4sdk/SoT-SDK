#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_mushroom_glow_01_b_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wsp_mushroom_glow_01_b.wsp_mushroom_glow_01_b_C
// 0x0020 (0x04E0 - 0x04C0)
class Awsp_mushroom_glow_01_b_C : public ABP_Placement_HeightDrop_C
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent02;                                    // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshComponent01;                                    // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshComponent0;                                     // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SharedRoot;                                               // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass wsp_mushroom_glow_01_b.wsp_mushroom_glow_01_b_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
