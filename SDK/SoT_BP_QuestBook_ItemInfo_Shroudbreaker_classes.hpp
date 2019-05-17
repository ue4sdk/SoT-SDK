#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_QuestBook_ItemInfo_Shroudbreaker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_QuestBook_ItemInfo_Shroudbreaker.BP_QuestBook_ItemInfo_Shroudbreaker_C
// 0x0000 (0x05D8 - 0x05D8)
class ABP_QuestBook_ItemInfo_Shroudbreaker_C : public ABP_QuestBook_ItemInfo_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_QuestBook_ItemInfo_Shroudbreaker.BP_QuestBook_ItemInfo_Shroudbreaker_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
