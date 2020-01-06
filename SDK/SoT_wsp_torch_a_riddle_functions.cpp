// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_torch_a_riddle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wsp_torch_a_riddle.wsp_torch_a_riddle_C.StartReaction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Awsp_torch_a_riddle_C::StartReaction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function wsp_torch_a_riddle.wsp_torch_a_riddle_C.StartReaction"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function wsp_torch_a_riddle.wsp_torch_a_riddle_C.StopReaction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Awsp_torch_a_riddle_C::StopReaction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function wsp_torch_a_riddle.wsp_torch_a_riddle_C.StopReaction"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function wsp_torch_a_riddle.wsp_torch_a_riddle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awsp_torch_a_riddle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function wsp_torch_a_riddle.wsp_torch_a_riddle_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function wsp_torch_a_riddle.wsp_torch_a_riddle_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void Awsp_torch_a_riddle_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function wsp_torch_a_riddle.wsp_torch_a_riddle_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function wsp_torch_a_riddle.wsp_torch_a_riddle_C.ExecuteUbergraph_wsp_torch_a_riddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Awsp_torch_a_riddle_C::ExecuteUbergraph_wsp_torch_a_riddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function wsp_torch_a_riddle.wsp_torch_a_riddle_C.ExecuteUbergraph_wsp_torch_a_riddle"));

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
