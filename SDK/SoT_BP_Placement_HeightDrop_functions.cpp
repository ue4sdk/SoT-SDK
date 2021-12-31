// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Placement_HeightDrop_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CreateComponentList
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Placement_HeightDrop_C::CreateComponentList()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CreateComponentList"));

	ABP_Placement_HeightDrop_C_CreateComponentList_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CreateParentBounds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Placement_HeightDrop_C::CreateParentBounds()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CreateParentBounds"));

	ABP_Placement_HeightDrop_C_CreateParentBounds_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CheckMobilityState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Placement_HeightDrop_C::CheckMobilityState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CheckMobilityState"));

	ABP_Placement_HeightDrop_C_CheckMobilityState_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.Get Valid Collision
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<FHitResult>             Hit_Results                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Hit_Success                    (Parm, ZeroConstructor, IsPlainOldData)
// USceneComponent*               Current_Component              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FVector                        Impact_Position                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FVector                        Impact_Normal                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Placement_HeightDrop_C::Get_Valid_Collision(bool Hit_Success, USceneComponent* Current_Component, TArray<FHitResult>* Hit_Results, bool* Return_Value, FVector* Impact_Position, FVector* Impact_Normal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.Get Valid Collision"));

	ABP_Placement_HeightDrop_C_Get_Valid_Collision_Params params;
	params.Hit_Success = Hit_Success;
	params.Current_Component = Current_Component;

	UObject::ProcessEvent(fn, &params);

	if (Hit_Results != nullptr)
		*Hit_Results = params.Hit_Results;
	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Impact_Position != nullptr)
		*Impact_Position = params.Impact_Position;
	if (Impact_Normal != nullptr)
		*Impact_Normal = params.Impact_Normal;
}


// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.Drop Components
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Placement_HeightDrop_C::Drop_Components()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.Drop Components"));

	ABP_Placement_HeightDrop_C_Drop_Components_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Placement_HeightDrop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.UserConstructionScript"));

	ABP_Placement_HeightDrop_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
