#pragma once

// Sea of Thieves (2.0) SDK

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
// 0x0028 (0x05E0 - 0x05B8)
class ABP_ShipwrightSandra_RevengeOfTheMorningstar_C : public ACompanyShopkeeper
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UNPCDialogComponent*                         NPCDialog;                                                // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorPhasingComponent*                      ActorPhasing;                                             // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ShipwrightSandra_RevengeOfTheMorningstar.BP_ShipwrightSandra_RevengeOfTheMorningstar_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ShipwrightSandra_RevengeOfTheMorningstar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
