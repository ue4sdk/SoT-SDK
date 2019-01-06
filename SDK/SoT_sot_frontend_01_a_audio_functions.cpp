// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_sot_frontend_01_a_audio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function sot_frontend_01_a_audio.sot_frontend_01_a_audio_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Asot_frontend_01_a_audio_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_audio.sot_frontend_01_a_audio_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a_audio.sot_frontend_01_a_audio_C.SelectionConfirmed
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_audio_C::SelectionConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_audio.sot_frontend_01_a_audio_C.SelectionConfirmed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a_audio.sot_frontend_01_a_audio_C.ExecuteUbergraph_sot_frontend_01_a_audio
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Asot_frontend_01_a_audio_C::ExecuteUbergraph_sot_frontend_01_a_audio(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_audio.sot_frontend_01_a_audio_C.ExecuteUbergraph_sot_frontend_01_a_audio");

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
