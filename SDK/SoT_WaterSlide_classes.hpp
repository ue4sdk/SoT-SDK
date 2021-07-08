#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_WaterSlide_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WaterSlide.WaterSlideParamsDataAsset
// 0x0028 (0x0050 - 0x0028)
class UWaterSlideParamsDataAsset : public UDataAsset
{
public:
	struct FWaterSlideParams                           WaterSlideParams;                                         // 0x0028(0x0024) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.WaterSlideParamsDataAsset"));
		return ptr;
	}

};


// Class WaterSlide.WaterSlide
// 0x0070 (0x0440 - 0x03D0)
class AWaterSlide : public AActor
{
public:
	class USplineComponent*                            SlideSpline;                                              // 0x03D0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x03D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWaterSlideParamsDataAsset*                  WaterSlideParamsDataAsset;                                // 0x03E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         EntranceCollisionComponent;                               // 0x03E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AWaterSlide*                                 ContinuedWaterSlideRoute;                                 // 0x03F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AWaterSlide*                                 LeftWaterSlideRoute;                                      // 0x03F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AWaterSlide*                                 RightWaterSlideRoute;                                     // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsEndOfSlide;                                             // 0x0408(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0409(0x0003) MISSED OFFSET
	struct FVector                                     EndOfSlideLaunchForce;                                    // 0x040C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	class UWaterSlideAudioParams*                      WaterSlideAudioParams;                                    // 0x0418(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0420(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.WaterSlide"));
		return ptr;
	}


	void SetEntranceCollisionComponent(class UPrimitiveComponent* InEntranceCollisionComponent);
	void ComponentBeginOverlapCallBack(class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int InOtherBodyIndex, bool InFromSweep, const struct FHitResult& InSweepResult);
};


// Class WaterSlide.WaterSlideActionStateId
// 0x0000 (0x0028 - 0x0028)
class UWaterSlideActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.WaterSlideActionStateId"));
		return ptr;
	}

};


// Class WaterSlide.WaterSlideAudioParams
// 0x0030 (0x0058 - 0x0028)
class UWaterSlideAudioParams : public UDataAsset
{
public:
	class UWwiseEvent*                                 WaterSlideStart;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WaterSlideEnd;                                            // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WaterSlideIsEndOneShot;                                   // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WaterSlideChangeForkOneShot;                              // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerSpeedOnWaterSlideRTPC;                              // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayerSpeedThatMapsToOne;                                 // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayerSpeedThatMapsToZero;                                // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.WaterSlideAudioParams"));
		return ptr;
	}

};


// Class WaterSlide.WaterSlideInputComponent
// 0x0010 (0x0240 - 0x0230)
class UWaterSlideInputComponent : public ULookAtOffsetInputComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0230(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.WaterSlideInputComponent"));
		return ptr;
	}

};


// Class WaterSlide.WaterSlidePlayerInterface
// 0x0000 (0x0028 - 0x0028)
class UWaterSlidePlayerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.WaterSlidePlayerInterface"));
		return ptr;
	}

};


// Class WaterSlide.WaterSlidePlayerComponent
// 0x0038 (0x0118 - 0x00E0)
class UWaterSlidePlayerComponent : public UDoubleIntentComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
	class UParticleSystemComponent*                    PlayerWaterSlideSplashingVFXComponent;                    // 0x00E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             PlayerWaterSlideSplashingVFX;                             // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnLocationZOffset;                                     // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x00FC(0x0014) MISSED OFFSET
	class AWaterSlide*                                 CurrentWaterSlide;                                        // 0x0110(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.WaterSlidePlayerComponent"));
		return ptr;
	}

};


// Class WaterSlide.WaterSlideVeeringAnalogInputId
// 0x0000 (0x0038 - 0x0038)
class UWaterSlideVeeringAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.WaterSlideVeeringAnalogInputId"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
