#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Goldhoarder_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Goldhoarder.BP_Goldhoarder_C
// 0x0028 (0x0580 - 0x0558)
class ABP_Goldhoarder_C : public ACompanyShopkeeper
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0558(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                           SolidHits;                                                // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNPCDialogComponent*                         NPCDialog;                                                // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Goldhoarder.BP_Goldhoarder_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_Goldhoarder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
