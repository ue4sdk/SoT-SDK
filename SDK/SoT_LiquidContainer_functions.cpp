// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LiquidContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LiquidContainer.LiquidContainerInterface.SetLiquidLevel
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Level                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULiquidContainerInterface::SetLiquidLevel(float Level)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LiquidContainer.LiquidContainerInterface.SetLiquidLevel"));

	struct
	{
		float                          Level;
	} params;

	params.Level = Level;

	UObject::ProcessEvent(fn, &params);
}


// Function LiquidContainer.LiquidContainerInterface.GetWantedLiquidLevel
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULiquidContainerInterface::GetWantedLiquidLevel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LiquidContainer.LiquidContainerInterface.GetWantedLiquidLevel"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LiquidContainer.LiquidContainerInterface.GetMaxLiquidCollectionAmount
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULiquidContainerInterface::GetMaxLiquidCollectionAmount()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LiquidContainer.LiquidContainerInterface.GetMaxLiquidCollectionAmount"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LiquidContainer.LiquidContainerInterface.GetLiquidLevel
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULiquidContainerInterface::GetLiquidLevel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LiquidContainer.LiquidContainerInterface.GetLiquidLevel"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LiquidContainer.LiquidContainerInterface.CollectLiquidAmount
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          DesiredAmount                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULiquidContainerInterface::CollectLiquidAmount(float DesiredAmount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LiquidContainer.LiquidContainerInterface.CollectLiquidAmount"));

	struct
	{
		float                          DesiredAmount;
		float                          ReturnValue;
	} params;

	params.DesiredAmount = DesiredAmount;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LiquidContainer.LiquidContainerComponent.SetLiquidType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ELiquidType>       LiquidType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULiquidContainerComponent::SetLiquidType(TEnumAsByte<ELiquidType> LiquidType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LiquidContainer.LiquidContainerComponent.SetLiquidType"));

	struct
	{
		TEnumAsByte<ELiquidType>       LiquidType;
	} params;

	params.LiquidType = LiquidType;

	UObject::ProcessEvent(fn, &params);
}


// Function LiquidContainer.LiquidContainerComponent.SetLiquidLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Level                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULiquidContainerComponent::SetLiquidLevel(float Level)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LiquidContainer.LiquidContainerComponent.SetLiquidLevel"));

	struct
	{
		float                          Level;
	} params;

	params.Level = Level;

	UObject::ProcessEvent(fn, &params);
}


// Function LiquidContainer.LiquidContainerComponent.GetLiquidLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULiquidContainerComponent::GetLiquidLevel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LiquidContainer.LiquidContainerComponent.GetLiquidLevel"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LiquidContainer.LiquidContainerComponent.CollectLiquidMaterials
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMeshComponent*          MeshComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULiquidContainerComponent::CollectLiquidMaterials(class UMeshComponent* MeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LiquidContainer.LiquidContainerComponent.CollectLiquidMaterials"));

	struct
	{
		class UMeshComponent*          MeshComponent;
	} params;

	params.MeshComponent = MeshComponent;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
