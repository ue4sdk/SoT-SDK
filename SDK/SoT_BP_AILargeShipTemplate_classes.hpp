#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AILargeShipTemplate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AILargeShipTemplate.BP_AILargeShipTemplate_C
// 0x015C (0x14FC - 0x13A0)
class ABP_AILargeShipTemplate_C : public AShip
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x13A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAIShipItemSpawnComponent*                   TridentRewards;                                           // 0x13A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   StorageCrateRewards;                                      // 0x13B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   GemRewards;                                               // 0x13B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   ChanceRewards_Campaign020;                                // 0x13C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   HoldRewards_Campaign020;                                  // 0x13C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   ExplosiveBarrelSpawner;                                   // 0x13D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   HoldRewardsEmergent;                                      // 0x13D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEmitterComponent*                      audio_skeletonship_emerge_submerge;                       // 0x13E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   ChestRewards;                                             // 0x13E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   HoldRewardsSkull;                                         // 0x13F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   HoldRewardsChest;                                         // 0x13F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   MessageInABottleSpawner;                                  // 0x1400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   SkullRewards;                                             // 0x1408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   MerchantRewards;                                          // 0x1410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipTelemetryComponent*                   AIShipTelemetry;                                          // 0x1418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Wheel;                                                    // 0x1420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Wood;                                   // 0x1428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIRegionComponent*                          AIRegion;                                                 // 0x1430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_Bell;                                                  // 0x1438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipPointParticleComponent*                 VFX_Drips;                                                // 0x1440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               RammingSpurZone;                                          // 0x1448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_shark_hits_01_a;                                      // 0x1450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball3;                            // 0x1458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Food;                                   // 0x1460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball2;                            // 0x1468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball1;                            // 0x1470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight4;                                             // 0x1478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight3;                                             // 0x1480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight2;                                             // 0x1488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight1;                                             // 0x1490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft4;                                              // 0x1498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft3;                                              // 0x14A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft2;                                              // 0x14A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft1;                                              // 0x14B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        LadderStbd;                                               // 0x14B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        LadderPort;                                               // 0x14C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Hull;                                                     // 0x14C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        AudioBoat;                                                // 0x14D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsAnchorLowered;                                          // 0x14D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x14D9(0x0007) MISSED OFFSET
	class ABP_shp_skeleton_01_a_C*                     ShipSkeleton;                                             // 0x14E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECurseTag>                             NewVar_1;                                                 // 0x14E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x14E9(0x0003) MISSED OFFSET
	struct FAIShipSailData                             SailData;                                                 // 0x14EC(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AILargeShipTemplate.BP_AILargeShipTemplate_C"));
		return ptr;
	}


	void SetShipSkeleton();
	void OnRep_SailData();
	void OnRep_NewVar_2();
	void UserConstructionScript();
	void OnShipSurface_Client();
	void OnShipSurface();
	void OnShipDive_Client();
	void OnShipDive();
	void ReceiveBeginPlay();
	void SetCursedCrewCustomisationProperties(const struct FAIShipSailData& SailData);
	void ExecuteUbergraph_BP_AILargeShipTemplate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
