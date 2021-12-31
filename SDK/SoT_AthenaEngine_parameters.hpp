#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaEngine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaEngine.ForceFeedbackCondition.CanPlayForceFeedback
struct UForceFeedbackCondition_CanPlayForceFeedback_Params
{
	AActor*                                            InOwner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaEngine.BoxedRpcDispatcherComponent.Server_SendRpc
struct UBoxedRpcDispatcherComponent_Server_SendRpc_Params
{
	FSerialisedRpc                                     Event;                                                    // (ConstParm, Parm, ReferenceParm)
};

// Function AthenaEngine.BoxedRpcDispatcherComponent.NetMulticastExcludeServer_SendRpc
struct UBoxedRpcDispatcherComponent_NetMulticastExcludeServer_SendRpc_Params
{
	FSerialisedRpc                                     Event;                                                    // (ConstParm, Parm, ReferenceParm)
};

// Function AthenaEngine.BoxedRpcDispatcherComponent.Client_SendRpc
struct UBoxedRpcDispatcherComponent_Client_SendRpc_Params
{
	FSerialisedRpc                                     Event;                                                    // (ConstParm, Parm, ReferenceParm)
};

// Function AthenaEngine.DynamicColourPointLightComponent.DeactivateLight
struct UDynamicColourPointLightComponent_DeactivateLight_Params
{
	bool                                               Blend;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEngine.DynamicColourPointLightComponent.ActivateLight
struct UDynamicColourPointLightComponent_ActivateLight_Params
{
	bool                                               Blend;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEngine.PlayModeHelpers.SetPlayModeVariantOverride
struct UPlayModeHelpers_SetPlayModeVariantOverride_Params
{
	TEnumAsByte<EPlayModeVariant>                      NewPlayModeVariantOverride;                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEngine.PlayModeHelpers.SetPlayModeOverride
struct UPlayModeHelpers_SetPlayModeOverride_Params
{
	TEnumAsByte<EPlayMode>                             NewPlayModeOverride;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEngine.PlayModeHelpers.GetPlayModeVariant
struct UPlayModeHelpers_GetPlayModeVariant_Params
{
	UObject*                                           WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPlayModeVariant>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaEngine.PlayModeHelpers.GetPlayMode
struct UPlayModeHelpers_GetPlayMode_Params
{
	UObject*                                           WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPlayMode>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaEngine.PlayModeHelpers.ClearPlayModeVariantOverride
struct UPlayModeHelpers_ClearPlayModeVariantOverride_Params
{
};

// Function AthenaEngine.PlayModeHelpers.ClearPlayModeOverride
struct UPlayModeHelpers_ClearPlayModeOverride_Params
{
};

// Function AthenaEngine.RotateMeshToActorComponent.SnapMeshToLookAtActor
struct URotateMeshToActorComponent_SnapMeshToLookAtActor_Params
{
};

// Function AthenaEngine.RotateMeshToActorComponent.Initialise
struct URotateMeshToActorComponent_Initialise_Params
{
	UMeshComponent*                                    InMeshToRotate;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	AActor*                                            InActorToRotateTo;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
