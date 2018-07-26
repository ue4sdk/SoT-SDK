#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Campaign001_TinyShark_Start_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Campaign001_TinyShark_Start.Campaign001_TinyShark_Start_C
// 0x0000 (0x0068 - 0x0068)
class UCampaign001_TinyShark_Start_C : public UCinematicQuestRunnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Campaign001_TinyShark_Start.Campaign001_TinyShark_Start_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
