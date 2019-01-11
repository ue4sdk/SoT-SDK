// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_audio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wsp_audio.wsp_audio_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void Awsp_audio_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_audio.wsp_audio_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function wsp_audio.wsp_audio_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Awsp_audio_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_audio.wsp_audio_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function wsp_audio.wsp_audio_C.ExecuteUbergraph_wsp_audio
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Awsp_audio_C::ExecuteUbergraph_wsp_audio(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_audio.wsp_audio_C.ExecuteUbergraph_wsp_audio");

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
