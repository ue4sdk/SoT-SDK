#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Campaign022_GildedLegends_BilgeRats_NPC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Campaign022_GildedLegends_BilgeRats_NPC.BP_Campaign022_GildedLegends_BilgeRats_NPC_C
// 0x0018 (0x05D0 - 0x05B8)
class ABP_Campaign022_GildedLegends_BilgeRats_NPC_C : public ACompanyShopkeeper
{
public:
	class UCapsuleComponent*                           Capsule;                                                  // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNPCDialogComponent*                         NPCDialog;                                                // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Campaign022_GildedLegends_BilgeRats_NPC.BP_Campaign022_GildedLegends_BilgeRats_NPC_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
