#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MediumShipTemplate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MediumShipTemplate.BP_MediumShipTemplate_C
// 0x0248 (0x1418 - 0x11D0)
class ABP_MediumShipTemplate_C : public AShip
{
public:
	class UChildActorComponent*                        BP_Shroudbreaker;                                         // 0x11D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ShipPetChest;                                          // 0x11D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPetHangoutSpotComponent*                    PetHangoutSpot;                                           // 0x11E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_FirePropagation_MediumShip_C*            BP_FirePropagation_MediumShip;                            // 0x11E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_HarpoonLauncher1;                                      // 0x11F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_HarpoonLauncher;                                       // 0x11F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        RowboatMountpoint;                                        // 0x1200(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipTelemetryComponent*                     ShipTelemetry;                                            // 0x1208(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_06;                                      // 0x1210(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_05;                                      // 0x1218(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_04;                                      // 0x1220(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_03;                                      // 0x1228(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_02;                                      // 0x1230(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        StorageBarrel_LowerDeck17;                                // 0x1238(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Figurehead;                                               // 0x1240(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_MediumShip_StandardHull_Art_Interior_Lower_Deck;       // 0x1248(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        StorageBarrel_LowerDeck16;                                // 0x1250(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        StorageBarrel_LowerDeck15;                                // 0x1258(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        StorageBarrel_LowerDeck14;                                // 0x1260(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        StorageBarrel_LowerDeck13;                                // 0x1268(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        StorageBarrel_LowerDeck12;                                // 0x1270(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        StorageBarrel_LowerDeck11;                                // 0x1278(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        StorageBarrel_LowerDeck10;                                // 0x1280(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        StorageBarrel_LowerDeck9;                                 // 0x1288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Food2;                                  // 0x1290(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        StorageBarrel_LowerDeck7;                                 // 0x1298(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        StorageBarrel_LowerDeck6;                                 // 0x12A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        StorageBarrel_LowerDeck5;                                 // 0x12A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        StorageBarrel_LowerDeck4;                                 // 0x12B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        StorageBarrel_LowerDeck2;                                 // 0x12B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball3;                            // 0x12C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        StorageBarrel_LowerDeck1;                                 // 0x12C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft2;                                              // 0x12D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight2;                                             // 0x12D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        LadderStbd;                                               // 0x12E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastSecondarySailAngleLeft;                               // 0x12E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastSecondarySailAngleRight;                              // 0x12F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastSecondarySailHoistRight;                              // 0x12F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastSecondarySailHoistLeft;                               // 0x1300(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URiggingSystemComponent*                     ControlsRigging;                                          // 0x1308(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastSecondary;                                            // 0x1310(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ShipVanityChest;                                       // 0x1318(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        QuestTable;                                               // 0x1320(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Lanterns;                                                 // 0x1328(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Food;                                   // 0x1330(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball2;                            // 0x1338(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball1;                            // 0x1340(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_EquipmentChest;                                        // 0x1348(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ClothingChest;                                         // 0x1350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_WeaponsChest;                                          // 0x1358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_MediumMapTable;                                        // 0x1360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Capstan;                                                  // 0x1368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        GrogBarrel;                                               // 0x1370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMainSailAngleLeft;                                    // 0x1378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Wood;                                   // 0x1380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               RammingSpurZone;                                          // 0x1388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_shark_hits_01_a;                                      // 0x1390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_AmmoChest;                                             // 0x1398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_01;                                      // 0x13A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URiggingSystemComponent*                     MainRigging;                                              // 0x13A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipsCompass;                                             // 0x13B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight1;                                             // 0x13B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft1;                                              // 0x13C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        LadderPort;                                               // 0x13C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Hull;                                                     // 0x13D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMainSailAngleRight;                                   // 0x13D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMainSailHoistRight;                                   // 0x13E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMainSailHoistLeft;                                    // 0x13E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMain;                                                 // 0x13F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Anchor;                                                   // 0x13F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Rudder;                                                   // 0x1400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Wheel;                                                    // 0x1408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        AudioBoat;                                                // 0x1410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MediumShipTemplate.BP_MediumShipTemplate_C"));
		return ptr;
	}


	void SetupMastControls(class UChildActorComponent* LeftHoist, class UChildActorComponent* RightHoist, class UChildActorComponent* LeftAngle, class UChildActorComponent* RightAngle, const struct FName& RiggingGroupName);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
