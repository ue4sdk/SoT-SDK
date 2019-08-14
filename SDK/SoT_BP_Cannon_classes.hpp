#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Cannon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Cannon.BP_Cannon_C
// 0x0020 (0x0BC8 - 0x0BA8)
class ABP_Cannon_C : public ACannon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UGroupedInteractableAreaComponent*           GroupedInteractableArea;                                  // 0x0BB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x0BB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Collision;                                                // 0x0BC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Cannon.BP_Cannon_C"));
		return ptr;
	}


	struct FDockableInfo GetDockableInfo();
	void UserConstructionScript();
	void OnCannonDescLoaded(class UCannonDescAsset* CannonDesc);
	void ExecuteUbergraph_BP_Cannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
