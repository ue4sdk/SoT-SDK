#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Innkeeper_Tracy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Innkeeper_Tracy.BP_Innkeeper_Tracy_C
// 0x0038 (0x06F8 - 0x06C0)
class ABP_Innkeeper_Tracy_C : public ABP_Innkeeper_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWwiseEvent*                                 SFX_IdleLoopPlay_1;                                       // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 SFX_IdleLoopStop_1;                                       // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWwiseEmitter                               InnkeeperEmitter_1;                                       // 0x06D8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Innkeeper_Tracy.BP_Innkeeper_Tracy_C"));
		return ptr;
	}


	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_Innkeeper_Tracy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
