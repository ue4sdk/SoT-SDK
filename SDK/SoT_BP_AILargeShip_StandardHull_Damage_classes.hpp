#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AILargeShip_StandardHull_Damage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AILargeShip_StandardHull_Damage.BP_AILargeShip_StandardHull_Damage_C
// 0x0108 (0x07D0 - 0x06C8)
class ABP_AILargeShip_StandardHull_Damage_C : public ABP_HullDamage_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        shp_skl_forcastle_01_a__shp_skl_forcastle_tower_01_a;     // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_skl_forcastle_01_a__shp_skl_forcastle_gantry_01_a;    // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_skl_forcastle_01_a__shp_skl_forcastle_castle_01_a;    // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_skl_sterncastle_01_a__shp_skl_sterncastle_structure_01_a;// 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        projectile_collision;                                     // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_17;                                    // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_16;                                    // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_15;                                    // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_14;                                    // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_13;                                    // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_12;                                    // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_09;                                    // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_08;                                    // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_06;                                    // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_04;                                    // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_03;                                    // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_02;                                    // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_01;                                    // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        largeship_standardhull_upper_01_a;                        // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_15;                                     // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_07;                                     // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_14;                                     // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_13;                                     // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_12;                                     // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_11;                                     // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_05;                                     // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_04;                                     // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_03;                                     // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_02;                                     // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_01;                                     // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        largeship_standardhull_lower_01_a;                        // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    BaseDamageMask;                                           // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AILargeShip_StandardHull_Damage.BP_AILargeShip_StandardHull_Damage_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AILargeShip_StandardHull_Damage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
