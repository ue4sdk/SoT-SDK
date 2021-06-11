// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_WaterSlide_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WaterSlide.WaterSlide.SetEntranceCollisionComponent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     InEntranceCollisionComponent   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWaterSlide::SetEntranceCollisionComponent(class UPrimitiveComponent* InEntranceCollisionComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WaterSlide.WaterSlide.SetEntranceCollisionComponent"));

	struct
	{
		class UPrimitiveComponent*     InEntranceCollisionComponent;
	} params;

	params.InEntranceCollisionComponent = InEntranceCollisionComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function WaterSlide.WaterSlide.ComponentBeginOverlapCallBack
// (Final, Native, Private, HasOutParms)
// Parameters:
// class AActor*                  InOtherActor                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     InOtherComp                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InOtherBodyIndex               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InFromSweep                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              InSweepResult                  (ConstParm, Parm, OutParm, ReferenceParm)

void AWaterSlide::ComponentBeginOverlapCallBack(class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int InOtherBodyIndex, bool InFromSweep, const struct FHitResult& InSweepResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WaterSlide.WaterSlide.ComponentBeginOverlapCallBack"));

	struct
	{
		class AActor*                  InOtherActor;
		class UPrimitiveComponent*     InOtherComp;
		int                            InOtherBodyIndex;
		bool                           InFromSweep;
		struct FHitResult              InSweepResult;
	} params;

	params.InOtherActor = InOtherActor;
	params.InOtherComp = InOtherComp;
	params.InOtherBodyIndex = InOtherBodyIndex;
	params.InFromSweep = InFromSweep;
	params.InSweepResult = InSweepResult;

	UObject::ProcessEvent(fn, &params);
}


// Function WaterSlide.WaterSlideCompositeInputHandler.OnMoveRight
// (Final, Native, Private)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EInputHandlerResult> UWaterSlideCompositeInputHandler::OnMoveRight(float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WaterSlide.WaterSlideCompositeInputHandler.OnMoveRight"));

	struct
	{
		float                          Value;
		TEnumAsByte<EInputHandlerResult> ReturnValue;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WaterSlide.WaterSlideCompositeInputHandler.OnMoveForward
// (Final, Native, Private)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EInputHandlerResult> UWaterSlideCompositeInputHandler::OnMoveForward(float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WaterSlide.WaterSlideCompositeInputHandler.OnMoveForward"));

	struct
	{
		float                          Value;
		TEnumAsByte<EInputHandlerResult> ReturnValue;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
