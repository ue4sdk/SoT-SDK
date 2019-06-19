// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Innkeeper_Tasha_LegendaryStoryteller_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Innkeeper_Tasha_LegendaryStoryteller.BP_Innkeeper_Tasha_LegendaryStoryteller_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Innkeeper_Tasha_LegendaryStoryteller_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Innkeeper_Tasha_LegendaryStoryteller.BP_Innkeeper_Tasha_LegendaryStoryteller_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Innkeeper_Tasha_LegendaryStoryteller.BP_Innkeeper_Tasha_LegendaryStoryteller_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Innkeeper_Tasha_LegendaryStoryteller_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Innkeeper_Tasha_LegendaryStoryteller.BP_Innkeeper_Tasha_LegendaryStoryteller_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Innkeeper_Tasha_LegendaryStoryteller.BP_Innkeeper_Tasha_LegendaryStoryteller_C.ExecuteUbergraph_BP_Innkeeper_Tasha_LegendaryStoryteller
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Innkeeper_Tasha_LegendaryStoryteller_C::ExecuteUbergraph_BP_Innkeeper_Tasha_LegendaryStoryteller(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Innkeeper_Tasha_LegendaryStoryteller.BP_Innkeeper_Tasha_LegendaryStoryteller_C.ExecuteUbergraph_BP_Innkeeper_Tasha_LegendaryStoryteller"));

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
