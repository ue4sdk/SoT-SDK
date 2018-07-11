// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_TreasureChest_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_TreasureChest.BP_Anim_TreasureChest_C.ExecuteUbergraph_BP_Anim_TreasureChest
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_TreasureChest_C::ExecuteUbergraph_BP_Anim_TreasureChest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_TreasureChest.BP_Anim_TreasureChest_C.ExecuteUbergraph_BP_Anim_TreasureChest");

	UBP_Anim_TreasureChest_C_ExecuteUbergraph_BP_Anim_TreasureChest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
