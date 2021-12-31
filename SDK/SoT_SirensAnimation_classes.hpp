#pragma once

// Sea of Thieves (2) SDK

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
// 0x0060 (0x0088 - 0x0028)
class USirenAnimationData : public UAnimationData
{
public:
	FSirenAnimationDataStructure                       SirenAnimationData;                                       // 0x0028(0x0060) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SirensAnimation.SirenAnimationData"));
		return ptr;
	}

};


// Class SirensAnimation.SirenAnimationInstance
// 0x02D0 (0x0710 - 0x0440)
class USirenAnimationInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0440(0x0010) MISSED OFFSET
	TWeakObjectPtr<class APawn>                        PawnOwner;                                                // 0x0450(0x0008) (ZeroConstructor, IsPlainOldData)
	FName                                              PropAttachmentSocket;                                     // 0x0458(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FSirenAnimationDataStructure                       SirenAnimationData;                                       // 0x0460(0x0060) (BlueprintVisible, BlueprintReadOnly)
	FAthenaAnimationWeapon                             AttackAnimations;                                         // 0x04C0(0x00B8) (BlueprintVisible, BlueprintReadOnly)
	float                                              ForwardSpeed;                                             // 0x0578(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x057C(0x000C) MISSED OFFSET
	float                                              TiltDirectionAngleDegrees;                                // 0x0588(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TiltAngleAlpha;                                           // 0x058C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpinAngleDegrees;                                         // 0x0590(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTiltAngleRepresentedByAdditiveBendAnimations;          // 0x0594(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UpperBodyOverlayActive;                                   // 0x0598(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SwimmingLongways;                                         // 0x0599(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               UseAggressiveAnimations;                                  // 0x059A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               UseAlternativeAggressiveAnimation;                        // 0x059B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x059C(0x0004) MISSED OFFSET
	TArray<UClass*>                                    StrategiesForAggressiveAnimations;                        // 0x05A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	FFloatRange                                        TimeBeforeAlternativeAggressiveAnimationToggleFlips;      // 0x05B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x05C0(0x0008) MISSED OFFSET
	bool                                               AnimationsLoaded;                                         // 0x05C8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x05C9(0x0003) MISSED OFFSET
	float                                              AimUpAlpha;                                               // 0x05CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AimDownAlpha;                                             // 0x05D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x05D4(0x0004) MISSED OFFSET
	FCustomAnimationMontageStateMachine                FullBodyStateMachine;                                     // 0x05D8(0x00D8)
	FHitReactionAnimationState                         HitReacts;                                                // 0x06B0(0x0028) (BlueprintVisible)
	unsigned char                                      UnknownData06[0x38];                                      // 0x06D8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SirensAnimation.SirenAnimationInstance"));
		return ptr;
	}


	void ClearActiveAttack();
	void BeginNewAttack();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
