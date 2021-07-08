#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Blunderbuss_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Blunderbuss.BP_Blunderbuss_C
// 0x0030 (0x0A50 - 0x0A20)
class ABP_Blunderbuss_C : public AProjectileWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A20(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0A28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEmitterRelationship>                  sfx_relationship;                                         // 0x0A30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A31(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // 0x0A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     FiringVFX3rdPerson;                                       // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Blunderbuss_Firing_sfx_3rd_person;                        // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Blunderbuss.BP_Blunderbuss_C"));
		return ptr;
	}


	void SetScopeEffectOn(bool IsOn);
	void determine_sfx_relationship(TEnumAsByte<EEmitterRelationship>* Relationship);
	void DoFireEffect();
	void UserConstructionScript();
	void OnWeaponFired();
	void RadialBlurOn();
	void RadialBlurOff();
	void ExecuteUbergraph_BP_Blunderbuss(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
