#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Campaign005_CursedSails_ClothingChris_CursedSails_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Campaign005_CursedSails_ClothingChris_CursedSails.BP_Campaign005_CursedSails_ClothingChris_CursedSails_C
// 0x0000 (0x0598 - 0x0598)
class ABP_Campaign005_CursedSails_ClothingChris_CursedSails_C : public ABP_Clothing_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Campaign005_CursedSails_ClothingChris_CursedSails.BP_Campaign005_CursedSails_ClothingChris_CursedSails_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
