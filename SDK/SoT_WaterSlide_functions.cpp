// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_WaterSlide_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WaterSlide.WaterSlide.SetEntranceCollisionComponent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// UPrimitiveComponent*           InEntranceCollisionComponent   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWaterSlide::SetEntranceCollisionComponent(UPrimitiveComponent* InEntranceCollisionComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WaterSlide.WaterSlide.SetEntranceCollisionComponent"));

	AWaterSlide_SetEntranceCollisionComponent_Params params;
	params.InEntranceCollisionComponent = InEntranceCollisionComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function WaterSlide.WaterSlide.ComponentBeginOverlapCallBack
// (Final, Native, Private, HasOutParms)
// Parameters:
// AActor*                        InOtherActor                   (Parm, ZeroConstructor, IsPlainOldData)
// UPrimitiveComponent*           InOtherComp                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InOtherBodyIndex               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InFromSweep                    (Parm, ZeroConstructor, IsPlainOldData)
// FHitResult                     InSweepResult                  (ConstParm, Parm, OutParm, ReferenceParm)

void AWaterSlide::ComponentBeginOverlapCallBack(AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int InOtherBodyIndex, bool InFromSweep, const FHitResult& InSweepResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WaterSlide.WaterSlide.ComponentBeginOverlapCallBack"));

	AWaterSlide_ComponentBeginOverlapCallBack_Params params;
	params.InOtherActor = InOtherActor;
	params.InOtherComp = InOtherComp;
	params.InOtherBodyIndex = InOtherBodyIndex;
	params.InFromSweep = InFromSweep;
	params.InSweepResult = InSweepResult;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
