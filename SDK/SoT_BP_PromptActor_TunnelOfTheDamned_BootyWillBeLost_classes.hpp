#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_TunnelOfTheDamned_BootyWillBeLost_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PromptActor_TunnelOfTheDamned_BootyWillBeLost.BP_PromptActor_TunnelOfTheDamned_BootyWillBeLost_C
// 0x0010 (0x0418 - 0x0408)
class ABP_PromptActor_TunnelOfTheDamned_BootyWillBeLost_C : public ABP_PromptActorBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C* PromptCoordinator;                                        // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PromptActor_TunnelOfTheDamned_BootyWillBeLost.BP_PromptActor_TunnelOfTheDamned_BootyWillBeLost_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_PromptActor_TunnelOfTheDamned_BootyWillBeLost(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
