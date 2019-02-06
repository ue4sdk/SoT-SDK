// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShipNetProxy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Set Colour on All Materials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmallShipNetProxy_C::Set_Colour_on_All_Materials(const struct FName& ParameterName, const struct FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Set Colour on All Materials"));

	struct
	{
		struct FName                   ParameterName;
		struct FLinearColor            Value;
	} params;

	params.ParameterName = ParameterName;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Set Value on All Materials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Variable_Name                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmallShipNetProxy_C::Set_Value_on_All_Materials(const struct FName& Variable_Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Set Value on All Materials"));

	struct
	{
		struct FName                   Variable_Name;
		float                          Value;
	} params;

	params.Variable_Name = Variable_Name;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Apply Bits to Lanterns
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Bits                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmallShipNetProxy_C::Apply_Bits_to_Lanterns(int Bits)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Apply Bits to Lanterns"));

	struct
	{
		int                            Bits;
	} params;

	params.Bits = Bits;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Create Dynamic Materials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SmallShipNetProxy_C::Create_Dynamic_Materials()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Create Dynamic Materials"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SmallShipNetProxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_SmallShipNetProxy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.OnLanternStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            LanternStateBits               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmallShipNetProxy_C::OnLanternStateChanged(int LanternStateBits)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.OnLanternStateChanged"));

	struct
	{
		int                            LanternStateBits;
	} params;

	params.LanternStateBits = LanternStateBits;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.ExecuteUbergraph_BP_SmallShipNetProxy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmallShipNetProxy_C::ExecuteUbergraph_BP_SmallShipNetProxy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.ExecuteUbergraph_BP_SmallShipNetProxy"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
