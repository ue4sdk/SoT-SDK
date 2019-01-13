#pragma once

// Sea of Thieves (1.4) SDK

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
	struct FGuid                                       ConstraintId;                                             // 0x0038(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieScene3DConstraintSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DAttachSection
// 0x0008 (0x0050 - 0x0048)
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
public:
	unsigned char                                      bConstrainTx : 1;                                         // 0x0048(0x0001) (Edit)
	unsigned char                                      bConstrainTy : 1;                                         // 0x0048(0x0001) (Edit)
	unsigned char                                      bConstrainTz : 1;                                         // 0x0048(0x0001) (Edit)
	unsigned char                                      bConstrainRx : 1;                                         // 0x0048(0x0001) (Edit)
	unsigned char                                      bConstrainRy : 1;                                         // 0x0048(0x0001) (Edit)
	unsigned char                                      bConstrainRz : 1;                                         // 0x0048(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieScene3DAttachSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DPathSection
// 0x0080 (0x00C8 - 0x0048)
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
public:
	struct FRichCurve                                  TimingCurve;                                              // 0x0048(0x0078) (Edit)
	TEnumAsByte<EMovieScene3DPathSection_Axis>         FrontAxisEnum;                                            // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovieScene3DPathSection_Axis>         UpAxisEnum;                                               // 0x00C1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00C2(0x0002) MISSED OFFSET
	unsigned char                                      bFollow : 1;                                              // 0x00C4(0x0001) (Edit)
	unsigned char                                      bReverse : 1;                                             // 0x00C4(0x0001) (Edit)
	unsigned char                                      bForceUpright : 1;                                        // 0x00C4(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieScene3DPathSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DConstraintTrack
// 0x0010 (0x0038 - 0x0028)
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  ConstraintSections;                                       // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieScene3DConstraintTrack");
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
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieScene3DAttachTrack");
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
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieScene3DPathTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DTransformSection
// 0x0438 (0x0470 - 0x0038)
class UMovieScene3DTransformSection : public UMovieSceneSection
{
public:
	struct FRichCurve                                  Translation[0x3];                                         // 0x0038(0x0078)
	struct FRichCurve                                  Rotation[0x3];                                            // 0x01A0(0x0078)
	struct FRichCurve                                  Scale[0x3];                                               // 0x0308(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieScene3DTransformSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneAudioSection
// 0x0010 (0x0048 - 0x0038)
class UMovieSceneAudioSection : public UMovieSceneSection
{
public:
	class USoundBase*                                  Sound;                                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AudioStartTime;                                           // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AudioDilationFactor;                                      // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneAudioSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneAudioTrack
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneAudioTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  AudioSections;                                            // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneAudioTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneBoolSection
// 0x0070 (0x00A8 - 0x0038)
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	struct FIntegralCurve                              BoolCurve;                                                // 0x0038(0x0070) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneBoolSection");
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
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneVisibilitySection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneByteSection
// 0x0070 (0x00A8 - 0x0038)
class UMovieSceneByteSection : public UMovieSceneSection
{
public:
	struct FIntegralCurve                              ByteCurve;                                                // 0x0038(0x0070) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneByteSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneColorSection
// 0x01E0 (0x0218 - 0x0038)
class UMovieSceneColorSection : public UMovieSceneSection
{
public:
	struct FRichCurve                                  RedCurve;                                                 // 0x0038(0x0078)
	struct FRichCurve                                  GreenCurve;                                               // 0x00B0(0x0078)
	struct FRichCurve                                  BlueCurve;                                                // 0x0128(0x0078)
	struct FRichCurve                                  AlphaCurve;                                               // 0x01A0(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneColorSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEventSection
// 0x0068 (0x00A0 - 0x0038)
class UMovieSceneEventSection : public UMovieSceneSection
{
public:
	struct FNameCurve                                  Events;                                                   // 0x0038(0x0068) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneEventSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEventTrack
// 0x0020 (0x0048 - 0x0028)
class UMovieSceneEventTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      bFireEventsWhenForwards : 1;                              // 0x0028(0x0001) (Edit)
	unsigned char                                      bFireEventsWhenBackwards : 1;                             // 0x0028(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0030(0x0010) (ZeroConstructor)
	struct FName                                       TrackName;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneEventTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFloatSection
// 0x0078 (0x00B0 - 0x0038)
class UMovieSceneFloatSection : public UMovieSceneSection
{
public:
	struct FRichCurve                                  FloatCurve;                                               // 0x0038(0x0078) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneFloatSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFadeSection
// 0x0018 (0x00C8 - 0x00B0)
class UMovieSceneFadeSection : public UMovieSceneFloatSection
{
public:
	struct FLinearColor                                FadeColor;                                                // 0x00B0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFadeAudio : 1;                                           // 0x00C0(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneFadeSection");
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
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneSlomoSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneMaterialParameterSection
// 0x0020 (0x0058 - 0x0038)
class UMovieSceneMaterialParameterSection : public UMovieSceneSection
{
public:
	TArray<struct FScalarParameterNameAndCurve>        ScalarParameterNamesAndCurves;                            // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FVectorParameterNameAndCurves>       VectorParameterNamesAndCurves;                            // 0x0048(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneMaterialParameterSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneMaterialTrack
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneMaterialTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneMaterialTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// 0x0010 (0x0048 - 0x0038)
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	struct FName                                       TrackName;                                                // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MaterialIndex;                                            // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneComponentMaterialTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParticleSection
// 0x0070 (0x00A8 - 0x0038)
class UMovieSceneParticleSection : public UMovieSceneSection
{
public:
	struct FIntegralCurve                              ParticleKeys;                                             // 0x0038(0x0070) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneParticleSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParticleTrack
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneParticleTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  ParticleSections;                                         // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneParticleTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScenePropertyTrack
// 0x0030 (0x0058 - 0x0028)
class UMovieScenePropertyTrack : public UMovieSceneTrack
{
public:
	struct FName                                       PropertyName;                                             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      PropertyPath;                                             // 0x0030(0x0010) (ZeroConstructor)
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0040(0x0010) (ZeroConstructor)
	bool                                               bSectionsAreShowable;                                     // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieScenePropertyTrack");
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
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieScene3DTransformTrack");
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
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneBoolTrack");
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
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneVisibilityTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneByteTrack
// 0x0008 (0x0060 - 0x0058)
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                       Enum;                                                     // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneByteTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneColorTrack
// 0x0008 (0x0060 - 0x0058)
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
public:
	bool                                               bIsSlateColor;                                            // 0x0058(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneColorTrack");
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
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneFloatTrack");
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
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneFadeTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneVectorTrack
// 0x0008 (0x0060 - 0x0058)
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
public:
	int                                                NumChannelsUsed;                                          // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneVectorTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// 0x0010 (0x0048 - 0x0038)
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
public:
	class UAnimSequence*                               AnimSequence;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimationStartTime;                                       // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimationDilationFactor;                                  // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneSkeletalAnimationSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  AnimationSections;                                        // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneVectorSection
// 0x01E8 (0x0220 - 0x0038)
class UMovieSceneVectorSection : public UMovieSceneSection
{
public:
	struct FRichCurve                                  Curves[0x4];                                              // 0x0038(0x0078)
	int                                                ChannelsUsed;                                             // 0x0218(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x021C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneVectorSection");
		return ptr;
	}

};


// Class MovieSceneTracks.SubMovieSceneSection
// 0x0008 (0x0040 - 0x0038)
class USubMovieSceneSection : public UMovieSceneSection
{
public:
	class UMovieSceneSequence*                         Sequence;                                                 // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.SubMovieSceneSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneShotSection
// 0x0050 (0x0090 - 0x0040)
class UMovieSceneShotSection : public USubMovieSceneSection
{
public:
	struct FGuid                                       CameraGuid;                                               // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0050(0x0038)
	int                                                ShotNumber;                                               // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneShotSection");
		return ptr;
	}

};


// Class MovieSceneTracks.SubMovieSceneTrack
// 0x0010 (0x0038 - 0x0028)
class USubMovieSceneTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  SubMovieSceneSections;                                    // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.SubMovieSceneTrack");
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
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneShotTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
