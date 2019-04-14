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

// UserDefinedStruct DS_TheArtOfTheTrickster_Gunpowder_Definition.DS_TheArtOfTheTrickster_Gunpowder_Definition
// 0x0048
struct FDS_TheArtOfTheTrickster_Gunpowder_Definition
{
	TAssetPtr<class AActor>                            Location_3_530D5520478C6544DE7689A78E83877A;              // 0x0000(0x0020) (Edit, BlueprintVisible)
	class UQuestBookPageBundle*                        Pages_9_455AFBBB4D92473DA2A5F5B81CA220CD;                 // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            ExplosionTrigger_12_9C0309684B6DF06933632AA2A6BE3214;     // 0x0028(0x0020) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
