#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shipwright_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Shipwright.BP_Shipwright_C
// 0x0050 (0x05C8 - 0x0578)
class ABP_Shipwright_C : public ANPC
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0578(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UNPCDialogComponent*                         NPCDialogComponent;                                       // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           SolidHits;                                                // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FWwiseEmitter                               WwiseEmitter;                                             // 0x0598(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UWwiseEvent*                                 WwiseShipwrightHummingPlay;                               // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WwiseShipwrightHummingStop;                               // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Shipwright.BP_Shipwright_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BP_Shipwright(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
