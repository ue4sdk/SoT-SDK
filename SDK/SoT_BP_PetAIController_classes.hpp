#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PetAIController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PetAIController.BP_PetAIController_C
// 0x0008 (0x0A70 - 0x0A68)
class ABP_PetAIController_C : public APetAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A68(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PetAIController.BP_PetAIController_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PetAIController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
