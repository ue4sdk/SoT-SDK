#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SDLetter_ExclusionEntitlement_Campaign033_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SDLetter_ExclusionEntitlement_Campaign033.SDLetter_ExclusionEntitlement_Campaign033_C
// 0x0000 (0x00D8 - 0x00D8)
class USDLetter_ExclusionEntitlement_Campaign033_C : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass SDLetter_ExclusionEntitlement_Campaign033.SDLetter_ExclusionEntitlement_Campaign033_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
