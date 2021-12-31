// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PirateGenerator_LineUp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.GetPirateSelector
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPirateSelector*         PirateSelectorComponent        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PirateGenerator_LineUp_C::GetPirateSelector(class UPirateSelector** PirateSelectorComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.GetPirateSelector"));

	ABP_PirateGenerator_LineUp_C_GetPirateSelector_Params params;

	UObject::ProcessEvent(fn, &params);

	if (PirateSelectorComponent != nullptr)
		*PirateSelectorComponent = params.PirateSelectorComponent;
}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.Reset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PirateGenerator_LineUp_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.Reset"));

	ABP_PirateGenerator_LineUp_C_Reset_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.DelayBasedOnAngle
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PirateGenerator_LineUp_C::DelayBasedOnAngle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.DelayBasedOnAngle"));

	ABP_PirateGenerator_LineUp_C_DelayBasedOnAngle_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.FadeProps
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PirateGenerator_LineUp_C::FadeProps(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.FadeProps"));

	ABP_PirateGenerator_LineUp_C_FadeProps_Params params;
	params.Duration = Duration;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ActivateGhostMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          MeshComponent                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FadeIn                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PirateGenerator_LineUp_C::ActivateGhostMaterial(class UMeshComponent* MeshComponent, bool FadeIn, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ActivateGhostMaterial"));

	ABP_PirateGenerator_LineUp_C_ActivateGhostMaterial_Params params;
	params.MeshComponent = MeshComponent;
	params.FadeIn = FadeIn;
	params.Duration = Duration;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ClearProps
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PirateGenerator_LineUp_C::ClearProps()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ClearProps"));

	ABP_PirateGenerator_LineUp_C_ClearProps_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.SetProp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBP_LineUp_Props        BP_LineUp_Props                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           Primary_                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PirateGenerator_LineUp_C::SetProp(const struct FBP_LineUp_Props& BP_LineUp_Props, bool Primary_)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.SetProp"));

	ABP_PirateGenerator_LineUp_C_SetProp_Params params;
	params.BP_LineUp_Props = BP_LineUp_Props;
	params.Primary_ = Primary_;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.UpdateAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PirateGenerator_LineUp_C::UpdateAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.UpdateAnimation"));

	ABP_PirateGenerator_LineUp_C_UpdateAnimation_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.RandomizePirate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PoseIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FPirateDescription      PirateDesc                     (Parm)
// TArray<class UClass*>          Outfit                         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_PirateGenerator_LineUp_C::RandomizePirate(int PoseIndex, const struct FPirateDescription& PirateDesc, TArray<class UClass*>* Outfit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.RandomizePirate"));

	ABP_PirateGenerator_LineUp_C_RandomizePirate_Params params;
	params.PoseIndex = PoseIndex;
	params.PirateDesc = PirateDesc;

	UObject::ProcessEvent(fn, &params);

	if (Outfit != nullptr)
		*Outfit = params.Outfit;
}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PirateGenerator_LineUp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.UserConstructionScript"));

	ABP_PirateGenerator_LineUp_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.PlayMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*           Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequence*           OutOf                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequence*           LoopAnim                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimInstance*           Prop                           (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequence*           OutOf02                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequence*           PropLoop                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PirateGenerator_LineUp_C::PlayMontage(class UAnimInstance* Character, class UAnimSequence* OutOf, class UAnimSequence* LoopAnim, class UAnimInstance* Prop, class UAnimSequence* OutOf02, class UAnimSequence* PropLoop)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.PlayMontage"));

	ABP_PirateGenerator_LineUp_C_PlayMontage_Params params;
	params.Character = Character;
	params.OutOf = OutOf;
	params.LoopAnim = LoopAnim;
	params.Prop = Prop;
	params.OutOf02 = OutOf02;
	params.PropLoop = PropLoop;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.Highlighted
// (BlueprintCallable, BlueprintEvent)

void ABP_PirateGenerator_LineUp_C::Highlighted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.Highlighted"));

	ABP_PirateGenerator_LineUp_C_Highlighted_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OutOfHighlight
// (BlueprintCallable, BlueprintEvent)

void ABP_PirateGenerator_LineUp_C::OutOfHighlight()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OutOfHighlight"));

	ABP_PirateGenerator_LineUp_C_OutOfHighlight_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.Selected
// (BlueprintCallable, BlueprintEvent)

void ABP_PirateGenerator_LineUp_C::Selected()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.Selected"));

	ABP_PirateGenerator_LineUp_C_Selected_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OnEndGeneratingPirate
// (Event, Protected, BlueprintEvent)

void ABP_PirateGenerator_LineUp_C::OnEndGeneratingPirate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OnEndGeneratingPirate"));

	ABP_PirateGenerator_LineUp_C_OnEndGeneratingPirate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OnBeginGeneratingPirate
// (Event, Protected, BlueprintEvent)

void ABP_PirateGenerator_LineUp_C::OnBeginGeneratingPirate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OnBeginGeneratingPirate"));

	ABP_PirateGenerator_LineUp_C_OnBeginGeneratingPirate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.RandomizePirateEvent
// (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPirateDescription      PirateDesc                     (Parm)
// TArray<class UClass*>          Outfit                         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_PirateGenerator_LineUp_C::RandomizePirateEvent(const struct FPirateDescription& PirateDesc, TArray<class UClass*>* Outfit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.RandomizePirateEvent"));

	ABP_PirateGenerator_LineUp_C_RandomizePirateEvent_Params params;
	params.PirateDesc = PirateDesc;

	UObject::ProcessEvent(fn, &params);

	if (Outfit != nullptr)
		*Outfit = params.Outfit;
}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ShipSelect
// (BlueprintCallable, BlueprintEvent)

void ABP_PirateGenerator_LineUp_C::ShipSelect()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ShipSelect"));

	ABP_PirateGenerator_LineUp_C_ShipSelect_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PirateGenerator_LineUp_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ReceiveTick"));

	ABP_PirateGenerator_LineUp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OnSignalSpawnIn
// (Event, Protected, BlueprintEvent)

void ABP_PirateGenerator_LineUp_C::OnSignalSpawnIn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OnSignalSpawnIn"));

	ABP_PirateGenerator_LineUp_C_OnSignalSpawnIn_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ExecuteUbergraph_BP_PirateGenerator_LineUp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PirateGenerator_LineUp_C::ExecuteUbergraph_BP_PirateGenerator_LineUp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ExecuteUbergraph_BP_PirateGenerator_LineUp"));

	ABP_PirateGenerator_LineUp_C_ExecuteUbergraph_BP_PirateGenerator_LineUp_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.LineUpPirateInitializedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PirateGenerator_LineUp_C::LineUpPirateInitializedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.LineUpPirateInitializedDispatcher__DelegateSignature"));

	ABP_PirateGenerator_LineUp_C_LineUpPirateInitializedDispatcher__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
