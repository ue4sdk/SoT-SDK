#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_large_mast_main_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_large_mast_main.BP_large_mast_main_C
// 0x0058 (0x0A50 - 0x09F8)
class ABP_large_mast_main_C : public ABP_Mast_C
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x09F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	UChildActorComponent*                              BP_MastEmissaryFlag;                                      // 0x0A00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              shp_flag_pennant_alliance_01_a;                           // 0x0A08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              BP_ShipFlagCustomizationChest;                            // 0x0A10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              BP_Bell;                                                  // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              shp_flag_jolly_roger_01_a;                                // 0x0A20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              Ladder;                                                   // 0x0A28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              WeldedCrowsNestPhysics;                                   // 0x0A30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              WeldedMastPhysics;                                        // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              shp_mast_ladder_step_01_a;                                // 0x0A40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              CrowsNest;                                                // 0x0A48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_large_mast_main.BP_large_mast_main_C"));
		return ptr;
	}


	void UserConstructionScript();
	void OnMastDescLoaded(UMastDescAsset* MastDesc);
	void ExecuteUbergraph_BP_large_mast_main(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
