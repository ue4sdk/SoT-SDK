#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Proposal_MercenaryVoyages_GiftSeekerVoyage_Legend_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proposal_MercenaryVoyages_GiftSeekerVoyage_Legend.Proposal_MercenaryVoyages_GiftSeekerVoyage_Legend_C
// 0x0000 (0x0138 - 0x0138)
class UProposal_MercenaryVoyages_GiftSeekerVoyage_Legend_C : public UVoyageProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Proposal_MercenaryVoyages_GiftSeekerVoyage_Legend.Proposal_MercenaryVoyages_GiftSeekerVoyage_Legend_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
