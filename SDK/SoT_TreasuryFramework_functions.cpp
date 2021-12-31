// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TreasuryFramework_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TreasuryFramework.ShimmerActor.OnDeactivateShimmer
// (Native, Event, Public, BlueprintEvent)

void AShimmerActor::OnDeactivateShimmer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.ShimmerActor.OnDeactivateShimmer"));

	AShimmerActor_OnDeactivateShimmer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.ShimmerActor.OnActivateShimmer
// (Native, Event, Public, BlueprintEvent)

void AShimmerActor::OnActivateShimmer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.ShimmerActor.OnActivateShimmer"));

	AShimmerActor_OnActivateShimmer_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnWaveStart
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETreasuryEncounterType> EncounterType                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETreasuryWaveType> WaveType                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ATreasuryRoom::OnWaveStart(TEnumAsByte<ETreasuryEncounterType> EncounterType, TEnumAsByte<ETreasuryWaveType> WaveType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnWaveStart"));

	ATreasuryRoom_OnWaveStart_Params params;
	params.EncounterType = EncounterType;
	params.WaveType = WaveType;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnWaveFinished
// (Final, Native, Protected)
// Parameters:
// TScriptInterface<class UMechanismActionInterface> Action                         (Parm, ZeroConstructor, IsPlainOldData)

void ATreasuryRoom::OnWaveFinished(const TScriptInterface<class UMechanismActionInterface>& Action)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnWaveFinished"));

	ATreasuryRoom_OnWaveFinished_Params params;
	params.Action = Action;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnWaveComplete
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETreasuryEncounterType> EncounterType                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ATreasuryRoom::OnWaveComplete(TEnumAsByte<ETreasuryEncounterType> EncounterType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnWaveComplete"));

	ATreasuryRoom_OnWaveComplete_Params params;
	params.EncounterType = EncounterType;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnVaultOpen
// (Native, Event, Public, BlueprintEvent)

void ATreasuryRoom::OnVaultOpen()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnVaultOpen"));

	ATreasuryRoom_OnVaultOpen_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnVaultClosed
// (Native, Event, Public, BlueprintEvent)

void ATreasuryRoom::OnVaultClosed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnVaultClosed"));

	ATreasuryRoom_OnVaultClosed_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnTreasuryStateChange
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETreasuryState>    PrevState                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETreasuryState>    NewState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ATreasuryRoom::OnTreasuryStateChange(TEnumAsByte<ETreasuryState> PrevState, TEnumAsByte<ETreasuryState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnTreasuryStateChange"));

	ATreasuryRoom_OnTreasuryStateChange_Params params;
	params.PrevState = PrevState;
	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnTreasuryDeactivate
// (Native, Event, Public, BlueprintEvent)

void ATreasuryRoom::OnTreasuryDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnTreasuryDeactivate"));

	ATreasuryRoom_OnTreasuryDeactivate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnTreasuryActivate
// (Native, Event, Public, BlueprintEvent)

void ATreasuryRoom::OnTreasuryActivate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnTreasuryActivate"));

	ATreasuryRoom_OnTreasuryActivate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnStartRaiseWater
// (Native, Event, Public, BlueprintEvent)

void ATreasuryRoom::OnStartRaiseWater()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnStartRaiseWater"));

	ATreasuryRoom_OnStartRaiseWater_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnStartDrainWater
// (Native, Event, Public, BlueprintEvent)

void ATreasuryRoom::OnStartDrainWater()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnStartDrainWater"));

	ATreasuryRoom_OnStartDrainWater_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnRoomStarted
// (Native, Event, Public, BlueprintEvent)

void ATreasuryRoom::OnRoomStarted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnRoomStarted"));

	ATreasuryRoom_OnRoomStarted_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnRaisedWater
// (Final, Native, Protected)
// Parameters:
// TScriptInterface<class UMechanismResetInterface> Action                         (Parm, ZeroConstructor, IsPlainOldData)

void ATreasuryRoom::OnRaisedWater(const TScriptInterface<class UMechanismResetInterface>& Action)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnRaisedWater"));

	ATreasuryRoom_OnRaisedWater_Params params;
	params.Action = Action;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnLeaveRoom
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// AActor*                        OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ATreasuryRoom::OnLeaveRoom(AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnLeaveRoom"));

	ATreasuryRoom_OnLeaveRoom_Params params;
	params.OtherActor = OtherActor;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnEnterRoom
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// AActor*                        OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ATreasuryRoom::OnEnterRoom(AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnEnterRoom"));

	ATreasuryRoom_OnEnterRoom_Params params;
	params.OtherActor = OtherActor;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnEncounterParamsSetup
// (Native, Event, Public, BlueprintEvent)

void ATreasuryRoom::OnEncounterParamsSetup()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnEncounterParamsSetup"));

	ATreasuryRoom_OnEncounterParamsSetup_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnDrainedWater
// (Final, Native, Protected)
// Parameters:
// TScriptInterface<class UMechanismResetInterface> Action                         (Parm, ZeroConstructor, IsPlainOldData)

void ATreasuryRoom::OnDrainedWater(const TScriptInterface<class UMechanismResetInterface>& Action)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnDrainedWater"));

	ATreasuryRoom_OnDrainedWater_Params params;
	params.Action = Action;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.GetState
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ETreasuryState>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ETreasuryState> ATreasuryRoom::GetState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.GetState"));

	ATreasuryRoom_GetState_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
