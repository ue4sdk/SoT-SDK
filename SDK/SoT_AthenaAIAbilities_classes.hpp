#pragma once

// Sea of Thieves (2.0) SDK

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


// Class AthenaAIAbilities.AIAbilityVulnerableStatus
// 0x0000 (0x0030 - 0x0030)
class UAIAbilityVulnerableStatus : public UStatusBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.AIAbilityVulnerableStatus"));
		return ptr;
	}

};


// Class AthenaAIAbilities.AreaOfEffectHealAIAbility
// 0x0028 (0x0098 - 0x0070)
class UAreaOfEffectHealAIAbility : public UAthenaAIAbility
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
	class AActor*                                      HealAreaOfEffectActor;                                    // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.AreaOfEffectHealAIAbility"));
		return ptr;
	}

};


// Class AthenaAIAbilities.AreaOfEffectHealAIAbilityParams
// 0x0018 (0x00C0 - 0x00A8)
class UAreaOfEffectHealAIAbilityParams : public UAthenaAIAbilityParams
{
public:
	float                                              HealthPercentageThresholdToHeal;                          // 0x00A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	class UClass*                                      StatusEffectZone;                                         // 0x00B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumTimeSpentHealing;                                  // 0x00B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumTimeSpentHealing;                                  // 0x00BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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


// Class AthenaAIAbilities.BurrowCrack
// 0x0040 (0x04B0 - 0x0470)
class ABurrowCrack : public AActor
{
public:
	class USceneComponent*                             DefaultSceneComponent;                                    // 0x0470(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             DecalComponent;                                           // 0x0478(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              FadeOutTimeSeconds;                                       // 0x0480(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               HasFadeStarted;                                           // 0x0484(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2B];                                      // 0x0485(0x002B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.BurrowCrack"));
		return ptr;
	}


	void OnRep_StartFadeAndLifeSpan();
	void OnLifeSpanPercentLeft(float PercentLeft);
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
// 0x0060 (0x0128 - 0x00C8)
class UElectricShieldBuffComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	bool                                               IsShieldActive;                                           // 0x00D0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x57];                                      // 0x00D1(0x0057) MISSED OFFSET

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


// Class AthenaAIAbilities.MeleeAIAbility
// 0x0008 (0x0078 - 0x0070)
class UMeleeAIAbility : public UAthenaAIAbility
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

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
// 0x0010 (0x00B8 - 0x00A8)
class UMeleeAIAbilityParams : public UAthenaAIAbilityParams
{
public:
	TArray<struct FMeleeAttackIdWeights>               MeleeAttacks;                                             // 0x00A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.MeleeAIAbilityParams"));
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
