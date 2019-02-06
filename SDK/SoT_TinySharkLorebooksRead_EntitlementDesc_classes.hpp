#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TinySharkLorebooksRead_EntitlementDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TinySharkLorebooksRead_EntitlementDesc.TinySharkLorebooksRead_EntitlementDesc_C
// 0x0000 (0x00D8 - 0x00D8)
class UTinySharkLorebooksRead_EntitlementDesc_C : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TinySharkLorebooksRead_EntitlementDesc.TinySharkLorebooksRead_EntitlementDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
