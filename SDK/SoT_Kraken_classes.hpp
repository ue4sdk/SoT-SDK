#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Kraken_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Kraken.KrakenTentacle
// 0x0120 (0x0590 - 0x0470)
class AKrakenTentacle : public AActor
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0470(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenTentacle");
		return ptr;
	}


	void OnDamageToTentacle(const struct FImpactDamageEvent& ImpactDamageEvent);
};


// Class Kraken.EnvQueryContext_AllKrakenOccupiedLocations
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_AllKrakenOccupiedLocations : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.EnvQueryContext_AllKrakenOccupiedLocations");
		return ptr;
	}

};


// Class Kraken.EnvQueryContext_AllocatedShip
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_AllocatedShip : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.EnvQueryContext_AllocatedShip");
		return ptr;
	}

};


// Class Kraken.EnvQueryContext_AllShipsInWorld
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_AllShipsInWorld : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.EnvQueryContext_AllShipsInWorld");
		return ptr;
	}

};


// Class Kraken.EnvQueryContext_PreviousLocation
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_PreviousLocation : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.EnvQueryContext_PreviousLocation");
		return ptr;
	}

};


// Class Kraken.EnvQueryGenerator_KrakenSpawnLocations
// 0x0000 (0x0048 - 0x0048)
class UEnvQueryGenerator_KrakenSpawnLocations : public UEnvQueryGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.EnvQueryGenerator_KrakenSpawnLocations");
		return ptr;
	}

};


// Class Kraken.EnvQueryGenerator_KrakenTentacleSpawnLocations
// 0x0000 (0x0048 - 0x0048)
class UEnvQueryGenerator_KrakenTentacleSpawnLocations : public UEnvQueryGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.EnvQueryGenerator_KrakenTentacleSpawnLocations");
		return ptr;
	}

};


// Class Kraken.Murk
// 0x0078 (0x04E8 - 0x0470)
class AMurk : public AActor
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0470(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.Murk");
		return ptr;
	}

};


// Class Kraken.KrakenShipWrappingTentacle
// 0x01D0 (0x0760 - 0x0590)
class AKrakenShipWrappingTentacle : public AKrakenTentacle
{
public:
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x0590(0x01D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenShipWrappingTentacle");
		return ptr;
	}


	void OnRep_CurrentServerAnimationState();
};


// Class Kraken.KrakenTelemetryComponent
// 0x0108 (0x01D8 - 0x00D0)
class UKrakenTelemetryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x00D0(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenTelemetryComponent");
		return ptr;
	}

};


// Class Kraken.Kraken
// 0x04C0 (0x0930 - 0x0470)
class AKraken : public AActor
{
public:
	unsigned char                                      UnknownData00[0x4C0];                                     // 0x0470(0x04C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.Kraken");
		return ptr;
	}


	void Multicast_OnTentacleTakenDamage();
	void AddActorToKnownTargets(class AActor* Target);
};


// Class Kraken.KrakenAnimatedTentacleAnimationDataAsset
// 0x0030 (0x0058 - 0x0028)
class UKrakenAnimatedTentacleAnimationDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UKrakenAnimatedTentacleAnimationSpecDataAsset* AnimationSpec;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrameTimeDelta;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimationLength;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumFrames;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowLookAround;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresWaterHeightQuery;                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimationPlayRateScale;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenAnimatedTentacleAnimationDataAsset");
		return ptr;
	}

};


// Class Kraken.KrakenAnimatedTentacleAnimationMappingDataAsset
// 0x0010 (0x0038 - 0x0028)
class UKrakenAnimatedTentacleAnimationMappingDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenAnimatedTentacleAnimationMappingDataAsset");
		return ptr;
	}

};


// Class Kraken.KrakenAnimatedTentacleAnimationSpecDataAsset
// 0x0010 (0x0038 - 0x0028)
class UKrakenAnimatedTentacleAnimationSpecDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenAnimatedTentacleAnimationSpecDataAsset");
		return ptr;
	}

};


// Class Kraken.KrakenAnimatedTentacleStateAnimationsDataAsset
// 0x0030 (0x0058 - 0x0028)
class UKrakenAnimatedTentacleStateAnimationsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TAssetPtr<class UKrakenAnimatedTentacleAnimationMappingDataAsset> MappingAssetReference;                                    // 0x01E3(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenAnimatedTentacleStateAnimationsDataAsset");
		return ptr;
	}

};


// Class Kraken.KrakenIdleBehaviourParamsDataAsset
// 0x00B8 (0x00E0 - 0x0028)
class UKrakenIdleBehaviourParamsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenIdleBehaviourParamsDataAsset");
		return ptr;
	}

};


// Class Kraken.KrakenParamsDataAsset
// 0x0158 (0x0180 - 0x0028)
class UKrakenParamsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x0028(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenParamsDataAsset");
		return ptr;
	}

};


// Class Kraken.KrakenPlayerGrabbingBehaviourParamsDataAsset
// 0x00D0 (0x00F8 - 0x0028)
class UKrakenPlayerGrabbingBehaviourParamsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0028(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenPlayerGrabbingBehaviourParamsDataAsset");
		return ptr;
	}

};


// Class Kraken.KrakenServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UKrakenServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenServiceInterface");
		return ptr;
	}

};


// Class Kraken.KrakenService
// 0x0220 (0x0690 - 0x0470)
class AKrakenService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x220];                                     // 0x0470(0x0220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenService");
		return ptr;
	}


	void RequestKrakenWithLocation(const struct FVector& SpawnLocation, class AActor* SpawnedForActor);
	bool IsKrakenActive();
	void DismissKraken();
	bool CanSpawnKraken();
};


// Class Kraken.KrakenServiceParamsDataAsset
// 0x0090 (0x00B8 - 0x0028)
class UKrakenServiceParamsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenServiceParamsDataAsset");
		return ptr;
	}

};


// Class Kraken.KrakenShipHittingBehaviourParamsDataAsset
// 0x0058 (0x0080 - 0x0028)
class UKrakenShipHittingBehaviourParamsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenShipHittingBehaviourParamsDataAsset");
		return ptr;
	}

};


// Class Kraken.KrakenShipWrappingBehaviourParamsDataAsset
// 0x03E8 (0x0410 - 0x0028)
class UKrakenShipWrappingBehaviourParamsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x3E8];                                     // 0x0028(0x03E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenShipWrappingBehaviourParamsDataAsset");
		return ptr;
	}

};


// Class Kraken.KrakenShipWrappingKnockbackRegionComponent
// 0x0070 (0x0360 - 0x02F0)
class UKrakenShipWrappingKnockbackRegionComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x02F0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenShipWrappingKnockbackRegionComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
