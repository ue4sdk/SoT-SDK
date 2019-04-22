#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WildRose_Cutscene_Enchant_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WildRose_Cutscene_Enchant.BP_WildRose_Cutscene_Enchant_C
// 0x0000 (0x0380 - 0x0380)
class UBP_WildRose_Cutscene_Enchant_C : public USynchedMusicZoneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_WildRose_Cutscene_Enchant.BP_WildRose_Cutscene_Enchant_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
