// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BountyRewardSkull_Proxy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BountyRewardSkull_Proxy.BP_BountyRewardSkull_Proxy_C.GetClosestInteractionPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_BountyRewardSkull_Proxy_C::GetClosestInteractionPoint(struct FVector* ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BountyRewardSkull_Proxy.BP_BountyRewardSkull_Proxy_C.GetClosestInteractionPoint");

	ABP_BountyRewardSkull_Proxy_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;

	return params.ReturnValue;
}


// Function BP_BountyRewardSkull_Proxy.BP_BountyRewardSkull_Proxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BountyRewardSkull_Proxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BountyRewardSkull_Proxy.BP_BountyRewardSkull_Proxy_C.UserConstructionScript");

	ABP_BountyRewardSkull_Proxy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
