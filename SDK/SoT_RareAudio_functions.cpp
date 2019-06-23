// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RareAudio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseStopGlobalEvent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWwiseEvent*             Event                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseEmitterBlueprintLibrary::WwiseStopGlobalEvent(class UWwiseEvent* Event, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseStopGlobalEvent"));

	struct
	{
		class UWwiseEvent*             Event;
		float                          FadeTime;
	} params;

	params.Event = Event;
	params.FadeTime = FadeTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseStopAllGlobalEvents
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseEmitterBlueprintLibrary::WwiseStopAllGlobalEvents(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseStopAllGlobalEvents"));

	struct
	{
		float                          FadeTime;
	} params;

	params.FadeTime = FadeTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   StateGroup                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StateValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseEmitterBlueprintLibrary::WwiseSetState(const struct FName& StateGroup, const struct FName& StateValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetState"));

	struct
	{
		struct FName                   StateGroup;
		struct FName                   StateValue;
	} params;

	params.StateGroup = StateGroup;
	params.StateValue = StateValue;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetGlobalRTPC
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   RTPCName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          RTPCValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseEmitterBlueprintLibrary::WwiseSetGlobalRTPC(const struct FName& RTPCName, float RTPCValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetGlobalRTPC"));

	struct
	{
		struct FName                   RTPCName;
		float                          RTPCValue;
	} params;

	params.RTPCName = RTPCName;
	params.RTPCValue = RTPCValue;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostOneShotOnOwner
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseObjectPoolWrapper* EmitterPool                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FWwiseEmitterCreationParams CreationParams                 (Parm)
// TEnumAsByte<EEmitterRelationship> Relationship                   (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseEmitterBlueprintLibrary::WwisePostOneShotOnOwner(class UObject* Owner, class UWwiseObjectPoolWrapper* EmitterPool, const struct FWwiseEmitterCreationParams& CreationParams, TEnumAsByte<EEmitterRelationship> Relationship)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostOneShotOnOwner"));

	struct
	{
		class UObject*                 Owner;
		class UWwiseObjectPoolWrapper* EmitterPool;
		struct FWwiseEmitterCreationParams CreationParams;
		TEnumAsByte<EEmitterRelationship> Relationship;
	} params;

	params.Owner = Owner;
	params.EmitterPool = EmitterPool;
	params.CreationParams = CreationParams;
	params.Relationship = Relationship;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostGlobalEvent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWwiseEvent*             Event                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWwiseEmitterBlueprintLibrary::WwisePostGlobalEvent(class UWwiseEvent* Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostGlobalEvent"));

	struct
	{
		class UWwiseEvent*             Event;
		int                            ReturnValue;
	} params;

	params.Event = Event;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
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

int UWwiseEmitterBlueprintLibrary::WwisePostEventAtLocation(class UWwiseEvent* Event, const struct FVector& Location, const struct FVector& Front, class UWwiseObjectPoolWrapper* EmitterPool, TEnumAsByte<EEmitterRelationship> Relationship, struct FWwiseEmitter* Emitter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostEventAtLocation"));

	struct
	{
		struct FWwiseEmitter           Emitter;
		class UWwiseEvent*             Event;
		struct FVector                 Location;
		struct FVector                 Front;
		class UWwiseObjectPoolWrapper* EmitterPool;
		TEnumAsByte<EEmitterRelationship> Relationship;
		int                            ReturnValue;
	} params;

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
// class UWwiseEvent*             Event                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseIsGlobalEvent(class UWwiseEvent* Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseIsGlobalEvent"));

	struct
	{
		class UWwiseEvent*             Event;
		bool                           ReturnValue;
	} params;

	params.Event = Event;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerInfo
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseListenerInfo      InfoOut                        (Parm, OutParm)
// int                            Viewport                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseGetListenerInfo(int Viewport, struct FWwiseListenerInfo* InfoOut)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerInfo"));

	struct
	{
		struct FWwiseListenerInfo      InfoOut;
		int                            Viewport;
		bool                           ReturnValue;
	} params;

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
// struct FWwiseEmitter           Emitter                        (Parm, OutParm)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ListenerIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFollowOrientaion              (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseObjectPoolWrapper* EmitterPool                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseGetListenerEmitter(class UObject* WorldContextObject, int ListenerIndex, const struct FName& Name, const struct FVector& Offset, bool bFollowOrientaion, class UWwiseObjectPoolWrapper* EmitterPool, struct FWwiseEmitter* Emitter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerEmitter"));

	struct
	{
		struct FWwiseEmitter           Emitter;
		class UObject*                 WorldContextObject;
		int                            ListenerIndex;
		struct FName                   Name;
		struct FVector                 Offset;
		bool                           bFollowOrientaion;
		class UWwiseObjectPoolWrapper* EmitterPool;
		bool                           ReturnValue;
	} params;

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


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetEmitter
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseObjectPoolWrapper* EmitterPool                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseGetEmitter(const struct FName& Name, class UObject* Owner, class UWwiseObjectPoolWrapper* EmitterPool, const struct FVector& Offset, struct FWwiseEmitter* Emitter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetEmitter"));

	struct
	{
		struct FWwiseEmitter           Emitter;
		struct FName                   Name;
		class UObject*                 Owner;
		class UWwiseObjectPoolWrapper* EmitterPool;
		struct FVector                 Offset;
		bool                           ReturnValue;
	} params;

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


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterWaitToComplete
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// int                            PlayId                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterWaitToComplete(const struct FWwiseEmitter& Emitter, int PlayId, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterWaitToComplete"));

	struct
	{
		struct FWwiseEmitter           Emitter;
		int                            PlayId;
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		bool                           ReturnValue;
	} params;

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
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// int                            PlayId                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterStop(const struct FWwiseEmitter& Emitter, int PlayId, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterStop"));

	struct
	{
		struct FWwiseEmitter           Emitter;
		int                            PlayId;
		float                          FadeTime;
		bool                           ReturnValue;
	} params;

	params.Emitter = Emitter;
	params.PlayId = PlayId;
	params.FadeTime = FadeTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPCOnAll
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FWwiseEmitter>   Emitters                       (ConstParm, Parm, ZeroConstructor)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterSetRTPCOnAll(TArray<struct FWwiseEmitter> Emitters, const struct FName& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPCOnAll"));

	struct
	{
		TArray<struct FWwiseEmitter>   Emitters;
		struct FName                   Name;
		float                          Value;
		bool                           ReturnValue;
	} params;

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
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterSetRTPC(const struct FWwiseEmitter& Emitter, const struct FName& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPC"));

	struct
	{
		struct FWwiseEmitter           Emitter;
		struct FName                   Name;
		float                          Value;
		bool                           ReturnValue;
	} params;

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
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FWwiseEmitterParams     Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterSetParams(const struct FWwiseEmitter& Emitter, const struct FWwiseEmitterParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetParams"));

	struct
	{
		struct FWwiseEmitter           Emitter;
		struct FWwiseEmitterParams     Params;
		bool                           ReturnValue;
	} params;

	params.Emitter = Emitter;
	params.Params = Params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetLocation
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterSetLocation(const struct FWwiseEmitter& Emitter, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetLocation"));

	struct
	{
		struct FWwiseEmitter           Emitter;
		struct FVector                 Location;
		bool                           ReturnValue;
	} params;

	params.Emitter = Emitter;
	params.Location = Location;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

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

TArray<int> UWwiseEmitterBlueprintLibrary::WwiseEmitterPostEventOnAll(TArray<struct FWwiseEmitter> Emitters, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEventOnAll"));

	struct
	{
		TArray<struct FWwiseEmitter>   Emitters;
		class UWwiseEvent*             WwiseEvent;
		TEnumAsByte<EEmitterRelationship> Relationship;
		struct FName                   SourcePath;
		struct FName                   SourceObj;
		TArray<int>                    ReturnValue;
	} params;

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
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// class UWwiseEvent*             WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEmitterRelationship> Relationship                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SourcePath                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SourceObj                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWwiseEmitterBlueprintLibrary::WwiseEmitterPostEvent(const struct FWwiseEmitter& Emitter, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEvent"));

	struct
	{
		struct FWwiseEmitter           Emitter;
		class UWwiseEvent*             WwiseEvent;
		TEnumAsByte<EEmitterRelationship> Relationship;
		struct FName                   SourcePath;
		struct FName                   SourceObj;
		int                            ReturnValue;
	} params;

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
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterIsValid(const struct FWwiseEmitter& Emitter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsValid"));

	struct
	{
		struct FWwiseEmitter           Emitter;
		bool                           ReturnValue;
	} params;

	params.Emitter = Emitter;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsPlaying
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// class UWwiseEvent*             Event                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterIsPlaying(const struct FWwiseEmitter& Emitter, class UWwiseEvent* Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsPlaying"));

	struct
	{
		struct FWwiseEmitter           Emitter;
		class UWwiseEvent*             Event;
		bool                           ReturnValue;
	} params;

	params.Emitter = Emitter;
	params.Event = Event;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterGetRTPC
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           Emitter                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterGetRTPC(const struct FWwiseEmitter& Emitter, const struct FName& Name, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterGetRTPC"));

	struct
	{
		struct FWwiseEmitter           Emitter;
		struct FName                   Name;
		float                          Value;
		bool                           ReturnValue;
	} params;

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
// struct FWwiseEmitter           Emitter                        (Parm, OutParm, ReferenceParm)

void UWwiseEmitterBlueprintLibrary::WwiseEmitterDestroy(struct FWwiseEmitter* Emitter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterDestroy"));

	struct
	{
		struct FWwiseEmitter           Emitter;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

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

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentSetRTPCOnAll(TArray<class UWwiseEmitterComponent*> EmitterComponents, const struct FName& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPCOnAll"));

	struct
	{
		TArray<class UWwiseEmitterComponent*> EmitterComponents;
		struct FName                   Name;
		float                          Value;
		bool                           ReturnValue;
	} params;

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
// class UWwiseEmitterComponent*  EmitterComponent               (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentSetRTPC(class UWwiseEmitterComponent* EmitterComponent, const struct FName& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPC"));

	struct
	{
		class UWwiseEmitterComponent*  EmitterComponent;
		struct FName                   Name;
		float                          Value;
		bool                           ReturnValue;
	} params;

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
// TArray<class UWwiseEmitterComponent*> EmitterComponents              (ConstParm, Parm, ZeroConstructor)
// class UWwiseEvent*             WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEmitterRelationship> Relationship                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SourcePath                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SourceObj                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEventOnAll(TArray<class UWwiseEmitterComponent*> EmitterComponents, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEventOnAll"));

	struct
	{
		TArray<class UWwiseEmitterComponent*> EmitterComponents;
		class UWwiseEvent*             WwiseEvent;
		TEnumAsByte<EEmitterRelationship> Relationship;
		struct FName                   SourcePath;
		struct FName                   SourceObj;
		TArray<int>                    ReturnValue;
	} params;

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
// class UWwiseEmitterComponent*  EmitterComponent               (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWwiseEvent*             WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEmitterRelationship> Relationship                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SourcePath                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SourceObj                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(class UWwiseEmitterComponent* EmitterComponent, class UWwiseEvent* WwiseEvent, TEnumAsByte<EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEvent"));

	struct
	{
		class UWwiseEmitterComponent*  EmitterComponent;
		class UWwiseEvent*             WwiseEvent;
		TEnumAsByte<EEmitterRelationship> Relationship;
		struct FName                   SourcePath;
		struct FName                   SourceObj;
		int                            ReturnValue;
	} params;

	params.EmitterComponent = EmitterComponent;
	params.WwiseEvent = WwiseEvent;
	params.Relationship = Relationship;
	params.SourcePath = SourcePath;
	params.SourceObj = SourceObj;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

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

int UWwiseEmitterBlueprintLibrary::WwiseCreateDetachedEmitter(const struct FName& Name, class UWwiseObjectPoolWrapper* EmitterPool, const struct FVector& Location, const struct FWwiseEmitterCreationParams& CreationParams, TEnumAsByte<EEmitterRelationship> Relationship, const struct FVector& Forward, struct FWwiseEmitter* Emitter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateDetachedEmitter"));

	struct
	{
		struct FWwiseEmitter           Emitter;
		struct FName                   Name;
		class UWwiseObjectPoolWrapper* EmitterPool;
		struct FVector                 Location;
		struct FWwiseEmitterCreationParams CreationParams;
		TEnumAsByte<EEmitterRelationship> Relationship;
		struct FVector                 Forward;
		int                            ReturnValue;
	} params;

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
// struct FWwiseEmitter           WwiseEmitter                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UWwiseEvent*             in_eventID                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            in_iPosition                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           in_bSeekToNearestMarker        (Parm, ZeroConstructor, IsPlainOldData)
// int                            in_PlayingID                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::SeekOnEvent(const struct FWwiseEmitter& WwiseEmitter, class UWwiseEvent* in_eventID, int in_iPosition, bool in_bSeekToNearestMarker, int in_PlayingID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.SeekOnEvent"));

	struct
	{
		struct FWwiseEmitter           WwiseEmitter;
		class UWwiseEvent*             in_eventID;
		int                            in_iPosition;
		bool                           in_bSeekToNearestMarker;
		int                            in_PlayingID;
		bool                           ReturnValue;
	} params;

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
// struct FWwiseEmitter           WwiseEmitter                   (ConstParm, Parm, OutParm, ReferenceParm)
// int                            in_PlayingID                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            PlaybackPositionInMs           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterBlueprintLibrary::GetPlaybackPosition(const struct FWwiseEmitter& WwiseEmitter, int in_PlayingID, int* PlaybackPositionInMs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterBlueprintLibrary.GetPlaybackPosition"));

	struct
	{
		struct FWwiseEmitter           WwiseEmitter;
		int                            in_PlayingID;
		int                            PlaybackPositionInMs;
		bool                           ReturnValue;
	} params;

	params.WwiseEmitter = WwiseEmitter;
	params.in_PlayingID = in_PlayingID;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PlaybackPositionInMs != nullptr)
		*PlaybackPositionInMs = params.PlaybackPositionInMs;

	return params.ReturnValue;
}


// Function RareAudio.AudioEventToComponentMap.ClearMappings
// (Final, Native, Public, BlueprintCallable)

void AAudioEventToComponentMap::ClearMappings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioEventToComponentMap.ClearMappings"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioEventToComponentMap.AddMappingWithSingleEmitterComponent"));

	struct
	{
		class UWwiseEvent*             PlayEvent;
		class UWwiseEvent*             StopEvent;
		class UWwiseEmitterComponent*  WwiseEmitterComponent;
		class UWwiseObjectPoolWrapper* WwiseEmitterPool;
	} params;

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
// class UWwiseEvent*             PlayEvent                      (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseEvent*             StopEvent                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UWwiseEmitterComponent*> WwiseEmitterComponents         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UWwiseObjectPoolWrapper* WwiseEmitterPool               (Parm, ZeroConstructor, IsPlainOldData)

void AAudioEventToComponentMap::AddMapping(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseObjectPoolWrapper* WwiseEmitterPool, TArray<class UWwiseEmitterComponent*>* WwiseEmitterComponents)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioEventToComponentMap.AddMapping"));

	struct
	{
		class UWwiseEvent*             PlayEvent;
		class UWwiseEvent*             StopEvent;
		TArray<class UWwiseEmitterComponent*> WwiseEmitterComponents;
		class UWwiseObjectPoolWrapper* WwiseEmitterPool;
	} params;

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

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioEventToComponentMapComponent.AddMappingWithSingleEmitterComponent"));

	struct
	{
		class UWwiseEvent*             PlayEvent;
		class UWwiseEvent*             StopEvent;
		class UWwiseEmitterComponent*  WwiseEmitterComponent;
		class UWwiseObjectPoolWrapper* WwiseEmitterPool;
	} params;

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
// class UWwiseEvent*             PlayEvent                      (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseEvent*             StopEvent                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UWwiseEmitterComponent*> WwiseEmitterComponents         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UWwiseObjectPoolWrapper* WwiseEmitterPool               (Parm, ZeroConstructor, IsPlainOldData)

void UAudioEventToComponentMapComponent::AddMapping(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseObjectPoolWrapper* WwiseEmitterPool, TArray<class UWwiseEmitterComponent*>* WwiseEmitterComponents)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioEventToComponentMapComponent.AddMapping"));

	struct
	{
		class UWwiseEvent*             PlayEvent;
		class UWwiseEvent*             StopEvent;
		TArray<class UWwiseEmitterComponent*> WwiseEmitterComponents;
		class UWwiseObjectPoolWrapper* WwiseEmitterPool;
	} params;

	params.PlayEvent = PlayEvent;
	params.StopEvent = StopEvent;
	params.WwiseEmitterPool = WwiseEmitterPool;

	UObject::ProcessEvent(fn, &params);

	if (WwiseEmitterComponents != nullptr)
		*WwiseEmitterComponents = params.WwiseEmitterComponents;
}


// Function RareAudio.AudioSpaceDataAsset.GetRtpcName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UAudioSpaceDataAsset::GetRtpcName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioSpaceDataAsset.GetRtpcName"));

	struct
	{
		struct FName                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.AudioPortalComponent.SetParentShip
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ParentShip                     (Parm, ZeroConstructor, IsPlainOldData)

void UAudioPortalComponent::SetParentShip(class AActor* ParentShip)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioPortalComponent.SetParentShip"));

	struct
	{
		class AActor*                  ParentShip;
	} params;

	params.ParentShip = ParentShip;

	UObject::ProcessEvent(fn, &params);
}


// Function RareAudio.AudioPortalInterface.UnregisterPortal
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAudioPortalComponent*   AudioPortal                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAudioPortalInterface::UnregisterPortal(class UAudioPortalComponent* AudioPortal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioPortalInterface.UnregisterPortal"));

	struct
	{
		class UAudioPortalComponent*   AudioPortal;
	} params;

	params.AudioPortal = AudioPortal;

	UObject::ProcessEvent(fn, &params);
}


// Function RareAudio.AudioPortalInterface.RegisterPortal
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAudioPortalComponent*   AudioPortal                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OwningActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UAudioPortalInterface::RegisterPortal(class UAudioPortalComponent* AudioPortal, class AActor* OwningActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioPortalInterface.RegisterPortal"));

	struct
	{
		class UAudioPortalComponent*   AudioPortal;
		class AActor*                  OwningActor;
	} params;

	params.AudioPortal = AudioPortal;
	params.OwningActor = OwningActor;

	UObject::ProcessEvent(fn, &params);
}


// Function RareAudio.AudioPortalInterface.GetAllRegisteredPortalsInSpecificSpace
// (Native, Public)
// Parameters:
// class UAudioSpaceDataAsset*    AudioSpace                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OwningActor                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<TWeakObjectPtr<class UAudioPortalComponent>> ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<TWeakObjectPtr<class UAudioPortalComponent>> UAudioPortalInterface::GetAllRegisteredPortalsInSpecificSpace(class UAudioSpaceDataAsset* AudioSpace, class AActor* OwningActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioPortalInterface.GetAllRegisteredPortalsInSpecificSpace"));

	struct
	{
		class UAudioSpaceDataAsset*    AudioSpace;
		class AActor*                  OwningActor;
		TArray<TWeakObjectPtr<class UAudioPortalComponent>> ReturnValue;
	} params;

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

	struct
	{
		TArray<TWeakObjectPtr<class UAudioPortalComponent>> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioSpaceComponent.OnOverlapEnd"));

	struct
	{
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params;

	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(fn, &params);
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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioSpaceComponent.OnOverlapBegin"));

	struct
	{
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           FromSweep;
		struct FHitResult              SweepResult;
	} params;

	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.FromSweep = FromSweep;
	params.SweepResult = SweepResult;

	UObject::ProcessEvent(fn, &params);
}


// Function RareAudio.AudioSpaceTrackerComponent.GetCurrentSpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAudioSpaceDataAsset*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAudioSpaceDataAsset* UAudioSpaceTrackerComponent::GetCurrentSpace()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.AudioSpaceTrackerComponent.GetCurrentSpace"));

	struct
	{
		class UAudioSpaceDataAsset*    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareAudio.StaticMeshAudioEmittersComponent.PopulateInstanceAssociations
// (Final, Native, Public, BlueprintCallable)

void UStaticMeshAudioEmittersComponent::PopulateInstanceAssociations()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.StaticMeshAudioEmittersComponent.PopulateInstanceAssociations"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetNamedEmitter
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWwiseEmitter           OutEmitter                     (Parm, OutParm)
// struct FName                   InNameOfEmitterToRetrieve      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InActorToFindEmitterOn         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterComponentBlueprintLibrary::GetNamedEmitter(const struct FName& InNameOfEmitterToRetrieve, class AActor* InActorToFindEmitterOn, struct FWwiseEmitter* OutEmitter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetNamedEmitter"));

	struct
	{
		struct FWwiseEmitter           OutEmitter;
		struct FName                   InNameOfEmitterToRetrieve;
		class AActor*                  InActorToFindEmitterOn;
		bool                           ReturnValue;
	} params;

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
// TArray<struct FWwiseEmitter>   OutEmitters                    (Parm, OutParm, ZeroConstructor)
// struct FVector                 InFromPosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            InNumEmittersToFind            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InActorToFindClosestEmitterOn  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterComponentBlueprintLibrary::GetClosestNEmitters(const struct FVector& InFromPosition, int InNumEmittersToFind, class AActor* InActorToFindClosestEmitterOn, TArray<struct FWwiseEmitter>* OutEmitters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestNEmitters"));

	struct
	{
		TArray<struct FWwiseEmitter>   OutEmitters;
		struct FVector                 InFromPosition;
		int                            InNumEmittersToFind;
		class AActor*                  InActorToFindClosestEmitterOn;
		bool                           ReturnValue;
	} params;

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
// struct FWwiseEmitter           OutEmitter                     (Parm, OutParm)
// struct FVector                 InFromPosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  InActorToFindClosestEmitterOn  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseEmitterComponentBlueprintLibrary::GetClosestEmitter(const struct FVector& InFromPosition, class AActor* InActorToFindClosestEmitterOn, struct FWwiseEmitter* OutEmitter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestEmitter"));

	struct
	{
		struct FWwiseEmitter           OutEmitter;
		struct FVector                 InFromPosition;
		class AActor*                  InActorToFindClosestEmitterOn;
		bool                           ReturnValue;
	} params;

	params.InFromPosition = InFromPosition;
	params.InActorToFindClosestEmitterOn = InActorToFindClosestEmitterOn;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutEmitter != nullptr)
		*OutEmitter = params.OutEmitter;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
