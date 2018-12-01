#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AllianceFlagShipCustomizationCategory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AllianceFlagShipCustomizationCategory.AllianceFlagShipCustomizationCategory_C
// 0x0000 (0x0078 - 0x0078)
class UAllianceFlagShipCustomizationCategory_C : public UShipCustomizationCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AllianceFlagShipCustomizationCategory.AllianceFlagShipCustomizationCategory_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
