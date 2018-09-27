// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_VotableCancelVoyage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.PlayShowTokenAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Token                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_VotableCancelVoyage_C::PlayShowTokenAnimation(class UPrimitiveComponent* Token)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.PlayShowTokenAnimation");

	ABP_VotableCancelVoyage_C_PlayShowTokenAnimation_Params params;
	params.Token = Token;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.Is Session Locked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsLocked                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_VotableCancelVoyage_C::Is_Session_Locked(bool* IsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.Is Session Locked");

	ABP_VotableCancelVoyage_C_Is_Session_Locked_Params params;

	UObject::ProcessEvent(fn, &params);

	if (IsLocked != nullptr)
		*IsLocked = params.IsLocked;
}


// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.GetObjectDisplayName
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_VotableCancelVoyage_C::GetObjectDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.GetObjectDisplayName");

	ABP_VotableCancelVoyage_C_GetObjectDisplayName_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VotableCancelVoyage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.UserConstructionScript");

	ABP_VotableCancelVoyage_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_VotableCancelVoyage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.ReceiveBeginPlay");

	ABP_VotableCancelVoyage_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.OnVoteAdded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TScriptInterface<class UVoterInterface> Voter                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_VotableCancelVoyage_C::OnVoteAdded(const TScriptInterface<class UVoterInterface>& Voter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.OnVoteAdded");

	ABP_VotableCancelVoyage_C_OnVoteAdded_Params params;
	params.Voter = Voter;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.OnVoteRemoved
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TScriptInterface<class UVoterInterface> Voter                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_VotableCancelVoyage_C::OnVoteRemoved(const TScriptInterface<class UVoterInterface>& Voter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.OnVoteRemoved");

	ABP_VotableCancelVoyage_C_OnVoteRemoved_Params params;
	params.Voter = Voter;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.ExecuteUbergraph_BP_VotableCancelVoyage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_VotableCancelVoyage_C::ExecuteUbergraph_BP_VotableCancelVoyage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VotableCancelVoyage.BP_VotableCancelVoyage_C.ExecuteUbergraph_BP_VotableCancelVoyage");

	ABP_VotableCancelVoyage_C_ExecuteUbergraph_BP_VotableCancelVoyage_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
