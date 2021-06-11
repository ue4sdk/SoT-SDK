#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_NetworkRegions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class NetworkRegions.NetworkRegionServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UNetworkRegionServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NetworkRegions.NetworkRegionServiceInterface"));
		return ptr;
	}

};


// Class NetworkRegions.NetworkRegionService
// 0x00A0 (0x00C8 - 0x0028)
class UNetworkRegionService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET
	TArray<class APlayerController*>                   PlayersThatNeedToBeTicked;                                // 0x00B8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NetworkRegions.NetworkRegionService"));
		return ptr;
	}

};


// Class NetworkRegions.RegionAssetCacheActor
// 0x0040 (0x0470 - 0x0430)
class ARegionAssetCacheActor : public AActor
{
public:
	TArray<struct FRegionAssetsList>                   RegionData;                                               // 0x0430(0x0010) (Edit, ZeroConstructor, Config)
	TArray<class UObject*>                             LoadedAssets;                                             // 0x0440(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0450(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NetworkRegions.RegionAssetCacheActor"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
