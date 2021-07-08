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

// Enum Tales.ETaleQuestStepBeginMode
enum class ETaleQuestStepBeginMode : uint8_t
{
	ETaleQuestStepBeginMode__Cold  = 0,
	ETaleQuestStepBeginMode__Warm  = 1,
	ETaleQuestStepBeginMode__ETaleQuestStepBeginMode_MAX = 2
};


// Enum Tales.ETaleQuestStepState
enum class ETaleQuestStepState : uint8_t
{
	ETaleQuestStepState__Inactive  = 0,
	ETaleQuestStepState__Active    = 1,
	ETaleQuestStepState__PendingCompletion = 2,
	ETaleQuestStepState__Completed = 3,
	ETaleQuestStepState__ETaleQuestStepState_MAX = 4
};


// Enum Tales.ELostShipmentsIslandTypes
enum class ELostShipmentsIslandTypes : uint8_t
{
	ELostShipmentsIslandTypes__Feature = 0,
	ELostShipmentsIslandTypes__Resource = 1,
	ELostShipmentsIslandTypes__Seapost = 2,
	ELostShipmentsIslandTypes__Outpost = 3,
	ELostShipmentsIslandTypes__Fort = 4,
	ELostShipmentsIslandTypes__ELostShipmentsIslandTypes_MAX = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
