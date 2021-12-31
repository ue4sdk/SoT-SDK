// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Concertina_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_Concertina.BP_Anim_Concertina_C.OnUseStarted
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// UClass*                        InputID                        (Parm, ZeroConstructor, IsPlainOldData)
// FWieldableItemActionVisuals    ActionVisuals                  (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Anim_Concertina_C::OnUseStarted(UClass* InputID, const FWieldableItemActionVisuals& ActionVisuals)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_Concertina.BP_Anim_Concertina_C.OnUseStarted"));

	UBP_Anim_Concertina_C_OnUseStarted_Params params;
	params.InputID = InputID;
	params.ActionVisuals = ActionVisuals;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_Concertina.BP_Anim_Concertina_C.OnUseStopped
// (Event, Public, BlueprintEvent)
// Parameters:
// UClass*                        InputID                        (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_Concertina_C::OnUseStopped(UClass* InputID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_Concertina.BP_Anim_Concertina_C.OnUseStopped"));

	UBP_Anim_Concertina_C_OnUseStopped_Params params;
	params.InputID = InputID;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_Concertina.BP_Anim_Concertina_C.ExecuteUbergraph_BP_Anim_Concertina
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_Concertina_C::ExecuteUbergraph_BP_Anim_Concertina(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_Concertina.BP_Anim_Concertina_C.ExecuteUbergraph_BP_Anim_Concertina"));

	UBP_Anim_Concertina_C_ExecuteUbergraph_BP_Anim_Concertina_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
