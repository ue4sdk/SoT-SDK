#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ClusterDesc_3Items_1Wood2FruitSpecial_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ClusterDesc_3Items_1Wood2FruitSpecial.ClusterDesc_3Items_1Wood2FruitSpecial_C
// 0x0000 (0x0150 - 0x0150)
class UClusterDesc_3Items_1Wood2FruitSpecial_C : public UClusterDescription
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ClusterDesc_3Items_1Wood2FruitSpecial.ClusterDesc_3Items_1Wood2FruitSpecial_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
