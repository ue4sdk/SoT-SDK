#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_OrderOfSouls_WildRose_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_OrderOfSouls_WildRose.BP_OrderOfSouls_WildRose_C
// 0x0008 (0x05B8 - 0x05B0)
class ABP_OrderOfSouls_WildRose_C : public ABP_Orderofsouls_TallTales_C
{
public:
	class UActorPhasingComponent*                      ActorPhasing;                                             // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_OrderOfSouls_WildRose.BP_OrderOfSouls_WildRose_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
