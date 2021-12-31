// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaEngine_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaEngine.ForceFeedbackCondition.CanPlayForceFeedback
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// AActor*                        InOwner                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UForceFeedbackCondition::CanPlayForceFeedback(AActor* InOwner)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.ForceFeedbackCondition.CanPlayForceFeedback"));

	UForceFeedbackCondition_CanPlayForceFeedback_Params params;
	params.InOwner = InOwner;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaEngine.BoxedRpcDispatcherComponent.Server_SendRpc
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// FSerialisedRpc                 Event                          (ConstParm, Parm, ReferenceParm)

void UBoxedRpcDispatcherComponent::Server_SendRpc(const FSerialisedRpc& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.BoxedRpcDispatcherComponent.Server_SendRpc"));

	UBoxedRpcDispatcherComponent_Server_SendRpc_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaEngine.BoxedRpcDispatcherComponent.NetMulticastExcludeServer_SendRpc
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// FSerialisedRpc                 Event                          (ConstParm, Parm, ReferenceParm)

void UBoxedRpcDispatcherComponent::NetMulticastExcludeServer_SendRpc(const FSerialisedRpc& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.BoxedRpcDispatcherComponent.NetMulticastExcludeServer_SendRpc"));

	UBoxedRpcDispatcherComponent_NetMulticastExcludeServer_SendRpc_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaEngine.BoxedRpcDispatcherComponent.Client_SendRpc
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// FSerialisedRpc                 Event                          (ConstParm, Parm, ReferenceParm)

void UBoxedRpcDispatcherComponent::Client_SendRpc(const FSerialisedRpc& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.BoxedRpcDispatcherComponent.Client_SendRpc"));

	UBoxedRpcDispatcherComponent_Client_SendRpc_Params params;
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

	UDynamicColourPointLightComponent_DeactivateLight_Params params;
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

	UDynamicColourPointLightComponent_ActivateLight_Params params;
	params.Blend = Blend;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaEngine.PlayModeHelpers.SetPlayModeVariantOverride
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EPlayModeVariant>  NewPlayModeVariantOverride     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPlayModeHelpers::SetPlayModeVariantOverride(TEnumAsByte<EPlayModeVariant> NewPlayModeVariantOverride)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.PlayModeHelpers.SetPlayModeVariantOverride"));

	UPlayModeHelpers_SetPlayModeVariantOverride_Params params;
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

	UPlayModeHelpers_SetPlayModeOverride_Params params;
	params.NewPlayModeOverride = NewPlayModeOverride;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AthenaEngine.PlayModeHelpers.GetPlayModeVariant
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPlayModeVariant>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EPlayModeVariant> UPlayModeHelpers::GetPlayModeVariant(UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.PlayModeHelpers.GetPlayModeVariant"));

	UPlayModeHelpers_GetPlayModeVariant_Params params;
	params.WorldContext = WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaEngine.PlayModeHelpers.GetPlayMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPlayMode>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EPlayMode> UPlayModeHelpers::GetPlayMode(UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.PlayModeHelpers.GetPlayMode"));

	UPlayModeHelpers_GetPlayMode_Params params;
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

	UPlayModeHelpers_ClearPlayModeVariantOverride_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AthenaEngine.PlayModeHelpers.ClearPlayModeOverride
// (Final, Native, Static, Public, BlueprintCallable)

void UPlayModeHelpers::ClearPlayModeOverride()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.PlayModeHelpers.ClearPlayModeOverride"));

	UPlayModeHelpers_ClearPlayModeOverride_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AthenaEngine.RotateMeshToActorComponent.SnapMeshToLookAtActor
// (Final, Native, Public, BlueprintCallable)

void URotateMeshToActorComponent::SnapMeshToLookAtActor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.RotateMeshToActorComponent.SnapMeshToLookAtActor"));

	URotateMeshToActorComponent_SnapMeshToLookAtActor_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaEngine.RotateMeshToActorComponent.Initialise
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UMeshComponent*                InMeshToRotate                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// AActor*                        InActorToRotateTo              (Parm, ZeroConstructor, IsPlainOldData)

void URotateMeshToActorComponent::Initialise(UMeshComponent* InMeshToRotate, AActor* InActorToRotateTo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.RotateMeshToActorComponent.Initialise"));

	URotateMeshToActorComponent_Initialise_Params params;
	params.InMeshToRotate = InMeshToRotate;
	params.InActorToRotateTo = InActorToRotateTo;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
