#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Constellation_Scarab_SE_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Constellation_Scarab_SE.BP_Constellation_Scarab_SE_C
// 0x0000 (0x0540 - 0x0540)
class ABP_Constellation_Scarab_SE_C : public ABP_Constellation_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Constellation_Scarab_SE.BP_Constellation_Scarab_SE_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
