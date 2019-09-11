// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_TT_Shores_Base_Human_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_TT_Shores_Base_Human.BP_Anim_TT_Shores_Base_Human_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_TT_Shores_Base_Human_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_TT_Shores_Base_Human.BP_Anim_TT_Shores_Base_Human_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_TT_Shores_Base_Human.BP_Anim_TT_Shores_Base_Human_C.ExecuteUbergraph_BP_Anim_TT_Shores_Base_Human
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_TT_Shores_Base_Human_C::ExecuteUbergraph_BP_Anim_TT_Shores_Base_Human(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_TT_Shores_Base_Human.BP_Anim_TT_Shores_Base_Human_C.ExecuteUbergraph_BP_Anim_TT_Shores_Base_Human"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_TT_Shores_Base_Human.BP_Anim_TT_Shores_Base_Human_C.ShaderValuesUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GhostOpacity                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          GhostBloom                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ShroudOpacity                  (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_TT_Shores_Base_Human_C::ShaderValuesUpdated__DelegateSignature(float GhostOpacity, float GhostBloom, float ShroudOpacity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_TT_Shores_Base_Human.BP_Anim_TT_Shores_Base_Human_C.ShaderValuesUpdated__DelegateSignature"));

	struct
	{
		float                          GhostOpacity;
		float                          GhostBloom;
		float                          ShroudOpacity;
	} params;

	params.GhostOpacity = GhostOpacity;
	params.GhostBloom = GhostBloom;
	params.ShroudOpacity = ShroudOpacity;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
