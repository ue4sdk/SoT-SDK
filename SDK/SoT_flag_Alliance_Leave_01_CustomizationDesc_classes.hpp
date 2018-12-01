#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_flag_Alliance_Leave_01_CustomizationDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass flag_Alliance_Leave_01_CustomizationDesc.flag_Alliance_Leave_01_CustomizationDesc_C
// 0x0000 (0x00E8 - 0x00E8)
class Uflag_Alliance_Leave_01_CustomizationDesc_C : public UShipCustomizationDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass flag_Alliance_Leave_01_CustomizationDesc.flag_Alliance_Leave_01_CustomizationDesc_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
