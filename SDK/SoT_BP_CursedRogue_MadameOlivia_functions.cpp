// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CursedRogue_MadameOlivia_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CursedRogue_MadameOlivia.BP_CursedRogue_MadameOlivia_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CursedRogue_MadameOlivia_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CursedRogue_MadameOlivia.BP_CursedRogue_MadameOlivia_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CursedRogue_MadameOlivia.BP_CursedRogue_MadameOlivia_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_CursedRogue_MadameOlivia_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CursedRogue_MadameOlivia.BP_CursedRogue_MadameOlivia_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CursedRogue_MadameOlivia.BP_CursedRogue_MadameOlivia_C.ExecuteUbergraph_BP_CursedRogue_MadameOlivia
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CursedRogue_MadameOlivia_C::ExecuteUbergraph_BP_CursedRogue_MadameOlivia(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CursedRogue_MadameOlivia.BP_CursedRogue_MadameOlivia_C.ExecuteUbergraph_BP_CursedRogue_MadameOlivia"));

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
