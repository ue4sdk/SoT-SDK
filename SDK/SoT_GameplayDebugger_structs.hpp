#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Slate_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

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



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayDebugger.GDTCustomViewNames
// 0x0050
struct FGDTCustomViewNames
{
	class FString                                      GameView1;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      GameView2;                                                // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      GameView3;                                                // 0x0020(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      GameView4;                                                // 0x0030(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      GameView5;                                                // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
