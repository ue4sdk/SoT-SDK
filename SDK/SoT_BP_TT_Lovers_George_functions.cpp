// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TT_Lovers_George_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TT_Lovers_George.BP_TT_Lovers_George_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TT_Lovers_George_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_Lovers_George.BP_TT_Lovers_George_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TT_Lovers_George.BP_TT_Lovers_George_C.BindToAnimNotify
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TT_Lovers_George_C::BindToAnimNotify()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_Lovers_George.BP_TT_Lovers_George_C.BindToAnimNotify"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TT_Lovers_George.BP_TT_Lovers_George_C.ExecuteUbergraph_BP_TT_Lovers_George
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TT_Lovers_George_C::ExecuteUbergraph_BP_TT_Lovers_George(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_Lovers_George.BP_TT_Lovers_George_C.ExecuteUbergraph_BP_TT_Lovers_George"));

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
