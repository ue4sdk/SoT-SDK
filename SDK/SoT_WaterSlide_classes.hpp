#pragma once

// Sea of Thieves (2.0) SDK

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
// 0x0020 (0x0048 - 0x0028)
class UWaterSlideParamsDataAsset : public UDataAsset
{
public:
	struct FWaterSlideParams                           WaterSlideParams;                                         // 0x0028(0x001C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.WaterSlideParamsDataAsset"));
		return ptr;
	}

};


// Class WaterSlide.WaterSlide
// 0x0068 (0x0490 - 0x0428)
class AWaterSlide : public AActor
{
public:
	class USplineComponent*                            SlideSpline;                                              // 0x0428(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWaterSlideParamsDataAsset*                  WaterSlideParamsDataAsset;                                // 0x0438(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         EntranceCollisionComponent;                               // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AWaterSlide*                                 ContinuedWaterSlideRoute;                                 // 0x0448(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AWaterSlide*                                 LeftWaterSlideRoute;                                      // 0x0450(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AWaterSlide*                                 RightWaterSlideRoute;                                     // 0x0458(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsEndOfSlide;                                             // 0x0460(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0461(0x0003) MISSED OFFSET
	struct FVector                                     EndOfSlideLaunchForce;                                    // 0x0464(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0470(0x0020) MISSED OFFSET

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


// Class WaterSlide.WaterSlideCompositeInputHandler
// 0x0030 (0x0208 - 0x01D8)
class UWaterSlideCompositeInputHandler : public ULookAtOffsetCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x01D8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WaterSlide.WaterSlideCompositeInputHandler"));
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnMoveRight(float Value);
	TEnumAsByte<EInputHandlerResult> OnMoveForward(float Value);
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
// 0x0000 (0x0030 - 0x0030)
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
