// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_TT_RitualSkullMain_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_TT_RitualSkullMain.BP_Anim_TT_RitualSkullMain_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_TT_RitualSkullMain_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_TT_RitualSkullMain.BP_Anim_TT_RitualSkullMain_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_TT_RitualSkullMain.BP_Anim_TT_RitualSkullMain_C.ExecuteUbergraph_BP_Anim_TT_RitualSkullMain
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_TT_RitualSkullMain_C::ExecuteUbergraph_BP_Anim_TT_RitualSkullMain(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_TT_RitualSkullMain.BP_Anim_TT_RitualSkullMain_C.ExecuteUbergraph_BP_Anim_TT_RitualSkullMain"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_TT_RitualSkullMain.BP_Anim_TT_RitualSkullMain_C.SkullEmissiveEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          EmissiveScale                  (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_TT_RitualSkullMain_C::SkullEmissiveEventDispatcher__DelegateSignature(float EmissiveScale)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_TT_RitualSkullMain.BP_Anim_TT_RitualSkullMain_C.SkullEmissiveEventDispatcher__DelegateSignature"));

	struct
	{
		float                          EmissiveScale;
	} params;

	params.EmissiveScale = EmissiveScale;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
