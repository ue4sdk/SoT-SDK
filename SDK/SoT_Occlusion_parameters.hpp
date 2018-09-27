#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Occlusion_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Occlusion.OcclusionFunctionLibrary.IsActorOccludedFromActor
struct UOcclusionFunctionLibrary_IsActorOccludedFromActor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Observer;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetPosition;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InteractionPointRadius;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              AdditionalIgnoredActors;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EOcclusionTypes>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Occlusion.OcclusionInterface.IsActorOccludedFromActor
struct UOcclusionInterface_IsActorOccludedFromActor_Params
{
	class AActor*                                      Observer;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetPosition;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Tolerance;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              AdditionalIgnoredActors;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EOcclusionTypes>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
