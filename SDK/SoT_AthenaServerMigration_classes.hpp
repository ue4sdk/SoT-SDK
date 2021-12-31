#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaServerMigration_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaServerMigration.AthenaServerMigrationGameAuthorityProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UAthenaServerMigrationGameAuthorityProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaServerMigration.AthenaServerMigrationGameAuthorityProviderInterface"));
		return ptr;
	}

};


// Class AthenaServerMigration.MigrationServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UMigrationServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaServerMigration.MigrationServiceInterface"));
		return ptr;
	}

};


// Class AthenaServerMigration.RegisterServerMigrationPointOfInterestComponent
// 0x0020 (0x00E8 - 0x00C8)
class URegisterServerMigrationPointOfInterestComponent : public UActorComponent
{
public:
	float                                              MigrationRadius;                                          // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x00CC(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaServerMigration.RegisterServerMigrationPointOfInterestComponent"));
		return ptr;
	}

};


// Class AthenaServerMigration.ServerMigrationGatherableActorInterface
// 0x0000 (0x0028 - 0x0028)
class UServerMigrationGatherableActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaServerMigration.ServerMigrationGatherableActorInterface"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
