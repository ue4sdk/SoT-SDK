// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShipNetProxy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Set Colour on All Materials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FName                          ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// FLinearColor                   Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmallShipNetProxy_C::Set_Colour_on_All_Materials(const FName& ParameterName, const FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Set Colour on All Materials"));

	ABP_SmallShipNetProxy_C_Set_Colour_on_All_Materials_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Set Value on All Materials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FName                          Variable_Name                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmallShipNetProxy_C::Set_Value_on_All_Materials(const FName& Variable_Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Set Value on All Materials"));

	ABP_SmallShipNetProxy_C_Set_Value_on_All_Materials_Params params;
	params.Variable_Name = Variable_Name;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Apply Bits to Lanterns
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            bits                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmallShipNetProxy_C::Apply_Bits_to_Lanterns(int bits)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Apply Bits to Lanterns"));

	ABP_SmallShipNetProxy_C_Apply_Bits_to_Lanterns_Params params;
	params.bits = bits;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Create Dynamic Materials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SmallShipNetProxy_C::Create_Dynamic_Materials()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Create Dynamic Materials"));

	ABP_SmallShipNetProxy_C_Create_Dynamic_Materials_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SmallShipNetProxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.UserConstructionScript"));

	ABP_SmallShipNetProxy_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_SmallShipNetProxy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.ReceiveBeginPlay"));

	ABP_SmallShipNetProxy_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.OnLanternStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            LanternStateBits               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmallShipNetProxy_C::OnLanternStateChanged(int LanternStateBits)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.OnLanternStateChanged"));

	ABP_SmallShipNetProxy_C_OnLanternStateChanged_Params params;
	params.LanternStateBits = LanternStateBits;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.OnEmissaryActiveStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           InNewEmissaryActiveState       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmallShipNetProxy_C::OnEmissaryActiveStateChanged(bool InNewEmissaryActiveState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.OnEmissaryActiveStateChanged"));

	ABP_SmallShipNetProxy_C_OnEmissaryActiveStateChanged_Params params;
	params.InNewEmissaryActiveState = InNewEmissaryActiveState;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.ExecuteUbergraph_BP_SmallShipNetProxy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmallShipNetProxy_C::ExecuteUbergraph_BP_SmallShipNetProxy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.ExecuteUbergraph_BP_SmallShipNetProxy"));

	ABP_SmallShipNetProxy_C_ExecuteUbergraph_BP_SmallShipNetProxy_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
