#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_EmissaryStoleLoot_OOS_PromptAccessKey_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EmissaryStoleLoot_OOS_PromptAccessKey.EmissaryStoleLoot_OOS_PromptAccessKey_C
// 0x0000 (0x0038 - 0x0038)
class UEmissaryStoleLoot_OOS_PromptAccessKey_C : public UPromptCounterAccessKey
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass EmissaryStoleLoot_OOS_PromptAccessKey.EmissaryStoleLoot_OOS_PromptAccessKey_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
