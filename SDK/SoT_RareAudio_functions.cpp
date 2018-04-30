// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RareAudio_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   StateGroup                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StateValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseEmitterBlueprintLibrary::STATIC_WwiseSetState(const struct FName& StateGroup, const struct FName& StateValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetState");

	UWwiseEmitterBlueprintLibrary_WwiseSetState_Params params;
	params.StateGroup = StateGroup;
	params.StateValue = StateValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetGlobalRTPC
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   RTPCName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          RTPCValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseEmitterBlueprintLibrary::STATIC_WwiseSetGlobalRTPC(const struct FName& RTPCName, float RTPCValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetGlobalRTPC");

	UWwiseEmitterBlueprintLibrary_WwiseSetGlobalRTPC_Params params;
	params.RTPCName = RTPCName;
	params.RTPCValue = RTPCValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostGlobalEvent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWwiseEvent*             Event                          (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseEmitterBlueprintLibrary::STATIC_WwisePostGlobalEvent(class UWwiseEvent* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostGlobalEvent");

	UWwiseEmitterBlueprintLibrary_WwisePostGlobalEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostEventAtLocation
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (Parm, OutParm)
// class UWwiseEvent*             Event                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Front                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseObjectPoolWrapper* EmitterPool                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEmitterRelationship> Relationship                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWwiseEmitterBlueprintLibrary::STATIC_WwisePostEventAtLocation(class UWwiseEvent* Event, const struct FVector& Location, const struct FVector& Front, class UWwiseObjectPoolWrapper* EmitterPool, TEnumAsByte<EEmitterRelationship> Relationship, struct FWwiseEmitter* Emitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostEventAtLocation");

	UWwiseEmitterBlueprintLibrary_WwisePostEventAtLocation_Params params;
	params.Event = Event;
	params.Location = Location;
	params.Front = Front;
	params.EmitterPool = EmitterPool;
	params.Relationship = Relationship;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Emitter != nullptr)
		*Emitter = params.Emitter;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerInfo
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseListenerInfo      InfoOut                        (Parm, OutParm)
// int                            Viewport                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseGetListenerInfo(int Viewport, struct FWwiseListenerInfo* InfoOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerInfo");

	UWwiseEmitterBlueprintLibrary_WwiseGetListenerInfo_Params params;
	params.Viewport = Viewport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InfoOut != nullptr)
		*InfoOut = params.InfoOut;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerEmitter
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (Parm, OutParm)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ListenerIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFollowOrientaion              (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseObjectPoolWrapper* EmitterPool                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseGetListenerEmitter(class UObject* WorldContextObject, int ListenerIndex, const struct FName& Name, const struct FVector& Offset, bool bFollowOrientaion, class UWwiseObjectPoolWrapper* EmitterPool, struct FWwiseEmitter* Emitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerEmitter");

	UWwiseEmitterBlueprintLibrary_WwiseGetListenerEmitter_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ListenerIndex = ListenerIndex;
	params.Name = Name;
	params.Offset = Offset;
	params.bFollowOrientaion = bFollowOrientaion;
	params.EmitterPool = EmitterPool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Emitter != nullptr)
		*Emitter = params.Emitter;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetEmitter
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseObjectPoolWrapper* EmitterPool                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseGetEmitter(const struct FName& Name, class UObject* Owner, class UWwiseObjectPoolWrapper* EmitterPool, const struct FVector& Offset, struct FWwiseEmitter* Emitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetEmitter");

	UWwiseEmitterBlueprintLibrary_WwiseGetEmitter_Params params;
	params.Name = Name;
	params.Owner = Owner;
	params.EmitterPool = EmitterPool;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Emitter != nullptr)
		*Emitter = params.Emitter;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterWaitToComplete
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// int                            PlayId                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterWaitToComplete(const struct FWwiseEmitter& Emitter, int PlayId, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterWaitToComplete");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterWaitToComplete_Params params;
	params.Emitter = Emitter;
	params.PlayId = PlayId;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterStop
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// int                            PlayId                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterStop(const struct FWwiseEmitter& Emitter, int PlayId, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterStop");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterStop_Params params;
	params.Emitter = Emitter;
	params.PlayId = PlayId;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPCOnAll
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FWwiseEmitter>   Emitters                       (ConstParm, Parm, ZeroConstructor)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterSetRTPCOnAll(TArray<struct FWwiseEmitter> Emitters, const struct FName& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPCOnAll");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterSetRTPCOnAll_Params params;
	params.Emitters = Emitters;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPC
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterSetRTPC(const struct FWwiseEmitter& Emitter, const struct FName& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPC");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterSetRTPC_Params params;
	params.Emitter = Emitter;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetParams
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FWwiseEmitterParams     Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterSetParams(const struct FWwiseEmitter& Emitter, const struct FWwiseEmitterParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetParams");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterSetParams_Params params;
	params.Emitter = Emitter;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetLocation
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterSetLocation(const struct FWwiseEmitter& Emitter, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetLocation");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterSetLocation_Params params;
	params.Emitter = Emitter;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEventOnAll
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FWwiseEmitter>   Emitters                       (ConstParm, Parm, ZeroConstructor)
// class UWwiseEvent*             WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEmitterRelationship> Relationship                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SourcePath                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SourceObj                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterPostEventOnAll(TArray<struct FWwiseEmitter> Emitters, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEventOnAll");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterPostEventOnAll_Params params;
	params.Emitters = Emitters;
	params.WwiseEvent = WwiseEvent;
	params.Relationship = Relationship;
	params.SourcePath = SourcePath;
	params.SourceObj = SourceObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEvent
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// class UWwiseEvent*             WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEmitterRelationship> Relationship                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SourcePath                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SourceObj                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterPostEvent(const struct FWwiseEmitter& Emitter, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEvent");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterPostEvent_Params params;
	params.Emitter = Emitter;
	params.WwiseEvent = WwiseEvent;
	params.Relationship = Relationship;
	params.SourcePath = SourcePath;
	params.SourceObj = SourceObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsValid
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterIsValid(const struct FWwiseEmitter& Emitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsValid");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterIsValid_Params params;
	params.Emitter = Emitter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsPlaying
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// class UWwiseEvent*             Event                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterIsPlaying(const struct FWwiseEmitter& Emitter, class UWwiseEvent* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsPlaying");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterIsPlaying_Params params;
	params.Emitter = Emitter;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterGetRTPC
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterGetRTPC(const struct FWwiseEmitter& Emitter, const struct FName& Name, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterGetRTPC");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterGetRTPC_Params params;
	params.Emitter = Emitter;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterDestroy
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (Parm, OutParm, ReferenceParm)

void UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterDestroy(struct FWwiseEmitter* Emitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterDestroy");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Emitter != nullptr)
		*Emitter = params.Emitter;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPCOnAll
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UWwiseEmitterComponent*> EmitterComponents              (ConstParm, Parm, ZeroConstructor)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterComponentSetRTPCOnAll(TArray<class UWwiseEmitterComponent*> EmitterComponents, const struct FName& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPCOnAll");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentSetRTPCOnAll_Params params;
	params.EmitterComponents = EmitterComponents;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPC
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWwiseEmitterComponent*  EmitterComponent               (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterComponentSetRTPC(class UWwiseEmitterComponent* EmitterComponent, const struct FName& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPC");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentSetRTPC_Params params;
	params.EmitterComponent = EmitterComponent;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEventOnAll
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UWwiseEmitterComponent*> EmitterComponents              (ConstParm, Parm, ZeroConstructor)
// class UWwiseEvent*             WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEmitterRelationship> Relationship                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SourcePath                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SourceObj                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterComponentPostEventOnAll(TArray<class UWwiseEmitterComponent*> EmitterComponents, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEventOnAll");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentPostEventOnAll_Params params;
	params.EmitterComponents = EmitterComponents;
	params.WwiseEvent = WwiseEvent;
	params.Relationship = Relationship;
	params.SourcePath = SourcePath;
	params.SourceObj = SourceObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEvent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWwiseEmitterComponent*  EmitterComponent               (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWwiseEvent*             WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEmitterRelationship> Relationship                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SourcePath                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SourceObj                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWwiseEmitterBlueprintLibrary::STATIC_WwiseEmitterComponentPostEvent(class UWwiseEmitterComponent* EmitterComponent, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEvent");

	UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentPostEvent_Params params;
	params.EmitterComponent = EmitterComponent;
	params.WwiseEvent = WwiseEvent;
	params.Relationship = Relationship;
	params.SourcePath = SourcePath;
	params.SourceObj = SourceObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateDetachedEmitter
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseObjectPoolWrapper* EmitterPool                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FWwiseEmitterCreationParams CreationParams                 (Parm)
// TEnumAsByte<EEmitterRelationship> Relationship                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Forward                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWwiseEmitterBlueprintLibrary::STATIC_WwiseCreateDetachedEmitter(const struct FName& Name, class UWwiseObjectPoolWrapper* EmitterPool, const struct FVector& Location, const struct FWwiseEmitterCreationParams& CreationParams, TEnumAsByte<EEmitterRelationship> Relationship, const struct FVector& Forward, struct FWwiseEmitter* Emitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateDetachedEmitter");

	UWwiseEmitterBlueprintLibrary_WwiseCreateDetachedEmitter_Params params;
	params.Name = Name;
	params.EmitterPool = EmitterPool;
	params.Location = Location;
	params.CreationParams = CreationParams;
	params.Relationship = Relationship;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Emitter != nullptr)
		*Emitter = params.Emitter;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.SeekOnEvent
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           WwiseEmitter                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UWwiseEvent*             in_eventID                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            in_iPosition                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           in_bSeekToNearestMarker        (Parm, ZeroConstructor, IsPlainOldData)
// int                            in_PlayingID                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::STATIC_SeekOnEvent(const struct FWwiseEmitter& WwiseEmitter, class UWwiseEvent* in_eventID, int in_iPosition, bool in_bSeekToNearestMarker, int in_PlayingID)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.SeekOnEvent");

	UWwiseEmitterBlueprintLibrary_SeekOnEvent_Params params;
	params.WwiseEmitter = WwiseEmitter;
	params.in_eventID = in_eventID;
	params.in_iPosition = in_iPosition;
	params.in_bSeekToNearestMarker = in_bSeekToNearestMarker;
	params.in_PlayingID = in_PlayingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.GetPlaybackPosition
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           WwiseEmitter                   (ConstParm, Parm, OutParm, ReferenceParm)
// int                            in_PlayingID                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            PlaybackPositionInMs           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::STATIC_GetPlaybackPosition(const struct FWwiseEmitter& WwiseEmitter, int in_PlayingID, int* PlaybackPositionInMs)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterBlueprintLibrary.GetPlaybackPosition");

	UWwiseEmitterBlueprintLibrary_GetPlaybackPosition_Params params;
	params.WwiseEmitter = WwiseEmitter;
	params.in_PlayingID = in_PlayingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlaybackPositionInMs != nullptr)
		*PlaybackPositionInMs = params.PlaybackPositionInMs;

	return params.ReturnValue;
}


// Function RareAudio.AudioEventToComponentMap.ClearMappings
// (Final, Native, Public, BlueprintCallable)

void AAudioEventToComponentMap::ClearMappings()
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.AudioEventToComponentMap.ClearMappings");

	AAudioEventToComponentMap_ClearMappings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareAudio.AudioEventToComponentMap.AddMappingWithSingleEmitterComponent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWwiseEvent*             PlayEvent                      (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseEvent*             StopEvent                      (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseEmitterComponent*  WwiseEmitterComponent          (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UWwiseObjectPoolWrapper* WwiseEmitterPool               (Parm, ZeroConstructor, IsPlainOldData)

void AAudioEventToComponentMap::AddMappingWithSingleEmitterComponent(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseObjectPoolWrapper* WwiseEmitterPool, class UWwiseEmitterComponent** WwiseEmitterComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.AudioEventToComponentMap.AddMappingWithSingleEmitterComponent");

	AAudioEventToComponentMap_AddMappingWithSingleEmitterComponent_Params params;
	params.PlayEvent = PlayEvent;
	params.StopEvent = StopEvent;
	params.WwiseEmitterPool = WwiseEmitterPool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WwiseEmitterComponent != nullptr)
		*WwiseEmitterComponent = params.WwiseEmitterComponent;
}


// Function RareAudio.AudioEventToComponentMap.AddMapping
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWwiseEvent*             PlayEvent                      (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseEvent*             StopEvent                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UWwiseEmitterComponent*> WwiseEmitterComponents         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UWwiseObjectPoolWrapper* WwiseEmitterPool               (Parm, ZeroConstructor, IsPlainOldData)

void AAudioEventToComponentMap::AddMapping(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseObjectPoolWrapper* WwiseEmitterPool, TArray<class UWwiseEmitterComponent*>* WwiseEmitterComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.AudioEventToComponentMap.AddMapping");

	AAudioEventToComponentMap_AddMapping_Params params;
	params.PlayEvent = PlayEvent;
	params.StopEvent = StopEvent;
	params.WwiseEmitterPool = WwiseEmitterPool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WwiseEmitterComponents != nullptr)
		*WwiseEmitterComponents = params.WwiseEmitterComponents;
}


// Function RareAudio.AudioEventToComponentMapComponent.ClearMappings
// (Final, Native, Public, BlueprintCallable)

void UAudioEventToComponentMapComponent::ClearMappings()
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.AudioEventToComponentMapComponent.ClearMappings");

	UAudioEventToComponentMapComponent_ClearMappings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareAudio.AudioEventToComponentMapComponent.AddMappingWithSingleEmitterComponent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWwiseEvent*             PlayEvent                      (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseEvent*             StopEvent                      (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseEmitterComponent*  WwiseEmitterComponent          (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UWwiseObjectPoolWrapper* WwiseEmitterPool               (Parm, ZeroConstructor, IsPlainOldData)

void UAudioEventToComponentMapComponent::AddMappingWithSingleEmitterComponent(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseObjectPoolWrapper* WwiseEmitterPool, class UWwiseEmitterComponent** WwiseEmitterComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.AudioEventToComponentMapComponent.AddMappingWithSingleEmitterComponent");

	UAudioEventToComponentMapComponent_AddMappingWithSingleEmitterComponent_Params params;
	params.PlayEvent = PlayEvent;
	params.StopEvent = StopEvent;
	params.WwiseEmitterPool = WwiseEmitterPool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WwiseEmitterComponent != nullptr)
		*WwiseEmitterComponent = params.WwiseEmitterComponent;
}


// Function RareAudio.AudioEventToComponentMapComponent.AddMapping
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWwiseEvent*             PlayEvent                      (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseEvent*             StopEvent                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UWwiseEmitterComponent*> WwiseEmitterComponents         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UWwiseObjectPoolWrapper* WwiseEmitterPool               (Parm, ZeroConstructor, IsPlainOldData)

void UAudioEventToComponentMapComponent::AddMapping(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseObjectPoolWrapper* WwiseEmitterPool, TArray<class UWwiseEmitterComponent*>* WwiseEmitterComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.AudioEventToComponentMapComponent.AddMapping");

	UAudioEventToComponentMapComponent_AddMapping_Params params;
	params.PlayEvent = PlayEvent;
	params.StopEvent = StopEvent;
	params.WwiseEmitterPool = WwiseEmitterPool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WwiseEmitterComponents != nullptr)
		*WwiseEmitterComponents = params.WwiseEmitterComponents;
}


// Function RareAudio.AudioSpaceDataAsset.GetRtpcName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UAudioSpaceDataAsset::GetRtpcName()
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.AudioSpaceDataAsset.GetRtpcName");

	UAudioSpaceDataAsset_GetRtpcName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.AudioPortalComponent.SetParentShip
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ParentShip                     (Parm, ZeroConstructor, IsPlainOldData)

void UAudioPortalComponent::SetParentShip(class AActor* ParentShip)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.AudioPortalComponent.SetParentShip");

	UAudioPortalComponent_SetParentShip_Params params;
	params.ParentShip = ParentShip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareAudio.AudioPortalInterface.UnregisterPortal
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAudioPortalComponent*   AudioPortal                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAudioPortalInterface::UnregisterPortal(class UAudioPortalComponent* AudioPortal)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.AudioPortalInterface.UnregisterPortal");

	UAudioPortalInterface_UnregisterPortal_Params params;
	params.AudioPortal = AudioPortal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareAudio.AudioPortalInterface.RegisterPortal
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAudioPortalComponent*   AudioPortal                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OwningActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UAudioPortalInterface::RegisterPortal(class UAudioPortalComponent* AudioPortal, class AActor* OwningActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.AudioPortalInterface.RegisterPortal");

	UAudioPortalInterface_RegisterPortal_Params params;
	params.AudioPortal = AudioPortal;
	params.OwningActor = OwningActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareAudio.AudioPortalInterface.GetAllRegisteredPortalsInSpecificSpace
// (Native, Public)
// Parameters:
// class UAudioSpaceDataAsset*    AudioSpace                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OwningActor                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<TWeakObjectPtr<class UAudioPortalComponent>> ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<TWeakObjectPtr<class UAudioPortalComponent>> UAudioPortalInterface::GetAllRegisteredPortalsInSpecificSpace(class UAudioSpaceDataAsset* AudioSpace, class AActor* OwningActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.AudioPortalInterface.GetAllRegisteredPortalsInSpecificSpace");

	UAudioPortalInterface_GetAllRegisteredPortalsInSpecificSpace_Params params;
	params.AudioSpace = AudioSpace;
	params.OwningActor = OwningActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.AudioPortalInterface.GetAllRegisteredPortals
// (Native, Public, Const)
// Parameters:
// TArray<TWeakObjectPtr<class UAudioPortalComponent>> ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<TWeakObjectPtr<class UAudioPortalComponent>> UAudioPortalInterface::GetAllRegisteredPortals()
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.AudioPortalInterface.GetAllRegisteredPortals");

	UAudioPortalInterface_GetAllRegisteredPortals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.AudioSpaceComponent.OnOverlapEnd
// (Final, Native, Private)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void UAudioSpaceComponent::OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.AudioSpaceComponent.OnOverlapEnd");

	UAudioSpaceComponent_OnOverlapEnd_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareAudio.AudioSpaceComponent.OnOverlapBegin
// (Final, Native, Private, HasOutParms)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FromSweep                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void UAudioSpaceComponent::OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.AudioSpaceComponent.OnOverlapBegin");

	UAudioSpaceComponent_OnOverlapBegin_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.FromSweep = FromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareAudio.AudioSpaceTrackerComponent.GetCurrentSpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAudioSpaceDataAsset*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAudioSpaceDataAsset* UAudioSpaceTrackerComponent::GetCurrentSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.AudioSpaceTrackerComponent.GetCurrentSpace");

	UAudioSpaceTrackerComponent_GetCurrentSpace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareAudio.StaticMeshAudioEmittersComponent.PopulateInstanceAssociations
// (Final, Native, Public, BlueprintCallable)

void UStaticMeshAudioEmittersComponent::PopulateInstanceAssociations()
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.StaticMeshAudioEmittersComponent.PopulateInstanceAssociations");

	UStaticMeshAudioEmittersComponent_PopulateInstanceAssociations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetNamedEmitter
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWwiseEmitter           OutEmitter                     (Parm, OutParm)
// struct FName                   InNameOfEmitterToRetrieve      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InActorToFindEmitterOn         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterComponentBlueprintLibrary::STATIC_GetNamedEmitter(const struct FName& InNameOfEmitterToRetrieve, class AActor* InActorToFindEmitterOn, struct FWwiseEmitter* OutEmitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetNamedEmitter");

	UWwiseEmitterComponentBlueprintLibrary_GetNamedEmitter_Params params;
	params.InNameOfEmitterToRetrieve = InNameOfEmitterToRetrieve;
	params.InActorToFindEmitterOn = InActorToFindEmitterOn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEmitter != nullptr)
		*OutEmitter = params.OutEmitter;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestNEmitters
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FWwiseEmitter>   OutEmitters                    (Parm, OutParm, ZeroConstructor)
// struct FVector                 InFromPosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            InNumEmittersToFind            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InActorToFindClosestEmitterOn  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterComponentBlueprintLibrary::STATIC_GetClosestNEmitters(const struct FVector& InFromPosition, int InNumEmittersToFind, class AActor* InActorToFindClosestEmitterOn, TArray<struct FWwiseEmitter>* OutEmitters)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestNEmitters");

	UWwiseEmitterComponentBlueprintLibrary_GetClosestNEmitters_Params params;
	params.InFromPosition = InFromPosition;
	params.InNumEmittersToFind = InNumEmittersToFind;
	params.InActorToFindClosestEmitterOn = InActorToFindClosestEmitterOn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEmitters != nullptr)
		*OutEmitters = params.OutEmitters;

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestEmitter
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWwiseEmitter           OutEmitter                     (Parm, OutParm)
// struct FVector                 InFromPosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  InActorToFindClosestEmitterOn  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterComponentBlueprintLibrary::STATIC_GetClosestEmitter(const struct FVector& InFromPosition, class AActor* InActorToFindClosestEmitterOn, struct FWwiseEmitter* OutEmitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestEmitter");

	UWwiseEmitterComponentBlueprintLibrary_GetClosestEmitter_Params params;
	params.InFromPosition = InFromPosition;
	params.InActorToFindClosestEmitterOn = InActorToFindClosestEmitterOn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEmitter != nullptr)
		*OutEmitter = params.OutEmitter;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
