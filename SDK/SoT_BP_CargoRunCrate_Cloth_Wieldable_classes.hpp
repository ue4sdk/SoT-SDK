#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CargoRunCrate_Cloth_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CargoRunCrate_Cloth_Wieldable.BP_CargoRunCrate_Cloth_Wieldable_C
// 0x0050 (0x08C0 - 0x0870)
class ABP_CargoRunCrate_Cloth_Wieldable_C : public AStaticDamageableCargoRunCrate
{
public:
	class UMaterialManipulationComponent*              MaterialManipulation;                                     // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               HitVolume;                                                // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUnderwaterEffectsComponent*                 UnderwaterEffects;                                        // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShelteredComponent*                         Sheltered;                                                // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWaterHeightProviderComponent*               WaterHeightProvider;                                      // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWaterSensitiveComponent*                    WaterSensitive;                                           // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWaterExposureComponent*                     WaterExposure;                                            // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPickupableComponent*                        Pickupable;                                               // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldable;                                          // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWieldableInteractableComponent*             WieldableInteractable;                                    // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CargoRunCrate_Cloth_Wieldable.BP_CargoRunCrate_Cloth_Wieldable_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
