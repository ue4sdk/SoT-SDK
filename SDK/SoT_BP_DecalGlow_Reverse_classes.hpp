#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DecalGlow_Reverse_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C
// 0x0038 (0x04B0 - 0x0478)
class ABP_DecalGlow_Reverse_C : public ALandmarkReactionActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0478(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C");
		return ptr;
	}


	void StartGlowEffect();
	bool StartReaction();
	bool StopReaction();
	void CollectDecalMaterials();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_DecalGlow_Reverse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
