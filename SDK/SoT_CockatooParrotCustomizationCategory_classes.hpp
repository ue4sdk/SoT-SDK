#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CockatooParrotCustomizationCategory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CockatooParrotCustomizationCategory.CockatooParrotCustomizationCategory_C
// 0x0000 (0x0088 - 0x0088)
class UCockatooParrotCustomizationCategory_C : public UParrotCustomizationCategory_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CockatooParrotCustomizationCategory.CockatooParrotCustomizationCategory_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
