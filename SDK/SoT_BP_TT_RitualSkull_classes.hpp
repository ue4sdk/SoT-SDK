#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TT_RitualSkull_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TT_RitualSkull.BP_TT_RitualSkull_C
// 0x0020 (0x04D0 - 0x04B0)
class ABP_TT_RitualSkull_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TT_RitualSkull.BP_TT_RitualSkull_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetEmissiveGlow(float EmissiveScale);
	void ExecuteUbergraph_BP_TT_RitualSkull(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
