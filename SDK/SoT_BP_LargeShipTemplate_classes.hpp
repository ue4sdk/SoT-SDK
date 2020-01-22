#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LargeShipTemplate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LargeShipTemplate.BP_LargeShipTemplate_C
// 0x0370 (0x1630 - 0x12C0)
class ABP_LargeShipTemplate_C : public AShip
{
public:
	class UChildActorComponent*                        BP_LargeShip_CageLatch_03_a;                              // 0x12C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_LargeShip_CageLatch_03_b;                              // 0x12C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_WaterBarrel;                                           // 0x12D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_Shroudbreaker;                                         // 0x12D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ShipPetChest;                                          // 0x12E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPetHangoutSpotComponent*                    PetHangoutSpot;                                           // 0x12E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrelFood2;                                   // 0x12F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_HarpoonLauncher1;                                      // 0x12F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_HarpoonLauncher;                                       // 0x1300(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        RowboatMountpoint;                                        // 0x1308(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipTelemetryComponent*                     ShipTelemetry;                                            // 0x1310(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ShipVanityChest;                                       // 0x1318(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_Bell;                                                  // 0x1320(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck17;                           // 0x1328(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck16;                           // 0x1330(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gmp_bar_stor_two_stack_01_a3;                             // 0x1338(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck15;                           // 0x1340(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gmp_bar_stor_two_stack_01_a2;                             // 0x1348(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gmp_bar_stor_two_stack_01_a1;                             // 0x1350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gmp_bar_stor_three_stack_01_a1;                           // 0x1358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_WallClock;                                             // 0x1360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_WeaponsChest;                                          // 0x1368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_EquipmentChest;                                        // 0x1370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ClothingChest;                                         // 0x1378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gmp_bar_stor_three_stack_01_a;                            // 0x1380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipPointParticleComponent*                 VFX_Drips;                                                // 0x1388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               RammingSpurZone;                                          // 0x1390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_shark_hits_01_a;                                      // 0x1398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball3;                            // 0x13A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_AmmoChest;                                             // 0x13A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Grog;                                   // 0x13B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Food;                                   // 0x13B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Lanterns;                                                 // 0x13C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation11_TopDeck_NearWheel;                     // 0x13C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_09_BottomDeck_OutsideBrig;               // 0x13D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_08_BottomDeck_FacingStairs;              // 0x13D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_07_MiddleDeck_BackOfShip;                // 0x13E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_06_MiddleDeck_FrontOfShip;               // 0x13E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_05_TopDeck_NearCannons;                  // 0x13F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_04_TopDeck_FrontOfShip;                  // 0x13F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_03_TopDeck_BackOfShip;                   // 0x1400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_02_TopDeck_NearLadder;                   // 0x1408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_01_CaptainsCabin;                        // 0x1410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URiggingSystemComponent*                     MainRigging;                                              // 0x1418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URiggingSystemComponent*                     ControlsRigging;                                          // 0x1420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MapTable;                                                 // 0x1428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipsCompass;                                             // 0x1430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Figurehead;                                               // 0x1438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck13;                           // 0x1440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck12;                           // 0x1448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck11;                           // 0x1450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck10;                           // 0x1458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck9;                            // 0x1460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck8;                            // 0x1468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck7;                            // 0x1470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck6;                            // 0x1478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck5;                            // 0x1480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck4;                            // 0x1488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck3;                            // 0x1490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_BottomOfLowestStairs2;                  // 0x1498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_BottomOfLowestStairs1;                  // 0x14A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             LowerDeckBarrels;                                         // 0x14A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_NearLowerStairs5;                       // 0x14B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball2;                            // 0x14B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball1;                            // 0x14C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_NearLowerStairs6;                       // 0x14C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_NearLowerStairs4;                       // 0x14D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_NearLowerStairs3;                       // 0x14D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_NearLowerStairs2;                       // 0x14E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_NearLowerStairs1;                       // 0x14E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_BehindStairs7;                          // 0x14F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_BehindStairs5;                          // 0x14F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_BehindStairs3;                          // 0x1500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_BehindStairs2;                          // 0x1508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_BehindStairs1;                          // 0x1510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_SideofStairs3;                          // 0x1518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_SideofStairs2;                          // 0x1520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_SideofStairs1;                          // 0x1528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight4;                                             // 0x1530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight3;                                             // 0x1538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight2;                                             // 0x1540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight1;                                             // 0x1548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft4;                                              // 0x1550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft3;                                              // 0x1558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft2;                                              // 0x1560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft1;                                              // 0x1568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        LadderStbd;                                               // 0x1570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        LadderPort;                                               // 0x1578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Hull;                                                     // 0x1580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastForeSailAngleRight;                                   // 0x1588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastForeSailAngleLeft;                                    // 0x1590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             MiddleDeckBarrels;                                        // 0x1598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMainSailAngleRight;                                   // 0x15A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMizzenSailAngleRight;                                 // 0x15A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMizzenSailAngleLeft;                                  // 0x15B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastForeSailHoistRight;                                   // 0x15B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastForeSailHoistLeft;                                    // 0x15C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMizzenSailHoistRight;                                 // 0x15C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMizzenSailHoistLeft;                                  // 0x15D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMainSailHoistRight;                                   // 0x15D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMainSailHoistLeft;                                    // 0x15E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Capstan;                                                  // 0x15E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastFore;                                                 // 0x15F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMain;                                                 // 0x15F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMizzen;                                               // 0x1600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Anchor;                                                   // 0x1608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Rudder;                                                   // 0x1610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Wheel;                                                    // 0x1618(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        AudioBoat;                                                // 0x1620(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMainSailAngleLeft;                                    // 0x1628(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LargeShipTemplate.BP_LargeShipTemplate_C"));
		return ptr;
	}


	void SetupMastControls(class UChildActorComponent* LeftHoist, class UChildActorComponent* RightHoist, class UChildActorComponent* LeftAngle, class UChildActorComponent* RightAngle, const struct FName& RiggingGroupName);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
