#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShovelHole_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShovelHole.BP_ShovelHole_C
// 0x0030 (0x04D0 - 0x04A0)
class ABP_ShovelHole_C : public AShovelHole
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                             DirtDecal;                                                // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        DirtPile;                                                 // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MeshDynamicMaterial;                                      // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DecalDynamicMaterial;                                     // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ShovelHole.BP_ShovelHole_C"));
		return ptr;
	}


	void SetFadeInParameters(float FadeTime);
	void SetFadeOutParameters(float FadeTime);
	void UserConstructionScript();
	void OnStateChanged(TEnumAsByte<EHoleState> InState);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ShovelHole(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
