// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaSocketLookup_classes.hpp"

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

struct FSocketId USocketIdTestFunctions::MakeSocketIdWithInvalidName(const class FString& InPath)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithInvalidName"));

	struct
	{
		class FString                  InPath;
		struct FSocketId               ReturnValue;
	} params;

	params.InPath = InPath;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithEmptyPath
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FSocketId               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSocketId USocketIdTestFunctions::MakeSocketIdWithEmptyPath(const struct FName& InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithEmptyPath"));

	struct
	{
		struct FName                   InSocketName;
		struct FSocketId               ReturnValue;
	} params;

	params.InSocketName = InSocketName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  InPath                         (Parm, ZeroConstructor)
// struct FName                   InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FSocketId               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSocketId USocketIdTestFunctions::MakeSocketId(const class FString& InPath, const struct FName& InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketId"));

	struct
	{
		class FString                  InPath;
		struct FName                   InSocketName;
		struct FSocketId               ReturnValue;
	} params;

	params.InPath = InPath;
	params.InSocketName = InSocketName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaSocketLookup.SocketLookupCacheTestFunctions.IsInCache
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSocketLookupCache      InCache                        (Parm, OutParm, ReferenceParm)
// struct FSocketId               InSocketId                     (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USocketLookupCacheTestFunctions::IsInCache(const struct FSocketId& InSocketId, struct FSocketLookupCache* InCache)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketLookupCacheTestFunctions.IsInCache"));

	struct
	{
		struct FSocketLookupCache      InCache;
		struct FSocketId               InSocketId;
		bool                           ReturnValue;
	} params;

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
// struct FSocketLookupCache      InCache                        (Parm, OutParm, ReferenceParm)
// struct FSocketId               InSocketId                     (ConstParm, Parm)
// class USceneComponent*         InSceneComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USocketLookupCacheTestFunctions::AddToCache(const struct FSocketId& InSocketId, class USceneComponent* InSceneComponent, struct FSocketLookupCache* InCache)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketLookupCacheTestFunctions.AddToCache"));

	struct
	{
		struct FSocketLookupCache      InCache;
		struct FSocketId               InSocketId;
		class USceneComponent*         InSceneComponent;
		bool                           ReturnValue;
	} params;

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
// struct FSocketLookupCache      Cache                          (Parm, OutParm, ReferenceParm)
// class AActor*                  InActor                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FSocketId               InSocketId                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USocketLookupFunctions::TryGetSocketTransformWithCache(class AActor* InActor, const struct FSocketId& InSocketId, struct FSocketLookupCache* Cache, struct FTransform* OutTransform)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransformWithCache"));

	struct
	{
		struct FSocketLookupCache      Cache;
		class AActor*                  InActor;
		struct FSocketId               InSocketId;
		struct FTransform              OutTransform;
		bool                           ReturnValue;
	} params;

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
// class AActor*                  InActor                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FSocketId               InSocketId                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)
// TEnumAsByte<ERelativeTransformSpace> Space                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USocketLookupFunctions::TryGetSocketTransform(class AActor* InActor, const struct FSocketId& InSocketId, TEnumAsByte<ERelativeTransformSpace> Space, struct FTransform* OutTransform)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransform"));

	struct
	{
		class AActor*                  InActor;
		struct FSocketId               InSocketId;
		struct FTransform              OutTransform;
		TEnumAsByte<ERelativeTransformSpace> Space;
		bool                           ReturnValue;
	} params;

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
// class AActor*                  InActor                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FSocketId               InSocketId                     (ConstParm, Parm, OutParm, ReferenceParm)
// class USceneComponent*         RelativeTo                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USocketLookupFunctions::TryGetRelativeSocketTransform(class AActor* InActor, const struct FSocketId& InSocketId, class USceneComponent* RelativeTo, struct FTransform* OutTransform)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketLookupFunctions.TryGetRelativeSocketTransform"));

	struct
	{
		class AActor*                  InActor;
		struct FSocketId               InSocketId;
		class USceneComponent*         RelativeTo;
		struct FTransform              OutTransform;
		bool                           ReturnValue;
	} params;

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
// class AActor*                  InActor                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FSocketId               InSocketId                     (ConstParm, Parm, OutParm, ReferenceParm)
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* USocketLookupFunctions::TryFindSocketOwner(class AActor* InActor, const struct FSocketId& InSocketId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketLookupFunctions.TryFindSocketOwner"));

	struct
	{
		class AActor*                  InActor;
		struct FSocketId               InSocketId;
		class USceneComponent*         ReturnValue;
	} params;

	params.InActor = InActor;
	params.InSocketId = InSocketId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaSocketLookup.SocketLookupInterface.FindSocket"));

	struct
	{
		struct FSocketId               InSocketId;
		struct FTransform              OutTransform;
		bool                           ReturnValue;
	} params;

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
