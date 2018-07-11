#pragma once

// Sea of Thieves (1.1.6) SDK

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
	class FString                                      InPath;                                                   // (Parm, ZeroConstructor)
	struct FSocketId                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithEmptyPath
struct USocketIdTestFunctions_MakeSocketIdWithEmptyPath_Params
{
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSocketId                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketId
struct USocketIdTestFunctions_MakeSocketId_Params
{
	class FString                                      InPath;                                                   // (Parm, ZeroConstructor)
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSocketId                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaSocketLookup.SocketLookupCacheTestFunctions.IsInCache
struct USocketLookupCacheTestFunctions_IsInCache_Params
{
	struct FSocketLookupCache                          InCache;                                                  // (Parm, OutParm, ReferenceParm)
	struct FSocketId                                   InSocketId;                                               // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaSocketLookup.SocketLookupCacheTestFunctions.AddToCache
struct USocketLookupCacheTestFunctions_AddToCache_Params
{
	struct FSocketLookupCache                          InCache;                                                  // (Parm, OutParm, ReferenceParm)
	struct FSocketId                                   InSocketId;                                               // (ConstParm, Parm)
	class USceneComponent*                             InSceneComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransformWithCache
struct USocketLookupFunctions_TryGetSocketTransformWithCache_Params
{
	struct FSocketLookupCache                          Cache;                                                    // (Parm, OutParm, ReferenceParm)
	class AActor*                                      InActor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FSocketId                                   InSocketId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransform
struct USocketLookupFunctions_TryGetSocketTransform_Params
{
	class AActor*                                      InActor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FSocketId                                   InSocketId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	TEnumAsByte<ERelativeTransformSpace>               Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaSocketLookup.SocketLookupFunctions.TryGetRelativeSocketTransform
struct USocketLookupFunctions_TryGetRelativeSocketTransform_Params
{
	class AActor*                                      InActor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FSocketId                                   InSocketId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class USceneComponent*                             RelativeTo;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaSocketLookup.SocketLookupFunctions.TryFindSocketOwner
struct USocketLookupFunctions_TryFindSocketOwner_Params
{
	class AActor*                                      InActor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FSocketId                                   InSocketId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AthenaSocketLookup.SocketLookupInterface.FindSocket
struct USocketLookupInterface_FindSocket_Params
{
	struct FSocketId                                   InSocketId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
