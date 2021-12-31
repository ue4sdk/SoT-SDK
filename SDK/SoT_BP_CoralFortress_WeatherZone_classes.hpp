#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CoralFortress_WeatherZone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C
// 0x00F0 (0x04C0 - 0x03D0)
class ABP_CoralFortress_WeatherZone_C : public AActor
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	UExplosionComponent*                               Explosion;                                                // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ULightningManagerComponent*                        LightningManager;                                         // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ULightningComponent*                               Lightning;                                                // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UCapsuleComponent*                                 ExclusionTriggerVolume;                                   // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UAtmosphericPressureZoneComponent*                 AtmosphericPressureZone;                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UBlendedPostProcessingRainZoneComponent*           BlendedPostProcessingRainZone;                            // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              TopCloudMeshComponent;                                    // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              RingCloudMeshComponent;                                   // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              Lightning4;                                               // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              Lightning3;                                               // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              Lightning2;                                               // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              Lightning1;                                               // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              OuterRainSheet;                                           // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	USceneComponent*                                   RainRoot;                                                 // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	USceneComponent*                                   DefaultSceneRoot;                                         // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainBlend_Blend_1B3587E7420F9A76FB06A6A63DE0B159;         // 0x0450(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    RainBlend__Direction_1B3587E7420F9A76FB06A6A63DE0B159;    // 0x0454(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0455(0x0003) MISSED OFFSET
	UTimelineComponent*                                RainBlend;                                                // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<UMaterialInstanceDynamic*>                  RainDynMaterials;                                         // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Opacity;                                                  // 0x0470(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	FWwiseEmitterCreationParams                        CreationParams;                                           // 0x0478(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	FWwiseEmitter                                      WwiseEmitter;                                             // 0x04A0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C"));
		return ptr;
	}


	void IsLocalPlayer(AActor* Actor, bool* Result);
	void OnRep_Opacity();
	void CreateDynamicMaterialAtSlot0(UPrimitiveComponent* Primitive, UMaterialInstanceDynamic** Material);
	void UserConstructionScript();
	void RainBlend__FinishedFunc();
	void RainBlend__UpdateFunc();
	void ReceiveBeginPlay();
	void StartRainBlend();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void StopRainBlend();
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_438_ComponentBeginOverlapSignature__DelegateSignature(AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_441_ComponentEndOverlapSignature__DelegateSignature(AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ExecuteUbergraph_BP_CoralFortress_WeatherZone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
