// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_audio_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wsp_audio.wsp_audio_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void Awsp_audio_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_audio.wsp_audio_C.ReceiveTick");

	Awsp_audio_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wsp_audio.wsp_audio_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Awsp_audio_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_audio.wsp_audio_C.ReceiveBeginPlay");

	Awsp_audio_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wsp_audio.wsp_audio_C.ExecuteUbergraph_wsp_audio
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Awsp_audio_C::ExecuteUbergraph_wsp_audio(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_audio.wsp_audio_C.ExecuteUbergraph_wsp_audio");

	Awsp_audio_C_ExecuteUbergraph_wsp_audio_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
