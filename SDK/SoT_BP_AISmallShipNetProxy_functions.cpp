// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AISmallShipNetProxy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AISmallShipNetProxy.BP_AISmallShipNetProxy_C.Set Value on All Materials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Variable_Name                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AISmallShipNetProxy_C::Set_Value_on_All_Materials(const struct FName& Variable_Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISmallShipNetProxy.BP_AISmallShipNetProxy_C.Set Value on All Materials"));

	struct
	{
		struct FName                   Variable_Name;
		float                          Value;
	} params;

	params.Variable_Name = Variable_Name;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AISmallShipNetProxy.BP_AISmallShipNetProxy_C.Apply Bits to Lanterns
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            byte                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AISmallShipNetProxy_C::Apply_Bits_to_Lanterns(int byte)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISmallShipNetProxy.BP_AISmallShipNetProxy_C.Apply Bits to Lanterns"));

	struct
	{
		int                            byte;
	} params;

	params.byte = byte;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AISmallShipNetProxy.BP_AISmallShipNetProxy_C.Create Dynamic Materials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AISmallShipNetProxy_C::Create_Dynamic_Materials()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISmallShipNetProxy.BP_AISmallShipNetProxy_C.Create Dynamic Materials"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AISmallShipNetProxy.BP_AISmallShipNetProxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AISmallShipNetProxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISmallShipNetProxy.BP_AISmallShipNetProxy_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AISmallShipNetProxy.BP_AISmallShipNetProxy_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_AISmallShipNetProxy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISmallShipNetProxy.BP_AISmallShipNetProxy_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AISmallShipNetProxy.BP_AISmallShipNetProxy_C.OnLanternStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            LanternStateBits               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AISmallShipNetProxy_C::OnLanternStateChanged(int LanternStateBits)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISmallShipNetProxy.BP_AISmallShipNetProxy_C.OnLanternStateChanged"));

	struct
	{
		int                            LanternStateBits;
	} params;

	params.LanternStateBits = LanternStateBits;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AISmallShipNetProxy.BP_AISmallShipNetProxy_C.ExecuteUbergraph_BP_AISmallShipNetProxy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AISmallShipNetProxy_C::ExecuteUbergraph_BP_AISmallShipNetProxy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AISmallShipNetProxy.BP_AISmallShipNetProxy_C.ExecuteUbergraph_BP_AISmallShipNetProxy"));

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
