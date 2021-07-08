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

// Enum Cooking.ECookingState
enum class ECookingState : uint8_t
{
	ECookingState__Raw             = 0,
	ECookingState__Undercooked     = 1,
	ECookingState__Cooked          = 2,
	ECookingState__Burned          = 3,
	ECookingState__Fresh           = 4,
	ECookingState__ECookingState_MAX = 5
};


// Enum Cooking.ECookingSmokeFeedbackLevel
enum class ECookingSmokeFeedbackLevel : uint8_t
{
	ECookingSmokeFeedbackLevel__NotCooking = 0,
	ECookingSmokeFeedbackLevel__Raw = 1,
	ECookingSmokeFeedbackLevel__CookedWarning = 2,
	ECookingSmokeFeedbackLevel__Cooked = 3,
	ECookingSmokeFeedbackLevel__BurnedWarning = 4,
	ECookingSmokeFeedbackLevel__Burned = 5,
	ECookingSmokeFeedbackLevel__ECookingSmokeFeedbackLevel_MAX = 6
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
