// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TT_Lovers_Rose_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TT_Lovers_Rose.BP_TT_Lovers_Rose_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TT_Lovers_Rose_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_Lovers_Rose.BP_TT_Lovers_Rose_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TT_Lovers_Rose.BP_TT_Lovers_Rose_C.BindToAnimNotify
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TT_Lovers_Rose_C::BindToAnimNotify()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_Lovers_Rose.BP_TT_Lovers_Rose_C.BindToAnimNotify"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TT_Lovers_Rose.BP_TT_Lovers_Rose_C.ExecuteUbergraph_BP_TT_Lovers_Rose
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TT_Lovers_Rose_C::ExecuteUbergraph_BP_TT_Lovers_Rose(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_Lovers_Rose.BP_TT_Lovers_Rose_C.ExecuteUbergraph_BP_TT_Lovers_Rose"));

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
