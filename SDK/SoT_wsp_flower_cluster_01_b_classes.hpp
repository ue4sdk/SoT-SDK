#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_flower_cluster_01_b_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wsp_flower_cluster_01_b.wsp_flower_cluster_01_b_C
// 0x0018 (0x0468 - 0x0450)
class Awsp_flower_cluster_01_b_C : public ABP_Placement_HeightDrop_C
{
public:
	class UStaticMeshComponent*                        wsp_flower_01_a3_1;                                       // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_flower_01_a2_1;                                       // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass wsp_flower_cluster_01_b.wsp_flower_cluster_01_b_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
