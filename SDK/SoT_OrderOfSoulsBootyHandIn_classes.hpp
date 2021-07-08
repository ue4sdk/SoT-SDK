#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_OrderOfSoulsBootyHandIn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OrderOfSoulsBootyHandIn.OrderOfSoulsBootyHandIn_C
// 0x0000 (0x0030 - 0x0030)
class UOrderOfSoulsBootyHandIn_C : public UConditionalStatsTriggerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass OrderOfSoulsBootyHandIn.OrderOfSoulsBootyHandIn_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
