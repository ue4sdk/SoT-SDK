#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_TheArtOfTheTrickster_Note_Definition.DS_TheArtOfTheTrickster_Note_Definition
// 0x0030
struct FDS_TheArtOfTheTrickster_Note_Definition
{
	TAssetPtr<class AActor>                            DigLocation_2_DB9A3F004D9061DEA7477B8A00BBBD63;           // 0x0000(0x0020) (Edit, BlueprintVisible)
	class UClass*                                      ItemClass_10_F6DE7EAC45E5DF7C7A7D8D89A2751485;            // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UQuestBookPageBundle*                        Pages_5_BF2BEEE9474F69F13BAC4C80A4387D0D;                 // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
