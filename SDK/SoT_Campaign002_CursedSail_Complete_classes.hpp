#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Campaign002_CursedSail_Complete_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Campaign002_CursedSail_Complete.Campaign002_CursedSail_Complete_C
// 0x0000 (0x0070 - 0x0070)
class UCampaign002_CursedSail_Complete_C : public UCinematicQuestRunnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Campaign002_CursedSail_Complete.Campaign002_CursedSail_Complete_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
