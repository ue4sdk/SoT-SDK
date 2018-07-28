#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wld_palm_cluster_04_c_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wld_palm_cluster_04_c.wld_palm_cluster_04_c_C
// 0x0028 (0x04E8 - 0x04C0)
class Awld_palm_cluster_04_c_C : public ABP_Placement_HeightDrop_C
{
public:
	class UStaticMeshComponent*                        wld_bush_03_a_01;                                         // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wld_bush_02_a_01;                                         // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNonVagueNonUniqueLandmarkComponent*         NonVagueNonUniqueLandmark;                                // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wld_tree_palm_02_b_01;                                    // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SharedRoot;                                               // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass wld_palm_cluster_04_c.wld_palm_cluster_04_c_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
