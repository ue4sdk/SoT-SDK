// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MadameOlive_WildRose_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MadameOlive_WildRose.BP_MadameOlive_WildRose_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UBP_MadameOlive_WildRose_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MadameOlive_WildRose.BP_MadameOlive_WildRose_C.BlueprintInitializeAnimation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MadameOlive_WildRose.BP_MadameOlive_WildRose_C.ExecuteUbergraph_BP_MadameOlive_WildRose
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_MadameOlive_WildRose_C::ExecuteUbergraph_BP_MadameOlive_WildRose(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MadameOlive_WildRose.BP_MadameOlive_WildRose_C.ExecuteUbergraph_BP_MadameOlive_WildRose"));

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
