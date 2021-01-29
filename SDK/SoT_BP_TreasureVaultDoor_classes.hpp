#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureVaultDoor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureVaultDoor.BP_TreasureVaultDoor_C
// 0x0030 (0x0818 - 0x07E8)
class ABP_TreasureVaultDoor_C : public ATimedDoorMechanismAction
{
public:
	class UParticleSystemComponent*                    vfx_vault_ceiling_debris_medium;                          // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_treasure_vault_door_impact_dust;                      // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_gold_horder_treasure_room_falling_dust_door;          // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_vault_corridor_debris_roof;                           // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTetherCustomisationComponent*               TetherCustomisation;                                      // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        VaultDoor;                                                // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TreasureVaultDoor.BP_TreasureVaultDoor_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
