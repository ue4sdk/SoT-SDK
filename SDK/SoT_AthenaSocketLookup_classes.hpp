#pragma once

// Sea of Thieves (2) SDK

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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaSocketLookup.SocketIdTestFunctions"));
		return ptr;
	}


	static struct FSocketId MakeSocketIdWithInvalidName(const class FString& InPath);
	static struct FSocketId MakeSocketIdWithEmptyPath(const struct FName& InSocketName);
	static struct FSocketId MakeSocketId(const class FString& InPath, const struct FName& InSocketName);
};


// Class AthenaSocketLookup.SocketLookupCacheTestFunctions
// 0x0000 (0x0028 - 0x0028)
class USocketLookupCacheTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaSocketLookup.SocketLookupCacheTestFunctions"));
		return ptr;
	}


	static bool IsInCache(const struct FSocketId& InSocketId, struct FSocketLookupCache* InCache);
	static bool AddToCache(const struct FSocketId& InSocketId, class USceneComponent* InSceneComponent, struct FSocketLookupCache* InCache);
};


// Class AthenaSocketLookup.SocketLookupFunctions
// 0x0000 (0x0028 - 0x0028)
class USocketLookupFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaSocketLookup.SocketLookupFunctions"));
		return ptr;
	}


	static bool TryGetSocketTransformWithCache(class AActor* InActor, const struct FSocketId& InSocketId, struct FSocketLookupCache* Cache, struct FTransform* OutTransform);
	static bool TryGetSocketTransform(class AActor* InActor, const struct FSocketId& InSocketId, TEnumAsByte<ERelativeTransformSpace> Space, struct FTransform* OutTransform);
	static bool TryGetRelativeSocketTransform(class AActor* InActor, const struct FSocketId& InSocketId, class USceneComponent* RelativeTo, struct FTransform* OutTransform);
	static class USceneComponent* TryFindSocketOwner(class AActor* InActor, const struct FSocketId& InSocketId);
};


// Class AthenaSocketLookup.SocketLookupInterface
// 0x0000 (0x0028 - 0x0028)
class USocketLookupInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaSocketLookup.SocketLookupInterface"));
		return ptr;
	}


	bool FindSocket(const struct FSocketId& InSocketId, struct FTransform* OutTransform);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
