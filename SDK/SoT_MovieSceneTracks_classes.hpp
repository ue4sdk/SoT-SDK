#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MovieSceneTracks_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MovieSceneTracks.MovieScene3DConstraintSection
// 0x0010 (0x0048 - 0x0038)
class UMovieScene3DConstraintSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FGuid                                       ConstraintId;                                             // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DAttachSection
// 0x0008 (0x0050 - 0x0048)
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
public:
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	unsigned char                                      bConstrainTx : 1;                                         // 0x01E3(0x0001) (Edit)
	unsigned char                                      bConstrainTy : 1;                                         // 0x01E3(0x0001) (Edit)
	unsigned char                                      bConstrainTz : 1;                                         // 0x01E3(0x0001) (Edit)
	unsigned char                                      bConstrainRx : 1;                                         // 0x01E3(0x0001) (Edit)
	unsigned char                                      bConstrainRy : 1;                                         // 0x01E3(0x0001) (Edit)
	unsigned char                                      bConstrainRz : 1;                                         // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DPathSection
// 0x0080 (0x00C8 - 0x0048)
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
public:
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	struct FRichCurve                                  TimingCurve;                                              // 0x01E3(0x0078) (Edit)
	TEnumAsByte<EMovieScene3DPathSection_Axis>         FrontAxisEnum;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovieScene3DPathSection_Axis>         UpAxisEnum;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFollow : 1;                                              // 0x01E3(0x0001) (Edit)
	unsigned char                                      bReverse : 1;                                             // 0x01E3(0x0001) (Edit)
	unsigned char                                      bForceUpright : 1;                                        // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DConstraintTrack
// 0x0010 (0x0038 - 0x0028)
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DAttachTrack
// 0x0000 (0x0038 - 0x0038)
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DPathTrack
// 0x0000 (0x0038 - 0x0038)
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DTransformSection
// 0x0438 (0x0470 - 0x0038)
class UMovieScene3DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRichCurve                                  Translation[0x3];                                         // 0x01E3(0x0078)
	struct FRichCurve                                  Rotation[0x3];                                            // 0x01E3(0x0078)
	struct FRichCurve                                  Scale[0x3];                                               // 0x01E3(0x0078)
	unsigned char                                      UnknownData01[0x125];                                     // 0x034B(0x0125) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneAudioSection
// 0x0010 (0x0048 - 0x0038)
class UMovieSceneAudioSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	class USoundBase*                                  Sound;                                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AudioStartTime;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AudioDilationFactor;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneAudioTrack
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneAudioTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneBoolSection
// 0x0070 (0x00A8 - 0x0038)
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FIntegralCurve                              BoolCurve;                                                // 0x01E3(0x0070) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneBoolSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneVisibilitySection
// 0x0000 (0x00A8 - 0x00A8)
class UMovieSceneVisibilitySection : public UMovieSceneBoolSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVisibilitySection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneByteSection
// 0x0070 (0x00A8 - 0x0038)
class UMovieSceneByteSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FIntegralCurve                              ByteCurve;                                                // 0x01E3(0x0070) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneByteSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneColorSection
// 0x01E0 (0x0218 - 0x0038)
class UMovieSceneColorSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRichCurve                                  RedCurve;                                                 // 0x01E3(0x0078)
	struct FRichCurve                                  GreenCurve;                                               // 0x01E3(0x0078)
	struct FRichCurve                                  BlueCurve;                                                // 0x01E3(0x0078)
	struct FRichCurve                                  AlphaCurve;                                               // 0x01E3(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneColorSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEventSection
// 0x0068 (0x00A0 - 0x0038)
class UMovieSceneEventSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FNameCurve                                  Events;                                                   // 0x01E3(0x0068) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEventTrack
// 0x0020 (0x0048 - 0x0028)
class UMovieSceneEventTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	unsigned char                                      bFireEventsWhenForwards : 1;                              // 0x01E3(0x0001) (Edit)
	unsigned char                                      bFireEventsWhenBackwards : 1;                             // 0x01E3(0x0001) (Edit)
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFloatSection
// 0x0078 (0x00B0 - 0x0038)
class UMovieSceneFloatSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRichCurve                                  FloatCurve;                                               // 0x01E3(0x0078) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFadeSection
// 0x0018 (0x00C8 - 0x00B0)
class UMovieSceneFadeSection : public UMovieSceneFloatSection
{
public:
	unsigned char                                      UnknownData00[0x133];                                     // 0x00B0(0x0133) MISSED OFFSET
	struct FLinearColor                                FadeColor;                                                // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFadeAudio : 1;                                           // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSlomoSection
// 0x0000 (0x00B0 - 0x00B0)
class UMovieSceneSlomoSection : public UMovieSceneFloatSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneMaterialParameterSection
// 0x0020 (0x0058 - 0x0038)
class UMovieSceneMaterialParameterSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	TArray<struct FScalarParameterNameAndCurve>        ScalarParameterNamesAndCurves;                            // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FVectorParameterNameAndCurves>       VectorParameterNamesAndCurves;                            // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneMaterialParameterSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneMaterialTrack
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneMaterialTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneMaterialTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// 0x0010 (0x0048 - 0x0038)
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FName                                       TrackName;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MaterialIndex;                                            // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneComponentMaterialTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParticleSection
// 0x0070 (0x00A8 - 0x0038)
class UMovieSceneParticleSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FIntegralCurve                              ParticleKeys;                                             // 0x01E3(0x0070) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParticleTrack
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneParticleTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScenePropertyTrack
// 0x0030 (0x0058 - 0x0028)
class UMovieScenePropertyTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FName                                       PropertyName;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      PropertyPath;                                             // 0x01E3(0x0010) (ZeroConstructor)
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePropertyTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DTransformTrack
// 0x0000 (0x0058 - 0x0058)
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneBoolTrack
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneBoolTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneVisibilityTrack
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVisibilityTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneByteTrack
// 0x0008 (0x0060 - 0x0058)
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData00[0x18B];                                     // 0x0058(0x018B) MISSED OFFSET
	class UEnum*                                       Enum;                                                     // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneByteTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneColorTrack
// 0x0008 (0x0060 - 0x0058)
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData00[0x18B];                                     // 0x0058(0x018B) MISSED OFFSET
	bool                                               bIsSlateColor;                                            // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneColorTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFloatTrack
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFadeTrack
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneVectorTrack
// 0x0008 (0x0060 - 0x0058)
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData00[0x18B];                                     // 0x0058(0x018B) MISSED OFFSET
	int                                                NumChannelsUsed;                                          // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// 0x0010 (0x0048 - 0x0038)
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	class UAnimSequence*                               AnimSequence;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimationStartTime;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimationDilationFactor;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneVectorSection
// 0x01E8 (0x0220 - 0x0038)
class UMovieSceneVectorSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FRichCurve                                  Curves[0x4];                                              // 0x01E3(0x0078)
	int                                                ChannelsUsed;                                             // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x39];                                      // 0x01E7(0x0039) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorSection");
		return ptr;
	}

};


// Class MovieSceneTracks.SubMovieSceneSection
// 0x0008 (0x0040 - 0x0038)
class USubMovieSceneSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	class UMovieSceneSequence*                         Sequence;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.SubMovieSceneSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneShotSection
// 0x0050 (0x0090 - 0x0040)
class UMovieSceneShotSection : public USubMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	struct FGuid                                       CameraGuid;                                               // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x01E3(0x0018)
	unsigned char                                      UnknownData01[0x20];                                      // 0x01F3(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                ShotNumber;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneShotSection");
		return ptr;
	}

};


// Class MovieSceneTracks.SubMovieSceneTrack
// 0x0010 (0x0038 - 0x0028)
class USubMovieSceneTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.SubMovieSceneTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneShotTrack
// 0x0000 (0x0038 - 0x0038)
class UMovieSceneShotTrack : public USubMovieSceneTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneShotTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
