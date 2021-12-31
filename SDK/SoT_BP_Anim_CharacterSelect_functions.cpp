// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_CharacterSelect_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UBP_Anim_CharacterSelect_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.BlueprintInitializeAnimation"));

	UBP_Anim_CharacterSelect_C_BlueprintInitializeAnimation_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.AnimNotify_SelectedCameraZoom
// (BlueprintCallable, BlueprintEvent)

void UBP_Anim_CharacterSelect_C::AnimNotify_SelectedCameraZoom()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.AnimNotify_SelectedCameraZoom"));

	UBP_Anim_CharacterSelect_C_AnimNotify_SelectedCameraZoom_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.AnimNotify_BeginFade
// (BlueprintCallable, BlueprintEvent)

void UBP_Anim_CharacterSelect_C::AnimNotify_BeginFade()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.AnimNotify_BeginFade"));

	UBP_Anim_CharacterSelect_C_AnimNotify_BeginFade_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.ExecuteUbergraph_BP_Anim_CharacterSelect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_CharacterSelect_C::ExecuteUbergraph_BP_Anim_CharacterSelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.ExecuteUbergraph_BP_Anim_CharacterSelect"));

	UBP_Anim_CharacterSelect_C_ExecuteUbergraph_BP_Anim_CharacterSelect_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
