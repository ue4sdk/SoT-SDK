#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Proposal_TheArtOfTheTrickster_Chapter5_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proposal_TheArtOfTheTrickster_Chapter5.Proposal_TheArtOfTheTrickster_Chapter5_C
// 0x0000 (0x0140 - 0x0140)
class UProposal_TheArtOfTheTrickster_Chapter5_C : public UVoyageCheckpointProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Proposal_TheArtOfTheTrickster_Chapter5.Proposal_TheArtOfTheTrickster_Chapter5_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
