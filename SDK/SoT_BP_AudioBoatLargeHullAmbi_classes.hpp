#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AudioBoatLargeHullAmbi_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AudioBoatLargeHullAmbi.BP_AudioBoatLargeHullAmbi_C
// 0x01C0 (0x0788 - 0x05C8)
class ABP_AudioBoatLargeHullAmbi_C : public AShipHullAudioLarge
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x05C8(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AudioBoatLargeHullAmbi.BP_AudioBoatLargeHullAmbi_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
