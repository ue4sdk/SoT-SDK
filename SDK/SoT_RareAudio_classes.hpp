#pragma once

// Sea of Thieves (2.0) SDK

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
// 0x0030 (0x02C0 - 0x0290)
class UWwiseEmitterComponent : public USceneComponent
{
public:
	struct FWwiseEmitter                               Emitter;                                                  // 0x0290(0x0020) (BlueprintVisible, BlueprintReadOnly)
	class UWwiseObjectPoolWrapper*                     WwiseObjectPoolWrapper;                                   // 0x02B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.WwiseEmitterComponent"));
		return ptr;
	}

};


// Class RareAudio.AnimNotifyWwiseEmitterComponent
// 0x0000 (0x02C0 - 0x02C0)
class UAnimNotifyWwiseEmitterComponent : public UWwiseEmitterComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AnimNotifyWwiseEmitterComponent"));
		return ptr;
	}

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


	static void WwiseStopGlobalEvent(class UWwiseEvent* Event, float FadeTime);
	static void WwiseSetState(const struct FName& StateGroup, const struct FName& StateValue);
	static void WwiseSetGlobalRTPC(const struct FName& RTPCName, float RTPCValue);
	static void WwisePostOneShotOnOwner(class UObject* Owner, class UWwiseObjectPoolWrapper* EmitterPool, const struct FWwiseEmitterCreationParams& CreationParams, const struct FVector& Offset, TEnumAsByte<EEmitterRelationship> Relationship);
	static int WwisePostGlobalEvent(class UWwiseEvent* Event);
	static int WwisePostEventAtLocation(class UWwiseEvent* Event, const struct FVector& Location, const struct FVector& Front, class UWwiseObjectPoolWrapper* EmitterPool, TEnumAsByte<EEmitterRelationship> Relationship, struct FWwiseEmitter* Emitter);
	static bool WwiseIsGlobalEvent(class UWwiseEvent* Event);
	static bool WwiseGetListenerInfo(int Viewport, struct FWwiseListenerInfo* InfoOut);
	static bool WwiseGetListenerEmitter(class UObject* WorldContextObject, int ListenerIndex, const struct FName& Name, const struct FVector& Offset, bool bFollowOrientaion, class UWwiseObjectPoolWrapper* EmitterPool, struct FWwiseEmitter* Emitter);
	static bool WwiseGetGlobalRTPC(const struct FName& RTPCName, float* RTPCValue);
	static bool WwiseEmitterWaitToComplete(const struct FWwiseEmitter& Emitter, int PlayId, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	static bool WwiseEmitterStop(const struct FWwiseEmitter& Emitter, int PlayId, float FadeTime);
	static bool WwiseEmitterSetRTPCOnAll(TArray<struct FWwiseEmitter> Emitters, const struct FName& Name, float Value);
	static bool WwiseEmitterSetRTPC(const struct FWwiseEmitter& Emitter, const struct FName& Name, float Value);
	static bool WwiseEmitterSetParams(const struct FWwiseEmitter& Emitter, const struct FWwiseEmitterParams& Params);
	static bool WwiseEmitterSetLocation(const struct FWwiseEmitter& Emitter, const struct FVector& Location);
	static TArray<int> WwiseEmitterPostEventOnAll(TArray<struct FWwiseEmitter> Emitters, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj);
	static int WwiseEmitterPostEvent(const struct FWwiseEmitter& Emitter, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj);
	static bool WwiseEmitterIsValid(const struct FWwiseEmitter& Emitter);
	static bool WwiseEmitterIsPlaying(const struct FWwiseEmitter& Emitter, class UWwiseEvent* Event);
	static bool WwiseEmitterGetRTPC(const struct FWwiseEmitter& Emitter, const struct FName& Name, float* Value);
	static void WwiseEmitterDestroy(struct FWwiseEmitter* Emitter);
	static bool WwiseEmitterComponentSetRTPCOnAll(TArray<class UWwiseEmitterComponent*> EmitterComponents, const struct FName& Name, float Value);
	static bool WwiseEmitterComponentSetRTPC(class UWwiseEmitterComponent* EmitterComponent, const struct FName& Name, float Value);
	static TArray<int> WwiseEmitterComponentPostEventOnAll(TArray<class UWwiseEmitterComponent*> EmitterComponents, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj);
	static int WwiseEmitterComponentPostEvent(class UWwiseEmitterComponent* EmitterComponent, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj);
	static bool WwiseCreateEmitter(const struct FName& Name, class UObject* Owner, class UWwiseObjectPoolWrapper* EmitterPool, const struct FVector& Offset, struct FWwiseEmitter* Emitter);
	static int WwiseCreateDetachedEmitter(const struct FName& Name, class UWwiseObjectPoolWrapper* EmitterPool, const struct FVector& Location, const struct FWwiseEmitterCreationParams& CreationParams, TEnumAsByte<EEmitterRelationship> Relationship, const struct FVector& Forward, struct FWwiseEmitter* Emitter);
	static bool SeekOnEvent(const struct FWwiseEmitter& WwiseEmitter, class UWwiseEvent* in_eventID, int in_iPosition, bool in_bSeekToNearestMarker, int in_PlayingID);
	static bool GetPlaybackPosition(const struct FWwiseEmitter& WwiseEmitter, int in_PlayingID, int* PlaybackPositionInMs);
};


// Class RareAudio.AnimNotify_WwiseSound
// 0x0018 (0x0048 - 0x0030)
class UAnimNotify_WwiseSound : public UAnimNotify
{
public:
	class UWwiseEvent*                                 WwiseEvent;                                               // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               OwnedByWorld;                                             // 0x0038(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class UWwiseObjectPoolWrapper*                     OwnedByWorldWisePoolToUse;                                // 0x0040(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AnimNotify_WwiseSound"));
		return ptr;
	}

};


// Class RareAudio.AnimNotifyState_WwiseSound
// 0x0060 (0x0088 - 0x0028)
class UAnimNotifyState_WwiseSound : public UAnimNotifyState
{
public:
	class UWwiseEvent*                                 WwiseEvent;                                               // 0x0028(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WwiseEventEnd;                                            // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AnimNotifyState_WwiseSound"));
		return ptr;
	}

};


// Class RareAudio.WwiseObjectPoolWrapper
// 0x0058 (0x0080 - 0x0028)
class UWwiseObjectPoolWrapper : public UObject
{
public:
	struct FName                                       PoolName;                                                 // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxResources;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxProxies;                                               // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               DisableOcclusion;                                         // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               DisableReverb;                                            // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	struct FWwiseNativeEmitterPoolDensityParams        PoolDensityParams;                                        // 0x0040(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.WwiseObjectPoolWrapper"));
		return ptr;
	}

};


// Class RareAudio.AudioEventToComponentMap
// 0x0008 (0x0418 - 0x0410)
class AAudioEventToComponentMap : public AActor
{
public:
	class UAudioEventToComponentMapComponent*          AudioEventToComponentMapComponent;                        // 0x0410(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AudioEventToComponentMap"));
		return ptr;
	}


	void ClearMappings();
	void AddMappingWithSingleEmitterComponent(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseObjectPoolWrapper* WwiseEmitterPool, class UWwiseEmitterComponent** WwiseEmitterComponent);
	void AddMapping(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseObjectPoolWrapper* WwiseEmitterPool, TArray<class UWwiseEmitterComponent*>* WwiseEmitterComponents);
};


// Class RareAudio.AudioEventToComponentMapComponent
// 0x0010 (0x00D8 - 0x00C8)
class UAudioEventToComponentMapComponent : public UActorComponent
{
public:
	TArray<struct FEventToComponentMapping>            LocalComponentMappings;                                   // 0x00C8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AudioEventToComponentMapComponent"));
		return ptr;
	}


	void ClearMappings();
	void AddMappingWithSingleEmitterComponent(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseObjectPoolWrapper* WwiseEmitterPool, class UWwiseEmitterComponent** WwiseEmitterComponent);
	void AddMapping(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseObjectPoolWrapper* WwiseEmitterPool, TArray<class UWwiseEmitterComponent*>* WwiseEmitterComponents);
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


	static bool GetNamedEmitter(const struct FName& InNameOfEmitterToRetrieve, class AActor* InActorToFindEmitterOn, struct FWwiseEmitter* OutEmitter);
	static bool GetClosestNEmitters(const struct FVector& InFromPosition, int InNumEmittersToFind, class AActor* InActorToFindClosestEmitterOn, TArray<struct FWwiseEmitter>* OutEmitters);
	static bool GetClosestEmitter(const struct FVector& InFromPosition, class AActor* InActorToFindClosestEmitterOn, struct FWwiseEmitter* OutEmitter);
};


// Class RareAudio.TritonAcousticMap
// 0x0038 (0x0060 - 0x0028)
class UTritonAcousticMap : public UObject
{
public:
	class FString                                      TritonMapFilename;                                        // 0x0028(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.TritonAcousticMap"));
		return ptr;
	}

};


// Class RareAudio.TritonComponent
// 0x0010 (0x02A0 - 0x0290)
class UTritonComponent : public USceneComponent
{
public:
	float                                              TritonEffectRadius;                                       // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0294(0x000C) MISSED OFFSET

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
	TArray<class UTritonComponent*>                    RegisteredTritonComponents;                               // 0x0038(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0xA8];                                      // 0x0048(0x00A8) MISSED OFFSET
	class UTritonComponent*                            CachedListenerInfo;                                       // 0x00F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x38];                                      // 0x00F8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.TritonService"));
		return ptr;
	}

};


// Class RareAudio.StaticMeshAudioDataAsset
// 0x0010 (0x0038 - 0x0028)
class UStaticMeshAudioDataAsset : public UDataAsset
{
public:
	TArray<struct FStaticMeshAudioAssociation>         MeshToAudioAssociations;                                  // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.StaticMeshAudioDataAsset"));
		return ptr;
	}

};


// Class RareAudio.AudioIslandStaticMeshAssociatorBase
// 0x0000 (0x0410 - 0x0410)
class AAudioIslandStaticMeshAssociatorBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AudioIslandStaticMeshAssociatorBase"));
		return ptr;
	}

};


// Class RareAudio.AudioSpaceDataAsset
// 0x0018 (0x0040 - 0x0028)
class UAudioSpaceDataAsset : public UDataAsset
{
public:
	struct FName                                       RtpcToUpdate;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 AmbienceToStart;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 AmbienceToStop;                                           // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AudioSpaceDataAsset"));
		return ptr;
	}


	struct FName GetRtpcName();
};


// Class RareAudio.AudioPortalComponent
// 0x0020 (0x02B0 - 0x0290)
class UAudioPortalComponent : public USceneComponent
{
public:
	class UAudioSpaceDataAsset*                        AudioOutsideSpace;                                        // 0x0290(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PortalTriggerDistance;                                    // 0x0298(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InsideRtpcUpdateDistance;                                 // 0x029C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OutsideRtpcUpdateDistance;                                // 0x02A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               TrackAttachmentToActor;                                   // 0x02A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x02A5(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AudioPortalComponent"));
		return ptr;
	}


	void SetParentShip(class AActor* ParentShip);
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


	void UnregisterPortal(class UAudioPortalComponent* AudioPortal);
	void RegisterPortal(class UAudioPortalComponent* AudioPortal, class AActor* OwningActor);
	TArray<TWeakObjectPtr<class UAudioPortalComponent>> GetAllRegisteredPortalsInSpecificSpace(class UAudioSpaceDataAsset* AudioSpace, class AActor* OwningActor);
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
// 0x0010 (0x05E0 - 0x05D0)
class UAudioSpaceComponent : public UStaticMeshComponent
{
public:
	class UAudioSpaceDataAsset*                        AudioSpace;                                               // 0x05D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x05D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AudioSpaceComponent"));
		return ptr;
	}


	void OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult);
};


// Class RareAudio.AudioSpaceTrackerComponent
// 0x0010 (0x00D8 - 0x00C8)
class UAudioSpaceTrackerComponent : public UActorComponent
{
public:
	TArray<class UAudioSpaceComponent*>                CurrentSpaces;                                            // 0x00C8(0x0010) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.AudioSpaceTrackerComponent"));
		return ptr;
	}


	class UAudioSpaceDataAsset* GetCurrentSpace();
};


// Class RareAudio.RareAudioHardwareDeviceService
// 0x0010 (0x0228 - 0x0218)
class URareAudioHardwareDeviceService : public UAudioHardwareDeviceService
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0218(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.RareAudioHardwareDeviceService"));
		return ptr;
	}

};


// Class RareAudio.StaticMeshAudioEmittersComponent
// 0x0010 (0x02A0 - 0x0290)
class UStaticMeshAudioEmittersComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0290(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareAudio.StaticMeshAudioEmittersComponent"));
		return ptr;
	}


	void PopulateInstanceAssociations();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
