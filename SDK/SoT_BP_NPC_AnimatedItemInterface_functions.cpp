// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_NPC_AnimatedItemInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_NPC_AnimatedItemInterface.BP_NPC_AnimatedItemInterface_C.PlayItemAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_NPC_AnimatedItemInterface_C::PlayItemAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_AnimatedItemInterface.BP_NPC_AnimatedItemInterface_C.PlayItemAnimation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
