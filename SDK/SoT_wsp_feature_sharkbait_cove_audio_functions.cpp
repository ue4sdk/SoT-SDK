// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_feature_sharkbait_cove_audio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wsp_feature_sharkbait_cove_audio.wsp_feature_sharkbait_cove_audio_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Awsp_feature_sharkbait_cove_audio_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function wsp_feature_sharkbait_cove_audio.wsp_feature_sharkbait_cove_audio_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function wsp_feature_sharkbait_cove_audio.wsp_feature_sharkbait_cove_audio_C.ExecuteUbergraph_wsp_feature_sharkbait_cove_audio
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Awsp_feature_sharkbait_cove_audio_C::ExecuteUbergraph_wsp_feature_sharkbait_cove_audio(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function wsp_feature_sharkbait_cove_audio.wsp_feature_sharkbait_cove_audio_C.ExecuteUbergraph_wsp_feature_sharkbait_cove_audio"));

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
