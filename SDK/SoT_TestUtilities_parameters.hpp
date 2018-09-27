#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TestUtilities_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TestUtilities.TestPrimitiveComponent.GetCollisionObjectType
struct UTestPrimitiveComponent_GetCollisionObjectType_Params
{
	TEnumAsByte<ECollisionChannel>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TestUtilities.TestStaticMeshComponent.AddForce
struct UTestStaticMeshComponent_AddForce_Params
{
	struct FVector                                     Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAccelChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
