#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_MovieScene_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// 0x0088
struct FScalarParameterNameAndCurve
{
	struct FRichCurve                                  ParameterCurve;                                           // 0x0000(0x0078)
	unsigned char                                      UnknownData00[0x16B];                                     // 0x0078(0x016B) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// 0x01F0
struct FVectorParameterNameAndCurves
{
	struct FRichCurve                                  AlphaCurve;                                               // 0x0000(0x0078)
	unsigned char                                      UnknownData00[0x16B];                                     // 0x0078(0x016B) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRichCurve                                  RedCurve;                                                 // 0x01E3(0x0078)
	struct FRichCurve                                  GreenCurve;                                               // 0x01E3(0x0078)
	struct FRichCurve                                  BlueCurve;                                                // 0x01E3(0x0078)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionKey
// 0x0018
struct FMovieSceneEventSectionKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TArray<struct FName>                               EventNames;                                               // 0x01E3(0x0010) (Edit, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
