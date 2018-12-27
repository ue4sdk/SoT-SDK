#pragma once

// Sea of Thieves (1.4) SDK

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
// 0x013C (0x12CC - 0x1190)
class ABP_AILargeShipTemplate_C : public AShip
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1190(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAIShipItemSpawnComponent*                   ExplosiveBarrelSpawner;                                   // 0x1198(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   HoldRewardsEmergent;                                      // 0x11A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEmitterComponent*                      audio_skeletonship_emerge_submerge;                       // 0x11A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInstancedNavMeshComponent*                  InstancedNavMesh;                                         // 0x11B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   ChestRewards;                                             // 0x11B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   HoldRewardsSkull;                                         // 0x11C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   HoldRewardsChest;                                         // 0x11C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   MessageInABottleSpawner;                                  // 0x11D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   SkullRewards;                                             // 0x11D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   MerchantRewards;                                          // 0x11E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipTelemetryComponent*                   AIShipTelemetry;                                          // 0x11E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Wheel;                                                    // 0x11F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Wood;                                   // 0x11F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIRegionComponent*                          AIRegion;                                                 // 0x1200(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_Bell;                                                  // 0x1208(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipPointParticleComponent*                 VFX_Drips;                                                // 0x1210(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               RammingSpurZone;                                          // 0x1218(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_shark_hits_01_a;                                      // 0x1220(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball3;                            // 0x1228(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Food;                                   // 0x1230(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball2;                            // 0x1238(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball1;                            // 0x1240(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight4;                                             // 0x1248(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight3;                                             // 0x1250(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight2;                                             // 0x1258(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight1;                                             // 0x1260(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft4;                                              // 0x1268(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft3;                                              // 0x1270(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft2;                                              // 0x1278(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft1;                                              // 0x1280(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        LadderStbd;                                               // 0x1288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        LadderPort;                                               // 0x1290(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Hull;                                                     // 0x1298(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        AudioBoat;                                                // 0x12A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsAnchorLowered;                                          // 0x12A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x12A9(0x0007) MISSED OFFSET
	class ABP_shp_skeleton_01_a_C*                     ShipSkeleton;                                             // 0x12B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECurseTag>                             NewVar_1;                                                 // 0x12B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x12B9(0x0003) MISSED OFFSET
	struct FAIShipSailData                             SailData;                                                 // 0x12BC(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_AILargeShipTemplate.BP_AILargeShipTemplate_C");
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
