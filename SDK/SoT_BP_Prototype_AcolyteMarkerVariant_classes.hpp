#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prototype_AcolyteMarkerVariant_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prototype_AcolyteMarkerVariant.BP_Prototype_AcolyteMarkerVariant_C
// 0x0000 (0x0028 - 0x0028)
class UBP_Prototype_AcolyteMarkerVariant_C : public UWorldMarkerVariant
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prototype_AcolyteMarkerVariant.BP_Prototype_AcolyteMarkerVariant_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
