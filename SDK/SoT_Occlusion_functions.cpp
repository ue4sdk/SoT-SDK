// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Occlusion_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Occlusion.OcclusionFunctionLibrary.IsActorOccludedFromActor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Observer                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetPosition                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InteractionPointRadius         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          AdditionalIgnoredActors        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EOcclusionTypes>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EOcclusionTypes> UOcclusionFunctionLibrary::IsActorOccludedFromActor(class UObject* WorldContextObject, class AActor* Observer, class AActor* Target, const struct FVector& TargetPosition, float InteractionPointRadius, TArray<class AActor*> AdditionalIgnoredActors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Occlusion.OcclusionFunctionLibrary.IsActorOccludedFromActor"));

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  Observer;
		class AActor*                  Target;
		struct FVector                 TargetPosition;
		float                          InteractionPointRadius;
		TArray<class AActor*>          AdditionalIgnoredActors;
		TEnumAsByte<EOcclusionTypes>   ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Observer = Observer;
	params.Target = Target;
	params.TargetPosition = TargetPosition;
	params.InteractionPointRadius = InteractionPointRadius;
	params.AdditionalIgnoredActors = AdditionalIgnoredActors;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Occlusion.OcclusionInterface.IsActorOccludedFromActor
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Observer                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetPosition                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Tolerance                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionChannel> CollisionChannel               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          AdditionalIgnoredActors        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EOcclusionTypes>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EOcclusionTypes> UOcclusionInterface::IsActorOccludedFromActor(class AActor* Observer, class AActor* Target, const struct FVector& TargetPosition, float Tolerance, TEnumAsByte<ECollisionChannel> CollisionChannel, TArray<class AActor*> AdditionalIgnoredActors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Occlusion.OcclusionInterface.IsActorOccludedFromActor"));

	struct
	{
		class AActor*                  Observer;
		class AActor*                  Target;
		struct FVector                 TargetPosition;
		float                          Tolerance;
		TEnumAsByte<ECollisionChannel> CollisionChannel;
		TArray<class AActor*>          AdditionalIgnoredActors;
		TEnumAsByte<EOcclusionTypes>   ReturnValue;
	} params;

	params.Observer = Observer;
	params.Target = Target;
	params.TargetPosition = TargetPosition;
	params.Tolerance = Tolerance;
	params.CollisionChannel = CollisionChannel;
	params.AdditionalIgnoredActors = AdditionalIgnoredActors;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
