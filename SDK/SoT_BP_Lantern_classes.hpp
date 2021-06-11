#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Lantern_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Lantern.BP_Lantern_C
// 0x0098 (0x09E8 - 0x0950)
class ABP_Lantern_C : public ALantern
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0950(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        LanternTriggerGlow;                                       // 0x0958(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        LanternGlow;                                              // 0x0960(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAmbientLightSourceComponent*                AmbientLightSource;                                       // 0x0968(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x0970(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldable;                                          // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    LanternGlowDynamicMaterial;                               // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EmissiveInt_threshold;                                    // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x098C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    LanternTriggerGlowDynamicMaterial;                        // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TriggerGlowDuration;                                      // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TriggerGlowRampInDuration;                                // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TriggerGlowRampOutDuration;                               // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DefaultSpotlightColour;                                   // 0x09A4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DefaultAmbientLightColour;                                // 0x09B4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DefaultGlowColour;                                        // 0x09C4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x09D4(0x0004) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                         // 0x09D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Lantern.BP_Lantern_C"));
		return ptr;
	}


	void CreateLanternDynamicMaterial();
	void OnAttachThirdPerson();
	void OnAttachFirstPerson();
	void TurnOff();
	void TurnOn();
	void UserConstructionScript();
	void ReceiveWieldFirstPerson();
	void ReceiveWieldThirdPerson();
	void ReceiveBeginPlay();
	void ReceiveLightChange();
	void TriggerGlow();
	void PostMeshChangedBPEvent(bool SkipFlameColourTransition);
	void ReceiveFlameData(bool WantChangeAnimation);
	void ExecuteUbergraph_BP_Lantern(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
