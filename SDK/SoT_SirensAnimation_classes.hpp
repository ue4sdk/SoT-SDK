#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SirensAnimation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SirensAnimation.SirenAnimationData
// 0x0038 (0x0060 - 0x0028)
class USirenAnimationData : public UAnimationData
{
public:
	struct FSirenAnimationDataStructure                SirenAnimationData;                                       // 0x0028(0x0038) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SirensAnimation.SirenAnimationData"));
		return ptr;
	}

};


// Class SirensAnimation.SirenAnimationInstance
// 0x0160 (0x05A0 - 0x0440)
class USirenAnimationInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0440(0x0008) MISSED OFFSET
	struct FSirenAnimationDataStructure                SirenAnimationData;                                       // 0x0448(0x0038) (BlueprintVisible, BlueprintReadOnly)
	float                                              ForwardSpeed;                                             // 0x0480(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TiltDirectionAngleDegrees;                                // 0x0484(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TiltAngleAlpha;                                           // 0x0488(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpinAngleDegrees;                                         // 0x048C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTiltAngleRepresentedByAdditiveBendAnimations;          // 0x0490(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TiltDirectionAngleInterpolationSpeed;                     // 0x0494(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TiltAngleAlphaInterpolationSpeed;                         // 0x0498(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpinAngleInterpolationSpeed;                              // 0x049C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SwimmingLongways;                                         // 0x04A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AnimationsLoaded;                                         // 0x04A1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x04A2(0x0006) MISSED OFFSET
	struct FCustomAnimationMontageStateMachine         FullBodyStateMachine;                                     // 0x04A8(0x00D8)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0580(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SirensAnimation.SirenAnimationInstance"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
