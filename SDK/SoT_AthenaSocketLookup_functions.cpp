// Sea of Thieves (2) SDK

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
// FString                        InPath                         (Parm, ZeroConstructor)
// FSocketId                      ReturnValue                    (Parm, OutParm, ReturnParm)

FSocketId USocketIdTestFunctions::MakeSocketIdWithInvalidName(const FString& InPath)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithInvalidName"));

	USocketIdTestFunctions_MakeSocketIdWithInvalidName_Params params;
	params.InPath = InPath;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithEmptyPath
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FName                          InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// FSocketId                      ReturnValue                    (Parm, OutParm, ReturnParm)

FSocketId USocketIdTestFunctions::MakeSocketIdWithEmptyPath(const FName& InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithEmptyPath"));

	USocketIdTestFunctions_MakeSocketIdWithEmptyPath_Params params;
	params.InSocketName = InSocketName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FString                        InPath                         (Parm, ZeroConstructor)
// FName                          InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// FSocketId                      ReturnValue                    (Parm, OutParm, ReturnParm)

FSocketId USocketIdTestFunctions::MakeSocketId(const FString& InPath, const FName& InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketId"));

	USocketIdTestFunctions_MakeSocketId_Params params;
	params.InPath = InPath;
	params.InSocketName = InSocketName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketLookupCacheTestFunctions.IsInCache
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FSocketLookupCache             InCache                        (Parm, OutParm, ReferenceParm)
// FSocketId                      InSocketId                     (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USocketLookupCacheTestFunctions::IsInCache(const FSocketId& InSocketId, FSocketLookupCache* InCache)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketLookupCacheTestFunctions.IsInCache"));

	USocketLookupCacheTestFunctions_IsInCache_Params params;
	params.InSocketId = InSocketId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (InCache != nullptr)
		*InCache = params.InCache;

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketLookupCacheTestFunctions.AddToCache
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FSocketLookupCache             InCache                        (Parm, OutParm, ReferenceParm)
// FSocketId                      InSocketId                     (ConstParm, Parm)
// USceneComponent*               InSceneComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USocketLookupCacheTestFunctions::AddToCache(const FSocketId& InSocketId, USceneComponent* InSceneComponent, FSocketLookupCache* InCache)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketLookupCacheTestFunctions.AddToCache"));

	USocketLookupCacheTestFunctions_AddToCache_Params params;
	params.InSocketId = InSocketId;
	params.InSceneComponent = InSceneComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (InCache != nullptr)
		*InCache = params.InCache;

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransformWithCache
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FSocketLookupCache             Cache                          (Parm, OutParm, ReferenceParm)
// AActor*                        InActor                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FSocketId                      InSocketId                     (ConstParm, Parm, OutParm, ReferenceParm)
// FTransform                     OutTransform                   (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USocketLookupFunctions::TryGetSocketTransformWithCache(AActor* InActor, const FSocketId& InSocketId, FSocketLookupCache* Cache, FTransform* OutTransform)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransformWithCache"));

	USocketLookupFunctions_TryGetSocketTransformWithCache_Params params;
	params.InActor = InActor;
	params.InSocketId = InSocketId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Cache != nullptr)
		*Cache = params.Cache;
	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// AActor*                        InActor                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FSocketId                      InSocketId                     (ConstParm, Parm, OutParm, ReferenceParm)
// FTransform                     OutTransform                   (Parm, OutParm, IsPlainOldData)
// TEnumAsByte<ERelativeTransformSpace> Space                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USocketLookupFunctions::TryGetSocketTransform(AActor* InActor, const FSocketId& InSocketId, TEnumAsByte<ERelativeTransformSpace> Space, FTransform* OutTransform)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransform"));

	USocketLookupFunctions_TryGetSocketTransform_Params params;
	params.InActor = InActor;
	params.InSocketId = InSocketId;
	params.Space = Space;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketLookupFunctions.TryGetRelativeSocketTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// AActor*                        InActor                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FSocketId                      InSocketId                     (ConstParm, Parm, OutParm, ReferenceParm)
// USceneComponent*               RelativeTo                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FTransform                     OutTransform                   (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USocketLookupFunctions::TryGetRelativeSocketTransform(AActor* InActor, const FSocketId& InSocketId, USceneComponent* RelativeTo, FTransform* OutTransform)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketLookupFunctions.TryGetRelativeSocketTransform"));

	USocketLookupFunctions_TryGetRelativeSocketTransform_Params params;
	params.InActor = InActor;
	params.InSocketId = InSocketId;
	params.RelativeTo = RelativeTo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketLookupFunctions.TryFindSocketOwner
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// AActor*                        InActor                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FSocketId                      InSocketId                     (ConstParm, Parm, OutParm, ReferenceParm)
// USceneComponent*               ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

USceneComponent* USocketLookupFunctions::TryFindSocketOwner(AActor* InActor, const FSocketId& InSocketId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketLookupFunctions.TryFindSocketOwner"));

	USocketLookupFunctions_TryFindSocketOwner_Params params;
	params.InActor = InActor;
	params.InSocketId = InSocketId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketLookupInterface.FindSocket
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FSocketId                      InSocketId                     (ConstParm, Parm, OutParm, ReferenceParm)
// FTransform                     OutTransform                   (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USocketLookupInterface::FindSocket(const FSocketId& InSocketId, FTransform* OutTransform)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketLookupInterface.FindSocket"));

	USocketLookupInterface_FindSocket_Params params;
	params.InSocketId = InSocketId;

	UObject::ProcessEvent(fn, &params);

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
