#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_figurehead_thunderpack_01_v01_CustomizationDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass figurehead_thunderpack_01_v01_CustomizationDesc.figurehead_thunderpack_01_v01_CustomizationDesc_C
// 0x0000 (0x0108 - 0x0108)
class Ufigurehead_thunderpack_01_v01_CustomizationDesc_C : public UShipCustomizationDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass figurehead_thunderpack_01_v01_CustomizationDesc.figurehead_thunderpack_01_v01_CustomizationDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
