#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_StarsOfAThief_VaultPuzzleSequenceParams.DS_StarsOfAThief_VaultPuzzleSequenceParams
// 0x0030
struct FDS_StarsOfAThief_VaultPuzzleSequenceParams
{
	struct FTaleVaultHandle                            VaultHandle_20_FAD548F148BB6395FEAE0AA47CC6E74C;          // 0x0000(0x0008) (Edit, BlueprintVisible)
	class UClass*                                      VaultKeyType_13_9220ABB148F6E64DFDB67E8094151211;         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVaultPuzzleDataAsset*                       PuzzleVaultData_23_99D18F2C45795B18D2C4E8A64F45F090;      // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SelectionOriginPoint_30_B9B88F404AFB5C598B9F2AB21158D375; // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UQuestBookPageBundle*                        VaultPages_33_7AD5EDCA48B1ED50AF7BEAA7CC6C219D;           // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
