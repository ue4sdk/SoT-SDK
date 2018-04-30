#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShip_QuestTable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SmallShip_QuestTable.BP_SmallShip_QuestTable_C
// 0x0028 (0x0780 - 0x0758)
class ABP_SmallShip_QuestTable_C : public AVoyageProposalContainer
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0758(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SmallShip_QuestTable.BP_SmallShip_QuestTable_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
