#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Proposal_MercenaryVoyages_GiftSeekerVoyage_BSP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proposal_MercenaryVoyages_GiftSeekerVoyage_BSP.Proposal_MercenaryVoyages_GiftSeekerVoyage_BSP_C
// 0x0000 (0x0138 - 0x0138)
class UProposal_MercenaryVoyages_GiftSeekerVoyage_BSP_C : public UVoyageProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Proposal_MercenaryVoyages_GiftSeekerVoyage_BSP.Proposal_MercenaryVoyages_GiftSeekerVoyage_BSP_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
