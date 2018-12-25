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
	None                           = 1,
	__UNKNOWN_NAME__               = 2,
	ECoherentUIGTKeys__ThumbMouseButton2 = 3,
	None01                         = 4,
	__UNKNOWN_NAME__01             = 5,
	ECoherentUIGTKeys__Pause       = 6,
	None02                         = 7,
	__UNKNOWN_NAME__02             = 8,
	ECoherentUIGTKeys__PageUp      = 9,
	None03                         = 10,
	__UNKNOWN_NAME__03             = 11,
	ECoherentUIGTKeys__Left        = 12,
	None04                         = 13,
	__UNKNOWN_NAME__04             = 14,
	ECoherentUIGTKeys__Insert      = 15,
	None05                         = 16,
	__UNKNOWN_NAME__05             = 17,
	ECoherentUIGTKeys__Two         = 18,
	None06                         = 19,
	__UNKNOWN_NAME__06             = 20,
	ECoherentUIGTKeys__Six         = 21,
	None07                         = 22,
	__UNKNOWN_NAME__07             = 23,
	ECoherentUIGTKeys__A           = 24,
	None08                         = 25,
	__UNKNOWN_NAME__08             = 26,
	ECoherentUIGTKeys__E           = 27,
	None09                         = 28,
	__UNKNOWN_NAME__09             = 29,
	ECoherentUIGTKeys__I           = 30,
	None10                         = 31,
	__UNKNOWN_NAME__10             = 32,
	ECoherentUIGTKeys__M           = 33,
	None11                         = 34,
	__UNKNOWN_NAME__11             = 35,
	ECoherentUIGTKeys__Q           = 36,
	None12                         = 37,
	__UNKNOWN_NAME__12             = 38,
	ECoherentUIGTKeys__U           = 39,
	None13                         = 40,
	__UNKNOWN_NAME__13             = 41,
	ECoherentUIGTKeys__Y           = 42,
	None14                         = 43,
	__UNKNOWN_NAME__14             = 44,
	ECoherentUIGTKeys__NumPadTwo   = 45,
	None15                         = 46,
	__UNKNOWN_NAME__15             = 47,
	ECoherentUIGTKeys__NumPadSix   = 48,
	None16                         = 49,
	__UNKNOWN_NAME__16             = 50,
	ECoherentUIGTKeys__Multiply    = 51,
	None17                         = 52,
	__UNKNOWN_NAME__17             = 53,
	ECoherentUIGTKeys__Divide      = 54,
	None18                         = 55,
	__UNKNOWN_NAME__18             = 56,
	ECoherentUIGTKeys__F4          = 57,
	None19                         = 58,
	__UNKNOWN_NAME__19             = 59,
	ECoherentUIGTKeys__F8          = 60,
	None20                         = 61,
	__UNKNOWN_NAME__20             = 62,
	ECoherentUIGTKeys__F12         = 63,
	None21                         = 64,
	__UNKNOWN_NAME__21             = 65,
	ECoherentUIGTKeys__MouseScrollDown = 66,
	None22                         = 67,
	__UNKNOWN_NAME__22             = 68,
	ECoherentUIGTKeys__RightShift  = 69,
	None23                         = 70,
	__UNKNOWN_NAME__23             = 71,
	ECoherentUIGTKeys__RightAlt    = 72,
	None24                         = 73,
	__UNKNOWN_NAME__24             = 74,
	ECoherentUIGTKeys__Equals      = 75,
	None25                         = 76,
	__UNKNOWN_NAME__25             = 77,
	ECoherentUIGTKeys__Slash       = 78,
	None26                         = 79,
	__UNKNOWN_NAME__26             = 80,
	ECoherentUIGTKeys__RightBracket = 81,
	None27                         = 82,
	__UNKNOWN_NAME__27             = 83,
	None28                         = 84,
	__UNKNOWN_NAME__28             = 85,
	__UNKNOWN_NAME__29             = 86,
	__UNKNOWN_NAME__30             = 87,
	__UNKNOWN_NAME__31             = 88,
	None29                         = 89,
	__UNKNOWN_NAME__32             = 90,
	__UNKNOWN_NAME__33             = 91,
	__UNKNOWN_NAME__34             = 92,
	__UNKNOWN_NAME__35             = 93,
	None30                         = 94,
	None31                         = 95,
	__UNKNOWN_NAME__36             = 96,
	__UNKNOWN_NAME__37             = 97,
	__UNKNOWN_NAME__38             = 98,
	None32                         = 99,
	None33                         = 100,
	__UNKNOWN_NAME__39             = 101,
	__UNKNOWN_NAME__40             = 102,
	__UNKNOWN_NAME__41             = 103,
	ByteProperty                   = 104,
	None34                         = 105,
	None35                         = 106,
	None36                         = 107,
	__UNKNOWN_NAME__42             = 108,
	__UNKNOWN_NAME__43             = 109,
	__UNKNOWN_NAME__44             = 110,
	__UNKNOWN_NAME__45             = 111
};


// Enum CoherentUIGTPlugin.ECoherentUIGTInputPropagationBehaviour
enum class ECoherentUIGTInputPropagationBehaviour : uint8_t
{
	ECoherentUIGTInputPropagationBehaviour__None = 0,
	None                           = 1,
	__UNKNOWN_NAME__               = 2,
	ECoherentUIGTInputPropagationBehaviour__ECoherentUIGTInputPropagationBehaviour_MAX = 3,
	__UNKNOWN_NAME__01             = 4
};


// Enum CoherentUIGTPlugin.EGamepadBehaviourOnFocusLost
enum class EGamepadBehaviourOnFocusLost : uint8_t
{
	ResetState                     = 0,
	None                           = 1,
	__UNKNOWN_NAME__               = 2,
	GTInputLineTrace_Single        = 3
};


// Enum CoherentUIGTPlugin.EGTInputWidgetLineTraceMode
enum class EGTInputWidgetLineTraceMode : uint8_t
{
	GTInputLineTrace_Single        = 0,
	None                           = 1,
	__UNKNOWN_NAME__               = 2
};


// Enum CoherentUIGTPlugin.EGTInputWidgetRaycastQuality
enum class EGTInputWidgetRaycastQuality : uint8_t
{
	RaycastQuality_Fast            = 0,
	None                           = 1,
	__UNKNOWN_NAME__               = 2,
	ECoherentUIGTMSAA__MSAA_1x     = 3
};


// Enum CoherentUIGTPlugin.ECoherentUIGTMSAA
enum class ECoherentUIGTMSAA : uint8_t
{
	ECoherentUIGTMSAA__MSAA_1x     = 0,
	None                           = 1,
	__UNKNOWN_NAME__               = 2,
	__UNKNOWN_NAME__01             = 3
};


// Enum CoherentUIGTPlugin.ECoherentUIGTSettingsSeverity
enum class ECoherentUIGTSettingsSeverity : uint8_t
{
	ECoherentUIGTSettingsSeverity__Trace = 0,
	None                           = 1,
	__UNKNOWN_NAME__               = 2,
	ECoherentUIGTSettingsSeverity__AssertFailure = 3,
	None01                         = 4,
	__UNKNOWN_NAME__01             = 5,
	__UNKNOWN_NAME__02             = 6
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
