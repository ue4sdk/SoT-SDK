// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TestUtilities_classes.hpp"

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
