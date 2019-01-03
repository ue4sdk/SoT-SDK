#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Pets_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Pets.AIPetsOnDemandSpawner
// 0x0000 (0x0280 - 0x0280)
class UAIPetsOnDemandSpawner : public UAISpawner
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Pets.AIPetsOnDemandSpawner");
		return ptr;
	}

};


// Class Pets.PetAIController
// 0x0070 (0x0950 - 0x08E0)
class APetAIController : public AAthenaAIController
{
public:
	TArray<struct FAIStategyControllerMovementMod>     StrategyControllerMovementMods;                           // 0x08E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              DefaultControlRotationInterpSpeed;                        // 0x08F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5C];                                      // 0x08F4(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Pets.PetAIController");
		return ptr;
	}


	class UAthenaAICharacterPathFollowingComponent* GetAthenaAICharPathFollowingComp();
};


// Class Pets.PetAssignmentComponent
// 0x0078 (0x0148 - 0x00D0)
class UPetAssignmentComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x00D0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Pets.PetAssignmentComponent");
		return ptr;
	}

};


// Class Pets.PetCategory
// 0x0000 (0x0080 - 0x0080)
class UPetCategory : public UItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Pets.PetCategory");
		return ptr;
	}

};


// Class Pets.PetDesc
// 0x0008 (0x0128 - 0x0120)
class UPetDesc : public UItemDesc
{
public:
	class UPetSpawnParamsDataAsset*                    PetSpawnParams;                                           // 0x0120(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Pets.PetDesc");
		return ptr;
	}

};


// Class Pets.PetHangoutSpotsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UPetHangoutSpotsDataAsset : public UDataAsset
{
public:
	TArray<struct FHangoutSpotParams>                  HangoutSpotParams;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Pets.PetHangoutSpotsDataAsset");
		return ptr;
	}

};


// Class Pets.PetHangoutSpotComponent
// 0x0030 (0x02E0 - 0x02B0)
class UPetHangoutSpotComponent : public USceneComponent
{
public:
	TArray<struct FHangoutSpotPosition>                HangoutSpots;                                             // 0x02B0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x02C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Pets.PetHangoutSpotComponent");
		return ptr;
	}

};


// Class Pets.PetItemInfo
// 0x0018 (0x0518 - 0x0500)
class APetItemInfo : public ANonStorableItemInfo
{
public:
	struct FPetCustomisation                           PetCustomisation;                                         // 0x0500(0x0018) (Edit, Net, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Pets.PetItemInfo");
		return ptr;
	}

};


// Class Pets.PetListingDataAsset
// 0x0010 (0x0038 - 0x0028)
class UPetListingDataAsset : public UDataAsset
{
public:
	TArray<struct FPetListingTypeEntry>                Entries;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Pets.PetListingDataAsset");
		return ptr;
	}

};


// Class Pets.PetSpawnParamsDataAsset
// 0x0040 (0x0068 - 0x0028)
class UPetSpawnParamsDataAsset : public UDataAsset
{
public:
	class UClass*                                      PetClassID;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBehaviorTree*                               TreeToRun;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class UAthenaAIControllerParamsDataAsset> PetSkillset;                                              // 0x0038(0x0020) (Edit, DisableEditOnInstance)
	class UEnvQuery*                                   SpawnQueryForLand;                                        // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEnvQuery*                                   SpawnQueryForShip;                                        // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Pets.PetSpawnParamsDataAsset");
		return ptr;
	}

};


// Class Pets.PetsServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UPetsServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Pets.PetsServiceInterface");
		return ptr;
	}

};


// Class Pets.PetsService
// 0x0060 (0x0088 - 0x0028)
class UPetsService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TMap<class AActor*, TWeakObjectPtr<class APetItemInfo>> PetOwnerRelationships;                                    // 0x0030(0x0050) (ZeroConstructor)
	class UAIPetsOnDemandSpawner*                      Spawner;                                                  // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Pets.PetsService");
		return ptr;
	}


	void RemovePetFromActor(class AActor* InOwner);
};


// Class Pets.PetsSettings
// 0x0020 (0x0048 - 0x0028)
class UPetsSettings : public UObject
{
public:
	struct FStringAssetReference                       PetHangoutSpotsDataAsset;                                 // 0x0028(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	struct FStringAssetReference                       PetListingDataAsset;                                      // 0x0038(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Pets.PetsSettings");
		return ptr;
	}

};


// Class Pets.WieldablePet
// 0x0008 (0x07F8 - 0x07F0)
class AWieldablePet : public ASkeletalMeshWieldableItem
{
public:
	class UWieldablePetComponent*                      WieldablePetComponent;                                    // 0x07F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Pets.WieldablePet");
		return ptr;
	}

};


// Class Pets.WieldablePetComponent
// 0x00A0 (0x0170 - 0x00D0)
class UWieldablePetComponent : public UActorComponent
{
public:
	class UWieldablePetComponentDataAsset*             WieldablePetComponentData;                                // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x98];                                      // 0x00D8(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Pets.WieldablePetComponent");
		return ptr;
	}

};


// Class Pets.WieldablePetComponentDataAsset
// 0x0020 (0x0048 - 0x0028)
class UWieldablePetComponentDataAsset : public UDataAsset
{
public:
	struct FFloatRange                                 FriendlyTimeUntilEscape;                                  // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFloatRange                                 NormalTimeUntilEscape;                                    // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Pets.WieldablePetComponentDataAsset");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
