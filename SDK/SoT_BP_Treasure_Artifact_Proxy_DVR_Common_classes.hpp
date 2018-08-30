#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Treasure_Artifact_Proxy_DVR_Common_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Treasure_Artifact_Proxy_DVR_Common.BP_Treasure_Artifact_Proxy_DVR_Common_C
// 0x0000 (0x08A8 - 0x08A8)
class ABP_Treasure_Artifact_Proxy_DVR_Common_C : public ABP_TreasureArtifact_Proxy_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Treasure_Artifact_Proxy_DVR_Common.BP_Treasure_Artifact_Proxy_DVR_Common_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
