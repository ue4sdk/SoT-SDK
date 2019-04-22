#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_DS_Shroudbreaker_VaultPuzzleParams_classes.hpp"
#include "SoT_DS_Shroudbreaker_AISpawnParams_classes.hpp"
#include "SoT_DS_ShroudBreaker_VaultParams_classes.hpp"
#include "SoT_DS_Shroudbreaker_PuzzleParams_classes.hpp"
#include "SoT_DS_Lorebooks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_Shroudbreaker_Definition.DS_Shroudbreaker_Definition
// 0x00B8
struct FDS_Shroudbreaker_Definition
{
	TArray<TAssetPtr<class AActor>>                    NPCLocationID_49_95ABC383472CC0640D172F9CB2B25DA5;        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FDS_Shroudbreaker_AISpawnParams             SharkSpawnParams_5_13097E854CC720953BE282B783E5359E;      // 0x0010(0x0038) (Edit, BlueprintVisible)
	TArray<struct FDS_Shroudbreaker_PuzzleParams>      PuzzleParams_14_9EC754B54D218617FB5032AECB0899DE;         // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TAssetPtr<class AActor>                            ShipsLogSpawnLocationID_26_0CD9A23A450B9BD44914E0BEC5D9077D;// 0x0058(0x0020) (Edit, BlueprintVisible)
	TArray<TAssetPtr<class AActor>>                    HandInPointIDs_51_1AAE3F084C816526EE1093B1307774E2;       // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FDS_Shroudbreaker_VaultPuzzleParams> VaultPuzzleParams_40_6AE007E04810124C64DA4AA7EFA0B2B0;    // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FDS_ShroudBreaker_VaultParams>       VaultParams_41_8FB96CF441DFBCE3C7500BA6D571D759;          // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FDS_Lorebooks>                       Lorebooks_48_B9DD0A33426C03CDF6E6CB8E80728631;            // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
