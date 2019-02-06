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
// 0x0000 (0x02D0 - 0x02D0)
class UAIPetsOnDemandSpawner : public UAISpawner
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.AIPetsOnDemandSpawner"));
		return ptr;
	}

};


// Class Pets.BTTask_PetWaitForAnimationRoamingState
// 0x0020 (0x0080 - 0x0060)
class UBTTask_PetWaitForAnimationRoamingState : public UBTTaskNode
{
public:
	TArray<TEnumAsByte<EAthenaAnimationPetRoamingState>> SuccessRoamingStates;                                     // 0x0060(0x0010) (Edit, ZeroConstructor)
	TArray<TEnumAsByte<EAthenaAnimationPetRoamingState>> FailRoamingStates;                                        // 0x0070(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.BTTask_PetWaitForAnimationRoamingState"));
		return ptr;
	}

};


// Class Pets.BTTask_SelectPetHangoutSpot
// 0x0000 (0x0088 - 0x0088)
class UBTTask_SelectPetHangoutSpot : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.BTTask_SelectPetHangoutSpot"));
		return ptr;
	}

};


// Class Pets.HangoutSpotSelectionInterface
// 0x0000 (0x0028 - 0x0028)
class UHangoutSpotSelectionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.HangoutSpotSelectionInterface"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetHangoutSpotsDataAsset"));
		return ptr;
	}

};


// Class Pets.PetAIController
// 0x00F8 (0x09E8 - 0x08F0)
class APetAIController : public AAthenaAIController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08F0(0x0008) MISSED OFFSET
	TArray<struct FAIStategyControllerMovementMod>     StrategyControllerMovementMods;                           // 0x08F8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              DefaultControlRotationInterpSpeed;                        // 0x0908(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x090C(0x0004) MISSED OFFSET
	struct FPetHangoutSpotSelector                     HangoutSpotSelector;                                      // 0x0910(0x0080)
	unsigned char                                      UnknownData02[0x58];                                      // 0x0990(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetAIController"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetAssignmentComponent"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetCategory"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetDesc"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetHangoutSpotComponent"));
		return ptr;
	}

};


// Class Pets.PetItemInfo
// 0x0030 (0x0548 - 0x0518)
class APetItemInfo : public ANonStorableItemInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0518(0x0008) MISSED OFFSET
	struct FPetCustomisation                           PetCustomisation;                                         // 0x0520(0x0018) (Edit, Net, DisableEditOnInstance)
	class AActor*                                      PetOwner;                                                 // 0x0538(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      SpawnedForShip;                                           // 0x0540(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetItemInfo"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetListingDataAsset"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetSpawnParamsDataAsset"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetsServiceInterface"));
		return ptr;
	}

};


// Class Pets.PetsServiceParamsDataAsset
// 0x0038 (0x0060 - 0x0028)
class UPetsServiceParamsDataAsset : public UDataAsset
{
public:
	struct FPetsServiceParams                          Params;                                                   // 0x0028(0x0034) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetsServiceParamsDataAsset"));
		return ptr;
	}

};


// Class Pets.PetsService
// 0x0248 (0x0270 - 0x0028)
class UPetsService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TMap<class AActor*, struct FPetRelationship>       PetOwnerRelationships;                                    // 0x0038(0x0050) (ZeroConstructor)
	class UAIPetsOnDemandSpawner*                      Spawner;                                                  // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0090(0x0050) MISSED OFFSET
	TArray<class AActor*>                              OwnersToRemove;                                           // 0x00E0(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              OwnersToRequestDespawn;                                   // 0x00F0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x150];                                     // 0x0100(0x0150) MISSED OFFSET
	class UPetHangoutSpotsDataAsset*                   PetHangoutDataAsset;                                      // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0258(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetsService"));
		return ptr;
	}


	void RemovePetFromActor(class AActor* InOwner);
};


// Class Pets.PetsSettings
// 0x0030 (0x0058 - 0x0028)
class UPetsSettings : public UObject
{
public:
	struct FStringAssetReference                       PetHangoutSpotsDataAsset;                                 // 0x0028(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	struct FStringAssetReference                       PetListingDataAsset;                                      // 0x0038(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	struct FStringAssetReference                       PetsServiceParamsDataAsset;                               // 0x0048(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.PetsSettings"));
		return ptr;
	}

};


// Class Pets.WieldablePet
// 0x0010 (0x0808 - 0x07F8)
class AWieldablePet : public ASkeletalMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07F8(0x0008) MISSED OFFSET
	class UWieldablePetComponent*                      WieldablePetComponent;                                    // 0x0800(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.WieldablePet"));
		return ptr;
	}

};


// Class Pets.WieldablePetComponent
// 0x00B0 (0x0180 - 0x00D0)
class UWieldablePetComponent : public UActorComponent
{
public:
	class UWieldablePetComponentDataAsset*             WieldablePetComponentData;                                // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x00D8(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.WieldablePetComponent"));
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
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Pets.WieldablePetComponentDataAsset"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
