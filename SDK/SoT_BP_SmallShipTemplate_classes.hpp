#pragma once

// Sea of Thieves (2.0) SDK

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
// 0x01E0 (0x14A0 - 0x12C0)
class ABP_SmallShipTemplate_C : public AShip
{
public:
	class UChildActorComponent*                        BP_LargeShip_CageLatch_03_b;                              // 0x12C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_SmallShip_WindowHatchRight;                            // 0x12C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_SmallShip_WindowHatchLeft;                             // 0x12D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_WaterBarrel;                                           // 0x12D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_Shroudbreaker;                                         // 0x12E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ShipPetChest;                                          // 0x12E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPetHangoutSpotComponent*                    PetHangoutSpot;                                           // 0x12F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Food_3;                                 // 0x12F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_HarpoonLauncher1;                                      // 0x1300(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_HarpoonLauncher;                                       // 0x1308(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        RowboatMountpoint;                                        // 0x1310(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipTelemetryComponent*                     ShipTelemetry;                                            // 0x1318(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URiggingSystemComponent*                     ControlsRigging;                                          // 0x1320(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ShipVanityChest;                                       // 0x1328(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        QuestTable;                                               // 0x1330(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_SmallShipLadder_02;                                    // 0x1338(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Lanterns;                                                 // 0x1340(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowerDeck9;                             // 0x1348(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowerDeck10;                            // 0x1350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowerDeck8;                             // 0x1358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowerDeck7;                             // 0x1360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Food_2;                                 // 0x1368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball2;                            // 0x1370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball1;                            // 0x1378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_EquipmentChest;                                        // 0x1380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ClothingChest;                                         // 0x1388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_WeaponsChest;                                          // 0x1390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowerDeck3;                             // 0x1398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_SmallMapTable;                                         // 0x13A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Capstan;                                                  // 0x13A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        GrogBarrel;                                               // 0x13B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_HalfDeck2;                              // 0x13B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_HalfDeck1;                              // 0x13C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMainSailAngleLeft;                                    // 0x13C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowerDeck2;                             // 0x13D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowerDeck1;                             // 0x13D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowerDeck11;                            // 0x13E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Wood;                                   // 0x13E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               RammingSpurZone;                                          // 0x13F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_shark_hits_01_a;                                      // 0x13F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_AmmoChest;                                             // 0x1400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_04;                                      // 0x1408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_03;                                      // 0x1410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_02;                                      // 0x1418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_01;                                      // 0x1420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URiggingSystemComponent*                     MainRigging;                                              // 0x1428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipsCompass;                                             // 0x1430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Figurehead;                                               // 0x1438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight1;                                             // 0x1440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft1;                                              // 0x1448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        LadderStbd;                                               // 0x1450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Hull;                                                     // 0x1458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMainSailAngleRight;                                   // 0x1460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMainSailHoistRight;                                   // 0x1468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMainSailHoistLeft;                                    // 0x1470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMain;                                                 // 0x1478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Anchor;                                                   // 0x1480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Rudder;                                                   // 0x1488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Wheel;                                                    // 0x1490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        AudioBoat;                                                // 0x1498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SmallShipTemplate.BP_SmallShipTemplate_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
