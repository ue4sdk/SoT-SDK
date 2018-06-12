// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaSocketLookup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithInvalidName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  InPath                         (Parm, ZeroConstructor)
// struct FSocketId               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSocketId USocketIdTestFunctions::STATIC_MakeSocketIdWithInvalidName(const class FString& InPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithInvalidName");

	USocketIdTestFunctions_MakeSocketIdWithInvalidName_Params params;
	params.InPath = InPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithEmptyPath
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FSocketId               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSocketId USocketIdTestFunctions::STATIC_MakeSocketIdWithEmptyPath(const struct FName& InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithEmptyPath");

	USocketIdTestFunctions_MakeSocketIdWithEmptyPath_Params params;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  InPath                         (Parm, ZeroConstructor)
// struct FName                   InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FSocketId               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSocketId USocketIdTestFunctions::STATIC_MakeSocketId(const class FString& InPath, const struct FName& InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketId");

	USocketIdTestFunctions_MakeSocketId_Params params;
	params.InPath = InPath;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketLookupCacheTestFunctions.IsInCache
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSocketLookupCache      InCache                        (Parm, OutParm, ReferenceParm)
// struct FSocketId               InSocketId                     (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USocketLookupCacheTestFunctions::STATIC_IsInCache(const struct FSocketId& InSocketId, struct FSocketLookupCache* InCache)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSocketLookup.SocketLookupCacheTestFunctions.IsInCache");

	USocketLookupCacheTestFunctions_IsInCache_Params params;
	params.InSocketId = InSocketId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InCache != nullptr)
		*InCache = params.InCache;

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketLookupCacheTestFunctions.AddToCache
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSocketLookupCache      InCache                        (Parm, OutParm, ReferenceParm)
// struct FSocketId               InSocketId                     (ConstParm, Parm)
// class USceneComponent*         InSceneComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USocketLookupCacheTestFunctions::STATIC_AddToCache(const struct FSocketId& InSocketId, class USceneComponent* InSceneComponent, struct FSocketLookupCache* InCache)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSocketLookup.SocketLookupCacheTestFunctions.AddToCache");

	USocketLookupCacheTestFunctions_AddToCache_Params params;
	params.InSocketId = InSocketId;
	params.InSceneComponent = InSceneComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InCache != nullptr)
		*InCache = params.InCache;

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransformWithCache
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSocketLookupCache      Cache                          (Parm, OutParm, ReferenceParm)
// class AActor*                  InActor                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FSocketId               InSocketId                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USocketLookupFunctions::STATIC_TryGetSocketTransformWithCache(class AActor* InActor, const struct FSocketId& InSocketId, struct FSocketLookupCache* Cache, struct FTransform* OutTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransformWithCache");

	USocketLookupFunctions_TryGetSocketTransformWithCache_Params params;
	params.InActor = InActor;
	params.InSocketId = InSocketId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cache != nullptr)
		*Cache = params.Cache;
	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  InActor                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FSocketId               InSocketId                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)
// TEnumAsByte<ERelativeTransformSpace> Space                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USocketLookupFunctions::STATIC_TryGetSocketTransform(class AActor* InActor, const struct FSocketId& InSocketId, TEnumAsByte<ERelativeTransformSpace> Space, struct FTransform* OutTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransform");

	USocketLookupFunctions_TryGetSocketTransform_Params params;
	params.InActor = InActor;
	params.InSocketId = InSocketId;
	params.Space = Space;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketLookupFunctions.TryGetRelativeSocketTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  InActor                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FSocketId               InSocketId                     (ConstParm, Parm, OutParm, ReferenceParm)
// class USceneComponent*         RelativeTo                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USocketLookupFunctions::STATIC_TryGetRelativeSocketTransform(class AActor* InActor, const struct FSocketId& InSocketId, class USceneComponent* RelativeTo, struct FTransform* OutTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSocketLookup.SocketLookupFunctions.TryGetRelativeSocketTransform");

	USocketLookupFunctions_TryGetRelativeSocketTransform_Params params;
	params.InActor = InActor;
	params.InSocketId = InSocketId;
	params.RelativeTo = RelativeTo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketLookupFunctions.TryFindSocketOwner
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  InActor                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FSocketId               InSocketId                     (ConstParm, Parm, OutParm, ReferenceParm)
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* USocketLookupFunctions::STATIC_TryFindSocketOwner(class AActor* InActor, const struct FSocketId& InSocketId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSocketLookup.SocketLookupFunctions.TryFindSocketOwner");

	USocketLookupFunctions_TryFindSocketOwner_Params params;
	params.InActor = InActor;
	params.InSocketId = InSocketId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketLookupInterface.FindSocket
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSocketId               InSocketId                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USocketLookupInterface::FindSocket(const struct FSocketId& InSocketId, struct FTransform* OutTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSocketLookup.SocketLookupInterface.FindSocket");

	USocketLookupInterface_FindSocket_Params params;
	params.InSocketId = InSocketId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
