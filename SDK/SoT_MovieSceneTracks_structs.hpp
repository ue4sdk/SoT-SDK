#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_MovieScene_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class EMovieScene3DPathSection_Axis : uint8_t
{
	MovieScene3DPathSection_Axis__X = 0,
	None                           = 1,
	MovieScene3DPathSection_Axis__NEG_Y = 2,
	None01                         = 3
};


// Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8_t
{
	EParticleKey__Active           = 0,
	None                           = 1
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// 0x0088
struct FScalarParameterNameAndCurve
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FRichCurve                                  ParameterCurve;                                           // 0x0010(0x0078)
};

// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// 0x01F0
struct FVectorParameterNameAndCurves
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FRichCurve                                  RedCurve;                                                 // 0x0010(0x0078)
	struct FRichCurve                                  GreenCurve;                                               // 0x0088(0x0078)
	struct FRichCurve                                  BlueCurve;                                                // 0x0100(0x0078)
	struct FRichCurve                                  AlphaCurve;                                               // 0x0178(0x0078)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionKey
// 0x0018
struct FMovieSceneEventSectionKey
{
	TArray<struct FName>                               EventNames;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Time;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
