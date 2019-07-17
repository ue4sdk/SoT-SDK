#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_figurehead_killerinstinct_01_CustomizationDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass figurehead_killerinstinct_01_CustomizationDesc.figurehead_killerinstinct_01_CustomizationDesc_C
// 0x0000 (0x00E8 - 0x00E8)
class Ufigurehead_killerinstinct_01_CustomizationDesc_C : public UShipCustomizationDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass figurehead_killerinstinct_01_CustomizationDesc.figurehead_killerinstinct_01_CustomizationDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
