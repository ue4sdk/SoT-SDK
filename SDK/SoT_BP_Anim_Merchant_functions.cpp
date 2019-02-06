// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Merchant_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_Merchant.BP_Anim_Merchant_C.AnimNotify_NPCItemAnimation
// (BlueprintCallable, BlueprintEvent)

void UBP_Anim_Merchant_C::AnimNotify_NPCItemAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_Merchant.BP_Anim_Merchant_C.AnimNotify_NPCItemAnimation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_Merchant.BP_Anim_Merchant_C.ExecuteUbergraph_BP_Anim_Merchant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_Merchant_C::ExecuteUbergraph_BP_Anim_Merchant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_Merchant.BP_Anim_Merchant_C.ExecuteUbergraph_BP_Anim_Merchant"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
