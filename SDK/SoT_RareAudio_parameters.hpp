#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RareAudio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RareAudio.AudioEventToComponentMap.ClearMappings
struct AAudioEventToComponentMap_ClearMappings_Params
{
};

// Function RareAudio.AudioEventToComponentMap.AddMappingWithSingleEmitterComponent
struct AAudioEventToComponentMap_AddMappingWithSingleEmitterComponent_Params
{
	UWwiseEvent*                                       PlayEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       StopEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	UWwiseEmitterComponent*                            WwiseEmitterComponent;                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	UWwiseObjectPoolWrapper*                           WwiseEmitterPool;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RareAudio.AudioEventToComponentMap.AddMapping
struct AAudioEventToComponentMap_AddMapping_Params
{
	UWwiseEvent*                                       PlayEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       StopEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<UWwiseEmitterComponent*>                    WwiseEmitterComponents;                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	UWwiseObjectPoolWrapper*                           WwiseEmitterPool;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RareAudio.AudioEventToComponentMapComponent.ClearMappings
struct UAudioEventToComponentMapComponent_ClearMappings_Params
{
};

// Function RareAudio.AudioEventToComponentMapComponent.AddMappingWithSingleEmitterComponent
struct UAudioEventToComponentMapComponent_AddMappingWithSingleEmitterComponent_Params
{
	UWwiseEvent*                                       PlayEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       StopEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	UWwiseEmitterComponent*                            WwiseEmitterComponent;                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	UWwiseObjectPoolWrapper*                           WwiseEmitterPool;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RareAudio.AudioEventToComponentMapComponent.AddMapping
struct UAudioEventToComponentMapComponent_AddMapping_Params
{
	UWwiseEvent*                                       PlayEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       StopEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<UWwiseEmitterComponent*>                    WwiseEmitterComponents;                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	UWwiseObjectPoolWrapper*                           WwiseEmitterPool;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseStopGlobalEvent
struct UWwiseEmitterBlueprintLibrary_WwiseStopGlobalEvent_Params
{
	UWwiseEvent*                                       Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetState
struct UWwiseEmitterBlueprintLibrary_WwiseSetState_Params
{
	FName                                              StateGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              StateValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetGlobalRTPC
struct UWwiseEmitterBlueprintLibrary_WwiseSetGlobalRTPC_Params
{
	FName                                              RTPCName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RTPCValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostOneShotOnOwner
struct UWwiseEmitterBlueprintLibrary_WwisePostOneShotOnOwner_Params
{
	UObject*                                           Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	UWwiseObjectPoolWrapper*                           EmitterPool;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	FWwiseEmitterCreationParams                        CreationParams;                                           // (Parm)
	FVector                                            Offset;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEmitterRelationship>                  Relationship;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostGlobalEvent
struct UWwiseEmitterBlueprintLibrary_WwisePostGlobalEvent_Params
{
	UWwiseEvent*                                       Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostEventAtLocation
struct UWwiseEmitterBlueprintLibrary_WwisePostEventAtLocation_Params
{
	FWwiseEmitter                                      Emitter;                                                  // (Parm, OutParm)
	UWwiseEvent*                                       Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Front;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	UWwiseObjectPoolWrapper*                           EmitterPool;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEmitterRelationship>                  Relationship;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseIsGlobalEvent
struct UWwiseEmitterBlueprintLibrary_WwiseIsGlobalEvent_Params
{
	UWwiseEvent*                                       Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerInfo
struct UWwiseEmitterBlueprintLibrary_WwiseGetListenerInfo_Params
{
	FWwiseListenerInfo                                 InfoOut;                                                  // (Parm, OutParm)
	int                                                Viewport;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerEmitter
struct UWwiseEmitterBlueprintLibrary_WwiseGetListenerEmitter_Params
{
	FWwiseEmitter                                      Emitter;                                                  // (Parm, OutParm)
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ListenerIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFollowOrientaion;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	UWwiseObjectPoolWrapper*                           EmitterPool;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetGlobalRTPC
struct UWwiseEmitterBlueprintLibrary_WwiseGetGlobalRTPC_Params
{
	FName                                              RTPCName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RTPCValue;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterWaitToComplete
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterWaitToComplete_Params
{
	FWwiseEmitter                                      Emitter;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                PlayId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FLatentActionInfo                                  LatentInfo;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterStop
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterStop_Params
{
	FWwiseEmitter                                      Emitter;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                PlayId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetSwitch
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetSwitch_Params
{
	FWwiseEmitter                                      Emitter;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	FName                                              SwitchGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPCOnAll
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetRTPCOnAll_Params
{
	TArray<FWwiseEmitter>                              Emitters;                                                 // (ConstParm, Parm, ZeroConstructor)
	FName                                              Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPC
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetRTPC_Params
{
	FWwiseEmitter                                      Emitter;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	FName                                              Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetParams
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetParams_Params
{
	FWwiseEmitter                                      Emitter;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	FWwiseEmitterParams                                Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetLocation
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetLocation_Params
{
	FWwiseEmitter                                      Emitter;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	FVector                                            Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEventOnAll
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterPostEventOnAll_Params
{
	TArray<FWwiseEmitter>                              Emitters;                                                 // (ConstParm, Parm, ZeroConstructor)
	UWwiseEvent*                                       WwiseEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEmitterRelationship>                  Relationship;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              SourcePath;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              SourceObj;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEvent
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterPostEvent_Params
{
	FWwiseEmitter                                      Emitter;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	UWwiseEvent*                                       WwiseEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEmitterRelationship>                  Relationship;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              SourcePath;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              SourceObj;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsValid
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterIsValid_Params
{
	FWwiseEmitter                                      Emitter;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsPlaying
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterIsPlaying_Params
{
	FWwiseEmitter                                      Emitter;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	UWwiseEvent*                                       Event;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterGetRTPC
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterGetRTPC_Params
{
	FWwiseEmitter                                      Emitter;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	FName                                              Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterDestroy
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterDestroy_Params
{
	FWwiseEmitter                                      Emitter;                                                  // (Parm, OutParm, ReferenceParm)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPCOnAll
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentSetRTPCOnAll_Params
{
	TArray<UWwiseEmitterComponent*>                    EmitterComponents;                                        // (ConstParm, Parm, ZeroConstructor)
	FName                                              Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPC
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentSetRTPC_Params
{
	UWwiseEmitterComponent*                            EmitterComponent;                                         // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	FName                                              Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEventOnAll
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentPostEventOnAll_Params
{
	TArray<UWwiseEmitterComponent*>                    EmitterComponents;                                        // (ConstParm, Parm, ZeroConstructor)
	UWwiseEvent*                                       WwiseEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEmitterRelationship>                  Relationship;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              SourcePath;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              SourceObj;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEvent
struct UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentPostEvent_Params
{
	UWwiseEmitterComponent*                            EmitterComponent;                                         // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	UWwiseEvent*                                       WwiseEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEmitterRelationship>                  Relationship;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              SourcePath;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              SourceObj;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateEmitter
struct UWwiseEmitterBlueprintLibrary_WwiseCreateEmitter_Params
{
	FWwiseEmitter                                      Emitter;                                                  // (Parm, OutParm)
	FName                                              Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	UWwiseObjectPoolWrapper*                           EmitterPool;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Offset;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateDetachedEmitter
struct UWwiseEmitterBlueprintLibrary_WwiseCreateDetachedEmitter_Params
{
	FWwiseEmitter                                      Emitter;                                                  // (Parm, OutParm)
	FName                                              Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	UWwiseObjectPoolWrapper*                           EmitterPool;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	FWwiseEmitterCreationParams                        CreationParams;                                           // (Parm)
	TEnumAsByte<EEmitterRelationship>                  Relationship;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Forward;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.SeekOnEvent
struct UWwiseEmitterBlueprintLibrary_SeekOnEvent_Params
{
	FWwiseEmitter                                      WwiseEmitter;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	UWwiseEvent*                                       in_eventID;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                in_iPosition;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               in_bSeekToNearestMarker;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                in_PlayingID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterBlueprintLibrary.GetPlaybackPosition
struct UWwiseEmitterBlueprintLibrary_GetPlaybackPosition_Params
{
	FWwiseEmitter                                      WwiseEmitter;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                in_PlayingID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlaybackPositionInMs;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetNamedEmitter
struct UWwiseEmitterComponentBlueprintLibrary_GetNamedEmitter_Params
{
	FWwiseEmitter                                      OutEmitter;                                               // (Parm, OutParm)
	FName                                              InNameOfEmitterToRetrieve;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            InActorToFindEmitterOn;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestNEmitters
struct UWwiseEmitterComponentBlueprintLibrary_GetClosestNEmitters_Params
{
	TArray<FWwiseEmitter>                              OutEmitters;                                              // (Parm, OutParm, ZeroConstructor)
	FVector                                            InFromPosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                InNumEmittersToFind;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            InActorToFindClosestEmitterOn;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestEmitter
struct UWwiseEmitterComponentBlueprintLibrary_GetClosestEmitter_Params
{
	FWwiseEmitter                                      OutEmitter;                                               // (Parm, OutParm)
	FVector                                            InFromPosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	AActor*                                            InActorToFindClosestEmitterOn;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.AudioPortalComponent.SetParentShip
struct UAudioPortalComponent_SetParentShip_Params
{
	AActor*                                            ParentShip;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RareAudio.AudioPortalInterface.UnregisterPortal
struct UAudioPortalInterface_UnregisterPortal_Params
{
	UAudioPortalComponent*                             AudioPortal;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RareAudio.AudioPortalInterface.RegisterPortal
struct UAudioPortalInterface_RegisterPortal_Params
{
	UAudioPortalComponent*                             AudioPortal;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	AActor*                                            OwningActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RareAudio.AudioPortalInterface.GetAllRegisteredPortalsInSpecificSpace
struct UAudioPortalInterface_GetAllRegisteredPortalsInSpecificSpace_Params
{
	UAudioSpaceDataAsset*                              AudioSpace;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            OwningActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
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
	AActor*                                            OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	UPrimitiveComponent*                               OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RareAudio.AudioSpaceComponent.OnOverlapBegin
struct UAudioSpaceComponent_OnOverlapBegin_Params
{
	AActor*                                            OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	UPrimitiveComponent*                               OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FHitResult                                         SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function RareAudio.AudioSpaceDataAsset.GetRtpcName
struct UAudioSpaceDataAsset_GetRtpcName_Params
{
	FName                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.AudioSpaceTrackerComponent.GetCurrentSpace
struct UAudioSpaceTrackerComponent_GetCurrentSpace_Params
{
	UAudioSpaceDataAsset*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareAudio.StaticMeshAudioEmittersComponent.PopulateInstanceAssociations
struct UStaticMeshAudioEmittersComponent_PopulateInstanceAssociations_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
