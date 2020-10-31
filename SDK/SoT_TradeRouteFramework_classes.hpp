#pragma once

// Sea of Thieves (2.0) SDK

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
// 0x0000 (0x0028 - 0x0028)
class UTradeRouteDifficultyBand : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TradeRouteFramework.TradeRouteDifficultyBand"));
		return ptr;
	}

};


// Class TradeRouteFramework.TradeRouteData
// 0x0090 (0x00B8 - 0x0028)
class UTradeRouteData : public UDataAsset
{
public:
	struct FIslandSelectionType                        StartIsland;                                              // 0x0028(0x0008) (Edit, DisableEditOnInstance)
	struct FIslandSelectionType                        EndIsland;                                                // 0x0030(0x0008) (Edit, DisableEditOnInstance)
	class UClass*                                      DifficultyBand;                                           // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETradeRouteMapOrientation>             MapOrientation;                                           // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FTradeRouteMapData                          TradeRouteMapData;                                        // 0x0048(0x0070) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TradeRouteFramework.TradeRouteData"));
		return ptr;
	}

};


// Class TradeRouteFramework.TradeRoutesDataAsset
// 0x0010 (0x0038 - 0x0028)
class UTradeRoutesDataAsset : public UDataAsset
{
public:
	TArray<struct FStringAssetReference>               TradeRouteReferences;                                     // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

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
