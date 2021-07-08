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

// Enum ActionStateMachine.EActionStateMachineTrackId
enum class EActionStateMachineTrackId : uint8_t
{
	EActionStateMachineTrackId__Locomotion = 0,
	EActionStateMachineTrackId__Overlay = 1,
	EActionStateMachineTrackId__ItemUse = 2,
	EActionStateMachineTrackId__ForcedMovement = 3,
	EActionStateMachineTrackId__Migration = 4,
	EActionStateMachineTrackId__Count = 5,
	EActionStateMachineTrackId__Invalid = 6,
	EActionStateMachineTrackId__EActionStateMachineTrackId_MAX = 7
};


// Enum ActionStateMachine.EActionPredictionType
enum class EActionPredictionType : uint8_t
{
	EActionPredictionType__Predicted = 0,
	EActionPredictionType__NotPredicted = 1,
	EActionPredictionType__EActionPredictionType_MAX = 2
};


// Enum ActionStateMachine.EActionStatePriority
enum class EActionStatePriority : uint8_t
{
	EActionStatePriority__Overrides = 0,
	EActionStatePriority__Overriden = 1,
	EActionStatePriority__EActionStatePriority_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
