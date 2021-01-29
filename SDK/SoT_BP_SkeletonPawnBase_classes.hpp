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
// 0x0040 (0x1240 - 0x1200)
class ABP_SkeletonPawnBase_C : public AAthenaAICharacter
{
public:
	class UBlinkStrafeComponent*                       BlinkStrafe;                                              // 0x1200(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWaterInteractionComponent*                  WaterInteraction;                                         // 0x1208(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x1210(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAINameplateComponent*                       AINameplate;                                              // 0x1218(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SkeletonAudioComponent_C*                BP_SkeletonAudioComponent;                                // 0x1220(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNoiseMakerComponent*                        NoiseMaker;                                               // 0x1228(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_EnemyVFXComponent_C*                     BP_EnemyVFXComponent;                                     // 0x1230(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterFootImpactComponent*               CharacterFootImpact;                                      // 0x1238(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
