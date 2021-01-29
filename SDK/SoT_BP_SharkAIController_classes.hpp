#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SharkAIController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SharkAIController.BP_SharkAIController_C
// 0x0008 (0x0A30 - 0x0A28)
class ABP_SharkAIController_C : public AAthenaSwimmingAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A28(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SharkAIController.BP_SharkAIController_C"));
		return ptr;
	}


	void UserConstructionScript();
	void OnNewlySpawned();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SharkAIController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
