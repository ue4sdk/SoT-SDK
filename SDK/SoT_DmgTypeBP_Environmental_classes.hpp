#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_DmgTypeBP_Environmental_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgTypeBP_Environmental.DmgTypeBP_Environmental_C
// 0x0000 (0x0040 - 0x0040)
class UDmgTypeBP_Environmental_C : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass DmgTypeBP_Environmental.DmgTypeBP_Environmental_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
