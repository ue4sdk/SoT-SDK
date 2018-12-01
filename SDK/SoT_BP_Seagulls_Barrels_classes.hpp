#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Seagulls_Barrels_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Seagulls_Barrels.BP_Seagulls_Barrels_C
// 0x0000 (0x04E0 - 0x04E0)
class ABP_Seagulls_Barrels_C : public ABP_Seagull01_8POI_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Seagulls_Barrels.BP_Seagulls_Barrels_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
