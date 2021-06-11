#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ReadBookConditionalStatTrigger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ReadBookConditionalStatTrigger.ReadBookConditionalStatTrigger_C
// 0x0000 (0x0030 - 0x0030)
class UReadBookConditionalStatTrigger_C : public UConditionalStatsTriggerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ReadBookConditionalStatTrigger.ReadBookConditionalStatTrigger_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
