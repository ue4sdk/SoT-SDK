#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CursedRogue_WaitForEventDispatch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CursedRogue_WaitForEventDispatch.BP_CursedRogue_WaitForEventDispatch_C
// 0x0008 (0x00A0 - 0x0098)
class UBP_CursedRogue_WaitForEventDispatch_C : public UBlueprintStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CursedRogue_WaitForEventDispatch.BP_CursedRogue_WaitForEventDispatch_C"));
		return ptr;
	}


	void OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode);
	void On_Broadcast_Received();
	void ExecuteUbergraph_BP_CursedRogue_WaitForEventDispatch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
