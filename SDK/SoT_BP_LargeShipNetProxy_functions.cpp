// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LargeShipNetProxy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Set Colour on All Materials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FName                          Variable_Name                  (Parm, ZeroConstructor, IsPlainOldData)
// FLinearColor                   Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LargeShipNetProxy_C::Set_Colour_on_All_Materials(const FName& Variable_Name, const FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Set Colour on All Materials"));

	ABP_LargeShipNetProxy_C_Set_Colour_on_All_Materials_Params params;
	params.Variable_Name = Variable_Name;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Set Value on All Materials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FName                          Variable_Name                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LargeShipNetProxy_C::Set_Value_on_All_Materials(const FName& Variable_Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Set Value on All Materials"));

	ABP_LargeShipNetProxy_C_Set_Value_on_All_Materials_Params params;
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

	ABP_LargeShipNetProxy_C_Apply_Bits_to_Lanterns_Params params;
	params.Lantern_Bits = Lantern_Bits;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Create Dynamic Materials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LargeShipNetProxy_C::Create_Dynamic_Materials()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Create Dynamic Materials"));

	ABP_LargeShipNetProxy_C_Create_Dynamic_Materials_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LargeShipNetProxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.UserConstructionScript"));

	ABP_LargeShipNetProxy_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_LargeShipNetProxy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.ReceiveBeginPlay"));

	ABP_LargeShipNetProxy_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.OnLanternStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            LanternStateBits               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LargeShipNetProxy_C::OnLanternStateChanged(int LanternStateBits)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.OnLanternStateChanged"));

	ABP_LargeShipNetProxy_C_OnLanternStateChanged_Params params;
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

	ABP_LargeShipNetProxy_C_OnEmissaryActiveStateChanged_Params params;
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

	ABP_LargeShipNetProxy_C_ExecuteUbergraph_BP_LargeShipNetProxy_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
