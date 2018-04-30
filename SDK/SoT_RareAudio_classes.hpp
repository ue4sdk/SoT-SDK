#pragma once

// Sea of Thieves (1.0.5) SDK

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
// 0x0020 (0x0310 - 0x02F0)
class UWwiseEmitterComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareAudio.WwiseEmitterComponent");
		return ptr;
	}

};


// Class RareAudio.AnimNotifyWwiseEmitterComponent
// 0x0030 (0x0340 - 0x0310)
class UAnimNotifyWwiseEmitterComponent : public UWwiseEmitterComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0310(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareAudio.AnimNotifyWwiseEmitterComponent");
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
		static auto ptr = UObject::FindClass("Class RareAudio.WwiseEmitterBlueprintLibrary");
		return ptr;
	}


	void STATIC_WwiseSetState(const struct FName& StateGroup, const struct FName& StateValue);
	void STATIC_WwiseSetGlobalRTPC(const struct FName& RTPCName, float RTPCValue);
	void STATIC_WwisePostGlobalEvent(class UWwiseEvent* Event);
	int STATIC_WwisePostEventAtLocation(class UWwiseEvent* Event, const struct FVector& Location, const struct FVector& Front, class UWwiseObjectPoolWrapper* EmitterPool, TEnumAsByte<EEmitterRelationship> Relationship, struct FWwiseEmitter* Emitter);
	bool STATIC_WwiseGetListenerInfo(int Viewport, struct FWwiseListenerInfo* InfoOut);
	bool STATIC_WwiseGetListenerEmitter(class UObject* WorldContextObject, int ListenerIndex, const struct FName& Name, const struct FVector& Offset, bool bFollowOrientaion, class UWwiseObjectPoolWrapper* EmitterPool, struct FWwiseEmitter* Emitter);
	bool STATIC_WwiseGetEmitter(const struct FName& Name, class UObject* Owner, class UWwiseObjectPoolWrapper* EmitterPool, const struct FVector& Offset, struct FWwiseEmitter* Emitter);
	bool STATIC_WwiseEmitterWaitToComplete(const struct FWwiseEmitter& Emitter, int PlayId, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	bool STATIC_WwiseEmitterStop(const struct FWwiseEmitter& Emitter, int PlayId, float FadeTime);
	bool STATIC_WwiseEmitterSetRTPCOnAll(TArray<struct FWwiseEmitter> Emitters, const struct FName& Name, float Value);
	bool STATIC_WwiseEmitterSetRTPC(const struct FWwiseEmitter& Emitter, const struct FName& Name, float Value);
	bool STATIC_WwiseEmitterSetParams(const struct FWwiseEmitter& Emitter, const struct FWwiseEmitterParams& Params);
	bool STATIC_WwiseEmitterSetLocation(const struct FWwiseEmitter& Emitter, const struct FVector& Location);
	TArray<int> STATIC_WwiseEmitterPostEventOnAll(TArray<struct FWwiseEmitter> Emitters, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj);
	int STATIC_WwiseEmitterPostEvent(const struct FWwiseEmitter& Emitter, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj);
	bool STATIC_WwiseEmitterIsValid(const struct FWwiseEmitter& Emitter);
	bool STATIC_WwiseEmitterIsPlaying(const struct FWwiseEmitter& Emitter, class UWwiseEvent* Event);
	bool STATIC_WwiseEmitterGetRTPC(const struct FWwiseEmitter& Emitter, const struct FName& Name, float* Value);
	void STATIC_WwiseEmitterDestroy(struct FWwiseEmitter* Emitter);
	bool STATIC_WwiseEmitterComponentSetRTPCOnAll(TArray<class UWwiseEmitterComponent*> EmitterComponents, const struct FName& Name, float Value);
	bool STATIC_WwiseEmitterComponentSetRTPC(class UWwiseEmitterComponent* EmitterComponent, const struct FName& Name, float Value);
	TArray<int> STATIC_WwiseEmitterComponentPostEventOnAll(TArray<class UWwiseEmitterComponent*> EmitterComponents, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj);
	int STATIC_WwiseEmitterComponentPostEvent(class UWwiseEmitterComponent* EmitterComponent, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj);
	int STATIC_WwiseCreateDetachedEmitter(const struct FName& Name, class UWwiseObjectPoolWrapper* EmitterPool, const struct FVector& Location, const struct FWwiseEmitterCreationParams& CreationParams, TEnumAsByte<EEmitterRelationship> Relationship, const struct FVector& Forward, struct FWwiseEmitter* Emitter);
	bool STATIC_SeekOnEvent(const struct FWwiseEmitter& WwiseEmitter, class UWwiseEvent* in_eventID, int in_iPosition, bool in_bSeekToNearestMarker, int in_PlayingID);
	bool STATIC_GetPlaybackPosition(const struct FWwiseEmitter& WwiseEmitter, int in_PlayingID, int* PlaybackPositionInMs);
};


// Class RareAudio.AnimNotify_WwiseSound
// 0x0018 (0x0048 - 0x0030)
class UAnimNotify_WwiseSound : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	class UWwiseEvent*                                 WwiseEvent;                                               // 0x01E3(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               OwnedByWorld;                                             // 0x01E3(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareAudio.AnimNotify_WwiseSound");
		return ptr;
	}

};


// Class RareAudio.AnimNotifyState_WwiseSound
// 0x0060 (0x0088 - 0x0028)
class UAnimNotifyState_WwiseSound : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UWwiseEvent*                                 WwiseEvent;                                               // 0x01E3(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareAudio.AnimNotifyState_WwiseSound");
		return ptr;
	}

};


// Class RareAudio.WwiseObjectPoolWrapper
// 0x0030 (0x0080 - 0x0050)
class UWwiseObjectPoolWrapper : public UObjectPoolWrapper
{
public:
	unsigned char                                      UnknownData00[0x193];                                     // 0x0050(0x0193) MISSED OFFSET
	bool                                               DisableOcclusion;                                         // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               DisableReverb;                                            // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FWwiseNativeEmitterPoolDensityParams        PoolDensityParams;                                        // 0x01E3(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareAudio.WwiseObjectPoolWrapper");
		return ptr;
	}

};


// Class RareAudio.AudioEventToComponentMap
// 0x0008 (0x0478 - 0x0470)
class AAudioEventToComponentMap : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareAudio.AudioEventToComponentMap");
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
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	TArray<struct FEventToComponentMapping>            LocalComponentMappings;                                   // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareAudio.AudioEventToComponentMapComponent");
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
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareAudio.StaticMeshAudioDataAsset");
		return ptr;
	}

};


// Class RareAudio.AudioIslandStaticMeshAssociatorBase
// 0x0000 (0x0470 - 0x0470)
class AAudioIslandStaticMeshAssociatorBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareAudio.AudioIslandStaticMeshAssociatorBase");
		return ptr;
	}

};


// Class RareAudio.AudioSpaceDataAsset
// 0x0018 (0x0040 - 0x0028)
class UAudioSpaceDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FName                                       RtpcToUpdate;                                             // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 AmbienceToStart;                                          // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareAudio.AudioSpaceDataAsset");
		return ptr;
	}


	struct FName GetRtpcName();
};


// Class RareAudio.AudioPortalComponent
// 0x0020 (0x0310 - 0x02F0)
class UAudioPortalComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareAudio.AudioPortalComponent");
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
		static auto ptr = UObject::FindClass("Class RareAudio.AudioPortalInterface");
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
		static auto ptr = UObject::FindClass("Class RareAudio.AudioPortalService");
		return ptr;
	}

};


// Class RareAudio.AudioSpaceComponent
// 0x0010 (0x0700 - 0x06F0)
class UAudioSpaceComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x06F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareAudio.AudioSpaceComponent");
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
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	TArray<class UAudioSpaceComponent*>                CurrentSpaces;                                            // 0x01E3(0x0010) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareAudio.AudioSpaceTrackerComponent");
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
		static auto ptr = UObject::FindClass("Class RareAudio.RareAudioHardwareDeviceService");
		return ptr;
	}

};


// Class RareAudio.StaticMeshAudioEmittersComponent
// 0x0010 (0x0300 - 0x02F0)
class UStaticMeshAudioEmittersComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareAudio.StaticMeshAudioEmittersComponent");
		return ptr;
	}


	void PopulateInstanceAssociations();
};


// Class RareAudio.TritonAcousticMap
// 0x0038 (0x0060 - 0x0028)
class UTritonAcousticMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareAudio.TritonAcousticMap");
		return ptr;
	}

};


// Class RareAudio.TritonComponent
// 0x0010 (0x0300 - 0x02F0)
class UTritonComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareAudio.TritonComponent");
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
		static auto ptr = UObject::FindClass("Class RareAudio.TritonInterface");
		return ptr;
	}

};


// Class RareAudio.TritonService
// 0x00A8 (0x00D0 - 0x0028)
class UTritonService : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0028(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareAudio.TritonService");
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
		static auto ptr = UObject::FindClass("Class RareAudio.WwiseEmitterComponentBlueprintLibrary");
		return ptr;
	}


	bool STATIC_GetNamedEmitter(const struct FName& InNameOfEmitterToRetrieve, class AActor* InActorToFindEmitterOn, struct FWwiseEmitter* OutEmitter);
	bool STATIC_GetClosestNEmitters(const struct FVector& InFromPosition, int InNumEmittersToFind, class AActor* InActorToFindClosestEmitterOn, TArray<struct FWwiseEmitter>* OutEmitters);
	bool STATIC_GetClosestEmitter(const struct FVector& InFromPosition, class AActor* InActorToFindClosestEmitterOn, struct FWwiseEmitter* OutEmitter);
};


// Class RareAudio.WwiseEmitterComponentBlueprintLibraryTestActor
// 0x0000 (0x0470 - 0x0470)
class AWwiseEmitterComponentBlueprintLibraryTestActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareAudio.WwiseEmitterComponentBlueprintLibraryTestActor");
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
		static auto ptr = UObject::FindClass("Class RareAudio.WwisePoolManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
