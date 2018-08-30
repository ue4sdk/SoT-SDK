#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShip_StandardHull_Damage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SmallShip_StandardHull_Damage.BP_SmallShip_StandardHull_Damage_C
// 0x00B4 (0x0728 - 0x0674)
class ABP_SmallShip_StandardHull_Damage_C : public ABP_HullDamage_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0674(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        projectile_collision;                                     // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower4;                                       // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower6;                                       // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower1;                                       // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower8;                                       // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower7;                                       // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower9;                                       // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower5;                                       // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower3;                                       // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower2;                                       // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower10;                                      // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Mid_11;                                       // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Mid_10;                                       // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Mid_9;                                        // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Mid_8;                                        // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Mid_7;                                        // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Mid_6;                                        // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Mid_5;                                        // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Mid_4;                                        // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Mid_3;                                        // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Mid_2;                                        // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_small_hull_damage_01_a;                               // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SmallShip_StandardHull_Damage.BP_SmallShip_StandardHull_Damage_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
