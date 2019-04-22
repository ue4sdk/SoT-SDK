// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_PirateLord_standing_TallTales_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_PirateLord_standing_TallTales.BP_Anim_PirateLord_standing_TallTales_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_PirateLord_standing_TallTales_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_PirateLord_standing_TallTales.BP_Anim_PirateLord_standing_TallTales_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_PirateLord_standing_TallTales.BP_Anim_PirateLord_standing_TallTales_C.AnimNotify_BeginCutsceneUpdates
// (BlueprintCallable, BlueprintEvent)

void UBP_Anim_PirateLord_standing_TallTales_C::AnimNotify_BeginCutsceneUpdates()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_PirateLord_standing_TallTales.BP_Anim_PirateLord_standing_TallTales_C.AnimNotify_BeginCutsceneUpdates"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_PirateLord_standing_TallTales.BP_Anim_PirateLord_standing_TallTales_C.AnimNotify_EndCutsceneUpdates
// (BlueprintCallable, BlueprintEvent)

void UBP_Anim_PirateLord_standing_TallTales_C::AnimNotify_EndCutsceneUpdates()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_PirateLord_standing_TallTales.BP_Anim_PirateLord_standing_TallTales_C.AnimNotify_EndCutsceneUpdates"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_PirateLord_standing_TallTales.BP_Anim_PirateLord_standing_TallTales_C.ExecuteUbergraph_BP_Anim_PirateLord_standing_TallTales
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_PirateLord_standing_TallTales_C::ExecuteUbergraph_BP_Anim_PirateLord_standing_TallTales(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_PirateLord_standing_TallTales.BP_Anim_PirateLord_standing_TallTales_C.ExecuteUbergraph_BP_Anim_PirateLord_standing_TallTales"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_PirateLord_standing_TallTales.BP_Anim_PirateLord_standing_TallTales_C.ShaderValuesUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GhostOpacity                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          GhostBloom                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_PirateLord_standing_TallTales_C::ShaderValuesUpdated__DelegateSignature(float GhostOpacity, float GhostBloom)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_PirateLord_standing_TallTales.BP_Anim_PirateLord_standing_TallTales_C.ShaderValuesUpdated__DelegateSignature"));

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
