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

// Enum NaturalDisasters.EAshCloudState
enum class EAshCloudState : uint8_t
{
	EAshCloudState__Spawning       = 0,
	EAshCloudState__Active         = 1,
	EAshCloudState__Dissipating    = 2,
	EAshCloudState__EAshCloudState_MAX = 3
};


// Enum NaturalDisasters.EVolcanoTargetHitType
enum class EVolcanoTargetHitType : uint8_t
{
	EVolcanoTargetHitType__OnTarget = 0,
	EVolcanoTargetHitType__NearMiss = 1,
	EVolcanoTargetHitType__Random  = 2,
	EVolcanoTargetHitType__EVolcanoTargetHitType_MAX = 3
};


// Enum NaturalDisasters.EVolcanoTargetType
enum class EVolcanoTargetType : uint8_t
{
	EVolcanoTargetType__Player     = 0,
	EVolcanoTargetType__Ship       = 1,
	EVolcanoTargetType__Watercraft = 2,
	EVolcanoTargetType__EVolcanoTargetType_MAX = 3
};


// Enum NaturalDisasters.EAshenLordWorldEndCloudState
enum class EAshenLordWorldEndCloudState : uint8_t
{
	EAshenLordWorldEndCloudState__Inactive = 0,
	EAshenLordWorldEndCloudState__Active = 1,
	EAshenLordWorldEndCloudState__EAshenLordWorldEndCloudState_MAX = 2
};


// Enum NaturalDisasters.EGeyserState
enum class EGeyserState : uint8_t
{
	EGeyserState__Dormant          = 0,
	EGeyserState__Active           = 1,
	EGeyserState__Disabled         = 2,
	EGeyserState__EGeyserState_MAX = 3
};


// Enum NaturalDisasters.EEarthquakeState
enum class EEarthquakeState : uint8_t
{
	EEarthquakeState__Dormant      = 0,
	EEarthquakeState__WarmingUp    = 1,
	EEarthquakeState__Active       = 2,
	EEarthquakeState__CoolingDown  = 3,
	EEarthquakeState__EEarthquakeState_MAX = 4
};


// Enum NaturalDisasters.EGeyserManagerState
enum class EGeyserManagerState : uint8_t
{
	EGeyserManagerState__Dormant   = 0,
	EGeyserManagerState__Active    = 1,
	EGeyserManagerState__EGeyserManagerState_MAX = 2
};


// Enum NaturalDisasters.EVolcanoState
enum class EVolcanoState : uint8_t
{
	EVolcanoState__Dormant         = 0,
	EVolcanoState__WarmingUp       = 1,
	EVolcanoState__Erupting        = 2,
	EVolcanoState__EVolcanoState_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
