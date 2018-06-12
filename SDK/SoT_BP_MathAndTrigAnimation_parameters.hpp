#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MathAndTrigAnimation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.DisplayAllCharacterSockets
struct UBP_MathAndTrigAnimation_C_DisplayAllCharacterSockets_Params
{
	class AAthenaCharacter*                            Athena_Character;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.DecrementFloat
struct UBP_MathAndTrigAnimation_C_DecrementFloat_Params
{
	float                                              Float;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              DecrementValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Increment Float
struct UBP_MathAndTrigAnimation_C_Increment_Float_Params
{
	float                                              Float;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Incement_Value;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Apply Relative Transform
struct UBP_MathAndTrigAnimation_C_Apply_Relative_Transform_Params
{
	struct FTransform                                  RelativeTransform;                                        // (Parm, IsPlainOldData)
	struct FTransform                                  BaseTransform;                                            // (Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  CombinedTransform;                                        // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Calculate Relative Transform
struct UBP_MathAndTrigAnimation_C_Calculate_Relative_Transform_Params
{
	struct FTransform                                  RelativeObjectsWorldTransform;                            // (Parm, IsPlainOldData)
	struct FTransform                                  BaseObjectsWorldTransform;                                // (Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RealtiveOffsetTransform;                                  // (Parm, OutParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
