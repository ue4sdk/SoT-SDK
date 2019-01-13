#pragma once

// Sea of Thieves (1.4) SDK

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
// 0x0028 (0x0828 - 0x0800)
class ABP_WoodPlank_C : public AWoodPlank
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0800(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUsableWieldableComponent*                   UsableWieldable;                                          // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWieldableInteractableComponent*             WieldableInteractable;                                    // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPickupableComponent*                        Pickupable;                                               // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUsableComponent*                            Usable;                                                   // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_WoodPlank.BP_WoodPlank_C");
		return ptr;
	}


	class UClass* GetRepairType();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WoodPlank(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
