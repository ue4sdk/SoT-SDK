#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RareAudio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class RareAudio.WwiseEmitterComponent
// 0x0030 (0x02E0 - 0x02B0)
class UWwiseEmitterComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET
	FWwiseEmitter                                      Emitter;                                                  // 0x02B8(0x0020) (BlueprintVisible, BlueprintReadOnly)
	UWwiseObjectPoolWrapper*                           WwiseObjectPoolWrapper;                                   // 0x02D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.WwiseEmitterComponent"));
		return ptr;
	}

};


// Class RareAudio.AnimNotifyWwiseEmitterComponent
// 0x0000 (0x02E0 - 0x02E0)
class UAnimNotifyWwiseEmitterComponent : public UWwiseEmitterComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AnimNotifyWwiseEmitterComponent"));
		return ptr;
	}

};


// Class RareAudio.AnimNotify_WwiseSound
// 0x0038 (0x0070 - 0x0038)
class UAnimNotify_WwiseSound : public UAnimNotify
{
public:
	UWwiseEvent*                                       WwiseEvent;                                               // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               OwnedByWorld;                                             // 0x0040(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimNotify_WwiseSound_PerspectiveRestriction> PerspectiveRestriction;                                   // 0x0041(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	UWwiseObjectPoolWrapper*                           OwnedByWorldWisePoolToUse;                                // 0x0048(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0050(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AnimNotify_WwiseSound"));
		return ptr;
	}

};


// Class RareAudio.AnimNotify_WwiseSoundMeshSwitch
// 0x0018 (0x0088 - 0x0070)
class UAnimNotify_WwiseSoundMeshSwitch : public UAnimNotify_WwiseSound
{
public:
	FName                                              SkeletalMeshSwitchGroup;                                  // 0x0070(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<FAnimNotify_SoundSwitch>                    MeshOverrides;                                            // 0x0078(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AnimNotify_WwiseSoundMeshSwitch"));
		return ptr;
	}

};


// Class RareAudio.AnimNotifyState_WwiseSound
// 0x0060 (0x0088 - 0x0028)
class UAnimNotifyState_WwiseSound : public UAnimNotifyState
{
public:
	UWwiseEvent*                                       WwiseEvent;                                               // 0x0028(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       WwiseEventEnd;                                            // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AnimNotifyState_WwiseSound"));
		return ptr;
	}

};


// Class RareAudio.AudioEventToComponentMap
// 0x0008 (0x03D8 - 0x03D0)
class AAudioEventToComponentMap : public AActor
{
public:
	UAudioEventToComponentMapComponent*                AudioEventToComponentMapComponent;                        // 0x03D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AudioEventToComponentMap"));
		return ptr;
	}


	void ClearMappings();
	void AddMappingWithSingleEmitterComponent(UWwiseEvent* PlayEvent, UWwiseEvent* StopEvent, UWwiseObjectPoolWrapper* WwiseEmitterPool, UWwiseEmitterComponent** WwiseEmitterComponent);
	void AddMapping(UWwiseEvent* PlayEvent, UWwiseEvent* StopEvent, UWwiseObjectPoolWrapper* WwiseEmitterPool, TArray<UWwiseEmitterComponent*>* WwiseEmitterComponents);
};


// Class RareAudio.AudioEventToComponentMapComponent
// 0x0010 (0x00D8 - 0x00C8)
class UAudioEventToComponentMapComponent : public UActorComponent
{
public:
	TArray<FEventToComponentMapping>                   LocalComponentMappings;                                   // 0x00C8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AudioEventToComponentMapComponent"));
		return ptr;
	}


	void ClearMappings();
	void AddMappingWithSingleEmitterComponent(UWwiseEvent* PlayEvent, UWwiseEvent* StopEvent, UWwiseObjectPoolWrapper* WwiseEmitterPool, UWwiseEmitterComponent** WwiseEmitterComponent);
	void AddMapping(UWwiseEvent* PlayEvent, UWwiseEvent* StopEvent, UWwiseObjectPoolWrapper* WwiseEmitterPool, TArray<UWwiseEmitterComponent*>* WwiseEmitterComponents);
};


// Class RareAudio.WwiseEmitterBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UWwiseEmitterBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.WwiseEmitterBlueprintLibrary"));
		return ptr;
	}


	static void WwiseStopGlobalEvent(UWwiseEvent* Event, float FadeTime);
	static void WwiseSetState(const FName& StateGroup, const FName& StateValue);
	static void WwiseSetGlobalRTPC(const FName& RTPCName, float RTPCValue);
	static void WwisePostOneShotOnOwner(UObject* Owner, UWwiseObjectPoolWrapper* EmitterPool, const FWwiseEmitterCreationParams& CreationParams, const FVector& Offset, TEnumAsByte<EEmitterRelationship> Relationship);
	static int WwisePostGlobalEvent(UWwiseEvent* Event);
	static int WwisePostEventAtLocation(UWwiseEvent* Event, const FVector& Location, const FVector& Front, UWwiseObjectPoolWrapper* EmitterPool, TEnumAsByte<EEmitterRelationship> Relationship, FWwiseEmitter* Emitter);
	static bool WwiseIsGlobalEvent(UWwiseEvent* Event);
	static bool WwiseGetListenerInfo(int Viewport, FWwiseListenerInfo* InfoOut);
	static bool WwiseGetListenerEmitter(UObject* WorldContextObject, int ListenerIndex, const FName& Name, const FVector& Offset, bool bFollowOrientaion, UWwiseObjectPoolWrapper* EmitterPool, FWwiseEmitter* Emitter);
	static bool WwiseGetGlobalRTPC(const FName& RTPCName, float* RTPCValue);
	static bool WwiseEmitterWaitToComplete(const FWwiseEmitter& Emitter, int PlayId, UObject* WorldContextObject, const FLatentActionInfo& LatentInfo);
	static bool WwiseEmitterStop(const FWwiseEmitter& Emitter, int PlayId, float FadeTime);
	static bool WwiseEmitterSetSwitch(const FWwiseEmitter& Emitter, const FName& SwitchGroup, const FName& Value);
	static bool WwiseEmitterSetRTPCOnAll(TArray<FWwiseEmitter> Emitters, const FName& Name, float Value);
	static bool WwiseEmitterSetRTPC(const FWwiseEmitter& Emitter, const FName& Name, float Value);
	static bool WwiseEmitterSetParams(const FWwiseEmitter& Emitter, const FWwiseEmitterParams& Params);
	static bool WwiseEmitterSetLocation(const FWwiseEmitter& Emitter, const FVector& Location);
	static TArray<int> WwiseEmitterPostEventOnAll(TArray<FWwiseEmitter> Emitters, UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const FName& SourcePath, const FName& SourceObj);
	static int WwiseEmitterPostEvent(const FWwiseEmitter& Emitter, UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const FName& SourcePath, const FName& SourceObj);
	static bool WwiseEmitterIsValid(const FWwiseEmitter& Emitter);
	static bool WwiseEmitterIsPlaying(const FWwiseEmitter& Emitter, UWwiseEvent* Event);
	static bool WwiseEmitterGetRTPC(const FWwiseEmitter& Emitter, const FName& Name, float* Value);
	static void WwiseEmitterDestroy(FWwiseEmitter* Emitter);
	static bool WwiseEmitterComponentSetRTPCOnAll(TArray<UWwiseEmitterComponent*> EmitterComponents, const FName& Name, float Value);
	static bool WwiseEmitterComponentSetRTPC(UWwiseEmitterComponent* EmitterComponent, const FName& Name, float Value);
	static TArray<int> WwiseEmitterComponentPostEventOnAll(TArray<UWwiseEmitterComponent*> EmitterComponents, UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const FName& SourcePath, const FName& SourceObj);
	static int WwiseEmitterComponentPostEvent(UWwiseEmitterComponent* EmitterComponent, UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const FName& SourcePath, const FName& SourceObj);
	static bool WwiseCreateEmitter(const FName& Name, UObject* Owner, UWwiseObjectPoolWrapper* EmitterPool, const FVector& Offset, FWwiseEmitter* Emitter);
	static int WwiseCreateDetachedEmitter(const FName& Name, UWwiseObjectPoolWrapper* EmitterPool, const FVector& Location, const FWwiseEmitterCreationParams& CreationParams, TEnumAsByte<EEmitterRelationship> Relationship, const FVector& Forward, FWwiseEmitter* Emitter);
	static bool SeekOnEvent(const FWwiseEmitter& WwiseEmitter, UWwiseEvent* in_eventID, int in_iPosition, bool in_bSeekToNearestMarker, int in_PlayingID);
	static bool GetPlaybackPosition(const FWwiseEmitter& WwiseEmitter, int in_PlayingID, int* PlaybackPositionInMs);
};


// Class RareAudio.WwiseEmitterComponentBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UWwiseEmitterComponentBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.WwiseEmitterComponentBlueprintLibrary"));
		return ptr;
	}


	static bool GetNamedEmitter(const FName& InNameOfEmitterToRetrieve, AActor* InActorToFindEmitterOn, FWwiseEmitter* OutEmitter);
	static bool GetClosestNEmitters(const FVector& InFromPosition, int InNumEmittersToFind, AActor* InActorToFindClosestEmitterOn, TArray<FWwiseEmitter>* OutEmitters);
	static bool GetClosestEmitter(const FVector& InFromPosition, AActor* InActorToFindClosestEmitterOn, FWwiseEmitter* OutEmitter);
};


// Class RareAudio.WwiseObjectPoolWrapper
// 0x0050 (0x0078 - 0x0028)
class UWwiseObjectPoolWrapper : public UObject
{
public:
	FName                                              PoolName;                                                 // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxResources;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               DisableOcclusion;                                         // 0x0034(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               DisableReverb;                                            // 0x0035(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
	FWwiseNativeEmitterPoolDensityParams               PoolDensityParams;                                        // 0x0038(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0060(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.WwiseObjectPoolWrapper"));
		return ptr;
	}

};


// Class RareAudio.AudioIslandStaticMeshAssociatorBase
// 0x0000 (0x03D0 - 0x03D0)
class AAudioIslandStaticMeshAssociatorBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AudioIslandStaticMeshAssociatorBase"));
		return ptr;
	}

};


// Class RareAudio.AudioPortalComponent
// 0x0030 (0x02E0 - 0x02B0)
class UAudioPortalComponent : public USceneComponent
{
public:
	UAudioSpaceDataAsset*                              AudioInsideSpace;                                         // 0x02B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UAudioSpaceDataAsset*                              AudioOutsideSpace;                                        // 0x02B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PortalTriggerDistance;                                    // 0x02C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InsideRtpcUpdateDistance;                                 // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OutsideRtpcUpdateDistance;                                // 0x02C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               TrackAttachmentToActor;                                   // 0x02CC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x02CD(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AudioPortalComponent"));
		return ptr;
	}


	void SetParentShip(AActor* ParentShip);
};


// Class RareAudio.AudioPortalInterface
// 0x0000 (0x0028 - 0x0028)
class UAudioPortalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AudioPortalInterface"));
		return ptr;
	}


	void UnregisterPortal(UAudioPortalComponent* AudioPortal);
	void RegisterPortal(UAudioPortalComponent* AudioPortal, AActor* OwningActor);
	TArray<TWeakObjectPtr<class UAudioPortalComponent>> GetAllRegisteredPortalsInSpecificSpace(UAudioSpaceDataAsset* AudioSpace, AActor* OwningActor);
	TArray<TWeakObjectPtr<class UAudioPortalComponent>> GetAllRegisteredPortals();
};


// Class RareAudio.AudioPortalService
// 0x00B0 (0x00D8 - 0x0028)
class UAudioPortalService : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AudioPortalService"));
		return ptr;
	}

};


// Class RareAudio.AudioSpaceComponent
// 0x0010 (0x0600 - 0x05F0)
class UAudioSpaceComponent : public UStaticMeshComponent
{
public:
	UAudioSpaceDataAsset*                              AudioSpace;                                               // 0x05F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x05F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AudioSpaceComponent"));
		return ptr;
	}


	void OnOverlapEnd(AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapBegin(AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult);
};


// Class RareAudio.AudioSpaceDataAsset
// 0x0018 (0x0040 - 0x0028)
class UAudioSpaceDataAsset : public UDataAsset
{
public:
	FName                                              RtpcToUpdate;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       AmbienceToStart;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       AmbienceToStop;                                           // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AudioSpaceDataAsset"));
		return ptr;
	}


	FName GetRtpcName();
};


// Class RareAudio.AudioSpaceTrackerComponent
// 0x0010 (0x00D8 - 0x00C8)
class UAudioSpaceTrackerComponent : public UActorComponent
{
public:
	TArray<UAudioSpaceComponent*>                      CurrentSpaces;                                            // 0x00C8(0x0010) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AudioSpaceTrackerComponent"));
		return ptr;
	}


	UAudioSpaceDataAsset* GetCurrentSpace();
};


// Class RareAudio.RareAudioHardwareDeviceService
// 0x0010 (0x0050 - 0x0040)
class URareAudioHardwareDeviceService : public UAudioHardwareDeviceService
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.RareAudioHardwareDeviceService"));
		return ptr;
	}

};


// Class RareAudio.StaticMeshAudioDataAsset
// 0x0010 (0x0038 - 0x0028)
class UStaticMeshAudioDataAsset : public UDataAsset
{
public:
	TArray<FStaticMeshAudioAssociation>                MeshToAudioAssociations;                                  // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.StaticMeshAudioDataAsset"));
		return ptr;
	}

};


// Class RareAudio.StaticMeshAudioEmittersComponent
// 0x0010 (0x02C0 - 0x02B0)
class UStaticMeshAudioEmittersComponent : public USceneComponent
{
public:
	TArray<FStaticMeshComponentAudioAssociation>       InstanceAssociations;                                     // 0x02B0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.StaticMeshAudioEmittersComponent"));
		return ptr;
	}


	void PopulateInstanceAssociations();
};


// Class RareAudio.TritonAcousticMap
// 0x0038 (0x0060 - 0x0028)
class UTritonAcousticMap : public UObject
{
public:
	FString                                            TritonMapFilename;                                        // 0x0028(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.TritonAcousticMap"));
		return ptr;
	}

};


// Class RareAudio.TritonComponent
// 0x0010 (0x02C0 - 0x02B0)
class UTritonComponent : public USceneComponent
{
public:
	UTritonAcousticMap*                                TritonMapAsset;                                           // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TritonEffectRadius;                                       // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.TritonComponent"));
		return ptr;
	}

};


// Class RareAudio.TritonService
// 0x0108 (0x0130 - 0x0028)
class UTritonService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TArray<UTritonComponent*>                          RegisteredTritonComponents;                               // 0x0038(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0xA8];                                      // 0x0048(0x00A8) MISSED OFFSET
	UTritonComponent*                                  CachedListenerInfo;                                       // 0x00F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x38];                                      // 0x00F8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.TritonService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
