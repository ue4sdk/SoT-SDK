#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RareAudio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetState
struct UWwiseEmitterBlueprintLibrary_WwiseSetState_Params
{
	struct FName                                       StateGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StateValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetGlobalRTPC
struct UWwiseEmitterBlueprintLibrary_WwiseSetGlobalRTPC_Params
{
	struct FName                                       RTPCName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RTPCValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostGlobalEvent
struct UWwiseEmitterBlueprintLibrary_WwisePostGlobalEvent_Params
{
	class UWwiseEvent*                                 Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostEventAtLocation
struct UWwiseEmitterBlueprintLibrary_WwisePostEventAtLocation_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (Parm, OutParm)
	class UWwiseEvent*                                 Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Front;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEmitterRelationship>                  Relationship;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerInfo
struct UWwiseEmitterBlueprintLibrary_WwiseGetListenerInfo_Params
{
	struct FWwiseListenerInfo                          InfoOut;                                                  // (Parm, OutParm)
	int                                                Viewport;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerEmitter
struct UWwiseEmitterBlueprintLibrary_WwiseGetListenerEmitter_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (Parm, OutParm)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ListenerIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFollowOrientaion;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetEmitter
struct UWwiseEmitterBlueprintLibrary_WwiseGetEmitter_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterWaitToComplete
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterWaitToComplete_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                PlayId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterStop
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterStop_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                PlayId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPCOnAll
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetRTPCOnAll_Params
{
	TArray<struct FWwiseEmitter>                       Emitters;                                                 // (ConstParm, Parm, ZeroConstructor)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPC
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetRTPC_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetParams
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetParams_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FWwiseEmitterParams                         Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetLocation
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetLocation_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEventOnAll
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterPostEventOnAll_Params
{
	TArray<struct FWwiseEmitter>                       Emitters;                                                 // (ConstParm, Parm, ZeroConstructor)
	class UWwiseEvent*                                 WwiseEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEmitterRelationship>                  Relationship;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourcePath;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceObj;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEvent
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterPostEvent_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class UWwiseEvent*                                 WwiseEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEmitterRelationship>                  Relationship;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourcePath;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceObj;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsValid
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterIsValid_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsPlaying
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterIsPlaying_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class UWwiseEvent*                                 Event;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterGetRTPC
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterGetRTPC_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterDestroy
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterDestroy_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (Parm, OutParm, ReferenceParm)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPCOnAll
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentSetRTPCOnAll_Params
{
	TArray<class UWwiseEmitterComponent*>              EmitterComponents;                                        // (ConstParm, Parm, ZeroConstructor)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPC
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentSetRTPC_Params
{
	class UWwiseEmitterComponent*                      EmitterComponent;                                         // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEventOnAll
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentPostEventOnAll_Params
{
	TArray<class UWwiseEmitterComponent*>              EmitterComponents;                                        // (ConstParm, Parm, ZeroConstructor)
	class UWwiseEvent*                                 WwiseEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEmitterRelationship>                  Relationship;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourcePath;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceObj;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEvent
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentPostEvent_Params
{
	class UWwiseEmitterComponent*                      EmitterComponent;                                         // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseEvent*                                 WwiseEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEmitterRelationship>                  Relationship;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourcePath;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceObj;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateDetachedEmitter
struct UWwiseEmitterBlueprintLibrary_WwiseCreateDetachedEmitter_Params
{
	struct FWwiseEmitter                               Emitter;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWwiseEmitterCreationParams                 CreationParams;                                           // (Parm)
	TEnumAsByte<EEmitterRelationship>                  Relationship;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Forward;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.SeekOnEvent
struct UWwiseEmitterBlueprintLibrary_SeekOnEvent_Params
{
	struct FWwiseEmitter                               WwiseEmitter;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UWwiseEvent*                                 in_eventID;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                in_iPosition;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               in_bSeekToNearestMarker;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                in_PlayingID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.GetPlaybackPosition
struct UWwiseEmitterBlueprintLibrary_GetPlaybackPosition_Params
{
	struct FWwiseEmitter                               WwiseEmitter;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                in_PlayingID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlaybackPositionInMs;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.AudioEventToComponentMap.ClearMappings
struct AAudioEventToComponentMap_ClearMappings_Params
{
};

// Function RareAudio.AudioEventToComponentMap.AddMappingWithSingleEmitterComponent
struct AAudioEventToComponentMap_AddMappingWithSingleEmitterComponent_Params
{
	class UWwiseEvent*                                 PlayEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseEmitterComponent*                      WwiseEmitterComponent;                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     WwiseEmitterPool;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RareAudio.AudioEventToComponentMap.AddMapping
struct AAudioEventToComponentMap_AddMapping_Params
{
	class UWwiseEvent*                                 PlayEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UWwiseEmitterComponent*>              WwiseEmitterComponents;                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UWwiseObjectPoolWrapper*                     WwiseEmitterPool;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RareAudio.AudioEventToComponentMapComponent.ClearMappings
struct UAudioEventToComponentMapComponent_ClearMappings_Params
{
};

// Function RareAudio.AudioEventToComponentMapComponent.AddMappingWithSingleEmitterComponent
struct UAudioEventToComponentMapComponent_AddMappingWithSingleEmitterComponent_Params
{
	class UWwiseEvent*                                 PlayEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseEmitterComponent*                      WwiseEmitterComponent;                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     WwiseEmitterPool;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RareAudio.AudioEventToComponentMapComponent.AddMapping
struct UAudioEventToComponentMapComponent_AddMapping_Params
{
	class UWwiseEvent*                                 PlayEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UWwiseEmitterComponent*>              WwiseEmitterComponents;                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UWwiseObjectPoolWrapper*                     WwiseEmitterPool;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RareAudio.AudioSpaceDataAsset.GetRtpcName
struct UAudioSpaceDataAsset_GetRtpcName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.AudioPortalComponent.SetParentShip
struct UAudioPortalComponent_SetParentShip_Params
{
	class AActor*                                      ParentShip;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RareAudio.AudioPortalInterface.UnregisterPortal
struct UAudioPortalInterface_UnregisterPortal_Params
{
	class UAudioPortalComponent*                       AudioPortal;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RareAudio.AudioPortalInterface.RegisterPortal
struct UAudioPortalInterface_RegisterPortal_Params
{
	class UAudioPortalComponent*                       AudioPortal;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OwningActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RareAudio.AudioPortalInterface.GetAllRegisteredPortalsInSpecificSpace
struct UAudioPortalInterface_GetAllRegisteredPortalsInSpecificSpace_Params
{
	class UAudioSpaceDataAsset*                        AudioSpace;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OwningActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TWeakObjectPtr<class UAudioPortalComponent>> ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function RareAudio.AudioPortalInterface.GetAllRegisteredPortals
struct UAudioPortalInterface_GetAllRegisteredPortals_Params
{
	TArray<TWeakObjectPtr<class UAudioPortalComponent>> ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function RareAudio.AudioSpaceComponent.OnOverlapEnd
struct UAudioSpaceComponent_OnOverlapEnd_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RareAudio.AudioSpaceComponent.OnOverlapBegin
struct UAudioSpaceComponent_OnOverlapBegin_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function RareAudio.AudioSpaceTrackerComponent.GetCurrentSpace
struct UAudioSpaceTrackerComponent_GetCurrentSpace_Params
{
	class UAudioSpaceDataAsset*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.StaticMeshAudioEmittersComponent.PopulateInstanceAssociations
struct UStaticMeshAudioEmittersComponent_PopulateInstanceAssociations_Params
{
};

// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetNamedEmitter
struct UWwiseEmitterComponentBlueprintLibrary_GetNamedEmitter_Params
{
	struct FWwiseEmitter                               OutEmitter;                                               // (Parm, OutParm)
	struct FName                                       InNameOfEmitterToRetrieve;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InActorToFindEmitterOn;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestNEmitters
struct UWwiseEmitterComponentBlueprintLibrary_GetClosestNEmitters_Params
{
	TArray<struct FWwiseEmitter>                       OutEmitters;                                              // (Parm, OutParm, ZeroConstructor)
	struct FVector                                     InFromPosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                InNumEmittersToFind;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InActorToFindClosestEmitterOn;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestEmitter
struct UWwiseEmitterComponentBlueprintLibrary_GetClosestEmitter_Params
{
	struct FWwiseEmitter                               OutEmitter;                                               // (Parm, OutParm)
	struct FVector                                     InFromPosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      InActorToFindClosestEmitterOn;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
