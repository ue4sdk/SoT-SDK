#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_StepsTrigger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_StepsTrigger.BP_StepsTrigger_C
// 0x0098 (0x05A8 - 0x0510)
class ABP_StepsTrigger_C : public ATavernStepsTrigger
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        bld_tavern_entrance_steps_lightshafts_01_a;               // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_tavern_stairs_symbol_glow;                            // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             Decal;                                                    // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_tavern_stairs_glow;                                   // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_tavern_stairs_falling_dust_under_ground;              // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_tavern_stairs_falling_dust2;                          // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_tavern_stairs_falling_dust1;                          // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_tavern_stairs_impact3;                                // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_tavern_stairs_impact2;                                // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_tavern_stairs_impact1;                                // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_tavern_stairs_impact;                                 // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_tavern_stairs_falling_dust;                           // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_AnimatedStepsComponent_C*                AnimatedStepsComponent;                                   // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box1;                                                     // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box3;                                                     // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box2;                                                     // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box0;                                                     // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPoseableSkeletalMeshComponent*              StepsMesh;                                                // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_StepsTrigger.BP_StepsTrigger_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_StepsTrigger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
