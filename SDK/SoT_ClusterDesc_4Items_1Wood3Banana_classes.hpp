#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ClusterDesc_4Items_1Wood3Banana_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ClusterDesc_4Items_1Wood3Banana.ClusterDesc_4Items_1Wood3Banana_C
// 0x0000 (0x0130 - 0x0130)
class UClusterDesc_4Items_1Wood3Banana_C : public UClusterDescription
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ClusterDesc_4Items_1Wood3Banana.ClusterDesc_4Items_1Wood3Banana_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
