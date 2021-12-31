#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_MapBundle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PromptActor_MapBundle.BP_PromptActor_MapBundle_C
// 0x0010 (0x0418 - 0x0408)
class ABP_PromptActor_MapBundle_C : public ABP_PromptActorBase_C
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0408(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	UBP_Prompt_MapBundle_C*                            PromptCoordinator;                                        // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PromptActor_MapBundle.BP_PromptActor_MapBundle_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_PromptActor_MapBundle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
