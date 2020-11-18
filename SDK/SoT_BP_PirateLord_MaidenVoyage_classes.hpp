#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PirateLord_MaidenVoyage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C
// 0x0160 (0x07A0 - 0x0640)
class ABP_PirateLord_MaidenVoyage_C : public ACompanyShopkeeper
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0640(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    vfx_ambient_smoke;                                        // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Shroud;                                                   // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorPhasingComponent*                      ActorPhasing;                                             // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Disappear_GhostBloom_D6B559574A021B36566081A7A912C534;    // 0x0670(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Disappear_GhostOpacity_D6B559574A021B36566081A7A912C534;  // 0x0674(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Disappear_EffectScale_D6B559574A021B36566081A7A912C534;   // 0x0678(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Disappear__Direction_D6B559574A021B36566081A7A912C534;    // 0x067C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x067D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Disappear;                                                // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Appear_GhostBloom_5DDE828F4765ACF9BF63719CF283294E;       // 0x0688(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Appear_GhostOpacity_5DDE828F4765ACF9BF63719CF283294E;     // 0x068C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Appear_EffectScale_5DDE828F4765ACF9BF63719CF283294E;      // 0x0690(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Appear__Direction_5DDE828F4765ACF9BF63719CF283294E;       // 0x0694(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0695(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Appear;                                                   // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            MaterialInstance;                                         // 0x06A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Ghost_Opacity;                                            // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableOpacity;                                           // 0x06B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x06B5(0x0003) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                         // 0x06B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FObjectMessagingHandle                      PirateLordAppearEventHandle;                              // 0x06C8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      PirateLordDisappearEventHandle;                           // 0x0710(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsPirateLordVisible;                                      // 0x0758(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0759(0x0007) MISSED OFFSET
	struct FText                                       PirateLordName;                                           // 0x0760(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ACutSceneActor*                              PirateLordFirstCutscene;                                  // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C"));
		return ptr;
	}


	void OnRep_IsPirateLordVisible();
	void GetNPCAnimInstance(class UNPCAnimInstance** NPCAnimInstance);
	void CollectMaterials();
	void UserConstructionScript();
	void Appear__FinishedFunc();
	void Appear__UpdateFunc();
	void Disappear__FinishedFunc();
	void Disappear__UpdateFunc();
	void ReceiveBeginPlay();
	void GhostCutsceneEventHandler(float GhostOpacity, float GhostBloom);
	void PirateLordAppear();
	void PirateLordDisappear();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void PirateLordHidden();
	void PirateLordAppearEvent(const struct FPirateLordAppearEvent_FPirateLordAppearEvent& NewParam);
	void PirateLordDisappearEvent(const struct FPirateLordDisappearEvent_FPirateLordDisappearEvent& NewParam);
	void AnimNotify_StartPirateLordCutsceneAnim();
	void ExecuteUbergraph_BP_PirateLord_MaidenVoyage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
