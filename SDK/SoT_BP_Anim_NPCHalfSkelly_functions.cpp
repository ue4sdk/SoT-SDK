// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_NPCHalfSkelly_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_NPCHalfSkelly.BP_Anim_NPCHalfSkelly_C.AnimNotify_WakeUpSkelly
// (BlueprintCallable, BlueprintEvent)

void UBP_Anim_NPCHalfSkelly_C::AnimNotify_WakeUpSkelly()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_NPCHalfSkelly.BP_Anim_NPCHalfSkelly_C.AnimNotify_WakeUpSkelly"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_NPCHalfSkelly.BP_Anim_NPCHalfSkelly_C.ExecuteUbergraph_BP_Anim_NPCHalfSkelly
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_NPCHalfSkelly_C::ExecuteUbergraph_BP_Anim_NPCHalfSkelly(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_NPCHalfSkelly.BP_Anim_NPCHalfSkelly_C.ExecuteUbergraph_BP_Anim_NPCHalfSkelly"));

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
