#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Treasure_Artifact_Proxy_DVR_Rare_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Treasure_Artifact_Proxy_DVR_Rare.BP_Treasure_Artifact_Proxy_DVR_Rare_C
// 0x0000 (0x08A8 - 0x08A8)
class ABP_Treasure_Artifact_Proxy_DVR_Rare_C : public ABP_TreasureArtifact_Proxy_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Treasure_Artifact_Proxy_DVR_Rare.BP_Treasure_Artifact_Proxy_DVR_Rare_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
