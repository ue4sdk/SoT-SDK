#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MacaqueMonkeyCustomizationCategory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MacaqueMonkeyCustomizationCategory.MacaqueMonkeyCustomizationCategory_C
// 0x0000 (0x0088 - 0x0088)
class UMacaqueMonkeyCustomizationCategory_C : public UMonkeyCustomizationCategory_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MacaqueMonkeyCustomizationCategory.MacaqueMonkeyCustomizationCategory_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
