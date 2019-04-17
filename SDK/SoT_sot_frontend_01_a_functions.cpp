// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_sot_frontend_01_a_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function sot_frontend_01_a.sot_frontend_01_a_C.Get Pirate Selector Component
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPirateSelector*         PirateSelectorComponent        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Asot_frontend_01_a_C::Get_Pirate_Selector_Component(class UPirateSelector** PirateSelectorComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.Get Pirate Selector Component"));

	struct
	{
		class UPirateSelector*         PirateSelectorComponent;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PirateSelectorComponent != nullptr)
		*PirateSelectorComponent = params.PirateSelectorComponent;
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.GetFrontendCameraComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFrontendCameraComponent* Camera_Component               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Asot_frontend_01_a_C::GetFrontendCameraComponent(class UFrontendCameraComponent** Camera_Component)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.GetFrontendCameraComponent"));

	struct
	{
		class UFrontendCameraComponent* Camera_Component;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Camera_Component != nullptr)
		*Camera_Component = params.Camera_Component;
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.ResetLineUpPirates
// (Public, BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_C::ResetLineUpPirates()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.ResetLineUpPirates"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.RefreshCharSlotStatus
// (Public, BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_C::RefreshCharSlotStatus()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.RefreshCharSlotStatus"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.SetCharSlotId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewCharSlotID                  (Parm, ZeroConstructor, IsPlainOldData)

void Asot_frontend_01_a_C::SetCharSlotId(int NewCharSlotID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.SetCharSlotId"));

	struct
	{
		int                            NewCharSlotID;
	} params;

	params.NewCharSlotID = NewCharSlotID;

	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.PirateHighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void Asot_frontend_01_a_C::PirateHighlight(float Time)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.PirateHighlight"));

	struct
	{
		float                          Time;
	} params;

	params.Time = Time;

	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.GetSelectedPirate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_PirateGenerator_LineUp_C* Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Asot_frontend_01_a_C::GetSelectedPirate(class ABP_PirateGenerator_LineUp_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.GetSelectedPirate"));

	struct
	{
		class ABP_PirateGenerator_LineUp_C* Item;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Item != nullptr)
		*Item = params.Item;
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.GetPirateLineup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PirateGenerator_LineUpUI_C* Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Asot_frontend_01_a_C::GetPirateLineup(class ABP_PirateGenerator_LineUpUI_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.GetPirateLineup"));

	struct
	{
		class ABP_PirateGenerator_LineUpUI_C* Item;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Item != nullptr)
		*Item = params.Item;
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernSelect_UniqueObjectNameForCooking_1729007687
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void Asot_frontend_01_a_C::InpActEvt_FrontendTavernSelect_UniqueObjectNameForCooking_1729007687(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernSelect_UniqueObjectNameForCooking_1729007687"));

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernNextPage_UniqueObjectNameForCooking_1729007686
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void Asot_frontend_01_a_C::InpActEvt_FrontendTavernNextPage_UniqueObjectNameForCooking_1729007686(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernNextPage_UniqueObjectNameForCooking_1729007686"));

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Stop
// (BlueprintEvent)

void Asot_frontend_01_a_C::K2Node_MatineeController_5_Stop()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Stop"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Pause
// (BlueprintEvent)

void Asot_frontend_01_a_C::K2Node_MatineeController_5_Pause()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Pause"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Start
// (BlueprintEvent)

void Asot_frontend_01_a_C::K2Node_MatineeController_5_Start()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Start"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Finished
// (BlueprintEvent)

void Asot_frontend_01_a_C::K2Node_MatineeController_5_Finished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.K2Node_MatineeController_5_Finished"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernChangeProfile_UniqueObjectNameForCooking_1729007685
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void Asot_frontend_01_a_C::InpActEvt_FrontendTavernChangeProfile_UniqueObjectNameForCooking_1729007685(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernChangeProfile_UniqueObjectNameForCooking_1729007685"));

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernFavourite_UniqueObjectNameForCooking_1729007684
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void Asot_frontend_01_a_C::InpActEvt_FrontendTavernFavourite_UniqueObjectNameForCooking_1729007684(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernFavourite_UniqueObjectNameForCooking_1729007684"));

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernQuitGame_UniqueObjectNameForCooking_1729007683
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void Asot_frontend_01_a_C::InpActEvt_FrontendTavernQuitGame_UniqueObjectNameForCooking_1729007683(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.InpActEvt_FrontendTavernQuitGame_UniqueObjectNameForCooking_1729007683"));

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.InpAxisEvt_FrontendTavernRotate_K2Node_InputAxisEvent_22
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void Asot_frontend_01_a_C::InpAxisEvt_FrontendTavernRotate_K2Node_InputAxisEvent_22(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.InpAxisEvt_FrontendTavernRotate_K2Node_InputAxisEvent_22"));

	struct
	{
		float                          AxisValue;
	} params;

	params.AxisValue = AxisValue;

	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Asot_frontend_01_a_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.BeginCelebration
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_C::BeginCelebration()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.BeginCelebration"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.pirateSelectCam
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_C::pirateSelectCam()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.pirateSelectCam"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.showShipSelectPirate
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_C::showShipSelectPirate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.showShipSelectPirate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.reinstateSelectedPirateLoc
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_C::reinstateSelectedPirateLoc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.reinstateSelectedPirateLoc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.StartGeneratingPirates
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_C::StartGeneratingPirates()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.StartGeneratingPirates"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.SelectionCancelled
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_C::SelectionCancelled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.SelectionCancelled"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.SelectPirateButtonPressed
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_C::SelectPirateButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.SelectPirateButtonPressed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.RefreshPiratesButtonPressed
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_C::RefreshPiratesButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.RefreshPiratesButtonPressed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.FavoritePirateButtonPressed
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_C::FavoritePirateButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.FavoritePirateButtonPressed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void Asot_frontend_01_a_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.PiratesInitializedEvent
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_C::PiratesInitializedEvent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.PiratesInitializedEvent"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.StartPirateCreationAnimation
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_C::StartPirateCreationAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.StartPirateCreationAnimation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.OnLeavingSelectionState
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_C::OnLeavingSelectionState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.OnLeavingSelectionState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a.sot_frontend_01_a_C.ExecuteUbergraph_sot_frontend_01_a
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Asot_frontend_01_a_C::ExecuteUbergraph_sot_frontend_01_a(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a.sot_frontend_01_a_C.ExecuteUbergraph_sot_frontend_01_a"));

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
