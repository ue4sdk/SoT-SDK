#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Questbook_HeartOfFire_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Questbook_HeartOfFire_ItemInfo.BP_QuestBook_HeartOfFire_ItemInfo_C
// 0x0000 (0x0558 - 0x0558)
class ABP_QuestBook_HeartOfFire_ItemInfo_C : public ABP_QuestBook_ItemInfo_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Questbook_HeartOfFire_ItemInfo.BP_QuestBook_HeartOfFire_ItemInfo_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
