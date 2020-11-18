#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_IntentBasedContinuousUseDoorMechanismAction_01a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_IntentBasedContinuousUseDoorMechanismAction_01a.BP_IntentBasedContinuousUseDoorMechanismAction_01a_C
// 0x0028 (0x0AD8 - 0x0AB0)
class ABP_IntentBasedContinuousUseDoorMechanismAction_01a_C : public AIntentBasedContinuousAnimatedMechanismAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box1;                                                     // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UIntentCombinerComponent*                    IntentCombiner;                                           // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_IntentBasedContinuousUseDoorMechanismAction_01a.BP_IntentBasedContinuousUseDoorMechanismAction_01a_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_IntentBasedContinuousUseDoorMechanismAction_01a(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
