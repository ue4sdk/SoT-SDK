#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_msc_concertina_elb_01_a_v02_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_msc_concertina_elb_01_a_v02_ItemInfo.BP_msc_concertina_elb_01_a_v02_ItemInfo_C
// 0x0008 (0x04C0 - 0x04B8)
class ABP_msc_concertina_elb_01_a_v02_ItemInfo_C : public AItemInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_msc_concertina_elb_01_a_v02_ItemInfo.BP_msc_concertina_elb_01_a_v02_ItemInfo_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
