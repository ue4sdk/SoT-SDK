#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_InteractableShipLantern_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_InteractableShipLantern.BP_InteractableShipLantern_C
// 0x0061 (0x06A9 - 0x0648)
class ABP_InteractableShipLantern_C : public AShipInteractableLight
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0648(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInteractableComponent*                      Interactable;                                             // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        LanternGlow;                                              // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Lantern;                                                  // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Hook;                                                     // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicGlowMaterial;                                      // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FlameParameterName;                                       // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GlowBrightnessParameterName;                              // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GlowRandomSeedParameterName;                              // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlameIntensityOn;                                         // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlameIntensityOff;                                        // 0x069C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlowIntensityOn;                                          // 0x06A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlowIntensityOff;                                         // 0x06A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Uses_Glow;                                                // 0x06A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_InteractableShipLantern.BP_InteractableShipLantern_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void LightStateChanged();
	void ExecuteUbergraph_BP_InteractableShipLantern(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
