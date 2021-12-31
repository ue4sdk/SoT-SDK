#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaSocketLookup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithInvalidName
struct USocketIdTestFunctions_MakeSocketIdWithInvalidName_Params
{
	FString                                            InPath;                                                   // (Parm, ZeroConstructor)
	FSocketId                                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithEmptyPath
struct USocketIdTestFunctions_MakeSocketIdWithEmptyPath_Params
{
	FName                                              InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FSocketId                                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketId
struct USocketIdTestFunctions_MakeSocketId_Params
{
	FString                                            InPath;                                                   // (Parm, ZeroConstructor)
	FName                                              InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FSocketId                                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaSocketLookup.SocketLookupCacheTestFunctions.IsInCache
struct USocketLookupCacheTestFunctions_IsInCache_Params
{
	FSocketLookupCache                                 InCache;                                                  // (Parm, OutParm, ReferenceParm)
	FSocketId                                          InSocketId;                                               // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaSocketLookup.SocketLookupCacheTestFunctions.AddToCache
struct USocketLookupCacheTestFunctions_AddToCache_Params
{
	FSocketLookupCache                                 InCache;                                                  // (Parm, OutParm, ReferenceParm)
	FSocketId                                          InSocketId;                                               // (ConstParm, Parm)
	USceneComponent*                                   InSceneComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransformWithCache
struct USocketLookupFunctions_TryGetSocketTransformWithCache_Params
{
	FSocketLookupCache                                 Cache;                                                    // (Parm, OutParm, ReferenceParm)
	AActor*                                            InActor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FSocketId                                          InSocketId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	FTransform                                         OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransform
struct USocketLookupFunctions_TryGetSocketTransform_Params
{
	AActor*                                            InActor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FSocketId                                          InSocketId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	FTransform                                         OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	TEnumAsByte<ERelativeTransformSpace>               Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaSocketLookup.SocketLookupFunctions.TryGetRelativeSocketTransform
struct USocketLookupFunctions_TryGetRelativeSocketTransform_Params
{
	AActor*                                            InActor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FSocketId                                          InSocketId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	USceneComponent*                                   RelativeTo;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	FTransform                                         OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaSocketLookup.SocketLookupFunctions.TryFindSocketOwner
struct USocketLookupFunctions_TryFindSocketOwner_Params
{
	AActor*                                            InActor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FSocketId                                          InSocketId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	USceneComponent*                                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AthenaSocketLookup.SocketLookupInterface.FindSocket
struct USocketLookupInterface_FindSocket_Params
{
	FSocketId                                          InSocketId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	FTransform                                         OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
