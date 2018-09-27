// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Cannon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Cannon.BP_Cannon_C.GetDockableInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDockableInfo           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDockableInfo ABP_Cannon_C::GetDockableInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cannon.BP_Cannon_C.GetDockableInfo");

	ABP_Cannon_C_GetDockableInfo_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Cannon.BP_Cannon_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Cannon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cannon.BP_Cannon_C.UserConstructionScript");

	ABP_Cannon_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Cannon.BP_Cannon_C.OnCannonDescLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCannonDescAsset*        CannonDesc                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Cannon_C::OnCannonDescLoaded(class UCannonDescAsset* CannonDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cannon.BP_Cannon_C.OnCannonDescLoaded");

	ABP_Cannon_C_OnCannonDescLoaded_Params params;
	params.CannonDesc = CannonDesc;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Cannon.BP_Cannon_C.ExecuteUbergraph_BP_Cannon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Cannon_C::ExecuteUbergraph_BP_Cannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cannon.BP_Cannon_C.ExecuteUbergraph_BP_Cannon");

	ABP_Cannon_C_ExecuteUbergraph_BP_Cannon_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
