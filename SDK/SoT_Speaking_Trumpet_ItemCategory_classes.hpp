#pragma once

// Sea of Thieves (1.0.5) SDK

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
class USpeaking_Trumpet_ItemCategory_C : public UItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Speaking_Trumpet_ItemCategory.Speaking_Trumpet_ItemCategory_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
