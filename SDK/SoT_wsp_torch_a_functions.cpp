// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_torch_a_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wsp_torch_a.wsp_torch_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awsp_torch_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function wsp_torch_a.wsp_torch_a_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function wsp_torch_a.wsp_torch_a_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Awsp_torch_a_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function wsp_torch_a.wsp_torch_a_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function wsp_torch_a.wsp_torch_a_C.ExecuteUbergraph_wsp_torch_a
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Awsp_torch_a_C::ExecuteUbergraph_wsp_torch_a(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function wsp_torch_a.wsp_torch_a_C.ExecuteUbergraph_wsp_torch_a"));

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
