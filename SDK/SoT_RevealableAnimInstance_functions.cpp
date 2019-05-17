// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RevealableAnimInstance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RevealableAnimInstance.RevealableAnimInstance_C.SetIsPlayingAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPlaying                      (Parm, ZeroConstructor, IsPlainOldData)

void URevealableAnimInstance_C::SetIsPlayingAnim(bool IsPlaying)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RevealableAnimInstance.RevealableAnimInstance_C.SetIsPlayingAnim"));

	struct
	{
		bool                           IsPlaying;
	} params;

	params.IsPlaying = IsPlaying;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
