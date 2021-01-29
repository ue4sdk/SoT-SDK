// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Waterfall_Devils_DynamicFlow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Waterfall_Devils_DynamicFlow.BP_Waterfall_Devils_DynamicFlow_C.Initialize Materials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Waterfall_Devils_DynamicFlow_C::Initialize_Materials()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Waterfall_Devils_DynamicFlow.BP_Waterfall_Devils_DynamicFlow_C.Initialize Materials"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Waterfall_Devils_DynamicFlow.BP_Waterfall_Devils_DynamicFlow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Waterfall_Devils_DynamicFlow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Waterfall_Devils_DynamicFlow.BP_Waterfall_Devils_DynamicFlow_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Waterfall_Devils_DynamicFlow.BP_Waterfall_Devils_DynamicFlow_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Waterfall_Devils_DynamicFlow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Waterfall_Devils_DynamicFlow.BP_Waterfall_Devils_DynamicFlow_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Waterfall_Devils_DynamicFlow.BP_Waterfall_Devils_DynamicFlow_C.ExecuteUbergraph_BP_Waterfall_Devils_DynamicFlow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Waterfall_Devils_DynamicFlow_C::ExecuteUbergraph_BP_Waterfall_Devils_DynamicFlow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Waterfall_Devils_DynamicFlow.BP_Waterfall_Devils_DynamicFlow_C.ExecuteUbergraph_BP_Waterfall_Devils_DynamicFlow"));

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
