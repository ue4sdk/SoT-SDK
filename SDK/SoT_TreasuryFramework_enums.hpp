#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum TreasuryFramework.ETreasuryWaveType
enum class ETreasuryWaveType : uint8_t
{
	ETreasuryWaveType__Regular     = 0,
	ETreasuryWaveType__FinalWave   = 1,
	ETreasuryWaveType__ETreasuryWaveType_MAX = 2
};


// Enum TreasuryFramework.ETreasuryVaultDoorState
enum class ETreasuryVaultDoorState : uint8_t
{
	ETreasuryVaultDoorState__Opening = 0,
	ETreasuryVaultDoorState__Open  = 1,
	ETreasuryVaultDoorState__Closing = 2,
	ETreasuryVaultDoorState__Closed = 3,
	ETreasuryVaultDoorState__ETreasuryVaultDoorState_MAX = 4
};


// Enum TreasuryFramework.ETreasuryEncounterType
enum class ETreasuryEncounterType : uint8_t
{
	ETreasuryEncounterType__Sirens = 0,
	ETreasuryEncounterType__OceanCrawlers = 1,
	ETreasuryEncounterType__ETreasuryEncounterType_MAX = 2
};


// Enum TreasuryFramework.ETreasuryEncounterResult
enum class ETreasuryEncounterResult : uint8_t
{
	ETreasuryEncounterResult__SpawnNextWave = 0,
	ETreasuryEncounterResult__TreasuryComplete = 1,
	ETreasuryEncounterResult__ETreasuryEncounterResult_MAX = 2
};


// Enum TreasuryFramework.ETreasuryWaveResult
enum class ETreasuryWaveResult : uint8_t
{
	ETreasuryWaveResult__Continue  = 0,
	ETreasuryWaveResult__ChangeType = 1,
	ETreasuryWaveResult__ETreasuryWaveResult_MAX = 2
};


// Enum TreasuryFramework.ETreasuryState
enum class ETreasuryState : uint8_t
{
	ETreasuryState__Inactive       = 0,
	ETreasuryState__Waiting        = 1,
	ETreasuryState__Active         = 2,
	ETreasuryState__Completed      = 3,
	ETreasuryState__Failed         = 4,
	ETreasuryState__Aftermath      = 5,
	ETreasuryState__ETreasuryState_MAX = 6
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
