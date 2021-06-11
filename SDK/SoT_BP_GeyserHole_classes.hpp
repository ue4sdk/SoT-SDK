#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_GeyserHole_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GeyserHole.BP_GeyserHole_C
// 0x0030 (0x04D0 - 0x04A0)
class ABP_GeyserHole_C : public AShovelHole
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        CrackMesh;                                                // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             CrackDecal;                                               // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SharedRoot;                                               // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MeshDynamicMaterial;                                      // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DecalDynamicMaterial;                                     // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_GeyserHole.BP_GeyserHole_C"));
		return ptr;
	}


	void SetFadeOutParameters(float FadeTime);
	void SetFadeInParameters(float FadeTime);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnStateChanged(TEnumAsByte<EHoleState> InState);
	void ExecuteUbergraph_BP_GeyserHole(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
