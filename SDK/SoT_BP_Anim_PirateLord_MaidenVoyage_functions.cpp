// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_PirateLord_MaidenVoyage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_PirateLord_MaidenVoyage.BP_Anim_PirateLord_MaidenVoyage_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_PirateLord_MaidenVoyage_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_PirateLord_MaidenVoyage.BP_Anim_PirateLord_MaidenVoyage_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_PirateLord_MaidenVoyage.BP_Anim_PirateLord_MaidenVoyage_C.AnimNotify_BeginCutsceneUpdates
// (BlueprintCallable, BlueprintEvent)

void UBP_Anim_PirateLord_MaidenVoyage_C::AnimNotify_BeginCutsceneUpdates()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_PirateLord_MaidenVoyage.BP_Anim_PirateLord_MaidenVoyage_C.AnimNotify_BeginCutsceneUpdates"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_PirateLord_MaidenVoyage.BP_Anim_PirateLord_MaidenVoyage_C.AnimNotify_EndMaterialUpdate
// (BlueprintCallable, BlueprintEvent)

void UBP_Anim_PirateLord_MaidenVoyage_C::AnimNotify_EndMaterialUpdate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_PirateLord_MaidenVoyage.BP_Anim_PirateLord_MaidenVoyage_C.AnimNotify_EndMaterialUpdate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_PirateLord_MaidenVoyage.BP_Anim_PirateLord_MaidenVoyage_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UBP_Anim_PirateLord_MaidenVoyage_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_PirateLord_MaidenVoyage.BP_Anim_PirateLord_MaidenVoyage_C.BlueprintInitializeAnimation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_PirateLord_MaidenVoyage.BP_Anim_PirateLord_MaidenVoyage_C.ExecuteUbergraph_BP_Anim_PirateLord_MaidenVoyage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_PirateLord_MaidenVoyage_C::ExecuteUbergraph_BP_Anim_PirateLord_MaidenVoyage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_PirateLord_MaidenVoyage.BP_Anim_PirateLord_MaidenVoyage_C.ExecuteUbergraph_BP_Anim_PirateLord_MaidenVoyage"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_PirateLord_MaidenVoyage.BP_Anim_PirateLord_MaidenVoyage_C.ShaderValuesUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GhostOpacity                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          GhostBloom                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_PirateLord_MaidenVoyage_C::ShaderValuesUpdated__DelegateSignature(float GhostOpacity, float GhostBloom)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_PirateLord_MaidenVoyage.BP_Anim_PirateLord_MaidenVoyage_C.ShaderValuesUpdated__DelegateSignature"));

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
