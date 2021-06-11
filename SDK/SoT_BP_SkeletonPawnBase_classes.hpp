#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SkeletonPawnBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SkeletonPawnBase.BP_SkeletonPawnBase_C
// 0x0048 (0x1288 - 0x1240)
class ABP_SkeletonPawnBase_C : public AAthenaAICharacter
{
public:
	class UChainLightningReceiverComponent*            ChainLightningReceiver;                                   // 0x1240(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlinkStrafeComponent*                       BlinkStrafe;                                              // 0x1248(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWaterInteractionComponent*                  WaterInteraction;                                         // 0x1250(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x1258(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAINameplateComponent*                       AINameplate;                                              // 0x1260(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SkeletonAudioComponent_C*                BP_SkeletonAudioComponent;                                // 0x1268(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNoiseMakerComponent*                        NoiseMaker;                                               // 0x1270(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_EnemyVFXComponent_C*                     BP_EnemyVFXComponent;                                     // 0x1278(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterFootImpactComponent*               CharacterFootImpact;                                      // 0x1280(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SkeletonPawnBase.BP_SkeletonPawnBase_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
