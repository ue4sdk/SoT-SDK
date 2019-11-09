#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ClusterDesc_3Items_1Wood2Banana_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ClusterDesc_3Items_1Wood2Banana.ClusterDesc_3Items_1Wood2Banana_C
// 0x0000 (0x0130 - 0x0130)
class UClusterDesc_3Items_1Wood2Banana_C : public UClusterDescription
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ClusterDesc_3Items_1Wood2Banana.ClusterDesc_3Items_1Wood2Banana_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
