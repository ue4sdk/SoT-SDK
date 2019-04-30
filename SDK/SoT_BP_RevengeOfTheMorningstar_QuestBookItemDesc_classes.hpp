#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RevengeOfTheMorningstar_QuestBookItemDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RevengeOfTheMorningstar_QuestBookItemDesc.BP_RevengeOfTheMorningstar_QuestBookItemDesc_C
// 0x0000 (0x0128 - 0x0128)
class UBP_RevengeOfTheMorningstar_QuestBookItemDesc_C : public UQuestBookItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_RevengeOfTheMorningstar_QuestBookItemDesc.BP_RevengeOfTheMorningstar_QuestBookItemDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
