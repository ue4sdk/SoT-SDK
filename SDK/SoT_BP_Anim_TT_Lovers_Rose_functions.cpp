// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_TT_Lovers_Rose_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_TT_Lovers_Rose.BP_Anim_TT_Lovers_Rose_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_TT_Lovers_Rose_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_TT_Lovers_Rose.BP_Anim_TT_Lovers_Rose_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_TT_Lovers_Rose.BP_Anim_TT_Lovers_Rose_C.AnimNotify_BeginMaterialUpdate
// (BlueprintCallable, BlueprintEvent)

void UBP_Anim_TT_Lovers_Rose_C::AnimNotify_BeginMaterialUpdate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_TT_Lovers_Rose.BP_Anim_TT_Lovers_Rose_C.AnimNotify_BeginMaterialUpdate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_TT_Lovers_Rose.BP_Anim_TT_Lovers_Rose_C.AnimNotify_EndMaterialUpdate
// (BlueprintCallable, BlueprintEvent)

void UBP_Anim_TT_Lovers_Rose_C::AnimNotify_EndMaterialUpdate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_TT_Lovers_Rose.BP_Anim_TT_Lovers_Rose_C.AnimNotify_EndMaterialUpdate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_TT_Lovers_Rose.BP_Anim_TT_Lovers_Rose_C.ExecuteUbergraph_BP_Anim_TT_Lovers_Rose
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_TT_Lovers_Rose_C::ExecuteUbergraph_BP_Anim_TT_Lovers_Rose(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_TT_Lovers_Rose.BP_Anim_TT_Lovers_Rose_C.ExecuteUbergraph_BP_Anim_TT_Lovers_Rose"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_TT_Lovers_Rose.BP_Anim_TT_Lovers_Rose_C.CutsceneMaterialEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeAmount                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          BloomAmount                    (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_TT_Lovers_Rose_C::CutsceneMaterialEventDispatcher__DelegateSignature(float FadeAmount, float BloomAmount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_TT_Lovers_Rose.BP_Anim_TT_Lovers_Rose_C.CutsceneMaterialEventDispatcher__DelegateSignature"));

	struct
	{
		float                          FadeAmount;
		float                          BloomAmount;
	} params;

	params.FadeAmount = FadeAmount;
	params.BloomAmount = BloomAmount;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
