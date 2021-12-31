#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_DarkTides_HexingSkullSoldEntitlement_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarkTides_HexingSkullSoldEntitlement.DarkTides_HexingSkullSoldEntitlement_C
// 0x0000 (0x00D8 - 0x00D8)
class UDarkTides_HexingSkullSoldEntitlement_C : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass DarkTides_HexingSkullSoldEntitlement.DarkTides_HexingSkullSoldEntitlement_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
