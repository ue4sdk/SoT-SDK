// Sea of Thieves (1.1.6) SDK

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
// class UClass**                 InputID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FWieldableItemActionVisuals* ActionVisuals                  (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Anim_Concertina_C::OnUseStarted(class UClass** InputID, struct FWieldableItemActionVisuals* ActionVisuals)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_Concertina.BP_Anim_Concertina_C.OnUseStarted");

	UBP_Anim_Concertina_C_OnUseStarted_Params params;
	params.InputID = InputID;
	params.ActionVisuals = ActionVisuals;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Anim_Concertina.BP_Anim_Concertina_C.OnUseStopped
// (Event, Public, BlueprintEvent)
// Parameters:
// class UClass**                 InputID                        (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_Concertina_C::OnUseStopped(class UClass** InputID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_Concertina.BP_Anim_Concertina_C.OnUseStopped");

	UBP_Anim_Concertina_C_OnUseStopped_Params params;
	params.InputID = InputID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Anim_Concertina.BP_Anim_Concertina_C.ExecuteUbergraph_BP_Anim_Concertina
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_Concertina_C::ExecuteUbergraph_BP_Anim_Concertina(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_Concertina.BP_Anim_Concertina_C.ExecuteUbergraph_BP_Anim_Concertina");

	UBP_Anim_Concertina_C_ExecuteUbergraph_BP_Anim_Concertina_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
