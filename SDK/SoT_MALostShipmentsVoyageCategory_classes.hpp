#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MALostShipmentsVoyageCategory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MALostShipmentsVoyageCategory.MALostShipmentsVoyageCategory_C
// 0x0000 (0x0078 - 0x0078)
class UMALostShipmentsVoyageCategory_C : public UVoyageCategory_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MALostShipmentsVoyageCategory.MALostShipmentsVoyageCategory_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
