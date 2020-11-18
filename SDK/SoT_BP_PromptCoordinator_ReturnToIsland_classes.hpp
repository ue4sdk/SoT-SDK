#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptCoordinator_ReturnToIsland_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PromptCoordinator_ReturnToIsland.BP_PromptCoordinator_ReturnToIsland_C
// 0x0078 (0x0190 - 0x0118)
class UBP_PromptCoordinator_ReturnToIsland_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               OutsideIslandSafeZone;                                    // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	struct FPrioritisedPromptWithHandle                ReturnToIslandPrompt;                                     // 0x0128(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PromptCoordinator_ReturnToIsland.BP_PromptCoordinator_ReturnToIsland_C"));
		return ptr;
	}


	void SetOutsideIslandSafeZone(bool InState);
	void Evaluate();
	void ExecuteUbergraph_BP_PromptCoordinator_ReturnToIsland(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
