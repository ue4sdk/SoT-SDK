#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_Shroudbreaker_MedallionParams.DS_Shroudbreaker_MedallionParams
// 0x0030
struct FDS_Shroudbreaker_MedallionParams
{
	TAssetPtr<class AActor>                            Location_3_E8554FCC4B0E50C96470CBB817A3E2C0;              // 0x0000(0x0020) (Edit, BlueprintVisible)
	bool                                               Buried_10_1A9360514624C008BB28B4BAE7652C67;               // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UMaterialInstance*                           PuzzleVaultPoolMaterial_14_7780ED064043789E1AD3F2B80C5FE9B6;// 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
