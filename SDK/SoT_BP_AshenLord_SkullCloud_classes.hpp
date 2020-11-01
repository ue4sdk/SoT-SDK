#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AshenLord_SkullCloud_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C
// 0x0038 (0x0560 - 0x0528)
class ABP_AshenLord_SkullCloud_C : public ABP_NonRotatableSignalCloud_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0528(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        lightning_bolt_03_a;                                      // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        lightning_bolt_02_a;                                      // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        lightning_bolt_01_a;                                      // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        vfx_tornado_ribbons;                                      // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                         // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C"));
		return ptr;
	}


	void CollectMaterials();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void UpdateMaterialVisibility(const struct FLinearColor& SignalVisibilityLerpValue);
	void ExecuteUbergraph_BP_AshenLord_SkullCloud(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
