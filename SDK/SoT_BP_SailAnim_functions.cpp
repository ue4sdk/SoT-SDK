// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SailAnim_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SailAnim.BP_SailAnim_C.Set Billow Animation Rate
// (BlueprintCallable, BlueprintEvent)

void UBP_SailAnim_C::Set_Billow_Animation_Rate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SailAnim.BP_SailAnim_C.Set Billow Animation Rate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SailAnim.BP_SailAnim_C.InitialiseSail
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PlayRateMultiplier             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           MainSail                       (Parm, ZeroConstructor, IsPlainOldData)

void UBP_SailAnim_C::InitialiseSail(float PlayRateMultiplier, bool MainSail)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SailAnim.BP_SailAnim_C.InitialiseSail"));

	struct
	{
		float                          PlayRateMultiplier;
		bool                           MainSail;
	} params;

	params.PlayRateMultiplier = PlayRateMultiplier;
	params.MainSail = MainSail;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SailAnim.BP_SailAnim_C.ExecuteUbergraph_BP_SailAnim
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_SailAnim_C::ExecuteUbergraph_BP_SailAnim(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SailAnim.BP_SailAnim_C.ExecuteUbergraph_BP_SailAnim"));

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
