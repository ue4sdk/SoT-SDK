#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_cmn_cma_tree_01_d_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass cmn_cma_tree_01_d.cmn_cma_tree_01_d_C
// 0x0018 (0x0400 - 0x03E8)
class Acmn_cma_tree_01_d_C : public ACoveredMeshActor
{
public:
	UAudioEventToComponentMapComponent*                AudioEventToComponentMap;                                 // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UNonVagueNonUniqueLandmarkComponent*               NonVagueNonUniqueLandmark;                                // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              wsp_trunk_01_a;                                           // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass cmn_cma_tree_01_d.cmn_cma_tree_01_d_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
