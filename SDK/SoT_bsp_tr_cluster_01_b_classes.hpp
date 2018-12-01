#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bsp_tr_cluster_01_b_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bsp_tr_cluster_01_b.bsp_tr_cluster_01_b_C
// 0x0030 (0x0500 - 0x04D0)
class Absp_tr_cluster_01_b_C : public ABP_Placement_HeightDrop_C
{
public:
	class UStaticMeshComponent*                        wsp_bush_06_b_1;                                          // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_tree_palm_02_b2_1;                                    // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_tree_palm_02_a2_1;                                    // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNonVagueNonUniqueLandmarkComponent*         NonVagueNonUniqueLandmark;                                // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_tree_palm_01_a2_1;                                    // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass bsp_tr_cluster_01_b.bsp_tr_cluster_01_b_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
