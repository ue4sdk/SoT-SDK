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
	FWaterSlideParams                                  WaterSlideParams;                                         // 0x0028(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.WaterSlideParamsDataAsset"));
		return ptr;
	}

};


// Class WaterSlide.WaterSlide
// 0x0080 (0x0450 - 0x03D0)
class AWaterSlide : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	USplineComponent*                                  SlideSpline;                                              // 0x03D8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	USceneComponent*                                   Root;                                                     // 0x03E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UWaterSlideParamsDataAsset*                        WaterSlideParamsDataAsset;                                // 0x03E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UPrimitiveComponent*                               EntranceCollisionComponent;                               // 0x03F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	AWaterSlide*                                       ContinuedWaterSlideRoute;                                 // 0x03F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	AWaterSlide*                                       LeftWaterSlideRoute;                                      // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	AWaterSlide*                                       RightWaterSlideRoute;                                     // 0x0408(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsEndOfSlide;                                             // 0x0410(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0411(0x0003) MISSED OFFSET
	FVector                                            EndOfSlideLaunchForce;                                    // 0x0414(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	UWaterSlideAudioParams*                            WaterSlideAudioParams;                                    // 0x0420(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0428(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.WaterSlide"));
		return ptr;
	}


	void SetEntranceCollisionComponent(UPrimitiveComponent* InEntranceCollisionComponent);
	void ComponentBeginOverlapCallBack(AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int InOtherBodyIndex, bool InFromSweep, const FHitResult& InSweepResult);
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
	UWwiseEvent*                                       WaterSlideStart;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       WaterSlideEnd;                                            // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       WaterSlideIsEndOneShot;                                   // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       WaterSlideChangeForkOneShot;                              // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FName                                              PlayerSpeedOnWaterSlideRTPC;                              // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayerSpeedThatMapsToOne;                                 // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayerSpeedThatMapsToZero;                                // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.WaterSlideAudioParams"));
		return ptr;
	}

};


// Class WaterSlide.WaterSlideInputComponent
// 0x0010 (0x0290 - 0x0280)
class UWaterSlideInputComponent : public ULookAtOffsetInputComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0280(0x0010) MISSED OFFSET

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
	UParticleSystemComponent*                          PlayerWaterSlideSplashingVFXComponent;                    // 0x00E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UParticleSystem*                                   PlayerWaterSlideSplashingVFX;                             // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnLocationZOffset;                                     // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x00FC(0x0014) MISSED OFFSET
	AWaterSlide*                                       CurrentWaterSlide;                                        // 0x0110(0x0008) (Net, ZeroConstructor, IsPlainOldData)

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
