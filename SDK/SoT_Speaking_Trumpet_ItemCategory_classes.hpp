#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Speaking_Trumpet_ItemCategory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Speaking_Trumpet_ItemCategory.Speaking_Trumpet_ItemCategory_C
// 0x0000 (0x0080 - 0x0080)
class USpeaking_Trumpet_ItemCategory_C : public USpeakingTrumpetItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Speaking_Trumpet_ItemCategory.Speaking_Trumpet_ItemCategory_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
