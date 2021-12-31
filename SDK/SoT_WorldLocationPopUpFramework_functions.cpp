// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_WorldLocationPopUpFramework_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WorldLocationPopUpFramework.WorldLocationPopUpComponent.OnOverlapEnd
// (Final, Native, Protected)
// Parameters:
// AActor*                        OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// UPrimitiveComponent*           OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void UWorldLocationPopUpComponent::OnOverlapEnd(AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WorldLocationPopUpFramework.WorldLocationPopUpComponent.OnOverlapEnd"));

	UWorldLocationPopUpComponent_OnOverlapEnd_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function WorldLocationPopUpFramework.WorldLocationPopUpComponent.OnOverlapBegin
// (Final, Native, Protected, HasOutParms)
// Parameters:
// AActor*                        OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// UPrimitiveComponent*           OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FromSweep                      (Parm, ZeroConstructor, IsPlainOldData)
// FHitResult                     SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void UWorldLocationPopUpComponent::OnOverlapBegin(AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WorldLocationPopUpFramework.WorldLocationPopUpComponent.OnOverlapBegin"));

	UWorldLocationPopUpComponent_OnOverlapBegin_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.FromSweep = FromSweep;
	params.SweepResult = SweepResult;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
