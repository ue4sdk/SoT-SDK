#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Campaign005_CursedSails_OOS_MadameOlivia_CursedSails_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Campaign005_CursedSails_OOS_MadameOlivia_CursedSails.BP_Campaign005_CursedSails_OOS_MadameOlivia_CursedSails_C
// 0x0000 (0x05A0 - 0x05A0)
class ABP_Campaign005_CursedSails_OOS_MadameOlivia_CursedSails_C : public ABP_Orderofsouls_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Campaign005_CursedSails_OOS_MadameOlivia_CursedSails.BP_Campaign005_CursedSails_OOS_MadameOlivia_CursedSails_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
