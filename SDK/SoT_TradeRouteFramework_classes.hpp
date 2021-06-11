#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TradeRouteFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TradeRouteFramework.TradeRouteDifficultyBand
// 0x0008 (0x0030 - 0x0028)
class UTradeRouteDifficultyBand : public UObject
{
public:
	int                                                MinimumRank;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TradeRouteFramework.TradeRouteDifficultyBand"));
		return ptr;
	}

};


// Class TradeRouteFramework.TradeRouteData
// 0x00A0 (0x00C8 - 0x0028)
class UTradeRouteData : public UDataAsset
{
public:
	struct FIslandSelectionType                        StartIsland;                                              // 0x0028(0x0008) (Edit, DisableEditOnInstance)
	struct FIslandSelectionType                        EndIsland;                                                // 0x0030(0x0008) (Edit, DisableEditOnInstance)
	struct FPlayerStat                                 RouteCompletionStat;                                      // 0x0038(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TEnumAsByte<ETradeRouteMapOrientation>             MapOrientation;                                           // 0x0044(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	struct FTradeRouteMapData                          TradeRouteMapData;                                        // 0x0048(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TradeRouteFramework.TradeRouteData"));
		return ptr;
	}

};


// Class TradeRouteFramework.TaleQuestGetProjectionPointOnTradeRouteStep
// 0x0038 (0x00A0 - 0x0068)
class UTaleQuestGetProjectionPointOnTradeRouteStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0068(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TradeRouteFramework.TaleQuestGetProjectionPointOnTradeRouteStep"));
		return ptr;
	}

};


// Class TradeRouteFramework.TaleQuestGetProjectionPointOnTradeRouteStepDesc
// 0x0038 (0x0068 - 0x0030)
class UTaleQuestGetProjectionPointOnTradeRouteStepDesc : public UTaleQuestStepDesc
{
public:
	float                                              ProjectionProportion;                                     // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FQuestVariableVector                        SourcePoint;                                              // 0x0038(0x0010) (Edit)
	struct FQuestVariableTradeRouteData                TradeRouteData;                                           // 0x0048(0x0010) (Edit)
	struct FQuestVariableVector                        ProjectedPoint;                                           // 0x0058(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TradeRouteFramework.TaleQuestGetProjectionPointOnTradeRouteStepDesc"));
		return ptr;
	}

};


// Class TradeRouteFramework.TaleQuestSelectTradeRouteStep
// 0x0020 (0x0088 - 0x0068)
class UTaleQuestSelectTradeRouteStep : public UTaleQuestStep
{
public:
	class UTaleQuestSelectTradeRouteStepDesc*          Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0070(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TradeRouteFramework.TaleQuestSelectTradeRouteStep"));
		return ptr;
	}

};


// Class TradeRouteFramework.TaleQuestSelectTradeRouteStepDesc
// 0x0048 (0x0078 - 0x0030)
class UTaleQuestSelectTradeRouteStepDesc : public UTaleQuestStepDesc
{
public:
	int                                                NumSelectFromClosestIslands;                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FQuestVariableVector                        SelectionOriginPointVar;                                  // 0x0038(0x0010) (Edit)
	struct FQuestVariableInt                           TradeRouteDifficulty;                                     // 0x0048(0x0010) (Edit)
	struct FQuestVariableTradeRouteData                TradeRoute;                                               // 0x0058(0x0010) (Edit)
	struct FQuestVariableTaleResourceHandle            AllocatedTradeRouteHandleVar;                             // 0x0068(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TradeRouteFramework.TaleQuestSelectTradeRouteStepDesc"));
		return ptr;
	}

};


// Class TradeRouteFramework.TradeRoutesDataAsset
// 0x0010 (0x0038 - 0x0028)
class UTradeRoutesDataAsset : public UDataAsset
{
public:
	TArray<struct FTradeRouteMapping>                  TradeRouteMappings;                                       // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TradeRouteFramework.TradeRoutesDataAsset"));
		return ptr;
	}

};


// Class TradeRouteFramework.WorldTradeRouteInterface
// 0x0000 (0x0028 - 0x0028)
class UWorldTradeRouteInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TradeRouteFramework.WorldTradeRouteInterface"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
