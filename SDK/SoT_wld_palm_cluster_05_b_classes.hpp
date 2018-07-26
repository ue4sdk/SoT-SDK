#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wld_palm_cluster_05_b_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wld_palm_cluster_05_b.wld_palm_cluster_05_b_C
// 0x0010 (0x04D0 - 0x04C0)
class Awld_palm_cluster_05_b_C : public ABP_Placement_HeightDrop_C
{
public:
	class UNonVagueNonUniqueLandmarkComponent*         NonVagueNonUniqueLandmark;                                // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh2;                                              // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass wld_palm_cluster_05_b.wld_palm_cluster_05_b_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
