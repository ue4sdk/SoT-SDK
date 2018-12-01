#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_bsp_tree_palm_01_e_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_bsp_tree_palm_01_e.BP_bsp_tree_palm_01_e_C
// 0x0010 (0x04A0 - 0x0490)
class ABP_bsp_tree_palm_01_e_C : public AActor
{
public:
	class UNonVagueNonUniqueLandmarkComponent*         NonVagueNonUniqueLandmark;                                // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_bsp_tree_palm_01_e.BP_bsp_tree_palm_01_e_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
