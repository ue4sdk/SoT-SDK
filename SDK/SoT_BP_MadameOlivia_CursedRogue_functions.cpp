// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MadameOlivia_CursedRogue_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MadameOlivia_CursedRogue.BP_MadameOlivia_CursedRogue_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UBP_MadameOlivia_CursedRogue_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MadameOlivia_CursedRogue.BP_MadameOlivia_CursedRogue_C.BlueprintInitializeAnimation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MadameOlivia_CursedRogue.BP_MadameOlivia_CursedRogue_C.ExecuteUbergraph_BP_MadameOlivia_CursedRogue
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_MadameOlivia_CursedRogue_C::ExecuteUbergraph_BP_MadameOlivia_CursedRogue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MadameOlivia_CursedRogue.BP_MadameOlivia_CursedRogue_C.ExecuteUbergraph_BP_MadameOlivia_CursedRogue"));

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
