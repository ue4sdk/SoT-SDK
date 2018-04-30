#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CharacterVFXComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CharacterVFXComponent.BP_CharacterVFXComponent_C
// 0x02A8 (0x0378 - 0x00D0)
class UBP_CharacterVFXComponent_C : public UCharacterVfxComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E3(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FObjectMessagingHandle                      EnterWaterEvent;                                          // 0x01E3(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      UnderwaterStateChanged;                                   // 0x01E3(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*                    Splash_Emitter;                                           // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Large_Foot_Splash;                                        // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Small_Foot_Splash;                                        // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Threshold_for_run;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Threshold_for_large_foot_impact;                          // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FObjectMessagingHandle                      FallingIntoWaterHandle;                                   // 0x01E3(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             Large_Falling_Splash;                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FObjectMessagingHandle                      PlayerViewUnderWaterHandle;                               // 0x01E3(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      EnterShipEventHandle;                                     // 0x01E3(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      ExitShipEventHandle;                                      // 0x01E3(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*                    WindVFX;                                                  // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WindOffsetFromShip;                                       // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DEBUG_WindActive;                                         // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DEBUG_WindToggleTimer;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FObjectMessagingHandle                      WindDirectionChangedHandle;                               // 0x01E3(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      PlayerDeadHandle;                                         // 0x01E3(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UObject*                                     NewVar_1;                                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_particle_underwater_ambient;                          // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_player_underwater_ambient;                            // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18D];                                     // 0x01EB(0x018D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharacterVFXComponent.BP_CharacterVFXComponent_C");
		return ptr;
	}


	void GetWindService(class UObject** WindInterface);
	void WindVFX_CanProcessWind(bool* CanProcess);
	void WindVFX_DebugTick();
	void WindVFX_Destroy();
	void WindVFX_Create();
	void WindVFX_Update();
	void WindVFX_Deactivate();
	void WindVFX_Activate();
	void Play_View_Under_Water_FX(const struct FEventPlayerViewUnderWaterStateChanged& Event);
	void Play_Falling_Splash(float FallingSpeed);
	void Play_Foot_Splash(const struct FVector& Location);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void PlayerViewUnderWaterEvent(const struct FEventPlayerViewUnderWaterStateChanged& Event);
	void FallingIntoWaterEvent(const struct FAthena_FFallingIntoWaterEvent& Event);
	void WaterStateChanged(const struct FEventPlayerViewUnderWaterStateChanged& Under_water_state_changed);
	void On_Foot_Enter_Water(const struct FEventCharacterFootEnterWater& Enter_Water);
	void DeadEvent(const struct FEventCharacterDead& EventDead);
	void ExecuteUbergraph_BP_CharacterVFXComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
