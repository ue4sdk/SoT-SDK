#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipwrightSandra_RevengeOfTheMorningstar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShipwrightSandra_RevengeOfTheMorningstar.BP_ShipwrightSandra_RevengeOfTheMorningstar_C
// 0x0008 (0x05E8 - 0x05E0)
class ABP_ShipwrightSandra_RevengeOfTheMorningstar_C : public ABP_Shipwright_C
{
public:
	class UActorPhasingComponent*                      ActorPhasing;                                             // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ShipwrightSandra_RevengeOfTheMorningstar.BP_ShipwrightSandra_RevengeOfTheMorningstar_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
