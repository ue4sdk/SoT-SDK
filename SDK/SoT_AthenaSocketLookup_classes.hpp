#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaSocketLookup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaSocketLookup.SocketIdTestFunctions
// 0x0000 (0x0028 - 0x0028)
class USocketIdTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaSocketLookup.SocketIdTestFunctions");
		return ptr;
	}


	struct FSocketId STATIC_MakeSocketIdWithInvalidName(const class FString& InPath);
	struct FSocketId STATIC_MakeSocketIdWithEmptyPath(const struct FName& InSocketName);
	struct FSocketId STATIC_MakeSocketId(const class FString& InPath, const struct FName& InSocketName);
};


// Class AthenaSocketLookup.SocketLookupCacheTestFunctions
// 0x0000 (0x0028 - 0x0028)
class USocketLookupCacheTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaSocketLookup.SocketLookupCacheTestFunctions");
		return ptr;
	}


	bool STATIC_IsInCache(const struct FSocketId& InSocketId, struct FSocketLookupCache* InCache);
	bool STATIC_AddToCache(const struct FSocketId& InSocketId, class USceneComponent* InSceneComponent, struct FSocketLookupCache* InCache);
};


// Class AthenaSocketLookup.SocketLookupFunctions
// 0x0000 (0x0028 - 0x0028)
class USocketLookupFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaSocketLookup.SocketLookupFunctions");
		return ptr;
	}


	bool STATIC_TryGetSocketTransformWithCache(class AActor* InActor, const struct FSocketId& InSocketId, struct FSocketLookupCache* Cache, struct FTransform* OutTransform);
	bool STATIC_TryGetSocketTransform(class AActor* InActor, const struct FSocketId& InSocketId, TEnumAsByte<ERelativeTransformSpace> Space, struct FTransform* OutTransform);
	bool STATIC_TryGetRelativeSocketTransform(class AActor* InActor, const struct FSocketId& InSocketId, class USceneComponent* RelativeTo, struct FTransform* OutTransform);
	class USceneComponent* STATIC_TryFindSocketOwner(class AActor* InActor, const struct FSocketId& InSocketId);
};


// Class AthenaSocketLookup.SocketLookupInterface
// 0x0000 (0x0028 - 0x0028)
class USocketLookupInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaSocketLookup.SocketLookupInterface");
		return ptr;
	}


	bool FindSocket(const struct FSocketId& InSocketId, struct FTransform* OutTransform);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
