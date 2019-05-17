// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Repair_classes.hpp"

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

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Repair.RepairableInterface.GetRepairType
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* URepairableInterface::GetRepairType()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Repair.RepairableInterface.GetRepairType"));

	struct
	{
		class UClass*                  ReturnValue;
	} params;


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

	struct
	{
		float                          ReturnValue;
	} params;


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

	struct
	{
		TEnumAsByte<ERepairableState>  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Repair.RepairingInterface.GetRepairType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* URepairingInterface::GetRepairType()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Repair.RepairingInterface.GetRepairType"));

	struct
	{
		class UClass*                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
