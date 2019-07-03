#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Eli_FateOfTheMorningstar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Eli_FateOfTheMorningstar.BP_Eli_FateOfTheMorningstar_C
// 0x0000 (0x05D0 - 0x05D0)
class ABP_Eli_FateOfTheMorningstar_C : public ABP_Orderofsouls_TallTales_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Eli_FateOfTheMorningstar.BP_Eli_FateOfTheMorningstar_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
