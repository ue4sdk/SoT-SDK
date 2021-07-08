#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GlitterBeard_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GlitterBeard.GlitterBeardEntitlementDesc
// 0x0000 (0x00D8 - 0x00D8)
class UGlitterBeardEntitlementDesc : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GlitterBeard.GlitterBeardEntitlementDesc"));
		return ptr;
	}

};


// Class GlitterBeard.GlitterBeardFinaleCoordinatorComponent
// 0x0098 (0x0160 - 0x00C8)
class UGlitterBeardFinaleCoordinatorComponent : public UActorComponent
{
public:
	class UWwiseEvent*                                 AudioEventToSynchronise;                                  // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FFinaleReplicationState                     ReplicationState;                                         // 0x00D0(0x0010) (Net)
	unsigned char                                      UnknownData00[0x80];                                      // 0x00E0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GlitterBeard.GlitterBeardFinaleCoordinatorComponent"));
		return ptr;
	}


	void OnRep_ReplicationState(const struct FFinaleReplicationState& OldState);
};


// Class GlitterBeard.GlitterBeardIsHideoutOpenConditional
// 0x0000 (0x0030 - 0x0030)
class UGlitterBeardIsHideoutOpenConditional : public UNPCDialogConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GlitterBeard.GlitterBeardIsHideoutOpenConditional"));
		return ptr;
	}

};


// Class GlitterBeard.GlitterBeardLanternSoundEffect
// 0x0048 (0x0080 - 0x0038)
class UGlitterBeardLanternSoundEffect : public UEffectBlendObjectBase
{
public:
	float                                              TriggerThreshold;                                         // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UWwiseObjectPoolWrapper*                     WWisePool;                                                // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 WwiseEvent;                                               // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWwiseEmitter                               Emitter;                                                  // 0x0050(0x0020) (Transient)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GlitterBeard.GlitterBeardLanternSoundEffect"));
		return ptr;
	}

};


// Class GlitterBeard.GlitterbeardSlidingDoor
// 0x0008 (0x0540 - 0x0538)
class AGlitterbeardSlidingDoor : public ASlidingDoor
{
public:
	class UEffectBlendControllerComponent*             DecalBlendComponent;                                      // 0x0538(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GlitterBeard.GlitterbeardSlidingDoor"));
		return ptr;
	}

};


// Class GlitterBeard.GlitterBeardTelemetryComponent
// 0x0048 (0x0110 - 0x00C8)
class UGlitterBeardTelemetryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00C8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GlitterBeard.GlitterBeardTelemetryComponent"));
		return ptr;
	}

};


// Class GlitterBeard.GlitterBeardTrustedTreeInterface
// 0x0000 (0x0028 - 0x0028)
class UGlitterBeardTrustedTreeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GlitterBeard.GlitterBeardTrustedTreeInterface"));
		return ptr;
	}

};


// Class GlitterBeard.GlitterBeardTree
// 0x0300 (0x06D0 - 0x03D0)
class AGlitterBeardTree : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03D0(0x0028) MISSED OFFSET
	class UActionRulesComponent*                       ActionRulesComponent;                                     // 0x03F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UActionRulesInteractableComponent*           InteractableComponent;                                    // 0x0400(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              LanternLightDelay;                                        // 0x0408(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	class UGlitterBeardUnlockVFXCoordinatorComponent*  UnlockVFXCoordinatorComponent;                            // 0x0410(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UGlitterBeardTelemetryComponent*             TelemetryComponent;                                       // 0x0418(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UClass*                                      VocalShanty;                                              // 0x0420(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 VocalsFadeEvent;                                          // 0x0428(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VocalsFadeDelay;                                          // 0x0430(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnlockDelay;                                              // 0x0434(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGlitterBeardFinaleCoordinatorComponent*     FinaleCoordinator;                                        // 0x0438(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData)
	class ULandmarkReactionTriggerComponent*           LandmarkReactionTrigger;                                  // 0x0440(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData)
	float                                              DistanceFromTreeToPauseAISpawn;                           // 0x0448(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x22C];                                     // 0x044C(0x022C) MISSED OFFSET
	class ASlidingDoor*                                HideoutDoor;                                              // 0x0678(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FWwiseEmitter                               SoundEmitter;                                             // 0x0680(0x0020)
	unsigned char                                      UnknownData03[0x30];                                      // 0x06A0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GlitterBeard.GlitterBeardTree"));
		return ptr;
	}


	void StopVocals();
	bool StopReaction();
	void StartVocals();
	bool StartReaction();
	void Reset_Impl();
};


// Class GlitterBeard.GlitterBeardTreeVisualFeedbackComponent
// 0x0050 (0x0118 - 0x00C8)
class UGlitterBeardTreeVisualFeedbackComponent : public UActorComponent
{
public:
	TArray<struct FVisualFeedbackList>                 FeedbackActions;                                          // 0x00C8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET
	TArray<TEnumAsByte<EGlitterbeardVFXState>>         CurrentStates;                                            // 0x00E8(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x20];                                      // 0x00F8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GlitterBeard.GlitterBeardTreeVisualFeedbackComponent"));
		return ptr;
	}


	void OnRep_NextStateEvent(TArray<TEnumAsByte<EGlitterbeardVFXState>> OldStates);
};


// Class GlitterBeard.GlitterBeardUnlockVFXCoordinatorComponent
// 0x0028 (0x00F0 - 0x00C8)
class UGlitterBeardUnlockVFXCoordinatorComponent : public UActorComponent
{
public:
	struct FActorComponentSelector                     TreeActor;                                                // 0x00C8(0x0010) (Edit)
	class UMaterialInstanceDynamic*                    TreeMaterialInstanceDynamic;                              // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              TreeBlendTime;                                            // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GlitterBeard.GlitterBeardUnlockVFXCoordinatorComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
