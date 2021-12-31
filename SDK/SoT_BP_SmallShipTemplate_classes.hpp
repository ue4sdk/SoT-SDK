#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShipTemplate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SmallShipTemplate.BP_SmallShipTemplate_C
// 0x02A0 (0x1740 - 0x14A0)
class ABP_SmallShipTemplate_C : public AShip
{
public:
	UBP_BedComponent_C*                                BP_BedComponent;                                          // 0x14A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              Rat3;                                                     // 0x14A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              Rat2;                                                     // 0x14B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              Rat1;                                                     // 0x14B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	URatManagerComponent*                              RatManager;                                               // 0x14C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UBP_SeatComponent_C*                               Seat_MapTable_3;                                          // 0x14C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UBP_SeatComponent_C*                               Seat_MapTable_2;                                          // 0x14D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UBP_SeatComponent_C*                               Seat_Barrel_Top;                                          // 0x14D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UBP_SeatComponent_C*                               Seat_Front_Starboard;                                     // 0x14E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UBP_SeatComponent_C*                               Seat_Front_Port;                                          // 0x14E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UBP_SeatComponent_C*                               Seat_Side_Starboard;                                      // 0x14F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UBP_SeatComponent_C*                               Seat_Side_Port;                                           // 0x14F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UBP_SeatComponent_C*                               Seat_Bottom_Barrel;                                       // 0x1500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UBP_SeatComponent_C*                               Seat_Bottom_Port;                                         // 0x1508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UBP_SeatComponent_C*                               Seat_Bottom_Starboard;                                    // 0x1510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UBP_SeatComponent_C*                               Seat_Top_Rear_3;                                          // 0x1518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UArrowComponent*                                   Arrow;                                                    // 0x1520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UBP_SeatComponent_C*                               Seat_Top_Rear_2;                                          // 0x1528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UAIRegionComponent*                                AIRegion;                                                 // 0x1530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UNamedPointsComponent*                             NamedPoints;                                              // 0x1538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              shp_small_ladder_gap_hits_01_a;                           // 0x1540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              shp_flag_hole_01_a;                                       // 0x1548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              BP_EmissaryFlag;                                          // 0x1550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UEmissaryFlotsamItemSpawnComponent*                EmissaryFlotsamItemSpawner;                               // 0x1558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              BP_LargeShip_CageLatch_03_b;                              // 0x1560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              BP_SmallShip_WindowHatchRight;                            // 0x1568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              BP_SmallShip_WindowHatchLeft;                             // 0x1570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              BP_WaterBarrel;                                           // 0x1578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              BP_Shroudbreaker;                                         // 0x1580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              BP_ShipPetChest;                                          // 0x1588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPetHangoutSpotComponent*                          PetHangoutSpot;                                           // 0x1590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              ShipStorageBarrel_Food_3;                                 // 0x1598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              BP_HarpoonLauncher1;                                      // 0x15A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              BP_HarpoonLauncher;                                       // 0x15A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              RowboatMountpoint;                                        // 0x15B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UShipTelemetryComponent*                           ShipTelemetry;                                            // 0x15B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	URiggingSystemComponent*                           ControlsRigging;                                          // 0x15C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              BP_ShipVanityChest;                                       // 0x15C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              QuestTable;                                               // 0x15D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              BP_SmallShipLadder_02;                                    // 0x15D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              Lanterns;                                                 // 0x15E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              ShipStorageBarrel_LowerDeck9;                             // 0x15E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              ShipStorageBarrel_LowerDeck10;                            // 0x15F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              ShipStorageBarrel_LowerDeck8;                             // 0x15F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              ShipStorageBarrel_LowerDeck7;                             // 0x1600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              ShipStorageBarrel_Food_2;                                 // 0x1608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              ShipStorageBarrel_Cannonball2;                            // 0x1610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              ShipStorageBarrel_Cannonball1;                            // 0x1618(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              BP_EquipmentChest;                                        // 0x1620(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              BP_ClothingChest;                                         // 0x1628(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              BP_WeaponsChest;                                          // 0x1630(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              ShipStorageBarrel_LowerDeck3;                             // 0x1638(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              BP_SmallMapTable;                                         // 0x1640(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              Capstan;                                                  // 0x1648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              GrogBarrel;                                               // 0x1650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              ShipStorageBarrel_HalfDeck2;                              // 0x1658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              ShipStorageBarrel_HalfDeck1;                              // 0x1660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              MastMainSailAngleLeft;                                    // 0x1668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              ShipStorageBarrel_LowerDeck2;                             // 0x1670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              ShipStorageBarrel_LowerDeck1;                             // 0x1678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              ShipStorageBarrel_LowerDeck11;                            // 0x1680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              ShipStorageBarrel_Wood;                                   // 0x1688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UBoxComponent*                                     RammingSpurZone;                                          // 0x1690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              shp_shark_hits_01_a;                                      // 0x1698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              BP_AmmoChest;                                             // 0x16A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UTeleportLocationComponent*                        TeleportLocation_04;                                      // 0x16A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UTeleportLocationComponent*                        TeleportLocation_03;                                      // 0x16B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UTeleportLocationComponent*                        TeleportLocation_02;                                      // 0x16B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UTeleportLocationComponent*                        TeleportLocation_01;                                      // 0x16C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	URiggingSystemComponent*                           MainRigging;                                              // 0x16C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              ShipsCompass;                                             // 0x16D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              Figurehead;                                               // 0x16D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              CannonRight1;                                             // 0x16E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              CannonLeft1;                                              // 0x16E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              LadderStbd;                                               // 0x16F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              Hull;                                                     // 0x16F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              MastMainSailAngleRight;                                   // 0x1700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              MastMainSailHoistRight;                                   // 0x1708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              MastMainSailHoistLeft;                                    // 0x1710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              MastMain;                                                 // 0x1718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              Anchor;                                                   // 0x1720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              Rudder;                                                   // 0x1728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              Wheel;                                                    // 0x1730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              AudioBoat;                                                // 0x1738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SmallShipTemplate.BP_SmallShipTemplate_C"));
		return ptr;
	}


	unsigned char GetPxActorCapacityForPhysXAggregate();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
