#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Treasure_Artifact_Proxy_goblet_02_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Treasure_Artifact_Proxy_goblet_02_a.BP_Treasure_Artifact_Proxy_goblet_02_a_C
// 0x0000 (0x07A8 - 0x07A8)
class ABP_Treasure_Artifact_Proxy_goblet_02_a_C : public ABP_TreasureArtifact_Proxy_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Treasure_Artifact_Proxy_goblet_02_a.BP_Treasure_Artifact_Proxy_goblet_02_a_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
