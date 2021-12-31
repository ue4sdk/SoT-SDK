// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Repair_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Repair.RepairableInterface.HandleDestroy
// (Native, Public)

void URepairableInterface::HandleDestroy()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Repair.RepairableInterface.HandleDestroy"));

	URepairableInterface_HandleDestroy_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Repair.RepairableInterface.GetUndoRepairTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AActor*                        Interactor                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float URepairableInterface::GetUndoRepairTime(AActor* Interactor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Repair.RepairableInterface.GetUndoRepairTime"));

	URepairableInterface_GetUndoRepairTime_Params params;
	params.Interactor = Interactor;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Repair.RepairableInterface.GetRepairType
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UClass*                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UClass* URepairableInterface::GetRepairType()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Repair.RepairableInterface.GetRepairType"));

	URepairableInterface_GetRepairType_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Repair.RepairableInterface.GetRepairTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float URepairableInterface::GetRepairTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Repair.RepairableInterface.GetRepairTime"));

	URepairableInterface_GetRepairTime_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Repair.RepairableInterface.GetRepairableState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ERepairableState>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ERepairableState> URepairableInterface::GetRepairableState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Repair.RepairableInterface.GetRepairableState"));

	URepairableInterface_GetRepairableState_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Repair.RepairingInterface.GetRepairType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UClass*                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UClass* URepairingInterface::GetRepairType()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Repair.RepairingInterface.GetRepairType"));

	URepairingInterface_GetRepairType_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
