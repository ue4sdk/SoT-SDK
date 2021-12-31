// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_sot_frontend_01_a_audio_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function sot_frontend_01_a_audio.sot_frontend_01_a_audio_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Asot_frontend_01_a_audio_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a_audio.sot_frontend_01_a_audio_C.ReceiveBeginPlay"));

	Asot_frontend_01_a_audio_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a_audio.sot_frontend_01_a_audio_C.SelectionConfirmed
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_audio_C::SelectionConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a_audio.sot_frontend_01_a_audio_C.SelectionConfirmed"));

	Asot_frontend_01_a_audio_C_SelectionConfirmed_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a_audio.sot_frontend_01_a_audio_C.ExecuteUbergraph_sot_frontend_01_a_audio
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Asot_frontend_01_a_audio_C::ExecuteUbergraph_sot_frontend_01_a_audio(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a_audio.sot_frontend_01_a_audio_C.ExecuteUbergraph_sot_frontend_01_a_audio"));

	Asot_frontend_01_a_audio_C_ExecuteUbergraph_sot_frontend_01_a_audio_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
