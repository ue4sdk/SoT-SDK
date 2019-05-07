#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BarrelItemTypes_Wood_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BarrelItemTypes_Wood.BarrelItemTypes_Wood_C
// 0x0000 (0x0080 - 0x0080)
class UBarrelItemTypes_Wood_C : public UCannonballItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BarrelItemTypes_Wood.BarrelItemTypes_Wood_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
