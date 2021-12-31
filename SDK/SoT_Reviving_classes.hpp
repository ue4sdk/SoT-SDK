#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Reviving_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Reviving.ReviveSettings
// 0x0058 (0x0090 - 0x0038)
class UReviveSettings : public UDeveloperSettings
{
public:
	float                                              HealthRegained;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumReviveDistance;                                    // 0x003C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	FLinearColor                                       FadeColour;                                               // 0x0040(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldFadeAudio;                                          // 0x0050(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              ServerWaitTimeBeforeFullyReviving;                        // 0x0054(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ReviveTime;                                               // 0x0058(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRevertEvaporateDuration;                               // 0x005C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EPlayMode>>                     UnsupportedPlayModes;                                     // 0x0060(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	TArray<FModeSpecificReviveSettings>                ModeSpecificSettings;                                     // 0x0070(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	float                                              GiveUpHoldTime;                                           // 0x0080(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              GiveUpFadeDuration;                                       // 0x0084(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              GiveUpEvaporateDuration;                                  // 0x0088(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Reviving.ReviveSettings"));
		return ptr;
	}

};


// Class Reviving.DeathSelfInteractionComponent
// 0x0060 (0x0178 - 0x0118)
class UDeathSelfInteractionComponent : public UInteractableComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	bool                                               HasGivenUp;                                               // 0x0120(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x57];                                      // 0x0121(0x0057) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Reviving.DeathSelfInteractionComponent"));
		return ptr;
	}


	void SetGiveUpAvaliable();
	void OnRep_HasGivenUp();
};


// Class Reviving.PostReviveLocomotionActionStateId
// 0x0000 (0x0028 - 0x0028)
class UPostReviveLocomotionActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Reviving.PostReviveLocomotionActionStateId"));
		return ptr;
	}

};


// Class Reviving.RevivableStatus
// 0x0000 (0x0030 - 0x0030)
class URevivableStatus : public UStatusBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Reviving.RevivableStatus"));
		return ptr;
	}

};


// Class Reviving.ReviveableActionStateId
// 0x0000 (0x0028 - 0x0028)
class UReviveableActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Reviving.ReviveableActionStateId"));
		return ptr;
	}

};


// Class Reviving.ReviveableCharacterInterface
// 0x0000 (0x0028 - 0x0028)
class UReviveableCharacterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Reviving.ReviveableCharacterInterface"));
		return ptr;
	}

};


// Class Reviving.ReviveableRepresentationInterface
// 0x0000 (0x0028 - 0x0028)
class UReviveableRepresentationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Reviving.ReviveableRepresentationInterface"));
		return ptr;
	}

};


// Class Reviving.ReviveAudioComponent
// 0x0020 (0x0300 - 0x02E0)
class UReviveAudioComponent : public UWwiseEmitterComponent
{
public:
	UReviveEffectsDataAsset*                           ReviveEffectsDataAsset;                                   // 0x02E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x02E8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Reviving.ReviveAudioComponent"));
		return ptr;
	}

};


// Class Reviving.ReviveInterface
// 0x0000 (0x0028 - 0x0028)
class UReviveInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Reviving.ReviveInterface"));
		return ptr;
	}

};


// Class Reviving.ReviveComponent
// 0x0140 (0x0258 - 0x0118)
class UReviveComponent : public UInteractableComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET
	ACharacter*                                        OwningCharacter;                                          // 0x0128(0x0008) (ZeroConstructor, IsPlainOldData)
	AActor*                                            ReviveableRepresentationActor;                            // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EReviveState>                          ReviveState;                                              // 0x0138(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractableState>                    InteractionState;                                         // 0x0139(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x013A(0x0006) MISSED OFFSET
	UClass*                                            ReviveableRepresentationClass;                            // 0x0140(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0148(0x000C) MISSED OFFSET
	bool                                               ReviveWindowIsOpen;                                       // 0x0154(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xD3];                                      // 0x0155(0x00D3) MISSED OFFSET
	FStatus                                            RevivableStatus;                                          // 0x0228(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x18];                                      // 0x0240(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Reviving.ReviveComponent"));
		return ptr;
	}


	void OnRep_ReviveState(TEnumAsByte<EReviveState> PreviousReviveState);
	void HandleOwningCharacterEndPlay();
};


// Class Reviving.ReviveConditionalStatTrigger
// 0x0000 (0x0030 - 0x0030)
class UReviveConditionalStatTrigger : public UConditionalStatsTriggerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Reviving.ReviveConditionalStatTrigger"));
		return ptr;
	}

};


// Class Reviving.RevivedActionStateId
// 0x0000 (0x0028 - 0x0028)
class URevivedActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Reviving.RevivedActionStateId"));
		return ptr;
	}

};


// Class Reviving.ReviveDebugComponent
// 0x0098 (0x0160 - 0x00C8)
class UReviveDebugComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x00C8(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Reviving.ReviveDebugComponent"));
		return ptr;
	}

};


// Class Reviving.ReviveEffectsDataAsset
// 0x00A8 (0x00D0 - 0x0028)
class UReviveEffectsDataAsset : public UDataAsset
{
public:
	UMaterialParameterCollection*                      ReviveMaterialParameterCollection;                        // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                              AstralCordReviveInProgressMaterialCollectionScalarParameterName;// 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                              AstralCordFadeMaterialCollectionScalarParameterName;      // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                              AstralCordBorderMaterialCollectionScalarParameterName;    // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UCurveFloat*                                       AstralCordBorderParamValueByAbsoluteTimeSinceDeath;       // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UMaterial*                                         ReviveePostProcessMaterial;                               // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GhostShaderGhostEffectInterpolationValue;                 // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReviveSuccessfulEffectDuration;                           // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UObject*                                           ReviveSuccessfulOneShotVFX;                               // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UObject*                                           ReviveSuccessfulOneShotVFX_Revivee;                       // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UObject*                                           ReviveInProgressLoopingVFX;                               // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AstralCordReviveInProgressInterpolationSpeed;             // 0x0078(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AstralCordReviveNotInProgressInterpolationSpeed;          // 0x007C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UObject*                                           ContinuousBodyLoopingVFX;                                 // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AstralCordFadeInInterpolationSpeed;                       // 0x0088(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AstralCordFadeOutInterpolationSpeed;                      // 0x008C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultAstralCordHeight;                                  // 0x0090(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AstralCordHeightOffsetFromTheGhost;                       // 0x0094(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UObject*                                           DeadPlayerBodyEvaporatesOneShotVFX;                       // 0x0098(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UWwiseEvent*                                       OtherPlayers_ReviveGhostAmbientStart;                     // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       OtherPlayers_ReviveGhostAmbientStop;                      // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       DeadPlayer_ReviveInProgressStart;                         // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       DeadPlayer_ReviveInProgressStop;                          // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       OtherPlayers_ReviveInProgressStart;                       // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       OtherPlayers_ReviveInProgressStop;                        // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Reviving.ReviveEffectsDataAsset"));
		return ptr;
	}

};


// Class Reviving.ReviveGhost
// 0x0258 (0x0628 - 0x03D0)
class AReviveGhost : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03D0(0x0010) MISSED OFFSET
	TArray<UMaterialInstanceDynamic*>                  CorpseMaterials;                                          // 0x03E0(0x0010) (ZeroConstructor)
	USceneComponent*                                   Root;                                                     // 0x03F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	USkeletalMeshComponent*                            MeshComponent;                                            // 0x03F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	USceneComponent*                                   AstralCordContainer;                                      // 0x0400(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	UAnimationDataStoreComponent*                      AnimationDataStoreComponent;                              // 0x0408(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	UPostProcessComponent*                             PostProcessComponent;                                     // 0x0410(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	UDitherComponent*                                  DitherComponent;                                          // 0x0418(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	UReviveAudioComponent*                             AudioComponent;                                           // 0x0420(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0428(0x0010) MISSED OFFSET
	TEnumAsByte<ENetRole>                              RevivableOwnerNetRole;                                    // 0x0438(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	UGhostDataAsset*                                   ReviveGhostDataAsset;                                     // 0x0440(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UReviveEffectsDataAsset*                           ReviveEffectsDataAsset;                                   // 0x0448(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FReviveEffectsValues                               ReviveEffectsValues;                                      // 0x0450(0x0020)
	FModeSpecificReviveSettings                        ReviveSettings;                                           // 0x0470(0x0030)
	unsigned char                                      UnknownData03[0x13C];                                     // 0x04A0(0x013C) MISSED OFFSET
	TWeakObjectPtr<class UParticleSystemComponent>     ContinuousOnTheBodyLoopingVFX;                            // 0x05DC(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UParticleSystemComponent>     ReviveInProgressLoopingVFX;                               // 0x05E4(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1C];                                      // 0x05EC(0x001C) MISSED OFFSET
	TArray<UMaterialInstanceDynamic*>                  AstralCordDynamicMaterials;                               // 0x0608(0x0010) (ZeroConstructor, Transient)
	FGhostPlayModeParameters                           GhostPlayModeSpecificParameters;                          // 0x0618(0x000C) (Transient)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0624(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Reviving.ReviveGhost"));
		return ptr;
	}

};


// Class Reviving.RevivePlayerActionStateId
// 0x0000 (0x0028 - 0x0028)
class URevivePlayerActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Reviving.RevivePlayerActionStateId"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
