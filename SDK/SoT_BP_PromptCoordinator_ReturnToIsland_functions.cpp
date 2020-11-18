// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptCoordinator_ReturnToIsland_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PromptCoordinator_ReturnToIsland.BP_PromptCoordinator_ReturnToIsland_C.SetOutsideIslandSafeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InState                        (Parm, ZeroConstructor, IsPlainOldData)

void UBP_PromptCoordinator_ReturnToIsland_C::SetOutsideIslandSafeZone(bool InState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_ReturnToIsland.BP_PromptCoordinator_ReturnToIsland_C.SetOutsideIslandSafeZone"));

	struct
	{
		bool                           InState;
	} params;

	params.InState = InState;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_ReturnToIsland.BP_PromptCoordinator_ReturnToIsland_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptCoordinator_ReturnToIsland_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_ReturnToIsland.BP_PromptCoordinator_ReturnToIsland_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptCoordinator_ReturnToIsland.BP_PromptCoordinator_ReturnToIsland_C.ExecuteUbergraph_BP_PromptCoordinator_ReturnToIsland
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_PromptCoordinator_ReturnToIsland_C::ExecuteUbergraph_BP_PromptCoordinator_ReturnToIsland(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptCoordinator_ReturnToIsland.BP_PromptCoordinator_ReturnToIsland_C.ExecuteUbergraph_BP_PromptCoordinator_ReturnToIsland"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
