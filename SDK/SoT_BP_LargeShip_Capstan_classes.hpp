#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LargeShip_Capstan_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LargeShip_Capstan.BP_LargeShip_Capstan_C
// 0x0020 (0x07E8 - 0x07C8)
class ABP_LargeShip_Capstan_C : public ABP_Base_Capstan_C
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x07C8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LargeShip_Capstan.BP_LargeShip_Capstan_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
