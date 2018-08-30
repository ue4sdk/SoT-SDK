// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TestUtilities_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TestUtilities.TestPrimitiveComponent.GetCollisionObjectType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ECollisionChannel> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECollisionChannel> UTestPrimitiveComponent::GetCollisionObjectType()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestUtilities.TestPrimitiveComponent.GetCollisionObjectType");

	UTestPrimitiveComponent_GetCollisionObjectType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
