#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaObjectLinkage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaObjectLinkage.EndPlayHandler.OnEndPlay
struct UEndPlayHandler_OnEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsValid
struct ULinkEndpointIdUtilities_IsValid_Params
{
	FLinkEndpointId                                    Id;                                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsPathed
struct ULinkEndpointIdUtilities_IsPathed_Params
{
	FLinkEndpointId                                    Id;                                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaObjectLinkage.LinkEndpointIdUtilities.CreateEndpointId
struct ULinkEndpointIdUtilities_CreateEndpointId_Params
{
	FString                                            String;                                                   // (Parm, ZeroConstructor)
	FLinkEndpointId                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaObjectLinkage.LinkEndpointIdUtilities.Conv_LinkEndpointIdToString
struct ULinkEndpointIdUtilities_Conv_LinkEndpointIdToString_Params
{
	FLinkEndpointId                                    Id;                                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	FString                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AthenaObjectLinkage.LinkEndpointIdUtilities.CombineEndpointIds
struct ULinkEndpointIdUtilities_CombineEndpointIds_Params
{
	FLinkEndpointId                                    Root;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	FLinkEndpointId                                    path;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	FLinkEndpointId                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaObjectLinkage.LinkEndpointInterface.ReceiveLink
struct ULinkEndpointInterface_ReceiveLink_Params
{
	FLinkEndpointId                                    Id;                                                       // (Parm)
	AActor*                                            Instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaObjectLinkage.LinkEndpointInterface.LoseLink
struct ULinkEndpointInterface_LoseLink_Params
{
	FLinkEndpointId                                    Id;                                                       // (Parm)
};

// Function AthenaObjectLinkage.LinkerComponent.UnregisterLink
struct ULinkerComponent_UnregisterLink_Params
{
	FLinkEndpointId                                    SourceId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	FLinkEndpointId                                    TargetID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AthenaObjectLinkage.LinkerComponent.UnregisterEndpoint
struct ULinkerComponent_UnregisterEndpoint_Params
{
	FLinkEndpointId                                    Id;                                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AthenaObjectLinkage.LinkerComponent.SetParent
struct ULinkerComponent_SetParent_Params
{
	AActor*                                            Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaObjectLinkage.LinkerComponent.RegisterLink
struct ULinkerComponent_RegisterLink_Params
{
	FLinkEndpointId                                    SourceId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	FLinkEndpointId                                    TargetID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EAddLinkResult>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaObjectLinkage.LinkerComponent.RegisterEndpoint
struct ULinkerComponent_RegisterEndpoint_Params
{
	FLinkEndpointId                                    Id;                                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	AActor*                                            Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAddEndpointResult>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaObjectLinkage.LinkerComponent.OnEndpointRemovedFromChild
struct ULinkerComponent_OnEndpointRemovedFromChild_Params
{
	AActor*                                            Child;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FLinkEndpointId                                    Id;                                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AthenaObjectLinkage.LinkerComponent.OnEndpointAddedToChild
struct ULinkerComponent_OnEndpointAddedToChild_Params
{
	AActor*                                            Child;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FLinkEndpointId                                    Id;                                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	AActor*                                            Instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaObjectLinkage.LinkerComponent.LookupEndpoint
struct ULinkerComponent_LookupEndpoint_Params
{
	FLinkEndpointId                                    Id;                                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	AActor*                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaObjectLinkage.LinkerComponent.GetNumSetLinks
struct ULinkerComponent_GetNumSetLinks_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredLinks
struct ULinkerComponent_GetNumRegisteredLinks_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredEndpoints
struct ULinkerComponent_GetNumRegisteredEndpoints_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaObjectLinkage.LinkerComponent.GetNumPendingLinks
struct ULinkerComponent_GetNumPendingLinks_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaObjectLinkage.LinkerInterface.SetParent
struct ULinkerInterface_SetParent_Params
{
	AActor*                                            Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaObjectLinkage.LinkerInterface.RemoveLink
struct ULinkerInterface_RemoveLink_Params
{
	FLinkEndpointId                                    SourceId;                                                 // (Parm)
	FLinkEndpointId                                    TargetID;                                                 // (Parm)
};

// Function AthenaObjectLinkage.LinkerInterface.RemoveEndpoint
struct ULinkerInterface_RemoveEndpoint_Params
{
	FLinkEndpointId                                    Id;                                                       // (Parm)
};

// Function AthenaObjectLinkage.LinkerInterface.OnEndpointRemovedFromChild
struct ULinkerInterface_OnEndpointRemovedFromChild_Params
{
	AActor*                                            Child;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FLinkEndpointId                                    Id;                                                       // (Parm)
};

// Function AthenaObjectLinkage.LinkerInterface.OnEndpointAddedToChild
struct ULinkerInterface_OnEndpointAddedToChild_Params
{
	AActor*                                            Child;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FLinkEndpointId                                    Id;                                                       // (Parm)
	AActor*                                            Instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaObjectLinkage.LinkerInterface.LookupEndpoint
struct ULinkerInterface_LookupEndpoint_Params
{
	FLinkEndpointId                                    Id;                                                       // (Parm)
	AActor*                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaObjectLinkage.LinkerInterface.AddLink
struct ULinkerInterface_AddLink_Params
{
	FLinkEndpointId                                    SourceId;                                                 // (Parm)
	FLinkEndpointId                                    TargetID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaObjectLinkage.LinkerInterface.AddEndpoint
struct ULinkerInterface_AddEndpoint_Params
{
	FLinkEndpointId                                    Id;                                                       // (Parm)
	AActor*                                            Instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
