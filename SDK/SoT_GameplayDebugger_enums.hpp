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

// Enum GameplayDebugger.EAIDebugDrawDataView
enum class EAIDebugDrawDataView : uint8_t
{
	EAIDebugDrawDataView__Empty    = 0,
	EAIDebugDrawDataView__OverHead = 1,
	EAIDebugDrawDataView__Basic    = 2,
	EAIDebugDrawDataView__BehaviorTree = 3,
	EAIDebugDrawDataView__EQS      = 4,
	EAIDebugDrawDataView__Perception = 5,
	EAIDebugDrawDataView__GameView1 = 6,
	EAIDebugDrawDataView__GameView2 = 7,
	EAIDebugDrawDataView__GameView3 = 8,
	EAIDebugDrawDataView__GameView4 = 9,
	EAIDebugDrawDataView__GameView5 = 10,
	EAIDebugDrawDataView__NavMesh  = 11,
	EAIDebugDrawDataView__MAX      = 12,
	EAIDebugDrawDataView__EAIDebugDrawDataView_MAX = 13
};


// Enum GameplayDebugger.EDebugComponentMessage
enum class EDebugComponentMessage : uint8_t
{
	EDebugComponentMessage__EnableExtendedView = 0,
	EDebugComponentMessage__DisableExtendedView = 1,
	EDebugComponentMessage__ActivateReplication = 2,
	EDebugComponentMessage__DeactivateReplilcation = 3,
	EDebugComponentMessage__ActivateDataView = 4,
	EDebugComponentMessage__DeactivateDataView = 5,
	EDebugComponentMessage__SetMultipleDataViews = 6,
	EDebugComponentMessage__EDebugComponentMessage_MAX = 7
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
