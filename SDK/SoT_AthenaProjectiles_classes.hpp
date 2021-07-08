#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaProjectiles_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaProjectiles.AthenaProjectilesThrottledTickCollectionAsset
// 0x0010 (0x0038 - 0x0028)
class UAthenaProjectilesThrottledTickCollectionAsset : public UDataAsset
{
public:
	TArray<struct FThrottledProjectileTickPool>        ProjectileTickPools;                                      // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaProjectiles.AthenaProjectilesThrottledTickCollectionAsset"));
		return ptr;
	}

};


// Class AthenaProjectiles.ProjectileLauncherSpecificSettings
// 0x0010 (0x0048 - 0x0038)
class UProjectileLauncherSpecificSettings : public UDeveloperSettings
{
public:
	TArray<struct FGlobalProjectileSettings>           GlobalSettings;                                           // 0x0038(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaProjectiles.ProjectileLauncherSpecificSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
