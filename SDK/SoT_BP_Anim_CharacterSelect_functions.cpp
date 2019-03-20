// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_CharacterSelect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_CharacterSelect_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UBP_Anim_CharacterSelect_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.BlueprintInitializeAnimation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.AnimNotify_SelectedCameraZoom
// (BlueprintCallable, BlueprintEvent)

void UBP_Anim_CharacterSelect_C::AnimNotify_SelectedCameraZoom()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.AnimNotify_SelectedCameraZoom"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.AnimNotify_BeginFade
// (BlueprintCallable, BlueprintEvent)

void UBP_Anim_CharacterSelect_C::AnimNotify_BeginFade()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.AnimNotify_BeginFade"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.ExecuteUbergraph_BP_Anim_CharacterSelect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_CharacterSelect_C::ExecuteUbergraph_BP_Anim_CharacterSelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C.ExecuteUbergraph_BP_Anim_CharacterSelect"));

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
