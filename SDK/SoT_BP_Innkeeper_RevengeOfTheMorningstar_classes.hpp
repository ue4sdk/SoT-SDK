#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Innkeeper_RevengeOfTheMorningstar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Innkeeper_RevengeOfTheMorningstar.BP_Innkeeper_RevengeOfTheMorningstar_C
// 0x0040 (0x0628 - 0x05E8)
class ABP_Innkeeper_RevengeOfTheMorningstar_C : public ABP_Innkeeper_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UActorPhasingComponent*                      ActorPhasing;                                             // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 SFX_IdleLoopPlay_1;                                       // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 SFX_IdleLoopStop_1;                                       // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWwiseEmitter                               InnkeeperEmitter_1;                                       // 0x0608(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Innkeeper_RevengeOfTheMorningstar.BP_Innkeeper_RevengeOfTheMorningstar_C"));
		return ptr;
	}


	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_Innkeeper_RevengeOfTheMorningstar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
