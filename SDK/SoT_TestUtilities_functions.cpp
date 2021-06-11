// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TestUtilities_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TestUtilities.DelegateTester.Callback
// (Final, RequiredAPI, Native, Public)

void UDelegateTester::Callback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TestUtilities.DelegateTester.Callback"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TestUtilities.DelegateTesterWithFNameParam.Callback
// (Final, RequiredAPI, Native, Public, HasOutParms)
// Parameters:
// struct FName                   InParam                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDelegateTesterWithFNameParam::Callback(const struct FName& InParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TestUtilities.DelegateTesterWithFNameParam.Callback"));

	struct
	{
		struct FName                   InParam;
	} params;

	params.InParam = InParam;

	UObject::ProcessEvent(fn, &params);
}


// Function TestUtilities.TestPrimitiveComponent.GetCollisionObjectType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ECollisionChannel> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECollisionChannel> UTestPrimitiveComponent::GetCollisionObjectType()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TestUtilities.TestPrimitiveComponent.GetCollisionObjectType"));

	struct
	{
		TEnumAsByte<ECollisionChannel> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function TestUtilities.TestStaticMeshComponent.AddForce
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Force                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)

void UTestStaticMeshComponent::AddForce(const struct FVector& Force, const struct FName& BoneName, bool bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TestUtilities.TestStaticMeshComponent.AddForce"));

	struct
	{
		struct FVector                 Force;
		struct FName                   BoneName;
		bool                           bAccelChange;
	} params;

	params.Force = Force;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
