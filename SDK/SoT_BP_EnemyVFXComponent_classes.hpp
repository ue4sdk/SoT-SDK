#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_EnemyVFXComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_EnemyVFXComponent.BP_EnemyVFXComponent_C
// 0x0098 (0x0160 - 0x00C8)
class UBP_EnemyVFXComponent_C : public UActorComponent
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x00C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	FObjectMessagingHandle                             PlayerDeadHandle;                                         // 0x00D0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	FObjectMessagingHandle                             PlayerDeadHandle_1;                                       // 0x0118(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_EnemyVFXComponent.BP_EnemyVFXComponent_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_EnemyVFXComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
