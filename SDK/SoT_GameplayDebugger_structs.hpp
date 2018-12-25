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
	None                           = 1,
	__UNKNOWN_NAME__               = 2,
	EAIDebugDrawDataView__EQS      = 3,
	None01                         = 4,
	__UNKNOWN_NAME__01             = 5,
	EAIDebugDrawDataView__GameView3 = 6,
	None02                         = 7,
	__UNKNOWN_NAME__02             = 8,
	EAIDebugDrawDataView__MAX      = 9,
	None03                         = 10,
	__UNKNOWN_NAME__03             = 11,
	__UNKNOWN_NAME__04             = 12,
	__UNKNOWN_NAME__05             = 13
};


// Enum GameplayDebugger.EDebugComponentMessage
enum class EDebugComponentMessage : uint8_t
{
	EDebugComponentMessage__EnableExtendedView = 0,
	None                           = 1,
	__UNKNOWN_NAME__               = 2,
	EDebugComponentMessage__ActivateDataView = 3,
	None01                         = 4,
	__UNKNOWN_NAME__01             = 5,
	__UNKNOWN_NAME__02             = 6,
	__UNKNOWN_NAME__03             = 7
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
