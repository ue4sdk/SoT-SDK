#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_EmissaryLevel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EmissaryLevel.EmissaryActiveTableVisualiserComponent.OnControllerEndPlay
struct UEmissaryActiveTableVisualiserComponent_OnControllerEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmissaryLevel.EmissaryParticipantComponent.OnRep_EmissaryLevel
struct UEmissaryParticipantComponent_OnRep_EmissaryLevel_Params
{
};

// Function EmissaryLevel.EmissaryParticipantComponent.OnRep_AffiliatedCompany
struct UEmissaryParticipantComponent_OnRep_AffiliatedCompany_Params
{
	FName                                              PreviousId;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmissaryLevel.EmissaryShipAffiliationTrackerComponent.OnRep_EmissaryCount
struct UEmissaryShipAffiliationTrackerComponent_OnRep_EmissaryCount_Params
{
};

// Function EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase.OnRep_Votes
struct UEmissaryVoyageInlineVoteConsumerBase_OnRep_Votes_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
