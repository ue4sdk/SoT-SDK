#pragma once

// Sea of Thieves (2.0) SDK

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
// 0x0008 (0x0960 - 0x0958)
class ABP_TreasureChest_Proxy_Drunken_C : public ABP_TreasureChestProxy_C
{
public:
	class UTankardRefillerComponent*                   TankardRefiller;                                          // 0x0958(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TreasureChest_Proxy_Drunken.BP_TreasureChest_Proxy_Drunken_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
