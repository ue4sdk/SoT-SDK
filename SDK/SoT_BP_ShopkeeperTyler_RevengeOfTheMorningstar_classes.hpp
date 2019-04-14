#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShopkeeperTyler_RevengeOfTheMorningstar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShopkeeperTyler_RevengeOfTheMorningstar.BP_ShopkeeperTyler_RevengeOfTheMorningstar_C
// 0x0008 (0x05C0 - 0x05B8)
class ABP_ShopkeeperTyler_RevengeOfTheMorningstar_C : public ABP_Shopkeeper_C
{
public:
	class UActorPhasingComponent*                      ActorPhasing;                                             // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ShopkeeperTyler_RevengeOfTheMorningstar.BP_ShopkeeperTyler_RevengeOfTheMorningstar_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
