// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_ReviveGhost_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_ReviveGhost.BP_Anim_ReviveGhost_C.AnimNotify_OutOfComplete
// (BlueprintCallable, BlueprintEvent)

void UBP_Anim_ReviveGhost_C::AnimNotify_OutOfComplete()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_ReviveGhost.BP_Anim_ReviveGhost_C.AnimNotify_OutOfComplete"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_ReviveGhost.BP_Anim_ReviveGhost_C.ExecuteUbergraph_BP_Anim_ReviveGhost
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_ReviveGhost_C::ExecuteUbergraph_BP_Anim_ReviveGhost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_ReviveGhost.BP_Anim_ReviveGhost_C.ExecuteUbergraph_BP_Anim_ReviveGhost"));

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
