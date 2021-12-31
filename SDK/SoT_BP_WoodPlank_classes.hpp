#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WoodPlank_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WoodPlank.BP_WoodPlank_C
// 0x0028 (0x07D8 - 0x07B0)
class ABP_WoodPlank_C : public AWoodPlank
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x07B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	UUsableWieldableComponent*                         UsableWieldable;                                          // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UWieldableInteractableComponent*                   WieldableInteractable;                                    // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPickupableComponent*                              Pickupable;                                               // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UUsableComponent*                                  Usable;                                                   // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_WoodPlank.BP_WoodPlank_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WoodPlank(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
