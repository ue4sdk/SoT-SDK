#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ClusterDesc_5Items_2Wood3FruitSpecial_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ClusterDesc_5Items_2Wood3FruitSpecial.ClusterDesc_5Items_2Wood3FruitSpecial_C
// 0x0000 (0x0130 - 0x0130)
class UClusterDesc_5Items_2Wood3FruitSpecial_C : public UClusterDescription
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ClusterDesc_5Items_2Wood3FruitSpecial.ClusterDesc_5Items_2Wood3FruitSpecial_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
