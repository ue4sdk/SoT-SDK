#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShip_Mast_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SmallShip_Mast.BP_SmallShip_Mast_C
// 0x0040 (0x0800 - 0x07C0)
class ABP_SmallShip_Mast_C : public ABP_Mast_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        shp_flag_pennant_alliance_01_a;                           // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ShipFlagCustomizationChest;                            // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_Bell1;                                                 // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_small_mast_bell_support_01_a;                         // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_Bell;                                                  // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_flag_jolly_roger_01_a;                                // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_crows_nest_01_a;                                      // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SmallShip_Mast.BP_SmallShip_Mast_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnMastDescLoaded(class UMastDescAsset** MastDesc);
	void ExecuteUbergraph_BP_SmallShip_Mast(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
