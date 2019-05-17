#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy.BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy_C
// 0x0008 (0x0098 - 0x0090)
class UBP_RevengeOfTheMorningStar_WaitForGraymarrowProxy_C : public UBlueprintStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy.BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy_C"));
		return ptr;
	}


	void OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode);
	void OnParticipantBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
