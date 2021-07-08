// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaEngine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaEngine.BoxedRpcDispatcherComponent.Server_SendRpc
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FSerialisedRpc          Event                          (ConstParm, Parm, ReferenceParm)

void UBoxedRpcDispatcherComponent::Server_SendRpc(const struct FSerialisedRpc& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.BoxedRpcDispatcherComponent.Server_SendRpc"));

	struct
	{
		struct FSerialisedRpc          Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaEngine.BoxedRpcDispatcherComponent.NetMulticastExcludeServer_SendRpc
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// struct FSerialisedRpc          Event                          (ConstParm, Parm, ReferenceParm)

void UBoxedRpcDispatcherComponent::NetMulticastExcludeServer_SendRpc(const struct FSerialisedRpc& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.BoxedRpcDispatcherComponent.NetMulticastExcludeServer_SendRpc"));

	struct
	{
		struct FSerialisedRpc          Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaEngine.BoxedRpcDispatcherComponent.Client_SendRpc
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FSerialisedRpc          Event                          (ConstParm, Parm, ReferenceParm)

void UBoxedRpcDispatcherComponent::Client_SendRpc(const struct FSerialisedRpc& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.BoxedRpcDispatcherComponent.Client_SendRpc"));

	struct
	{
		struct FSerialisedRpc          Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaEngine.DynamicColourPointLightComponent.DeactivateLight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Blend                          (Parm, ZeroConstructor, IsPlainOldData)

void UDynamicColourPointLightComponent::DeactivateLight(bool Blend)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.DynamicColourPointLightComponent.DeactivateLight"));

	struct
	{
		bool                           Blend;
	} params;

	params.Blend = Blend;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaEngine.DynamicColourPointLightComponent.ActivateLight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Blend                          (Parm, ZeroConstructor, IsPlainOldData)

void UDynamicColourPointLightComponent::ActivateLight(bool Blend)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.DynamicColourPointLightComponent.ActivateLight"));

	struct
	{
		bool                           Blend;
	} params;

	params.Blend = Blend;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaEngine.ForceFeedbackCondition.CanPlayForceFeedback
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  InOwner                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UForceFeedbackCondition::CanPlayForceFeedback(class AActor* InOwner)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.ForceFeedbackCondition.CanPlayForceFeedback"));

	struct
	{
		class AActor*                  InOwner;
		bool                           ReturnValue;
	} params;

	params.InOwner = InOwner;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaEngine.PlayModeHelpers.SetPlayModeVariantOverride
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EPlayModeVariant>  NewPlayModeVariantOverride     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPlayModeHelpers::SetPlayModeVariantOverride(TEnumAsByte<EPlayModeVariant> NewPlayModeVariantOverride)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.PlayModeHelpers.SetPlayModeVariantOverride"));

	struct
	{
		TEnumAsByte<EPlayModeVariant>  NewPlayModeVariantOverride;
	} params;

	params.NewPlayModeVariantOverride = NewPlayModeVariantOverride;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AthenaEngine.PlayModeHelpers.SetPlayModeOverride
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EPlayMode>         NewPlayModeOverride            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPlayModeHelpers::SetPlayModeOverride(TEnumAsByte<EPlayMode> NewPlayModeOverride)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.PlayModeHelpers.SetPlayModeOverride"));

	struct
	{
		TEnumAsByte<EPlayMode>         NewPlayModeOverride;
	} params;

	params.NewPlayModeOverride = NewPlayModeOverride;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AthenaEngine.PlayModeHelpers.GetPlayModeVariant
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPlayModeVariant>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EPlayModeVariant> UPlayModeHelpers::GetPlayModeVariant(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.PlayModeHelpers.GetPlayModeVariant"));

	struct
	{
		class UObject*                 WorldContext;
		TEnumAsByte<EPlayModeVariant>  ReturnValue;
	} params;

	params.WorldContext = WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaEngine.PlayModeHelpers.GetPlayMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPlayMode>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EPlayMode> UPlayModeHelpers::GetPlayMode(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.PlayModeHelpers.GetPlayMode"));

	struct
	{
		class UObject*                 WorldContext;
		TEnumAsByte<EPlayMode>         ReturnValue;
	} params;

	params.WorldContext = WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaEngine.PlayModeHelpers.ClearPlayModeVariantOverride
// (Final, Native, Static, Public, BlueprintCallable)

void UPlayModeHelpers::ClearPlayModeVariantOverride()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.PlayModeHelpers.ClearPlayModeVariantOverride"));

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AthenaEngine.PlayModeHelpers.ClearPlayModeOverride
// (Final, Native, Static, Public, BlueprintCallable)

void UPlayModeHelpers::ClearPlayModeOverride()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.PlayModeHelpers.ClearPlayModeOverride"));

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AthenaEngine.RotateMeshToActorComponent.SnapMeshToLookAtActor
// (Final, Native, Public, BlueprintCallable)

void URotateMeshToActorComponent::SnapMeshToLookAtActor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.RotateMeshToActorComponent.SnapMeshToLookAtActor"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaEngine.RotateMeshToActorComponent.Initialise
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMeshComponent*          InMeshToRotate                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  InActorToRotateTo              (Parm, ZeroConstructor, IsPlainOldData)

void URotateMeshToActorComponent::Initialise(class UMeshComponent* InMeshToRotate, class AActor* InActorToRotateTo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.RotateMeshToActorComponent.Initialise"));

	struct
	{
		class UMeshComponent*          InMeshToRotate;
		class AActor*                  InActorToRotateTo;
	} params;

	params.InMeshToRotate = InMeshToRotate;
	params.InActorToRotateTo = InActorToRotateTo;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
