// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AnimNotify_StartPirateLordOnboardingCutscene_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnimNotify_StartPirateLordOnboardingCutscene.AnimNotify_StartPirateLordOnboardingCutscene_C.GetNotifyName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UAnimNotify_StartPirateLordOnboardingCutscene_C::GetNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimNotify_StartPirateLordOnboardingCutscene.AnimNotify_StartPirateLordOnboardingCutscene_C.GetNotifyName"));

	struct
	{
		class FString                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AnimNotify_StartPirateLordOnboardingCutscene.AnimNotify_StartPirateLordOnboardingCutscene_C.Received_Notify
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimNotify_StartPirateLordOnboardingCutscene_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimNotify_StartPirateLordOnboardingCutscene.AnimNotify_StartPirateLordOnboardingCutscene_C.Received_Notify"));

	struct
	{
		class USkeletalMeshComponent*  MeshComp;
		class UAnimSequenceBase*       Animation;
		bool                           ReturnValue;
	} params;

	params.MeshComp = MeshComp;
	params.Animation = Animation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
