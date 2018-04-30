#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AudioBoatSmallHullAmbi_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AudioBoatSmallHullAmbi.BP_AudioBoatSmallHullAmbi_C
// 0x00C8 (0x0690 - 0x05C8)
class ABP_AudioBoatSmallHullAmbi_C : public AShipHullAudioSmall
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x05C8(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AudioBoatSmallHullAmbi.BP_AudioBoatSmallHullAmbi_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
