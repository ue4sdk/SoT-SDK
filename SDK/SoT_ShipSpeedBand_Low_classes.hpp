#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ShipSpeedBand_Low_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShipSpeedBand_Low.ShipSpeedBand_Low_C
// 0x0000 (0x0030 - 0x0030)
class UShipSpeedBand_Low_C : public UShipSpeedBand
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ShipSpeedBand_Low.ShipSpeedBand_Low_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
