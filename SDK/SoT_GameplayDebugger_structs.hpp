#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Slate_classes.hpp"

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
	EAIDebugDrawDataView__EQS      = 2,
	None01                         = 3,
	EAIDebugDrawDataView__GameView3 = 4,
	None02                         = 5,
	EAIDebugDrawDataView__MAX      = 6,
	None03                         = 7,
	None04                         = 8
};


// Enum GameplayDebugger.EDebugComponentMessage
enum class EDebugComponentMessage : uint8_t
{
	EDebugComponentMessage__EnableExtendedView = 0,
	None                           = 1,
	IntProperty                    = 2,
	EDebugComponentMessage__ActivateDataView = 3,
	None01                         = 4,
	NameProperty                   = 5
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
