#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_DS_Lorebooks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_ShoresOfGoldDefinition.DS_ShoresOfGoldDefinition
// 0x01F0
struct FDS_ShoresOfGoldDefinition
{
	TAssetPtr<class AActor>                            CompassLockLocation_50_E4C35D65459F4B1E4AC256910A03501A;  // 0x0000(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            GraceLocation_54_79BC34ED45CDE38A95E0C59AA81BF3DD;        // 0x0020(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            GoldHoarderLockLocation_53_1EDB59E247DF3163A9A05EA29ED33483;// 0x0040(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            PirateLordLocation_57_AD9FEBD84C6A4B03C158289B382CB108;   // 0x0060(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            CoinSpawnLocation_61_5B142CBB4E793BA1B8C6D3932BD42813;    // 0x0080(0x0020) (Edit, BlueprintVisible)
	TArray<struct FDS_Lorebooks>                       Lorebooks_76_B9DC2433474453740CBB08AC1F4FD296;            // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TAssetPtr<class AActor>                            ChasmDoorLock_79_D8A8E714494D91E616388DBB3E1F42FD;        // 0x00B0(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            TreasureRoomExitDoor_82_074C10E44E0D0753DA5F5F9ECB6A5F01; // 0x00D0(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class ATreasureRoom>                     TreasureRoom_86_C2B6A664494EAE8290C2F4B22D8C4185;         // 0x00F0(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            CoinRevealLock_90_2921AD1947EE0766D4B4ACA862FF81C0;       // 0x0110(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            TributePeakActor_93_183A1C61425E004C96A072AB6562D045;     // 0x0130(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            EntranceTeleportLocation_96_47F2C0BF48DBD2277442608237EFF2C5;// 0x0150(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            TreasureTeleportLocation_99_A5EE4B3C43CA07280B3A9FA4C6878A32;// 0x0170(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            CoinRevealReaction_103_9CB57EBA41E9CAB084F3D08CB4731084;  // 0x0190(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            ChasmDoorOpenReaction_106_A288E8934AEB0D185327C489E24A3840;// 0x01B0(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            TriggerVolumeLocation_109_C5C08967411EDE002C959B8DDFD11406;// 0x01D0(0x0020) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
