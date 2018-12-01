#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ShipSpeedBand_Medium_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShipSpeedBand_Medium.ShipSpeedBand_Medium_C
// 0x0000 (0x0030 - 0x0030)
class UShipSpeedBand_Medium_C : public UShipSpeedBand
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ShipSpeedBand_Medium.ShipSpeedBand_Medium_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
