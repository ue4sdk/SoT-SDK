#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_EyeOfReach_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_EyeOfReach.BP_EyeOfReach_C
// 0x0060 (0x0AB0 - 0x0A50)
class ABP_EyeOfReach_C : public AProjectileWeapon
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0A50(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	UStaticMeshComponent*                              Glint;                                                    // 0x0A58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPostProcessComponent*                             PostProcess;                                              // 0x0A60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEmitterRelationship>                  sfx_relationship;                                         // 0x0A68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A69(0x0007) MISSED OFFSET
	UMaterialInstanceDynamic*                          DynamicMaterial;                                          // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurningOn;                                                // 0x0A78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A79(0x0003) MISSED OFFSET
	float                                              BlurTime;                                                 // 0x0A7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlurInDuration;                                           // 0x0A80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlurOutDuration;                                          // 0x0A84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UCurveFloat*                                       BlurCurve;                                                // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UTexture2D*                                        LensNormal;                                               // 0x0A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UTexture2D*                                        LensMask;                                                 // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FLinearColor                                       LensTint;                                                 // 0x0AA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_EyeOfReach.BP_EyeOfReach_C"));
		return ptr;
	}


	void determine_sfx_relationship(TEnumAsByte<EEmitterRelationship>* Relationship);
	void DoFireEffect();
	void UserConstructionScript();
	void OnWeaponFired();
	void ScopeOn();
	void ScopeOff();
	void ScopeTick(float DeltaSeconds);
	void ScopeOffImmediate();
	void GlintOn();
	void GlintOff();
	void ExecuteUbergraph_BP_EyeOfReach(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
