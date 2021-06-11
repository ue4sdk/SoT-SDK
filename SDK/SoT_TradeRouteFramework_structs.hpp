#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_TradeRouteFramework_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_Tales_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TradeRouteFramework.QuestVariableTradeRouteData
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableTradeRouteData : public FQuestVariable
{

};

// ScriptStruct TradeRouteFramework.TradeRouteMapping
// 0x0020
struct FTradeRouteMapping
{
	struct FIslandSelectionType                        StartIsland;                                              // 0x0000(0x0008) (Edit)
	class UClass*                                      DifficultyBand;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       TradeRouteReference;                                      // 0x0010(0x0010) (Edit, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
