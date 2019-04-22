#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Questbook_ItemDesc_FateOfTheMorningstar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Questbook_ItemDesc_FateOfTheMorningstar.BP_Questbook_ItemDesc_FateOfTheMorningstar_C
// 0x0000 (0x0128 - 0x0128)
class UBP_Questbook_ItemDesc_FateOfTheMorningstar_C : public UQuestBookItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Questbook_ItemDesc_FateOfTheMorningstar.BP_Questbook_ItemDesc_FateOfTheMorningstar_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
