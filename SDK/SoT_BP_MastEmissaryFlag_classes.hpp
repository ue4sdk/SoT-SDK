#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MastEmissaryFlag_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MastEmissaryFlag.BP_MastEmissaryFlag_C
// 0x0000 (0x04D0 - 0x04D0)
class ABP_MastEmissaryFlag_C : public AMastEmissaryFlag
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MastEmissaryFlag.BP_MastEmissaryFlag_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
