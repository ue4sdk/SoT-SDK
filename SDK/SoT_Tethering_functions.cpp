// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Tethering_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tethering.DynamicCordRenderComponent.SetCordEndPointB
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// USceneComponent*               EndPointB                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDynamicCordRenderComponent::SetCordEndPointB(USceneComponent* EndPointB)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tethering.DynamicCordRenderComponent.SetCordEndPointB"));

	UDynamicCordRenderComponent_SetCordEndPointB_Params params;
	params.EndPointB = EndPointB;

	UObject::ProcessEvent(fn, &params);
}


// Function Tethering.DynamicCordRenderComponent.SetCordEndPointA
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// USceneComponent*               EndPointA                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDynamicCordRenderComponent::SetCordEndPointA(USceneComponent* EndPointA)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tethering.DynamicCordRenderComponent.SetCordEndPointA"));

	UDynamicCordRenderComponent_SetCordEndPointA_Params params;
	params.EndPointA = EndPointA;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
