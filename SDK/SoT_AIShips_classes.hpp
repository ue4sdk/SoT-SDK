#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AIShips_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AIShips.AIShipDebugFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIShipDebugFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipDebugFunctionLibrary");
		return ptr;
	}


	void STATIC_RequestAIShipForCrew(class UObject* WorldContextObject, const struct FGuid& CrewId);
};


// Class AIShips.AIShipEncounterParamsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UAIShipEncounterParamsDataAsset : public UDataAsset
{
public:
	struct FAIShipEncounterParams                      Params;                                                   // 0x0028(0x0010) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipEncounterParamsDataAsset");
		return ptr;
	}

};


// Class AIShips.AIShipServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIShipServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipServiceInterface");
		return ptr;
	}

};


// Class AIShips.AIShipService
// 0x00D8 (0x0550 - 0x0478)
class AAIShipService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0478(0x0008) MISSED OFFSET
	class UAIShipServiceDataAsset*                     AIShipServiceData;                                        // 0x0480(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC8];                                      // 0x0488(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipService");
		return ptr;
	}

};


// Class AIShips.AIShipServiceDataAsset
// 0x00B8 (0x00E0 - 0x0028)
class UAIShipServiceDataAsset : public UDataAsset
{
public:
	class UShipDescAsset*                              AIShipDescAsset;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAIShipEncounterParamsDataAsset*             EncounterParams;                                          // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AIShipSpawnDepth;                                         // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSafeSpawnDistanceFromOtherShips;                       // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRelativeSpawnLocationGeneratorParams       SpawnParameters;                                          // 0x0040(0x00A0) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipServiceDataAsset");
		return ptr;
	}

};


// Class AIShips.AthenaAIShipController
// 0x0008 (0x0568 - 0x0560)
class AAthenaAIShipController : public AAIController
{
public:
	class UBehaviorTree*                               BTAsset;                                                  // 0x0560(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AthenaAIShipController");
		return ptr;
	}

};


// Class AIShips.BTTask_SailShipForward
// 0x0010 (0x0098 - 0x0088)
class UBTTask_SailShipForward : public UBTTask_BlackboardBase
{
public:
	struct FVector                                     Velocity;                                                 // 0x0088(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.BTTask_SailShipForward");
		return ptr;
	}

};


// Class AIShips.ShipProxyPawn
// 0x0008 (0x04E0 - 0x04D8)
class AShipProxyPawn : public APawn
{
public:
	class AShip*                                       Ship;                                                     // 0x04D8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.ShipProxyPawn");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
