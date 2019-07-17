#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CapuchinMonkeyCustomizationCategory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CapuchinMonkeyCustomizationCategory.CapuchinMonkeyCustomizationCategory_C
// 0x0000 (0x0080 - 0x0080)
class UCapuchinMonkeyCustomizationCategory_C : public UMonkeyCustomizationCategory_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CapuchinMonkeyCustomizationCategory.CapuchinMonkeyCustomizationCategory_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
