#pragma once

// Sea of Thieves (1.1.1) SDK

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
	IntProperty                    = 2,
	ECoherentUIGTKeys__ThumbMouseButton2 = 3,
	None01                         = 4,
	NameProperty                   = 5,
	ECoherentUIGTKeys__Pause       = 6,
	None02                         = 7,
	StructProperty                 = 8,
	ECoherentUIGTKeys__PageUp      = 9,
	None03                         = 10,
	TextProperty                   = 11,
	ECoherentUIGTKeys__Left        = 12,
	None04                         = 13,
	LazyObjectProperty             = 14,
	ECoherentUIGTKeys__Insert      = 15,
	None05                         = 16,
	UInt16Property                 = 17,
	ECoherentUIGTKeys__Two         = 18,
	None06                         = 19,
	Int8Property                   = 20,
	ECoherentUIGTKeys__Six         = 21,
	None07                         = 22,
	Core                           = 23,
	ECoherentUIGTKeys__A           = 24,
	None08                         = 25,
	ECoherentUIGTKeys__E           = 26,
	None09                         = 27,
	ECoherentUIGTKeys__I           = 28,
	None10                         = 29,
	ECoherentUIGTKeys__M           = 30,
	None11                         = 31,
	ECoherentUIGTKeys__Q           = 32,
	None12                         = 33,
	Cylinder                       = 34,
	ECoherentUIGTKeys__U           = 35,
	None13                         = 36,
	Vector2D                       = 37,
	ECoherentUIGTKeys__Y           = 38,
	None14                         = 39,
	Name                           = 40,
	ECoherentUIGTKeys__NumPadTwo   = 41,
	None15                         = 42,
	Color                          = 43,
	ECoherentUIGTKeys__NumPadSix   = 44,
	None16                         = 45,
	AdvanceFrame                   = 46,
	ECoherentUIGTKeys__Multiply    = 47,
	None17                         = 48,
	Self                           = 49,
	ECoherentUIGTKeys__Divide      = 50,
	None18                         = 51,
	ECoherentUIGTKeys__F4          = 52,
	None19                         = 53,
	ECoherentUIGTKeys__F8          = 54,
	None20                         = 55,
	ECoherentUIGTKeys__F12         = 56,
	None21                         = 57,
	ECoherentUIGTKeys__MouseScrollDown = 58,
	None22                         = 59,
	ECoherentUIGTKeys__RightShift  = 60,
	None23                         = 61,
	ECoherentUIGTKeys__RightAlt    = 62,
	None24                         = 63,
	ECoherentUIGTKeys__Equals      = 64,
	None25                         = 65,
	Actor                          = 66,
	ECoherentUIGTKeys__Slash       = 67,
	None26                         = 68,
	ECoherentUIGTKeys__RightBracket = 69,
	None27                         = 70,
	None28                         = 71,
	None29                         = 72,
	None30                         = 73,
	None31                         = 74,
	None32                         = 75,
	None33                         = 76,
	None34                         = 77,
	IntProperty01                  = 78,
	None35                         = 79,
	None36                         = 80,
	None37                         = 81,
	None38                         = 82,
	None39                         = 83,
	None40                         = 84,
	None41                         = 85,
	None42                         = 86,
	None43                         = 87,
	None44                         = 88,
	None45                         = 89,
	None46                         = 90,
	None47                         = 91,
	None48                         = 92
};


// Enum CoherentUIGTPlugin.ECoherentUIGTInputPropagationBehaviour
enum class ECoherentUIGTInputPropagationBehaviour : uint8_t
{
	ECoherentUIGTInputPropagationBehaviour__None = 0,
	None                           = 1,
	IntProperty                    = 2,
	ECoherentUIGTInputPropagationBehaviour__ECoherentUIGTInputPropagationBehaviour_MAX = 3
};


// Enum CoherentUIGTPlugin.EGamepadBehaviourOnFocusLost
enum class EGamepadBehaviourOnFocusLost : uint8_t
{
	ResetState                     = 0,
	None                           = 1,
	IntProperty                    = 2,
	GTInputLineTrace_Single        = 3
};


// Enum CoherentUIGTPlugin.EGTInputWidgetLineTraceMode
enum class EGTInputWidgetLineTraceMode : uint8_t
{
	GTInputLineTrace_Single        = 0,
	None                           = 1
};


// Enum CoherentUIGTPlugin.EGTInputWidgetRaycastQuality
enum class EGTInputWidgetRaycastQuality : uint8_t
{
	RaycastQuality_Fast            = 0,
	None                           = 1,
	ResetState                     = 2
};


// Enum CoherentUIGTPlugin.ECoherentUIGTMSAA
enum class ECoherentUIGTMSAA : uint8_t
{
	ECoherentUIGTMSAA__MSAA_1x     = 0,
	None                           = 1,
	RaycastQuality_Fast            = 2
};


// Enum CoherentUIGTPlugin.ECoherentUIGTSettingsSeverity
enum class ECoherentUIGTSettingsSeverity : uint8_t
{
	ECoherentUIGTSettingsSeverity__Trace = 0,
	None                           = 1,
	IntProperty                    = 2,
	ECoherentUIGTSettingsSeverity__AssertFailure = 3,
	None01                         = 4,
	NameProperty                   = 5
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
