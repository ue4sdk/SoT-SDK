// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SirenTrident_Proxy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C.GetClosestInteractionPoint
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FVector                        ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector ABP_SirenTrident_Proxy_C::GetClosestInteractionPoint(const FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C.GetClosestInteractionPoint"));

	ABP_SirenTrident_Proxy_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	UObject::ProcessEvent(fn, &params);

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;

	return params.ReturnValue;
}


// Function BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SirenTrident_Proxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C.UserConstructionScript"));

	ABP_SirenTrident_Proxy_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_SirenTrident_Proxy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C.ReceiveBeginPlay"));

	ABP_SirenTrident_Proxy_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C.ExecuteUbergraph_BP_SirenTrident_Proxy
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SirenTrident_Proxy_C::ExecuteUbergraph_BP_SirenTrident_Proxy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C.ExecuteUbergraph_BP_SirenTrident_Proxy"));

	ABP_SirenTrident_Proxy_C_ExecuteUbergraph_BP_SirenTrident_Proxy_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
