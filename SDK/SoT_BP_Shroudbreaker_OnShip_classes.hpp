#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shroudbreaker_OnShip_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C
// 0x02C0 (0x0740 - 0x0480)
class ABP_Shroudbreaker_OnShip_C : public AShroudBreakerOnShip
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    vfx_ShroudBreaker_OnShip_stage4;                          // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ShieldPulseMesh;                                          // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_ShroudBreaker_OnShip_stage3;                          // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_shroudbreaker_ember;                                  // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_shroudbreaker_shipTip;                                // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ShieldMesh;                                               // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEmitterComponent*                      WwiseEmitter;                                             // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_ShroudBreaker_disappear_smoke_cloud;                  // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_ShroudBreaker_OnShip_stage1;                          // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMusicZoneComponent*                         MusicZone;                                                // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FObjectMessagingHandle                      ActivateShroudbreakerHandle;                              // 0x04E0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      DeactivateShroudbreakerHandle;                            // 0x0528(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      ActivateEffectsHandle;                                    // 0x0570(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      DeactivateEffectsHandle;                                  // 0x05B8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      ShipDestroyedHandle;                                      // 0x0600(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      ParentShipActor;                                          // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               MusicZoneActive;                                          // 0x0650(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0651(0x0003) MISSED OFFSET
	float                                              GemEmissiveOn;                                            // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Shroudbreaker_Material;                                   // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GemEmissiveOff;                                           // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShroudBreakerEffectsActive;                               // 0x0664(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShroudBreakerDeactivate;                                  // 0x0665(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0666(0x0002) MISSED OFFSET
	struct FObjectMessagingHandle                      PlayerEnteredIslandVincityEventHandle;                    // 0x0668(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      PlayerLeftIslandVincityEventHandle;                       // 0x06B0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TAssetPtr<class AProgressShipSpawnLocation>> ShipProgressSpawnLoactionsAssetID;                        // 0x06F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AProgressShipSpawnLocation*>          ShipProgressSpawnLocationsReference;                      // 0x0708(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    ShieldMaterial;                                           // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ShieldPulseMaterial;                                      // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DEBUG_Stage;                                              // 0x0728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FinalStageActivationDelay;                                // 0x072C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  NewVar_1;                                                 // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AShipHullAudio*                              ShipHullAudio;                                            // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C"));
		return ptr;
	}


	void GetShipHullAudio(class AShipHullAudio** ShipHullAudioRef);
	void OnRep_ShroudBreakerDeactivate();
	void OnRep_ShroudBreakerEffectsActive();
	void OnRep_MusicZoneActive();
	void UnregisterShipEvent(struct FObjectMessagingDispatcherHandle* Dispatcher, struct FObjectMessagingHandle* Handle);
	void GetObjMsgDispatcher(struct FObjectMessagingDispatcherHandle* Dispatcher, bool* Success);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnShroudbreakerActivated(const struct FShroudBreakerActivatedEvent& Ev);
	void OnShroudbreakerDeactivated(const struct FShroudBreakerDeactivatedEvent& Ev);
	void OnShipDestroyed(const struct FEventShipDestroyed& Ev);
	void OnActivateEffects(const struct FShroudBreakerActivateEffectsEvent& Ev);
	void OnDeactivateEffects(const struct FShroudBreakerDeactivateEffectsEvent& Ev);
	void PlayerEnteredTP(const struct FEventPlayerEnteredIslandVicinity& Ev);
	void PlayerLeftTP(const struct FEventPlayerLeftIslandVicinity& Ev);
	void OnRepFunctionDeactivateShroudBreaker();
	void OnShroudBreakerActivationStateChange();
	void ExecuteUbergraph_BP_Shroudbreaker_OnShip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
