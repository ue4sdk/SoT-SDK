#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaObjectLinkage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaObjectLinkage.EndPlayHandler
// 0x0018 (0x0040 - 0x0028)
class UEndPlayHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaObjectLinkage.EndPlayHandler"));
		return ptr;
	}


	void OnEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
};


// Class AthenaObjectLinkage.LinkEndpointIdUtilities
// 0x0000 (0x0028 - 0x0028)
class ULinkEndpointIdUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaObjectLinkage.LinkEndpointIdUtilities"));
		return ptr;
	}


	static bool IsValid(const FLinkEndpointId& Id);
	static bool IsPathed(const FLinkEndpointId& Id);
	static FLinkEndpointId CreateEndpointId(const FString& String);
	static FString Conv_LinkEndpointIdToString(const FLinkEndpointId& Id);
	static FLinkEndpointId CombineEndpointIds(const FLinkEndpointId& Root, const FLinkEndpointId& path);
};


// Class AthenaObjectLinkage.LinkEndpointInterface
// 0x0000 (0x0028 - 0x0028)
class ULinkEndpointInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaObjectLinkage.LinkEndpointInterface"));
		return ptr;
	}


	void ReceiveLink(const FLinkEndpointId& Id, AActor* Instance);
	void LoseLink(const FLinkEndpointId& Id);
};


// Class AthenaObjectLinkage.LinkerComponent
// 0x00D8 (0x01A0 - 0x00C8)
class ULinkerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x00C8(0x00C8) MISSED OFFSET
	TArray<UEndPlayHandler*>                           EndPlayHandlers;                                          // 0x0190(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaObjectLinkage.LinkerComponent"));
		return ptr;
	}


	void UnregisterLink(const FLinkEndpointId& SourceId, const FLinkEndpointId& TargetID);
	void UnregisterEndpoint(const FLinkEndpointId& Id);
	void SetParent(AActor* Parent);
	TEnumAsByte<EAddLinkResult> RegisterLink(const FLinkEndpointId& SourceId, const FLinkEndpointId& TargetID);
	TEnumAsByte<EAddEndpointResult> RegisterEndpoint(const FLinkEndpointId& Id, AActor* Source);
	void OnEndpointRemovedFromChild(AActor* Child, const FLinkEndpointId& Id);
	void OnEndpointAddedToChild(AActor* Child, const FLinkEndpointId& Id, AActor* Instance);
	AActor* LookupEndpoint(const FLinkEndpointId& Id);
	int GetNumSetLinks();
	int GetNumRegisteredLinks();
	int GetNumRegisteredEndpoints();
	int GetNumPendingLinks();
};


// Class AthenaObjectLinkage.LinkerInterface
// 0x0000 (0x0028 - 0x0028)
class ULinkerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaObjectLinkage.LinkerInterface"));
		return ptr;
	}


	void SetParent(AActor* Parent);
	void RemoveLink(const FLinkEndpointId& SourceId, const FLinkEndpointId& TargetID);
	void RemoveEndpoint(const FLinkEndpointId& Id);
	void OnEndpointRemovedFromChild(AActor* Child, const FLinkEndpointId& Id);
	void OnEndpointAddedToChild(AActor* Child, const FLinkEndpointId& Id, AActor* Instance);
	AActor* LookupEndpoint(const FLinkEndpointId& Id);
	bool AddLink(const FLinkEndpointId& SourceId, const FLinkEndpointId& TargetID);
	bool AddEndpoint(const FLinkEndpointId& Id, AActor* Instance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
