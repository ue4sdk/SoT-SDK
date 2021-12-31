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


	static FSocketId MakeSocketIdWithInvalidName(const FString& InPath);
	static FSocketId MakeSocketIdWithEmptyPath(const FName& InSocketName);
	static FSocketId MakeSocketId(const FString& InPath, const FName& InSocketName);
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


	static bool IsInCache(const FSocketId& InSocketId, FSocketLookupCache* InCache);
	static bool AddToCache(const FSocketId& InSocketId, USceneComponent* InSceneComponent, FSocketLookupCache* InCache);
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


	static bool TryGetSocketTransformWithCache(AActor* InActor, const FSocketId& InSocketId, FSocketLookupCache* Cache, FTransform* OutTransform);
	static bool TryGetSocketTransform(AActor* InActor, const FSocketId& InSocketId, TEnumAsByte<ERelativeTransformSpace> Space, FTransform* OutTransform);
	static bool TryGetRelativeSocketTransform(AActor* InActor, const FSocketId& InSocketId, USceneComponent* RelativeTo, FTransform* OutTransform);
	static USceneComponent* TryFindSocketOwner(AActor* InActor, const FSocketId& InSocketId);
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


	bool FindSocket(const FSocketId& InSocketId, FTransform* OutTransform);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
