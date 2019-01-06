#pragma once

// Sea of Thieves (1.4) SDK

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
	struct FWwiseEmitter                               Emitter;                                                  // 0x02B8(0x0020) (BlueprintVisible, BlueprintReadOnly)
	class UWwiseObjectPoolWrapper*                     WwiseObjectPoolWrapper;                                   // 0x02D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.WwiseEmitterComponent");
		return ptr;
	}

};


// Class RareAudio.AnimNotifyWwiseEmitterComponent
// 0x0030 (0x0310 - 0x02E0)
class UAnimNotifyWwiseEmitterComponent : public UWwiseEmitterComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02E0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.AnimNotifyWwiseEmitterComponent");
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
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.WwiseEmitterBlueprintLibrary");
		return ptr;
	}


	static void WwiseSetState(const struct FName& StateGroup, const struct FName& StateValue);
	static void WwiseSetGlobalRTPC(const struct FName& RTPCName, float RTPCValue);
	static void WwisePostGlobalEvent(class UWwiseEvent* Event);
	static int WwisePostEventAtLocation(class UWwiseEvent* Event, const struct FVector& Location, const struct FVector& Front, class UWwiseObjectPoolWrapper* EmitterPool, TEnumAsByte<EEmitterRelationship> Relationship, struct FWwiseEmitter* Emitter);
	static bool WwiseGetListenerInfo(int Viewport, struct FWwiseListenerInfo* InfoOut);
	static bool WwiseGetListenerEmitter(class UObject* WorldContextObject, int ListenerIndex, const struct FName& Name, const struct FVector& Offset, bool bFollowOrientaion, class UWwiseObjectPoolWrapper* EmitterPool, struct FWwiseEmitter* Emitter);
	static bool WwiseGetEmitter(const struct FName& Name, class UObject* Owner, class UWwiseObjectPoolWrapper* EmitterPool, const struct FVector& Offset, struct FWwiseEmitter* Emitter);
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
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.AnimNotify_WwiseSound");
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
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.AnimNotifyState_WwiseSound");
		return ptr;
	}

};


// Class RareAudio.WwiseEmitterInterface
// 0x0000 (0x0028 - 0x0028)
class UWwiseEmitterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.WwiseEmitterInterface");
		return ptr;
	}

};


// Class RareAudio.WwiseObjectPoolWrapper
// 0x0030 (0x0080 - 0x0050)
class UWwiseObjectPoolWrapper : public UObjectPoolWrapper
{
public:
	bool                                               DisableOcclusion;                                         // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               DisableReverb;                                            // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	struct FWwiseNativeEmitterPoolDensityParams        PoolDensityParams;                                        // 0x0058(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.WwiseObjectPoolWrapper");
		return ptr;
	}

};


// Class RareAudio.AudioEventToComponentMap
// 0x0008 (0x0498 - 0x0490)
class AAudioEventToComponentMap : public AActor
{
public:
	class UAudioEventToComponentMapComponent*          AudioEventToComponentMapComponent;                        // 0x0490(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.AudioEventToComponentMap");
		return ptr;
	}


	void ClearMappings();
	void AddMappingWithSingleEmitterComponent(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseObjectPoolWrapper* WwiseEmitterPool, class UWwiseEmitterComponent** WwiseEmitterComponent);
	void AddMapping(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseObjectPoolWrapper* WwiseEmitterPool, TArray<class UWwiseEmitterComponent*>* WwiseEmitterComponents);
};


// Class RareAudio.AudioEventToComponentMapComponent
// 0x0010 (0x00E0 - 0x00D0)
class UAudioEventToComponentMapComponent : public UActorComponent
{
public:
	TArray<struct FEventToComponentMapping>            LocalComponentMappings;                                   // 0x00D0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.AudioEventToComponentMapComponent");
		return ptr;
	}


	void ClearMappings();
	void AddMappingWithSingleEmitterComponent(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseObjectPoolWrapper* WwiseEmitterPool, class UWwiseEmitterComponent** WwiseEmitterComponent);
	void AddMapping(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseObjectPoolWrapper* WwiseEmitterPool, TArray<class UWwiseEmitterComponent*>* WwiseEmitterComponents);
};


// Class RareAudio.StaticMeshAudioDataAsset
// 0x0010 (0x0038 - 0x0028)
class UStaticMeshAudioDataAsset : public UDataAsset
{
public:
	TArray<struct FStaticMeshAudioAssociation>         MeshToAudioAssociations;                                  // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.StaticMeshAudioDataAsset");
		return ptr;
	}

};


// Class RareAudio.AudioIslandStaticMeshAssociatorBase
// 0x0000 (0x0490 - 0x0490)
class AAudioIslandStaticMeshAssociatorBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.AudioIslandStaticMeshAssociatorBase");
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
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.AudioSpaceDataAsset");
		return ptr;
	}


	struct FName GetRtpcName();
};


// Class RareAudio.AudioPortalComponent
// 0x0030 (0x02E0 - 0x02B0)
class UAudioPortalComponent : public USceneComponent
{
public:
	class UAudioSpaceDataAsset*                        AudioInsideSpace;                                         // 0x02B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAudioSpaceDataAsset*                        AudioOutsideSpace;                                        // 0x02B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PortalTriggerDistance;                                    // 0x02C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InsideRtpcUpdateDistance;                                 // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OutsideRtpcUpdateDistance;                                // 0x02C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               TrackAttachmentToActor;                                   // 0x02CC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x02CD(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.AudioPortalComponent");
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
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.AudioPortalInterface");
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
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.AudioPortalService");
		return ptr;
	}

};


// Class RareAudio.AudioSpaceComponent
// 0x0010 (0x0640 - 0x0630)
class UAudioSpaceComponent : public UStaticMeshComponent
{
public:
	class UAudioSpaceDataAsset*                        AudioSpace;                                               // 0x0630(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0638(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.AudioSpaceComponent");
		return ptr;
	}


	void OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult);
};


// Class RareAudio.AudioSpaceTrackerComponent
// 0x0010 (0x00E0 - 0x00D0)
class UAudioSpaceTrackerComponent : public UActorComponent
{
public:
	TArray<class UAudioSpaceComponent*>                CurrentSpaces;                                            // 0x00D0(0x0010) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.AudioSpaceTrackerComponent");
		return ptr;
	}


	class UAudioSpaceDataAsset* GetCurrentSpace();
};


// Class RareAudio.RareAudioHardwareDeviceService
// 0x0028 (0x0240 - 0x0218)
class URareAudioHardwareDeviceService : public UAudioHardwareDeviceService
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0218(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.RareAudioHardwareDeviceService");
		return ptr;
	}

};


// Class RareAudio.StaticMeshAudioEmittersComponent
// 0x0010 (0x02C0 - 0x02B0)
class UStaticMeshAudioEmittersComponent : public USceneComponent
{
public:
	TArray<struct FStaticMeshComponentAudioAssociation> InstanceAssociations;                                     // 0x02B0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.StaticMeshAudioEmittersComponent");
		return ptr;
	}


	void PopulateInstanceAssociations();
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
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.TritonAcousticMap");
		return ptr;
	}

};


// Class RareAudio.TritonComponent
// 0x0010 (0x02C0 - 0x02B0)
class UTritonComponent : public USceneComponent
{
public:
	class UTritonAcousticMap*                          TritonMapAsset;                                           // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TritonEffectRadius;                                       // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.TritonComponent");
		return ptr;
	}

};


// Class RareAudio.TritonInterface
// 0x0000 (0x0028 - 0x0028)
class UTritonInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.TritonInterface");
		return ptr;
	}

};


// Class RareAudio.TritonService
// 0x00A8 (0x00D0 - 0x0028)
class UTritonService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TArray<class UTritonComponent*>                    RegisteredTritonComponents;                               // 0x0038(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x88];                                      // 0x0048(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.TritonService");
		return ptr;
	}

};


// Class RareAudio.WwiseEmitterComponentBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UWwiseEmitterComponentBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.WwiseEmitterComponentBlueprintLibrary");
		return ptr;
	}


	static bool GetNamedEmitter(const struct FName& InNameOfEmitterToRetrieve, class AActor* InActorToFindEmitterOn, struct FWwiseEmitter* OutEmitter);
	static bool GetClosestNEmitters(const struct FVector& InFromPosition, int InNumEmittersToFind, class AActor* InActorToFindClosestEmitterOn, TArray<struct FWwiseEmitter>* OutEmitters);
	static bool GetClosestEmitter(const struct FVector& InFromPosition, class AActor* InActorToFindClosestEmitterOn, struct FWwiseEmitter* OutEmitter);
};


// Class RareAudio.WwiseEmitterComponentBlueprintLibraryTestActor
// 0x0000 (0x0490 - 0x0490)
class AWwiseEmitterComponentBlueprintLibraryTestActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.WwiseEmitterComponentBlueprintLibraryTestActor");
		return ptr;
	}

};


// Class RareAudio.WwisePoolManager
// 0x0090 (0x00B8 - 0x0028)
class UWwisePoolManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RareAudio.WwisePoolManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
