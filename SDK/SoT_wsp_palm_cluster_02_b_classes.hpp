#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_palm_cluster_02_b_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wsp_palm_cluster_02_b.wsp_palm_cluster_02_b_C
// 0x0010 (0x0420 - 0x0410)
class Awsp_palm_cluster_02_b_C : public ABP_Placement_HeightDrop_C
{
public:
	UNonVagueNonUniqueLandmarkComponent*               NonVagueNonUniqueLandmark;                                // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              StaticMesh2;                                              // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass wsp_palm_cluster_02_b.wsp_palm_cluster_02_b_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
