#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prototype_LordMarkerVariant_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prototype_LordMarkerVariant.BP_Prototype_LordMarkerVariant_C
// 0x0000 (0x0028 - 0x0028)
class UBP_Prototype_LordMarkerVariant_C : public UWorldMarkerVariant
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prototype_LordMarkerVariant.BP_Prototype_LordMarkerVariant_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
