// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LargeShipNetProxy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Set Colour on All Materials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Variable_Name                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LargeShipNetProxy_C::Set_Colour_on_All_Materials(const struct FName& Variable_Name, const struct FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Set Colour on All Materials"));

	struct
	{
		struct FName                   Variable_Name;
		struct FLinearColor            Value;
	} params;

	params.Variable_Name = Variable_Name;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Set Value on All Materials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Variable_Name                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LargeShipNetProxy_C::Set_Value_on_All_Materials(const struct FName& Variable_Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Set Value on All Materials"));

	struct
	{
		struct FName                   Variable_Name;
		float                          Value;
	} params;

	params.Variable_Name = Variable_Name;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Apply Bits to Lanterns
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Lantern_Bits                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LargeShipNetProxy_C::Apply_Bits_to_Lanterns(int Lantern_Bits)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Apply Bits to Lanterns"));

	struct
	{
		int                            Lantern_Bits;
	} params;

	params.Lantern_Bits = Lantern_Bits;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Create Dynamic Materials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LargeShipNetProxy_C::Create_Dynamic_Materials()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Create Dynamic Materials"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LargeShipNetProxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_LargeShipNetProxy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.OnLanternStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            LanternStateBits               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LargeShipNetProxy_C::OnLanternStateChanged(int LanternStateBits)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.OnLanternStateChanged"));

	struct
	{
		int                            LanternStateBits;
	} params;

	params.LanternStateBits = LanternStateBits;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.OnEmissaryActiveStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           InNewEmissaryActiveState       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LargeShipNetProxy_C::OnEmissaryActiveStateChanged(bool InNewEmissaryActiveState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.OnEmissaryActiveStateChanged"));

	struct
	{
		bool                           InNewEmissaryActiveState;
	} params;

	params.InNewEmissaryActiveState = InNewEmissaryActiveState;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.ExecuteUbergraph_BP_LargeShipNetProxy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LargeShipNetProxy_C::ExecuteUbergraph_BP_LargeShipNetProxy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.ExecuteUbergraph_BP_LargeShipNetProxy"));

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
