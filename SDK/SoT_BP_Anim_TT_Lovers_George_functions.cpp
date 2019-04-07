// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_TT_Lovers_George_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_TT_Lovers_George.BP_Anim_TT_Lovers_George_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_TT_Lovers_George_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_TT_Lovers_George.BP_Anim_TT_Lovers_George_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_TT_Lovers_George.BP_Anim_TT_Lovers_George_C.AnimNotify_BeginMaterialUpdate
// (BlueprintCallable, BlueprintEvent)

void UBP_Anim_TT_Lovers_George_C::AnimNotify_BeginMaterialUpdate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_TT_Lovers_George.BP_Anim_TT_Lovers_George_C.AnimNotify_BeginMaterialUpdate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_TT_Lovers_George.BP_Anim_TT_Lovers_George_C.AnimNotify_EndMaterialUpdate
// (BlueprintCallable, BlueprintEvent)

void UBP_Anim_TT_Lovers_George_C::AnimNotify_EndMaterialUpdate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_TT_Lovers_George.BP_Anim_TT_Lovers_George_C.AnimNotify_EndMaterialUpdate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_TT_Lovers_George.BP_Anim_TT_Lovers_George_C.ExecuteUbergraph_BP_Anim_TT_Lovers_George
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_TT_Lovers_George_C::ExecuteUbergraph_BP_Anim_TT_Lovers_George(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_TT_Lovers_George.BP_Anim_TT_Lovers_George_C.ExecuteUbergraph_BP_Anim_TT_Lovers_George"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_TT_Lovers_George.BP_Anim_TT_Lovers_George_C.CutsceneMaterialEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GhostOpacity                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          GhostBloom                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_TT_Lovers_George_C::CutsceneMaterialEventDispatcher__DelegateSignature(float GhostOpacity, float GhostBloom)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_TT_Lovers_George.BP_Anim_TT_Lovers_George_C.CutsceneMaterialEventDispatcher__DelegateSignature"));

	struct
	{
		float                          GhostOpacity;
		float                          GhostBloom;
	} params;

	params.GhostOpacity = GhostOpacity;
	params.GhostBloom = GhostBloom;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
