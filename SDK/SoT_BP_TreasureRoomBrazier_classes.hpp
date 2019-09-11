#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureRoomBrazier_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureRoomBrazier.BP_TreasureRoomBrazier_C
// 0x00A4 (0x054C - 0x04A8)
class ABP_TreasureRoomBrazier_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWwiseEmitterComponent*                      WwiseEmitter;                                             // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_brazier_fire;                                         // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      OriginalIntensities;                                      // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              FireOriginalScale;                                        // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET
	TArray<class ULightComponent*>                     Lights;                                                   // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              FireMinScale;                                             // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04F4(0x0004) MISSED OFFSET
	TArray<float>                                      MinIntensities;                                           // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                OriginalColor;                                            // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                GhostlyColor;                                             // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentColourLerp;                                        // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentIntensityLerp;                                     // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinFireIntensity;                                         // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinLightingIntensity;                                     // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               WasZero;                                                  // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0539(0x0003) MISSED OFFSET
	struct FLinearColor                                ParticleGhostlyColor;                                     // 0x053C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TreasureRoomBrazier.BP_TreasureRoomBrazier_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void IntensityChanged(float NormalizedScale);
	void LightColourChanged(float LerpAmount);
	void PlayFireLoop(bool Enabled);
	void PlayFireOn();
	void PlayWwiseEvent(class UWwiseEvent* EventToPlay);
	void ExecuteUbergraph_BP_TreasureRoomBrazier(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
