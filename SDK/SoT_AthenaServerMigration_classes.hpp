#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaServerMigration_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

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
