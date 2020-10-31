#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Title_OOS_11_EnchanterOfTheOrder_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Title_OOS_11_EnchanterOfTheOrder.Title_OOS_11_EnchanterOfTheOrder_C
// 0x0000 (0x00E0 - 0x00E0)
class UTitle_OOS_11_EnchanterOfTheOrder_C : public UTitleDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Title_OOS_11_EnchanterOfTheOrder.Title_OOS_11_EnchanterOfTheOrder_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
