#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Campaign005_CursedSails_BilgeRats_NPC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Campaign005_CursedSails_BilgeRats_NPC.BP_Campaign005_CursedSails_BilgeRats_NPC_C
// 0x0018 (0x0568 - 0x0550)
class ABP_Campaign005_CursedSails_BilgeRats_NPC_C : public AShopkeeper
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNPCDialogComponent*                         NPCDialog;                                                // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Campaign005_CursedSails_BilgeRats_NPC.BP_Campaign005_CursedSails_BilgeRats_NPC_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
