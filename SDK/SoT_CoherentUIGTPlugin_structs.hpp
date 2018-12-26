#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_UMG_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum CoherentUIGTPlugin.ECoherentUIGTKeys
enum class ECoherentUIGTKeys : uint8_t
{
	ECoherentUIGTKeys__LeftMouseButton = 0,
	ECoherentUIGTKeys__RightMouseButton = 1,
	ECoherentUIGTKeys__MiddleMouseButton = 2,
	ECoherentUIGTKeys__ThumbMouseButton = 3,
	ECoherentUIGTKeys__ThumbMouseButton2 = 4,
	ECoherentUIGTKeys__BackSpace   = 5,
	ECoherentUIGTKeys__Tab         = 6,
	ECoherentUIGTKeys__Enter       = 7,
	ECoherentUIGTKeys__Pause       = 8,
	ECoherentUIGTKeys__CapsLock    = 9,
	ECoherentUIGTKeys__Escape      = 10,
	ECoherentUIGTKeys__SpaceBar    = 11,
	ECoherentUIGTKeys__PageUp      = 12,
	ECoherentUIGTKeys__PageDown    = 13,
	ECoherentUIGTKeys__End         = 14,
	ECoherentUIGTKeys__Home        = 15,
	ECoherentUIGTKeys__Left        = 16,
	ECoherentUIGTKeys__Up          = 17,
	ECoherentUIGTKeys__Right       = 18,
	ECoherentUIGTKeys__Down        = 19,
	ECoherentUIGTKeys__Insert      = 20,
	ECoherentUIGTKeys__Delete      = 21,
	ECoherentUIGTKeys__Zero        = 22,
	ECoherentUIGTKeys__One         = 23,
	ECoherentUIGTKeys__Two         = 24,
	ECoherentUIGTKeys__Three       = 25,
	ECoherentUIGTKeys__Four        = 26,
	ECoherentUIGTKeys__Five        = 27,
	ECoherentUIGTKeys__Six         = 28,
	ECoherentUIGTKeys__Seven       = 29,
	ECoherentUIGTKeys__Eight       = 30,
	ECoherentUIGTKeys__Nine        = 31,
	ECoherentUIGTKeys__A           = 32,
	ECoherentUIGTKeys__B           = 33,
	ECoherentUIGTKeys__C           = 34,
	ECoherentUIGTKeys__D           = 35,
	ECoherentUIGTKeys__E           = 36,
	ECoherentUIGTKeys__F           = 37,
	ECoherentUIGTKeys__G           = 38,
	ECoherentUIGTKeys__H           = 39,
	ECoherentUIGTKeys__I           = 40,
	ECoherentUIGTKeys__J           = 41,
	ECoherentUIGTKeys__K           = 42,
	ECoherentUIGTKeys__L           = 43,
	ECoherentUIGTKeys__M           = 44,
	ECoherentUIGTKeys__N           = 45,
	ECoherentUIGTKeys__O           = 46,
	ECoherentUIGTKeys__P           = 47,
	ECoherentUIGTKeys__Q           = 48,
	ECoherentUIGTKeys__R           = 49,
	ECoherentUIGTKeys__S           = 50,
	ECoherentUIGTKeys__T           = 51,
	ECoherentUIGTKeys__U           = 52,
	ECoherentUIGTKeys__V           = 53,
	ECoherentUIGTKeys__W           = 54,
	ECoherentUIGTKeys__X           = 55,
	ECoherentUIGTKeys__Y           = 56,
	ECoherentUIGTKeys__Z           = 57,
	ECoherentUIGTKeys__NumPadZero  = 58,
	ECoherentUIGTKeys__NumPadOne   = 59,
	ECoherentUIGTKeys__NumPadTwo   = 60,
	ECoherentUIGTKeys__NumPadThree = 61,
	ECoherentUIGTKeys__NumPadFour  = 62,
	ECoherentUIGTKeys__NumPadFive  = 63,
	ECoherentUIGTKeys__NumPadSix   = 64,
	ECoherentUIGTKeys__NumPadSeven = 65,
	ECoherentUIGTKeys__NumPadEight = 66,
	ECoherentUIGTKeys__NumPadNine  = 67,
	ECoherentUIGTKeys__Multiply    = 68,
	ECoherentUIGTKeys__Add         = 69,
	ECoherentUIGTKeys__Subtract    = 70,
	ECoherentUIGTKeys__Decimal     = 71,
	ECoherentUIGTKeys__Divide      = 72,
	ECoherentUIGTKeys__F1          = 73,
	ECoherentUIGTKeys__F2          = 74,
	ECoherentUIGTKeys__F3          = 75,
	ECoherentUIGTKeys__F4          = 76,
	ECoherentUIGTKeys__F5          = 77,
	ECoherentUIGTKeys__F6          = 78,
	ECoherentUIGTKeys__F7          = 79,
	ECoherentUIGTKeys__F8          = 80,
	ECoherentUIGTKeys__F9          = 81,
	ECoherentUIGTKeys__F10         = 82,
	ECoherentUIGTKeys__F11         = 83,
	ECoherentUIGTKeys__F12         = 84,
	ECoherentUIGTKeys__Gamepad_Special_Left = 85,
	ECoherentUIGTKeys__Gamepad_Special_Right = 86,
	ECoherentUIGTKeys__MouseScrollUp = 87,
	ECoherentUIGTKeys__MouseScrollDown = 88,
	ECoherentUIGTKeys__NumLock     = 89,
	ECoherentUIGTKeys__ScrollLock  = 90,
	ECoherentUIGTKeys__LeftShift   = 91,
	ECoherentUIGTKeys__RightShift  = 92,
	ECoherentUIGTKeys__LeftControl = 93,
	ECoherentUIGTKeys__RightControl = 94,
	ECoherentUIGTKeys__LeftAlt     = 95,
	ECoherentUIGTKeys__RightAlt    = 96,
	ECoherentUIGTKeys__LeftCommand = 97,
	ECoherentUIGTKeys__RightCommand = 98,
	ECoherentUIGTKeys__Semicolon   = 99,
	ECoherentUIGTKeys__Equals      = 100,
	ECoherentUIGTKeys__Comma       = 101,
	ECoherentUIGTKeys__Underscore  = 102,
	ECoherentUIGTKeys__Period      = 103,
	ECoherentUIGTKeys__Slash       = 104,
	ECoherentUIGTKeys__Tilde       = 105,
	ECoherentUIGTKeys__LeftBracket = 106,
	ECoherentUIGTKeys__Backslash   = 107,
	ECoherentUIGTKeys__RightBracket = 108,
	ECoherentUIGTKeys__Quote       = 109,
	ECoherentUIGTKeys__Unknown     = 110,
	ECoherentUIGTKeys__ECoherentUIGTKeys_MAX = 111
};


// Enum CoherentUIGTPlugin.ECoherentUIGTInputPropagationBehaviour
enum class ECoherentUIGTInputPropagationBehaviour : uint8_t
{
	ECoherentUIGTInputPropagationBehaviour__None = 0,
	ECoherentUIGTInputPropagationBehaviour__Keyboard = 1,
	ECoherentUIGTInputPropagationBehaviour__Joystick = 2,
	ECoherentUIGTInputPropagationBehaviour__KeyboardAndJoystick = 3,
	ECoherentUIGTInputPropagationBehaviour__ECoherentUIGTInputPropagationBehaviour_MAX = 4
};


// Enum CoherentUIGTPlugin.EGamepadBehaviourOnFocusLost
enum class EGamepadBehaviourOnFocusLost : uint8_t
{
	ResetState                     = 0,
	UseCurrentState                = 1,
	UseStateBeforeReset            = 2,
	EGamepadBehaviourOnFocusLost_MAX = 3
};


// Enum CoherentUIGTPlugin.EGTInputWidgetLineTraceMode
enum class EGTInputWidgetLineTraceMode : uint8_t
{
	GTInputLineTrace_Single        = 0,
	GTInputLineTrace_Multi         = 1,
	GTInputLineTrace_MAX           = 2
};


// Enum CoherentUIGTPlugin.EGTInputWidgetRaycastQuality
enum class EGTInputWidgetRaycastQuality : uint8_t
{
	RaycastQuality_Fast            = 0,
	RaycastQuality_Balanced        = 1,
	RaycastQuality_Accurate        = 2,
	RaycastQuality_MAX             = 3
};


// Enum CoherentUIGTPlugin.ECoherentUIGTMSAA
enum class ECoherentUIGTMSAA : uint8_t
{
	ECoherentUIGTMSAA__MSAA_1x     = 0,
	ECoherentUIGTMSAA__MSAA_2x     = 1,
	ECoherentUIGTMSAA__MSAA_4x     = 2,
	ECoherentUIGTMSAA__MSAA_MAX    = 3
};


// Enum CoherentUIGTPlugin.ECoherentUIGTSettingsSeverity
enum class ECoherentUIGTSettingsSeverity : uint8_t
{
	ECoherentUIGTSettingsSeverity__Trace = 0,
	ECoherentUIGTSettingsSeverity__Debug = 1,
	ECoherentUIGTSettingsSeverity__Info = 2,
	ECoherentUIGTSettingsSeverity__Warning = 3,
	ECoherentUIGTSettingsSeverity__AssertFailure = 4,
	ECoherentUIGTSettingsSeverity__Error = 5,
	ECoherentUIGTSettingsSeverity__ECoherentUIGTSettingsSeverity_MAX = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CoherentUIGTPlugin.CoherentUIGTLoadingScreenSettings
// 0x0018
struct FCoherentUIGTLoadingScreenSettings
{
	float                                              MinimumLoadingScreenDisplayTime;                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoCompleteWhenLoadingCompletes;                        // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWaitForManualStop;                                       // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	class FString                                      URL;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct CoherentUIGTPlugin.CoherentUIGTViewInfo
// 0x0014
struct FCoherentUIGTViewInfo
{
	int                                                Width;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsTransparent;                                            // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              ClickThroughAlphaThreshold;                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimationFrameDefer;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
