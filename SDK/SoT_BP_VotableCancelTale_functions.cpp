// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_VotableCancelTale_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VotableCancelTale.BP_VotableCancelTale_C.PlayShowTokenAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UPrimitiveComponent*           Token                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_VotableCancelTale_C::PlayShowTokenAnimation(UPrimitiveComponent* Token)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_VotableCancelTale.BP_VotableCancelTale_C.PlayShowTokenAnimation"));

	ABP_VotableCancelTale_C_PlayShowTokenAnimation_Params params;
	params.Token = Token;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_VotableCancelTale.BP_VotableCancelTale_C.Is Session Locked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsLocked                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_VotableCancelTale_C::Is_Session_Locked(bool* IsLocked)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_VotableCancelTale.BP_VotableCancelTale_C.Is Session Locked"));

	ABP_VotableCancelTale_C_Is_Session_Locked_Params params;

	UObject::ProcessEvent(fn, &params);

	if (IsLocked != nullptr)
		*IsLocked = params.IsLocked;
}


// Function BP_VotableCancelTale.BP_VotableCancelTale_C.GetObjectDisplayName
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// FText                          ReturnValue                    (Parm, OutParm, ReturnParm)

FText ABP_VotableCancelTale_C::GetObjectDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_VotableCancelTale.BP_VotableCancelTale_C.GetObjectDisplayName"));

	ABP_VotableCancelTale_C_GetObjectDisplayName_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_VotableCancelTale.BP_VotableCancelTale_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VotableCancelTale_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_VotableCancelTale.BP_VotableCancelTale_C.UserConstructionScript"));

	ABP_VotableCancelTale_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_VotableCancelTale.BP_VotableCancelTale_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_VotableCancelTale_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_VotableCancelTale.BP_VotableCancelTale_C.ReceiveBeginPlay"));

	ABP_VotableCancelTale_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_VotableCancelTale.BP_VotableCancelTale_C.OnVoteAdded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TScriptInterface<class UVoterInterface> Voter                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_VotableCancelTale_C::OnVoteAdded(const TScriptInterface<class UVoterInterface>& Voter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_VotableCancelTale.BP_VotableCancelTale_C.OnVoteAdded"));

	ABP_VotableCancelTale_C_OnVoteAdded_Params params;
	params.Voter = Voter;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_VotableCancelTale.BP_VotableCancelTale_C.OnVoteRemoved
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TScriptInterface<class UVoterInterface> Voter                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_VotableCancelTale_C::OnVoteRemoved(const TScriptInterface<class UVoterInterface>& Voter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_VotableCancelTale.BP_VotableCancelTale_C.OnVoteRemoved"));

	ABP_VotableCancelTale_C_OnVoteRemoved_Params params;
	params.Voter = Voter;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_VotableCancelTale.BP_VotableCancelTale_C.ExecuteUbergraph_BP_VotableCancelTale
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_VotableCancelTale_C::ExecuteUbergraph_BP_VotableCancelTale(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_VotableCancelTale.BP_VotableCancelTale_C.ExecuteUbergraph_BP_VotableCancelTale"));

	ABP_VotableCancelTale_C_ExecuteUbergraph_BP_VotableCancelTale_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
