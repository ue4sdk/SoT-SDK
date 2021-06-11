#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Title_OOS_04_MysticAcolyte_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Title_OOS_04_MysticAcolyte.Title_OOS_04_MysticAcolyte_C
// 0x0000 (0x00E0 - 0x00E0)
class UTitle_OOS_04_MysticAcolyte_C : public UTitleDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Title_OOS_04_MysticAcolyte.Title_OOS_04_MysticAcolyte_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
