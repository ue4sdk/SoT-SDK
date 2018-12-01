#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_InteractableShipRailingLight_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_InteractableShipRailingLight.BP_InteractableShipRailingLight_C
// 0x0071 (0x0819 - 0x07A8)
class ABP_InteractableShipRailingLight_C : public AShipInteractableLight
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInteractableComponent*                      Interactable;                                             // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        LanternGlow;                                              // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Light;                                                    // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicGlowMaterial;                                      // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GlowBrightnessParameterName;                              // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GlowRandomSeedParameterName;                              // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlowIntensityOn;                                          // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlowIntensityOff;                                         // 0x07E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsesGlow;                                                 // 0x07E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x07E9(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FlameParameterName;                                       // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlameIntensityOn;                                         // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlameIntensityOff;                                        // 0x0804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DefaultGlowColour;                                        // 0x0808(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFlameOfFateType>                      CurrentFlameOfFateType;                                   // 0x0818(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_InteractableShipRailingLight.BP_InteractableShipRailingLight_C");
		return ptr;
	}


	void UserConstructionScript();
	void LightStateChanged();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_InteractableShipRailingLight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
