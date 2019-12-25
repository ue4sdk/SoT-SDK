#pragma once

// Sea of Thieves (2.0) SDK

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
// 0x00A8 (0x06D8 - 0x0630)
class ABP_SmallShip_StandardHull_Damage_C : public ABP_HullDamage_C
{
public:
	class UStaticMeshComponent*                        projectile_collision;                                     // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_04;                                     // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_06;                                     // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_01;                                     // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_08;                                     // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_07;                                     // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_09;                                     // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_05;                                     // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_03;                                     // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Lower_11;                                     // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_11;                                    // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_09;                                    // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_08;                                    // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_07;                                    // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_06;                                    // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_05;                                    // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_04;                                    // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_03;                                    // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_02;                                    // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_01;                                    // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_small_hull_damage_01_a;                               // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SmallShip_StandardHull_Damage.BP_SmallShip_StandardHull_Damage_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
