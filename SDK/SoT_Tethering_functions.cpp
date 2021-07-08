// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Tethering_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tethering.DynamicCordRenderComponent.SetCordEndPointB
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         EndPointB                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDynamicCordRenderComponent::SetCordEndPointB(class USceneComponent* EndPointB)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tethering.DynamicCordRenderComponent.SetCordEndPointB"));

	struct
	{
		class USceneComponent*         EndPointB;
	} params;

	params.EndPointB = EndPointB;

	UObject::ProcessEvent(fn, &params);
}


// Function Tethering.DynamicCordRenderComponent.SetCordEndPointA
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         EndPointA                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDynamicCordRenderComponent::SetCordEndPointA(class USceneComponent* EndPointA)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tethering.DynamicCordRenderComponent.SetCordEndPointA"));

	struct
	{
		class USceneComponent*         EndPointA;
	} params;

	params.EndPointA = EndPointA;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
