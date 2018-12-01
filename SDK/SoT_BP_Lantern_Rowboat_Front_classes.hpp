#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Lantern_Rowboat_Front_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Lantern_Rowboat_Front.BP_Lantern_Rowboat_Front_C
// 0x0074 (0x0714 - 0x06A0)
class ABP_Lantern_Rowboat_Front_C : public AInteractableLight
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInteractableComponent*                      Interactable;                                             // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        LanternGlow;                                              // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Lantern;                                                  // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Hook;                                                     // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicGlowMaterial;                                      // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FlameParameterName;                                       // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GlowBrightnessParameterName;                              // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GlowRandomSeedParameterName;                              // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlameIntensityOn;                                         // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlameIntensityOff;                                        // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlowIntensityOn;                                          // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlowIntensityOff;                                         // 0x06FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Uses_Glow;                                                // 0x0700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFlameOfFateType>                      CurrentFlameOFateType;                                    // 0x0701(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0702(0x0002) MISSED OFFSET
	struct FLinearColor                                DefaultGlowColour;                                        // 0x0704(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Lantern_Rowboat_Front.BP_Lantern_Rowboat_Front_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void LightStateChanged();
	void ExecuteUbergraph_BP_Lantern_Rowboat_Front(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
