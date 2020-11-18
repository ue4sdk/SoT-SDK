#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CapstanMechanismTrigger_1Arm_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CapstanMechanismTrigger_1Arm.BP_CapstanMechanismTrigger_1Arm_C
// 0x0018 (0x0858 - 0x0840)
class ABP_CapstanMechanismTrigger_1Arm_C : public ABP_Base_Capstan_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0840(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCapstanMechanismTriggerComponent*           CapstanMechanismTrigger;                                  // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Arm1;                                                     // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CapstanMechanismTrigger_1Arm.BP_CapstanMechanismTrigger_1Arm_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CapstanMechanismTrigger_1Arm(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
