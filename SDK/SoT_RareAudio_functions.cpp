// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RareAudio_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RareAudio.AudioEventToComponentMap.ClearMappings
// (Final, Native, Public, BlueprintCallable)

void AAudioEventToComponentMap::ClearMappings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioEventToComponentMap.ClearMappings"));

	AAudioEventToComponentMap_ClearMappings_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function RareAudio.AudioEventToComponentMap.AddMappingWithSingleEmitterComponent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UWwiseEvent*                   PlayEvent                      (Parm, ZeroConstructor, IsPlainOldData)
// UWwiseEvent*                   StopEvent                      (Parm, ZeroConstructor, IsPlainOldData)
// UWwiseEmitterComponent*        WwiseEmitterComponent          (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// UWwiseObjectPoolWrapper*       WwiseEmitterPool               (Parm, ZeroConstructor, IsPlainOldData)

void AAudioEventToComponentMap::AddMappingWithSingleEmitterComponent(UWwiseEvent* PlayEvent, UWwiseEvent* StopEvent, UWwiseObjectPoolWrapper* WwiseEmitterPool, UWwiseEmitterComponent** WwiseEmitterComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioEventToComponentMap.AddMappingWithSingleEmitterComponent"));

	AAudioEventToComponentMap_AddMappingWithSingleEmitterComponent_Params params;
	params.PlayEvent = PlayEvent;
	params.StopEvent = StopEvent;
	params.WwiseEmitterPool = WwiseEmitterPool;

	UObject::ProcessEvent(fn, &params);

	if (WwiseEmitterComponent != nullptr)
		*WwiseEmitterComponent = params.WwiseEmitterComponent;
}


// Function RareAudio.AudioEventToComponentMap.AddMapping
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UWwiseEvent*                   PlayEvent                      (Parm, ZeroConstructor, IsPlainOldData)
// UWwiseEvent*                   StopEvent                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<UWwiseEmitterComponent*> WwiseEmitterComponents         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// UWwiseObjectPoolWrapper*       WwiseEmitterPool               (Parm, ZeroConstructor, IsPlainOldData)

void AAudioEventToComponentMap::AddMapping(UWwiseEvent* PlayEvent, UWwiseEvent* StopEvent, UWwiseObjectPoolWrapper* WwiseEmitterPool, TArray<UWwiseEmitterComponent*>* WwiseEmitterComponents)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioEventToComponentMap.AddMapping"));

	AAudioEventToComponentMap_AddMapping_Params params;
	params.PlayEvent = PlayEvent;
	params.StopEvent = StopEvent;
	params.WwiseEmitterPool = WwiseEmitterPool;

	UObject::ProcessEvent(fn, &params);

	if (WwiseEmitterComponents != nullptr)
		*WwiseEmitterComponents = params.WwiseEmitterComponents;
}


// Function RareAudio.AudioEventToComponentMapComponent.ClearMappings
// (Final, Native, Public, BlueprintCallable)

void UAudioEventToComponentMapComponent::ClearMappings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioEventToComponentMapComponent.ClearMappings"));

	UAudioEventToComponentMapComponent_ClearMappings_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function RareAudio.AudioEventToComponentMapComponent.AddMappingWithSingleEmitterComponent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UWwiseEvent*                   PlayEvent                      (Parm, ZeroConstructor, IsPlainOldData)
// UWwiseEvent*                   StopEvent                      (Parm, ZeroConstructor, IsPlainOldData)
// UWwiseEmitterComponent*        WwiseEmitterComponent          (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// UWwiseObjectPoolWrapper*       WwiseEmitterPool               (Parm, ZeroConstructor, IsPlainOldData)

void UAudioEventToComponentMapComponent::AddMappingWithSingleEmitterComponent(UWwiseEvent* PlayEvent, UWwiseEvent* StopEvent, UWwiseObjectPoolWrapper* WwiseEmitterPool, UWwiseEmitterComponent** WwiseEmitterComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioEventToComponentMapComponent.AddMappingWithSingleEmitterComponent"));

	UAudioEventToComponentMapComponent_AddMappingWithSingleEmitterComponent_Params params;
	params.PlayEvent = PlayEvent;
	params.StopEvent = StopEvent;
	params.WwiseEmitterPool = WwiseEmitterPool;

	UObject::ProcessEvent(fn, &params);

	if (WwiseEmitterComponent != nullptr)
		*WwiseEmitterComponent = params.WwiseEmitterComponent;
}


// Function RareAudio.AudioEventToComponentMapComponent.AddMapping
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UWwiseEvent*                   PlayEvent                      (Parm, ZeroConstructor, IsPlainOldData)
// UWwiseEvent*                   StopEvent                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<UWwiseEmitterComponent*> WwiseEmitterComponents         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// UWwiseObjectPoolWrapper*       WwiseEmitterPool               (Parm, ZeroConstructor, IsPlainOldData)

void UAudioEventToComponentMapComponent::AddMapping(UWwiseEvent* PlayEvent, UWwiseEvent* StopEvent, UWwiseObjectPoolWrapper* WwiseEmitterPool, TArray<UWwiseEmitterComponent*>* WwiseEmitterComponents)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioEventToComponentMapComponent.AddMapping"));

	UAudioEventToComponentMapComponent_AddMapping_Params params;
	params.PlayEvent = PlayEvent;
	params.StopEvent = StopEvent;
	params.WwiseEmitterPool = WwiseEmitterPool;

	UObject::ProcessEvent(fn, &params);

	if (WwiseEmitterComponents != nullptr)
		*WwiseEmitterComponents = params.WwiseEmitterComponents;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseStopGlobalEvent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// UWwiseEvent*                   Event                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseEmitterBlueprintLibrary::WwiseStopGlobalEvent(UWwiseEvent* Event, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseStopGlobalEvent"));

	UWwiseEmitterBlueprintLibrary_WwiseStopGlobalEvent_Params params;
	params.Event = Event;
	params.FadeTime = FadeTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// FName                          StateGroup                     (Parm, ZeroConstructor, IsPlainOldData)
// FName                          StateValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseEmitterBlueprintLibrary::WwiseSetState(const FName& StateGroup, const FName& StateValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetState"));

	UWwiseEmitterBlueprintLibrary_WwiseSetState_Params params;
	params.StateGroup = StateGroup;
	params.StateValue = StateValue;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetGlobalRTPC
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// FName                          RTPCName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          RTPCValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseEmitterBlueprintLibrary::WwiseSetGlobalRTPC(const FName& RTPCName, float RTPCValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetGlobalRTPC"));

	UWwiseEmitterBlueprintLibrary_WwiseSetGlobalRTPC_Params params;
	params.RTPCName = RTPCName;
	params.RTPCValue = RTPCValue;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostOneShotOnOwner
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// UObject*                       Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// UWwiseObjectPoolWrapper*       EmitterPool                    (Parm, ZeroConstructor, IsPlainOldData)
// FWwiseEmitterCreationParams    CreationParams                 (Parm)
// FVector                        Offset                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEmitterRelationship> Relationship                   (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseEmitterBlueprintLibrary::WwisePostOneShotOnOwner(UObject* Owner, UWwiseObjectPoolWrapper* EmitterPool, const FWwiseEmitterCreationParams& CreationParams, const FVector& Offset, TEnumAsByte<EEmitterRelationship> Relationship)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostOneShotOnOwner"));

	UWwiseEmitterBlueprintLibrary_WwisePostOneShotOnOwner_Params params;
	params.Owner = Owner;
	params.EmitterPool = EmitterPool;
	params.CreationParams = CreationParams;
	params.Offset = Offset;
	params.Relationship = Relationship;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostGlobalEvent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// UWwiseEvent*                   Event                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWwiseEmitterBlueprintLibrary::WwisePostGlobalEvent(UWwiseEvent* Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostGlobalEvent"));

	UWwiseEmitterBlueprintLibrary_WwisePostGlobalEvent_Params params;
	params.Event = Event;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostEventAtLocation
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FWwiseEmitter                  Emitter                        (Parm, OutParm)
// UWwiseEvent*                   Event                          (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        Location                       (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        Front                          (Parm, ZeroConstructor, IsPlainOldData)
// UWwiseObjectPoolWrapper*       EmitterPool                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEmitterRelationship> Relationship                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWwiseEmitterBlueprintLibrary::WwisePostEventAtLocation(UWwiseEvent* Event, const FVector& Location, const FVector& Front, UWwiseObjectPoolWrapper* EmitterPool, TEnumAsByte<EEmitterRelationship> Relationship, FWwiseEmitter* Emitter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostEventAtLocation"));

	UWwiseEmitterBlueprintLibrary_WwisePostEventAtLocation_Params params;
	params.Event = Event;
	params.Location = Location;
	params.Front = Front;
	params.EmitterPool = EmitterPool;
	params.Relationship = Relationship;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Emitter != nullptr)
		*Emitter = params.Emitter;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseIsGlobalEvent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// UWwiseEvent*                   Event                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseIsGlobalEvent(UWwiseEvent* Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseIsGlobalEvent"));

	UWwiseEmitterBlueprintLibrary_WwiseIsGlobalEvent_Params params;
	params.Event = Event;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerInfo
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FWwiseListenerInfo             InfoOut                        (Parm, OutParm)
// int                            Viewport                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseGetListenerInfo(int Viewport, FWwiseListenerInfo* InfoOut)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerInfo"));

	UWwiseEmitterBlueprintLibrary_WwiseGetListenerInfo_Params params;
	params.Viewport = Viewport;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (InfoOut != nullptr)
		*InfoOut = params.InfoOut;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerEmitter
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FWwiseEmitter                  Emitter                        (Parm, OutParm)
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ListenerIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// FName                          Name                           (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFollowOrientaion              (Parm, ZeroConstructor, IsPlainOldData)
// UWwiseObjectPoolWrapper*       EmitterPool                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseGetListenerEmitter(UObject* WorldContextObject, int ListenerIndex, const FName& Name, const FVector& Offset, bool bFollowOrientaion, UWwiseObjectPoolWrapper* EmitterPool, FWwiseEmitter* Emitter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerEmitter"));

	UWwiseEmitterBlueprintLibrary_WwiseGetListenerEmitter_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ListenerIndex = ListenerIndex;
	params.Name = Name;
	params.Offset = Offset;
	params.bFollowOrientaion = bFollowOrientaion;
	params.EmitterPool = EmitterPool;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Emitter != nullptr)
		*Emitter = params.Emitter;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetGlobalRTPC
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FName                          RTPCName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          RTPCValue                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseGetGlobalRTPC(const FName& RTPCName, float* RTPCValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetGlobalRTPC"));

	UWwiseEmitterBlueprintLibrary_WwiseGetGlobalRTPC_Params params;
	params.RTPCName = RTPCName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (RTPCValue != nullptr)
		*RTPCValue = params.RTPCValue;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterWaitToComplete
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FWwiseEmitter                  Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// int                            PlayId                         (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FLatentActionInfo              LatentInfo                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterWaitToComplete(const FWwiseEmitter& Emitter, int PlayId, UObject* WorldContextObject, const FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterWaitToComplete"));

	UWwiseEmitterBlueprintLibrary_WwiseEmitterWaitToComplete_Params params;
	params.Emitter = Emitter;
	params.PlayId = PlayId;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterStop
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FWwiseEmitter                  Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// int                            PlayId                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterStop(const FWwiseEmitter& Emitter, int PlayId, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterStop"));

	UWwiseEmitterBlueprintLibrary_WwiseEmitterStop_Params params;
	params.Emitter = Emitter;
	params.PlayId = PlayId;
	params.FadeTime = FadeTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetSwitch
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FWwiseEmitter                  Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// FName                          SwitchGroup                    (Parm, ZeroConstructor, IsPlainOldData)
// FName                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterSetSwitch(const FWwiseEmitter& Emitter, const FName& SwitchGroup, const FName& Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetSwitch"));

	UWwiseEmitterBlueprintLibrary_WwiseEmitterSetSwitch_Params params;
	params.Emitter = Emitter;
	params.SwitchGroup = SwitchGroup;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPCOnAll
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<FWwiseEmitter>          Emitters                       (ConstParm, Parm, ZeroConstructor)
// FName                          Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterSetRTPCOnAll(TArray<FWwiseEmitter> Emitters, const FName& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPCOnAll"));

	UWwiseEmitterBlueprintLibrary_WwiseEmitterSetRTPCOnAll_Params params;
	params.Emitters = Emitters;
	params.Name = Name;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPC
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FWwiseEmitter                  Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// FName                          Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterSetRTPC(const FWwiseEmitter& Emitter, const FName& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPC"));

	UWwiseEmitterBlueprintLibrary_WwiseEmitterSetRTPC_Params params;
	params.Emitter = Emitter;
	params.Name = Name;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetParams
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FWwiseEmitter                  Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// FWwiseEmitterParams            Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterSetParams(const FWwiseEmitter& Emitter, const FWwiseEmitterParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetParams"));

	UWwiseEmitterBlueprintLibrary_WwiseEmitterSetParams_Params params;
	params.Emitter = Emitter;
	params.Params = Params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetLocation
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FWwiseEmitter                  Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// FVector                        Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterSetLocation(const FWwiseEmitter& Emitter, const FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetLocation"));

	UWwiseEmitterBlueprintLibrary_WwiseEmitterSetLocation_Params params;
	params.Emitter = Emitter;
	params.Location = Location;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEventOnAll
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<FWwiseEmitter>          Emitters                       (ConstParm, Parm, ZeroConstructor)
// UWwiseEvent*                   WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEmitterRelationship> Relationship                   (Parm, ZeroConstructor, IsPlainOldData)
// FName                          SourcePath                     (Parm, ZeroConstructor, IsPlainOldData)
// FName                          SourceObj                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UWwiseEmitterBlueprintLibrary::WwiseEmitterPostEventOnAll(TArray<FWwiseEmitter> Emitters, UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const FName& SourcePath, const FName& SourceObj)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEventOnAll"));

	UWwiseEmitterBlueprintLibrary_WwiseEmitterPostEventOnAll_Params params;
	params.Emitters = Emitters;
	params.WwiseEvent = WwiseEvent;
	params.Relationship = Relationship;
	params.SourcePath = SourcePath;
	params.SourceObj = SourceObj;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEvent
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FWwiseEmitter                  Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// UWwiseEvent*                   WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEmitterRelationship> Relationship                   (Parm, ZeroConstructor, IsPlainOldData)
// FName                          SourcePath                     (Parm, ZeroConstructor, IsPlainOldData)
// FName                          SourceObj                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWwiseEmitterBlueprintLibrary::WwiseEmitterPostEvent(const FWwiseEmitter& Emitter, UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const FName& SourcePath, const FName& SourceObj)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEvent"));

	UWwiseEmitterBlueprintLibrary_WwiseEmitterPostEvent_Params params;
	params.Emitter = Emitter;
	params.WwiseEvent = WwiseEvent;
	params.Relationship = Relationship;
	params.SourcePath = SourcePath;
	params.SourceObj = SourceObj;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsValid
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FWwiseEmitter                  Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterIsValid(const FWwiseEmitter& Emitter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsValid"));

	UWwiseEmitterBlueprintLibrary_WwiseEmitterIsValid_Params params;
	params.Emitter = Emitter;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsPlaying
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FWwiseEmitter                  Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// UWwiseEvent*                   Event                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterIsPlaying(const FWwiseEmitter& Emitter, UWwiseEvent* Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsPlaying"));

	UWwiseEmitterBlueprintLibrary_WwiseEmitterIsPlaying_Params params;
	params.Emitter = Emitter;
	params.Event = Event;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterGetRTPC
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FWwiseEmitter                  Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// FName                          Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterGetRTPC(const FWwiseEmitter& Emitter, const FName& Name, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterGetRTPC"));

	UWwiseEmitterBlueprintLibrary_WwiseEmitterGetRTPC_Params params;
	params.Emitter = Emitter;
	params.Name = Name;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterDestroy
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FWwiseEmitter                  Emitter                        (Parm, OutParm, ReferenceParm)

void UWwiseEmitterBlueprintLibrary::WwiseEmitterDestroy(FWwiseEmitter* Emitter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterDestroy"));

	UWwiseEmitterBlueprintLibrary_WwiseEmitterDestroy_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Emitter != nullptr)
		*Emitter = params.Emitter;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPCOnAll
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<UWwiseEmitterComponent*> EmitterComponents              (ConstParm, Parm, ZeroConstructor)
// FName                          Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentSetRTPCOnAll(TArray<UWwiseEmitterComponent*> EmitterComponents, const FName& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPCOnAll"));

	UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentSetRTPCOnAll_Params params;
	params.EmitterComponents = EmitterComponents;
	params.Name = Name;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPC
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// UWwiseEmitterComponent*        EmitterComponent               (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FName                          Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentSetRTPC(UWwiseEmitterComponent* EmitterComponent, const FName& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPC"));

	UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentSetRTPC_Params params;
	params.EmitterComponent = EmitterComponent;
	params.Name = Name;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEventOnAll
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<UWwiseEmitterComponent*> EmitterComponents              (ConstParm, Parm, ZeroConstructor)
// UWwiseEvent*                   WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEmitterRelationship> Relationship                   (Parm, ZeroConstructor, IsPlainOldData)
// FName                          SourcePath                     (Parm, ZeroConstructor, IsPlainOldData)
// FName                          SourceObj                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEventOnAll(TArray<UWwiseEmitterComponent*> EmitterComponents, UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const FName& SourcePath, const FName& SourceObj)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEventOnAll"));

	UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentPostEventOnAll_Params params;
	params.EmitterComponents = EmitterComponents;
	params.WwiseEvent = WwiseEvent;
	params.Relationship = Relationship;
	params.SourcePath = SourcePath;
	params.SourceObj = SourceObj;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEvent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// UWwiseEmitterComponent*        EmitterComponent               (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// UWwiseEvent*                   WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEmitterRelationship> Relationship                   (Parm, ZeroConstructor, IsPlainOldData)
// FName                          SourcePath                     (Parm, ZeroConstructor, IsPlainOldData)
// FName                          SourceObj                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(UWwiseEmitterComponent* EmitterComponent, UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const FName& SourcePath, const FName& SourceObj)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEvent"));

	UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentPostEvent_Params params;
	params.EmitterComponent = EmitterComponent;
	params.WwiseEvent = WwiseEvent;
	params.Relationship = Relationship;
	params.SourcePath = SourcePath;
	params.SourceObj = SourceObj;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateEmitter
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FWwiseEmitter                  Emitter                        (Parm, OutParm)
// FName                          Name                           (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// UWwiseObjectPoolWrapper*       EmitterPool                    (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        Offset                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseCreateEmitter(const FName& Name, UObject* Owner, UWwiseObjectPoolWrapper* EmitterPool, const FVector& Offset, FWwiseEmitter* Emitter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateEmitter"));

	UWwiseEmitterBlueprintLibrary_WwiseCreateEmitter_Params params;
	params.Name = Name;
	params.Owner = Owner;
	params.EmitterPool = EmitterPool;
	params.Offset = Offset;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Emitter != nullptr)
		*Emitter = params.Emitter;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateDetachedEmitter
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FWwiseEmitter                  Emitter                        (Parm, OutParm)
// FName                          Name                           (Parm, ZeroConstructor, IsPlainOldData)
// UWwiseObjectPoolWrapper*       EmitterPool                    (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        Location                       (Parm, ZeroConstructor, IsPlainOldData)
// FWwiseEmitterCreationParams    CreationParams                 (Parm)
// TEnumAsByte<EEmitterRelationship> Relationship                   (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        Forward                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWwiseEmitterBlueprintLibrary::WwiseCreateDetachedEmitter(const FName& Name, UWwiseObjectPoolWrapper* EmitterPool, const FVector& Location, const FWwiseEmitterCreationParams& CreationParams, TEnumAsByte<EEmitterRelationship> Relationship, const FVector& Forward, FWwiseEmitter* Emitter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateDetachedEmitter"));

	UWwiseEmitterBlueprintLibrary_WwiseCreateDetachedEmitter_Params params;
	params.Name = Name;
	params.EmitterPool = EmitterPool;
	params.Location = Location;
	params.CreationParams = CreationParams;
	params.Relationship = Relationship;
	params.Forward = Forward;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Emitter != nullptr)
		*Emitter = params.Emitter;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.SeekOnEvent
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FWwiseEmitter                  WwiseEmitter                   (ConstParm, Parm, OutParm, ReferenceParm)
// UWwiseEvent*                   in_eventID                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            in_iPosition                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           in_bSeekToNearestMarker        (Parm, ZeroConstructor, IsPlainOldData)
// int                            in_PlayingID                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::SeekOnEvent(const FWwiseEmitter& WwiseEmitter, UWwiseEvent* in_eventID, int in_iPosition, bool in_bSeekToNearestMarker, int in_PlayingID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.SeekOnEvent"));

	UWwiseEmitterBlueprintLibrary_SeekOnEvent_Params params;
	params.WwiseEmitter = WwiseEmitter;
	params.in_eventID = in_eventID;
	params.in_iPosition = in_iPosition;
	params.in_bSeekToNearestMarker = in_bSeekToNearestMarker;
	params.in_PlayingID = in_PlayingID;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.GetPlaybackPosition
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FWwiseEmitter                  WwiseEmitter                   (ConstParm, Parm, OutParm, ReferenceParm)
// int                            in_PlayingID                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            PlaybackPositionInMs           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::GetPlaybackPosition(const FWwiseEmitter& WwiseEmitter, int in_PlayingID, int* PlaybackPositionInMs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.GetPlaybackPosition"));

	UWwiseEmitterBlueprintLibrary_GetPlaybackPosition_Params params;
	params.WwiseEmitter = WwiseEmitter;
	params.in_PlayingID = in_PlayingID;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PlaybackPositionInMs != nullptr)
		*PlaybackPositionInMs = params.PlaybackPositionInMs;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetNamedEmitter
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FWwiseEmitter                  OutEmitter                     (Parm, OutParm)
// FName                          InNameOfEmitterToRetrieve      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// AActor*                        InActorToFindEmitterOn         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterComponentBlueprintLibrary::GetNamedEmitter(const FName& InNameOfEmitterToRetrieve, AActor* InActorToFindEmitterOn, FWwiseEmitter* OutEmitter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetNamedEmitter"));

	UWwiseEmitterComponentBlueprintLibrary_GetNamedEmitter_Params params;
	params.InNameOfEmitterToRetrieve = InNameOfEmitterToRetrieve;
	params.InActorToFindEmitterOn = InActorToFindEmitterOn;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutEmitter != nullptr)
		*OutEmitter = params.OutEmitter;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestNEmitters
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<FWwiseEmitter>          OutEmitters                    (Parm, OutParm, ZeroConstructor)
// FVector                        InFromPosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            InNumEmittersToFind            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// AActor*                        InActorToFindClosestEmitterOn  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterComponentBlueprintLibrary::GetClosestNEmitters(const FVector& InFromPosition, int InNumEmittersToFind, AActor* InActorToFindClosestEmitterOn, TArray<FWwiseEmitter>* OutEmitters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestNEmitters"));

	UWwiseEmitterComponentBlueprintLibrary_GetClosestNEmitters_Params params;
	params.InFromPosition = InFromPosition;
	params.InNumEmittersToFind = InNumEmittersToFind;
	params.InActorToFindClosestEmitterOn = InActorToFindClosestEmitterOn;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutEmitters != nullptr)
		*OutEmitters = params.OutEmitters;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestEmitter
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FWwiseEmitter                  OutEmitter                     (Parm, OutParm)
// FVector                        InFromPosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// AActor*                        InActorToFindClosestEmitterOn  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterComponentBlueprintLibrary::GetClosestEmitter(const FVector& InFromPosition, AActor* InActorToFindClosestEmitterOn, FWwiseEmitter* OutEmitter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestEmitter"));

	UWwiseEmitterComponentBlueprintLibrary_GetClosestEmitter_Params params;
	params.InFromPosition = InFromPosition;
	params.InActorToFindClosestEmitterOn = InActorToFindClosestEmitterOn;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutEmitter != nullptr)
		*OutEmitter = params.OutEmitter;

	return params.ReturnValue;
}


// Function RareAudio.AudioPortalComponent.SetParentShip
// (Native, Public, BlueprintCallable)
// Parameters:
// AActor*                        ParentShip                     (Parm, ZeroConstructor, IsPlainOldData)

void UAudioPortalComponent::SetParentShip(AActor* ParentShip)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioPortalComponent.SetParentShip"));

	UAudioPortalComponent_SetParentShip_Params params;
	params.ParentShip = ParentShip;

	UObject::ProcessEvent(fn, &params);
}


// Function RareAudio.AudioPortalInterface.UnregisterPortal
// (Native, Public, BlueprintCallable)
// Parameters:
// UAudioPortalComponent*         AudioPortal                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAudioPortalInterface::UnregisterPortal(UAudioPortalComponent* AudioPortal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioPortalInterface.UnregisterPortal"));

	UAudioPortalInterface_UnregisterPortal_Params params;
	params.AudioPortal = AudioPortal;

	UObject::ProcessEvent(fn, &params);
}


// Function RareAudio.AudioPortalInterface.RegisterPortal
// (Native, Public, BlueprintCallable)
// Parameters:
// UAudioPortalComponent*         AudioPortal                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// AActor*                        OwningActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UAudioPortalInterface::RegisterPortal(UAudioPortalComponent* AudioPortal, AActor* OwningActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioPortalInterface.RegisterPortal"));

	UAudioPortalInterface_RegisterPortal_Params params;
	params.AudioPortal = AudioPortal;
	params.OwningActor = OwningActor;

	UObject::ProcessEvent(fn, &params);
}


// Function RareAudio.AudioPortalInterface.GetAllRegisteredPortalsInSpecificSpace
// (Native, Public)
// Parameters:
// UAudioSpaceDataAsset*          AudioSpace                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// AActor*                        OwningActor                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<TWeakObjectPtr<class UAudioPortalComponent>> ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<TWeakObjectPtr<class UAudioPortalComponent>> UAudioPortalInterface::GetAllRegisteredPortalsInSpecificSpace(UAudioSpaceDataAsset* AudioSpace, AActor* OwningActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioPortalInterface.GetAllRegisteredPortalsInSpecificSpace"));

	UAudioPortalInterface_GetAllRegisteredPortalsInSpecificSpace_Params params;
	params.AudioSpace = AudioSpace;
	params.OwningActor = OwningActor;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.AudioPortalInterface.GetAllRegisteredPortals
// (Native, Public, Const)
// Parameters:
// TArray<TWeakObjectPtr<class UAudioPortalComponent>> ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<TWeakObjectPtr<class UAudioPortalComponent>> UAudioPortalInterface::GetAllRegisteredPortals()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioPortalInterface.GetAllRegisteredPortals"));

	UAudioPortalInterface_GetAllRegisteredPortals_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.AudioSpaceComponent.OnOverlapEnd
// (Final, Native, Private)
// Parameters:
// AActor*                        OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// UPrimitiveComponent*           OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void UAudioSpaceComponent::OnOverlapEnd(AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioSpaceComponent.OnOverlapEnd"));

	UAudioSpaceComponent_OnOverlapEnd_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function RareAudio.AudioSpaceComponent.OnOverlapBegin
// (Final, Native, Private, HasOutParms)
// Parameters:
// AActor*                        OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// UPrimitiveComponent*           OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FromSweep                      (Parm, ZeroConstructor, IsPlainOldData)
// FHitResult                     SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void UAudioSpaceComponent::OnOverlapBegin(AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioSpaceComponent.OnOverlapBegin"));

	UAudioSpaceComponent_OnOverlapBegin_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.FromSweep = FromSweep;
	params.SweepResult = SweepResult;

	UObject::ProcessEvent(fn, &params);
}


// Function RareAudio.AudioSpaceDataAsset.GetRtpcName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FName                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FName UAudioSpaceDataAsset::GetRtpcName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioSpaceDataAsset.GetRtpcName"));

	UAudioSpaceDataAsset_GetRtpcName_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.AudioSpaceTrackerComponent.GetCurrentSpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UAudioSpaceDataAsset*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAudioSpaceDataAsset* UAudioSpaceTrackerComponent::GetCurrentSpace()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioSpaceTrackerComponent.GetCurrentSpace"));

	UAudioSpaceTrackerComponent_GetCurrentSpace_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.StaticMeshAudioEmittersComponent.PopulateInstanceAssociations
// (Final, Native, Public, BlueprintCallable)

void UStaticMeshAudioEmittersComponent::PopulateInstanceAssociations()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.StaticMeshAudioEmittersComponent.PopulateInstanceAssociations"));

	UStaticMeshAudioEmittersComponent_PopulateInstanceAssociations_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
