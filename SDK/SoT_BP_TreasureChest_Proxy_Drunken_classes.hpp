#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureChest_Proxy_Drunken_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureChest_Proxy_Drunken.BP_TreasureChest_Proxy_Drunken_C
// 0x0008 (0x09D0 - 0x09C8)
class ABP_TreasureChest_Proxy_Drunken_C : public ABP_TreasureChestProxy_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x09C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TreasureChest_Proxy_Drunken.BP_TreasureChest_Proxy_Drunken_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
