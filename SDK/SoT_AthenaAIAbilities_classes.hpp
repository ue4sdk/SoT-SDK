#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaAIAbilities_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaAIAbilities.AreaOfEffectHealAIAbilityType
// 0x0000 (0x0028 - 0x0028)
class UAreaOfEffectHealAIAbilityType : public UAthenaAIAbilityType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.AreaOfEffectHealAIAbilityType"));
		return ptr;
	}

};


// Class AthenaAIAbilities.MeleeAIAbilityType
// 0x0000 (0x0028 - 0x0028)
class UMeleeAIAbilityType : public UAthenaAIAbilityType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.MeleeAIAbilityType"));
		return ptr;
	}

};


// Class AthenaAIAbilities.AreaOfEffectHealAIAbility
// 0x0028 (0x00A0 - 0x0078)
class UAreaOfEffectHealAIAbility : public UAthenaAIAbility
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET
	AActor*                                            HealAreaOfEffectActor;                                    // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.AreaOfEffectHealAIAbility"));
		return ptr;
	}

};


// Class AthenaAIAbilities.AreaOfEffectHealAIAbilityParams
// 0x0018 (0x00E0 - 0x00C8)
class UAreaOfEffectHealAIAbilityParams : public UAthenaAIAbilityParams
{
public:
	float                                              ChanceToGoOnCooldownInsteadOfExecuting;                   // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthPercentageThresholdToHeal;                          // 0x00CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UClass*                                            StatusEffectZone;                                         // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumTimeSpentHealing;                                  // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumTimeSpentHealing;                                  // 0x00DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.AreaOfEffectHealAIAbilityParams"));
		return ptr;
	}

};


// Class AthenaAIAbilities.AshenFireStatus
// 0x0000 (0x0030 - 0x0030)
class UAshenFireStatus : public UStatusBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.AshenFireStatus"));
		return ptr;
	}

};


// Class AthenaAIAbilities.BullRushAIAbilityType
// 0x0000 (0x0028 - 0x0028)
class UBullRushAIAbilityType : public UAthenaAIAbilityType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.BullRushAIAbilityType"));
		return ptr;
	}

};


// Class AthenaAIAbilities.BurrowEruptDamagerType
// 0x0000 (0x0028 - 0x0028)
class UBurrowEruptDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.BurrowEruptDamagerType"));
		return ptr;
	}

};


// Class AthenaAIAbilities.BurrowHealVFXComponent
// 0x0050 (0x0118 - 0x00C8)
class UBurrowHealVFXComponent : public UActorComponent
{
public:
	UParticleSystem*                                   VFXAsset;                                                 // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                              VfxSocketName;                                            // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VFXDuration;                                              // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	UParticleSystemComponent*                          SpawnedVFXSystem;                                         // 0x00E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsVFXActive;                                              // 0x00E8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2F];                                      // 0x00E9(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.BurrowHealVFXComponent"));
		return ptr;
	}


	void OnRep_IsVFXActive();
};


// Class AthenaAIAbilities.CoralShieldStatus
// 0x0000 (0x0030 - 0x0030)
class UCoralShieldStatus : public UStatusBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.CoralShieldStatus"));
		return ptr;
	}

};


// Class AthenaAIAbilities.EelSlapAIAbilityType
// 0x0000 (0x0028 - 0x0028)
class UEelSlapAIAbilityType : public UAthenaAIAbilityType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.EelSlapAIAbilityType"));
		return ptr;
	}

};


// Class AthenaAIAbilities.EelSlapStatus
// 0x0000 (0x0030 - 0x0030)
class UEelSlapStatus : public UStatusBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.EelSlapStatus"));
		return ptr;
	}

};


// Class AthenaAIAbilities.EelThrowAIAbility
// 0x0008 (0x0080 - 0x0078)
class UEelThrowAIAbility : public UAthenaAIAbility
{
public:
	UBlackboardComponent*                              CachedBlackboardComponent;                                // 0x0078(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.EelThrowAIAbility"));
		return ptr;
	}

};


// Class AthenaAIAbilities.EelThrowAIAbilityParams
// 0x0020 (0x00E8 - 0x00C8)
class UEelThrowAIAbilityParams : public UAthenaAIAbilityParams
{
public:
	FWeightedProbabilityRange                          MinMaxNumberOfAttacksBeforeEnd;                           // 0x00C8(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.EelThrowAIAbilityParams"));
		return ptr;
	}

};


// Class AthenaAIAbilities.EelThrowAIAbilityType
// 0x0000 (0x0028 - 0x0028)
class UEelThrowAIAbilityType : public UAthenaAIAbilityType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.EelThrowAIAbilityType"));
		return ptr;
	}

};


// Class AthenaAIAbilities.ElectricShieldBuffInterface
// 0x0000 (0x0028 - 0x0028)
class UElectricShieldBuffInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.ElectricShieldBuffInterface"));
		return ptr;
	}

};


// Class AthenaAIAbilities.ElectricShieldBuffComponent
// 0x00F0 (0x01B8 - 0x00C8)
class UElectricShieldBuffComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	UParticleSystem*                                   ShieldVFXAsset;                                           // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                              VfxSocketName;                                            // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UWwiseEvent*                                       StartAudioLoopEvent;                                      // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UWwiseEvent*                                       StopAudioLoopEvent;                                       // 0x00E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsShieldActive;                                           // 0x00F0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	UParticleSystemComponent*                          ShieldEffectComponent;                                    // 0x00F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB8];                                      // 0x0100(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.ElectricShieldBuffComponent"));
		return ptr;
	}


	void OnRep_IsShieldActive();
	void DeactivateShield();
};


// Class AthenaAIAbilities.ElectricShieldStatus
// 0x0000 (0x0030 - 0x0030)
class UElectricShieldStatus : public UStatusBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.ElectricShieldStatus"));
		return ptr;
	}

};


// Class AthenaAIAbilities.ImpactMeleeAttackEelSlapId
// 0x0000 (0x0028 - 0x0028)
class UImpactMeleeAttackEelSlapId : public UImpactProjectileId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.ImpactMeleeAttackEelSlapId"));
		return ptr;
	}

};


// Class AthenaAIAbilities.MeleeAIAbility
// 0x0008 (0x0080 - 0x0078)
class UMeleeAIAbility : public UAthenaAIAbility
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.MeleeAIAbility"));
		return ptr;
	}

};


// Class AthenaAIAbilities.MeleeAttackId
// 0x0000 (0x0028 - 0x0028)
class UMeleeAttackId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.MeleeAttackId"));
		return ptr;
	}

};


// Class AthenaAIAbilities.MeleeAIAbilityParams
// 0x0010 (0x00D8 - 0x00C8)
class UMeleeAIAbilityParams : public UAthenaAIAbilityParams
{
public:
	TArray<FMeleeAttackIdWeights>                      MeleeAttacks;                                             // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.MeleeAIAbilityParams"));
		return ptr;
	}

};


// Class AthenaAIAbilities.EelSlapAIAbilityParams
// 0x0000 (0x00D8 - 0x00D8)
class UEelSlapAIAbilityParams : public UMeleeAIAbilityParams
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.EelSlapAIAbilityParams"));
		return ptr;
	}

};


// Class AthenaAIAbilities.EelSlapAIAbility
// 0x0000 (0x0080 - 0x0080)
class UEelSlapAIAbility : public UMeleeAIAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.EelSlapAIAbility"));
		return ptr;
	}

};


// Class AthenaAIAbilities.ComboMeleeAttackId
// 0x0000 (0x0028 - 0x0028)
class UComboMeleeAttackId : public UMeleeAttackId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.ComboMeleeAttackId"));
		return ptr;
	}

};


// Class AthenaAIAbilities.HeavyMeleeAttackId
// 0x0000 (0x0028 - 0x0028)
class UHeavyMeleeAttackId : public UMeleeAttackId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.HeavyMeleeAttackId"));
		return ptr;
	}

};


// Class AthenaAIAbilities.LightMeleeAttackId
// 0x0000 (0x0028 - 0x0028)
class ULightMeleeAttackId : public UMeleeAttackId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.LightMeleeAttackId"));
		return ptr;
	}

};


// Class AthenaAIAbilities.BullRushAIAbilityParams
// 0x0020 (0x0100 - 0x00E0)
class UBullRushAIAbilityParams : public UMeleeChargeAIAbilityParams
{
public:
	float                                              StaticCollisionWarmup;                                    // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	TArray<UEnvQuery*>                                 ValidatorEQSystems;                                       // 0x00E8(0x0010) (Edit, ZeroConstructor)
	float                                              TimeBetweenCanExecuteChecks;                              // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.BullRushAIAbilityParams"));
		return ptr;
	}

};


// Class AthenaAIAbilities.BullRushAIAbility
// 0x0020 (0x00B8 - 0x0098)
class UBullRushAIAbility : public UMeleeChargeAIAbility
{
public:
	UWorld*                                            CachedWorld;                                              // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00A0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.BullRushAIAbility"));
		return ptr;
	}

};


// Class AthenaAIAbilities.MeleeCollisionAwarenessInterface
// 0x0000 (0x0028 - 0x0028)
class UMeleeCollisionAwarenessInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.MeleeCollisionAwarenessInterface"));
		return ptr;
	}

};


// Class AthenaAIAbilities.SporeCloudStatus
// 0x0000 (0x0030 - 0x0030)
class USporeCloudStatus : public UStatusBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.SporeCloudStatus"));
		return ptr;
	}

};


// Class AthenaAIAbilities.SporeExposureInterface
// 0x0000 (0x0028 - 0x0028)
class USporeExposureInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.SporeExposureInterface"));
		return ptr;
	}

};


// Class AthenaAIAbilities.SporeExposureComponent
// 0x0038 (0x0100 - 0x00C8)
class USporeExposureComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00C8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.SporeExposureComponent"));
		return ptr;
	}

};


// Class AthenaAIAbilities.SporeExposureStatus
// 0x0000 (0x0030 - 0x0030)
class USporeExposureStatus : public UStatusBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.SporeExposureStatus"));
		return ptr;
	}

};


// Class AthenaAIAbilities.StatusResponseActivateElectricShield
// 0x0008 (0x0038 - 0x0030)
class UStatusResponseActivateElectricShield : public UStatusResponse
{
public:
	float                                              Duration;                                                 // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.StatusResponseActivateElectricShield"));
		return ptr;
	}

};


// Class AthenaAIAbilities.StatusResponseShowBurrowHealVFX
// 0x0000 (0x0030 - 0x0030)
class UStatusResponseShowBurrowHealVFX : public UStatusResponse
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.StatusResponseShowBurrowHealVFX"));
		return ptr;
	}

};


// Class AthenaAIAbilities.StatusResponseShowCoralShieldVFX
// 0x0000 (0x0030 - 0x0030)
class UStatusResponseShowCoralShieldVFX : public UStatusResponse
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.StatusResponseShowCoralShieldVFX"));
		return ptr;
	}

};


// Class AthenaAIAbilities.StatusResponseSporeCloud
// 0x0000 (0x0030 - 0x0030)
class UStatusResponseSporeCloud : public UStatusResponse
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.StatusResponseSporeCloud"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
