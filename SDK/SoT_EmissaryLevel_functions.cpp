// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_EmissaryLevel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EmissaryLevel.EmissaryActiveTableVisualiserComponent.OnControllerEndPlay
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void UEmissaryActiveTableVisualiserComponent::OnControllerEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EmissaryLevel.EmissaryActiveTableVisualiserComponent.OnControllerEndPlay"));

	UEmissaryActiveTableVisualiserComponent_OnControllerEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function EmissaryLevel.EmissaryParticipantComponent.OnRep_EmissaryLevel
// (Final, Native, Private)

void UEmissaryParticipantComponent::OnRep_EmissaryLevel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EmissaryLevel.EmissaryParticipantComponent.OnRep_EmissaryLevel"));

	UEmissaryParticipantComponent_OnRep_EmissaryLevel_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function EmissaryLevel.EmissaryParticipantComponent.OnRep_AffiliatedCompany
// (Final, Native, Private, HasOutParms)
// Parameters:
// FName                          PreviousId                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEmissaryParticipantComponent::OnRep_AffiliatedCompany(const FName& PreviousId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EmissaryLevel.EmissaryParticipantComponent.OnRep_AffiliatedCompany"));

	UEmissaryParticipantComponent_OnRep_AffiliatedCompany_Params params;
	params.PreviousId = PreviousId;

	UObject::ProcessEvent(fn, &params);
}


// Function EmissaryLevel.EmissaryShipAffiliationTrackerComponent.OnRep_EmissaryCount
// (Final, Native, Private)

void UEmissaryShipAffiliationTrackerComponent::OnRep_EmissaryCount()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EmissaryLevel.EmissaryShipAffiliationTrackerComponent.OnRep_EmissaryCount"));

	UEmissaryShipAffiliationTrackerComponent_OnRep_EmissaryCount_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase.OnRep_Votes
// (Final, Native, Private)

void UEmissaryVoyageInlineVoteConsumerBase::OnRep_Votes()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase.OnRep_Votes"));

	UEmissaryVoyageInlineVoteConsumerBase_OnRep_Votes_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
