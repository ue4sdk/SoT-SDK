#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ChickenAIController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ChickenAIController.BP_ChickenAIController_C
// 0x0008 (0x0A98 - 0x0A90)
class ABP_ChickenAIController_C : public AAthenaFaunaAIController
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0A90(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ChickenAIController.BP_ChickenAIController_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ChickenAIController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
