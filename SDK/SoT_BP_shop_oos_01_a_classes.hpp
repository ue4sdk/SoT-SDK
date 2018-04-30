#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_shop_oos_01_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_shop_oos_01_a.BP_shop_oos_01_a_C
// 0x01F8 (0x0668 - 0x0470)
class ABP_shop_oos_01_a_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1F8];                                     // 0x0470(0x01F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_shop_oos_01_a.BP_shop_oos_01_a_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
