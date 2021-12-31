#pragma once

// Sea of Thieves (2) SDK

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
// 0x0050 (0x12B0 - 0x1260)
class ABP_SkeletonPawnBase_C : public AAthenaAICharacter
{
public:
	UAIItemSpawnDataSourceComponent*                   AIItemSpawnDataSource;                                    // 0x1260(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChainLightningReceiverComponent*                  ChainLightningReceiver;                                   // 0x1268(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UBlinkStrafeComponent*                             BlinkStrafe;                                              // 0x1270(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UWaterInteractionComponent*                        WaterInteraction;                                         // 0x1278(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UAnimNotifyWwiseEmitterComponent*                  AnimNotifyWwiseEmitter;                                   // 0x1280(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UAINameplateComponent*                             AINameplate;                                              // 0x1288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UBP_SkeletonAudioComponent_C*                      BP_SkeletonAudioComponent;                                // 0x1290(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UNoiseMakerComponent*                              NoiseMaker;                                               // 0x1298(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UBP_EnemyVFXComponent_C*                           BP_EnemyVFXComponent;                                     // 0x12A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UCharacterFootImpactComponent*                     CharacterFootImpact;                                      // 0x12A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
