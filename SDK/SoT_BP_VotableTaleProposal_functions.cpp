// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_VotableTaleProposal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VotableTaleProposal.BP_VotableTaleProposal_C.PlayShowTokenAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Token                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_VotableTaleProposal_C::PlayShowTokenAnimation(class UPrimitiveComponent* Token)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_VotableTaleProposal.BP_VotableTaleProposal_C.PlayShowTokenAnimation"));

	struct
	{
		class UPrimitiveComponent*     Token;
	} params;

	params.Token = Token;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_VotableTaleProposal.BP_VotableTaleProposal_C.Is Session Locked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsLocked                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_VotableTaleProposal_C::Is_Session_Locked(bool* IsLocked)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_VotableTaleProposal.BP_VotableTaleProposal_C.Is Session Locked"));

	struct
	{
		bool                           IsLocked;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsLocked != nullptr)
		*IsLocked = params.IsLocked;
}


// Function BP_VotableTaleProposal.BP_VotableTaleProposal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VotableTaleProposal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_VotableTaleProposal.BP_VotableTaleProposal_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_VotableTaleProposal.BP_VotableTaleProposal_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_VotableTaleProposal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_VotableTaleProposal.BP_VotableTaleProposal_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_VotableTaleProposal.BP_VotableTaleProposal_C.OnVoteAdded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TScriptInterface<class UVoterInterface> Voter                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_VotableTaleProposal_C::OnVoteAdded(const TScriptInterface<class UVoterInterface>& Voter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_VotableTaleProposal.BP_VotableTaleProposal_C.OnVoteAdded"));

	struct
	{
		TScriptInterface<class UVoterInterface> Voter;
	} params;

	params.Voter = Voter;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_VotableTaleProposal.BP_VotableTaleProposal_C.OnVoteRemoved
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TScriptInterface<class UVoterInterface> Voter                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_VotableTaleProposal_C::OnVoteRemoved(const TScriptInterface<class UVoterInterface>& Voter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_VotableTaleProposal.BP_VotableTaleProposal_C.OnVoteRemoved"));

	struct
	{
		TScriptInterface<class UVoterInterface> Voter;
	} params;

	params.Voter = Voter;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_VotableTaleProposal.BP_VotableTaleProposal_C.ExecuteUbergraph_BP_VotableTaleProposal
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_VotableTaleProposal_C::ExecuteUbergraph_BP_VotableTaleProposal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_VotableTaleProposal.BP_VotableTaleProposal_C.ExecuteUbergraph_BP_VotableTaleProposal"));

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
