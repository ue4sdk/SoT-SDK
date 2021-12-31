#pragma once

// Sea of Thieves (2) SDK

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
// 0x0098 (0x00C0 - 0x0028)
class UTradeRouteData : public UDataAsset
{
public:
	FIslandSelectionType                               StartIsland;                                              // 0x0028(0x0008) (Edit, DisableEditOnInstance)
	FIslandSelectionType                               EndIsland;                                                // 0x0030(0x0008) (Edit, DisableEditOnInstance)
	FPlayerStat                                        RouteCompletionStat;                                      // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TEnumAsByte<ETradeRouteMapOrientation>             MapOrientation;                                           // 0x003C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	FTradeRouteMapData                                 TradeRouteMapData;                                        // 0x0040(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TradeRouteFramework.TradeRouteData"));
		return ptr;
	}

};


// Class TradeRouteFramework.TaleQuestGetProjectionPointOnTradeRouteStep
// 0x0038 (0x00C8 - 0x0090)
class UTaleQuestGetProjectionPointOnTradeRouteStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0090(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TradeRouteFramework.TaleQuestGetProjectionPointOnTradeRouteStep"));
		return ptr;
	}

};


// Class TradeRouteFramework.TaleQuestGetProjectionPointOnTradeRouteStepDesc
// 0x0038 (0x00B8 - 0x0080)
class UTaleQuestGetProjectionPointOnTradeRouteStepDesc : public UTaleQuestStepDesc
{
public:
	float                                              ProjectionProportion;                                     // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	FQuestVariableVector                               SourcePoint;                                              // 0x0088(0x0010) (Edit)
	FQuestVariableTradeRouteData                       TradeRouteData;                                           // 0x0098(0x0010) (Edit)
	FQuestVariableVector                               ProjectedPoint;                                           // 0x00A8(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TradeRouteFramework.TaleQuestGetProjectionPointOnTradeRouteStepDesc"));
		return ptr;
	}

};


// Class TradeRouteFramework.TaleQuestSelectTradeRouteStep
// 0x0020 (0x00B0 - 0x0090)
class UTaleQuestSelectTradeRouteStep : public UTaleQuestStep
{
public:
	UTaleQuestSelectTradeRouteStepDesc*                Desc;                                                     // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TradeRouteFramework.TaleQuestSelectTradeRouteStep"));
		return ptr;
	}

};


// Class TradeRouteFramework.TaleQuestSelectTradeRouteStepDesc
// 0x0048 (0x00C8 - 0x0080)
class UTaleQuestSelectTradeRouteStepDesc : public UTaleQuestStepDesc
{
public:
	int                                                NumSelectFromClosestIslands;                              // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	FQuestVariableVector                               SelectionOriginPointVar;                                  // 0x0088(0x0010) (Edit)
	FQuestVariableInt                                  TradeRouteDifficulty;                                     // 0x0098(0x0010) (Edit)
	FQuestVariableTradeRouteData                       TradeRoute;                                               // 0x00A8(0x0010) (Edit)
	FQuestVariableTaleResourceHandle                   AllocatedTradeRouteHandleVar;                             // 0x00B8(0x0010) (Edit)

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
	TArray<FTradeRouteMapping>                         TradeRouteMappings;                                       // 0x0028(0x0010) (Edit, ZeroConstructor)

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
