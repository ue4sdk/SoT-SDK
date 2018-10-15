#pragma once

// Sea of Thieves (1.2.6) SDK

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
// 0x0008 (0x0A68 - 0x0A60)
class ABP_TreasureChest_Proxy_Drunken_C : public ABP_TreasureChestProxy_C
{
public:
	class UTankardRefillerComponent*                   TankardRefiller;                                          // 0x0A60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_TreasureChest_Proxy_Drunken.BP_TreasureChest_Proxy_Drunken_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
