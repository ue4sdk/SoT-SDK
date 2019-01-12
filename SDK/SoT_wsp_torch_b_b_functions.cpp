// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_torch_b_b_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wsp_torch_b_b.wsp_torch_b_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awsp_torch_b_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_torch_b_b.wsp_torch_b_b_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function wsp_torch_b_b.wsp_torch_b_b_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Awsp_torch_b_b_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_torch_b_b.wsp_torch_b_b_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function wsp_torch_b_b.wsp_torch_b_b_C.ExecuteUbergraph_wsp_torch_b_b
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Awsp_torch_b_b_C::ExecuteUbergraph_wsp_torch_b_b(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_torch_b_b.wsp_torch_b_b_C.ExecuteUbergraph_wsp_torch_b_b");

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
