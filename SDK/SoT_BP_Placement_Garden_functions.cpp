// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Placement_Garden_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Placement_Garden.BP_Placement_Garden_C.Set Garden Parameters
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Int                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Instances_Created              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Placement_Garden_C::Set_Garden_Parameters(float Radius, int Int, bool* Instances_Created)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Garden.BP_Placement_Garden_C.Set Garden Parameters"));

	struct
	{
		float                          Radius;
		int                            Int;
		bool                           Instances_Created;
	} params;

	params.Radius = Radius;
	params.Int = Int;

	UObject::ProcessEvent(fn, &params);

	if (Instances_Created != nullptr)
		*Instances_Created = params.Instances_Created;
}


// Function BP_Placement_Garden.BP_Placement_Garden_C.Create Garden
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Placement_Garden_C::Create_Garden()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Garden.BP_Placement_Garden_C.Create Garden"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Placement_Garden.BP_Placement_Garden_C.Initialise Instances
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Placement_Garden_C::Initialise_Instances()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Garden.BP_Placement_Garden_C.Initialise Instances"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Placement_Garden.BP_Placement_Garden_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Placement_Garden_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Garden.BP_Placement_Garden_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Placement_Garden.BP_Placement_Garden_C.Force Create Garden
// (BlueprintCallable, BlueprintEvent)

void ABP_Placement_Garden_C::Force_Create_Garden()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Garden.BP_Placement_Garden_C.Force Create Garden"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Placement_Garden.BP_Placement_Garden_C.ExecuteUbergraph_BP_Placement_Garden
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Placement_Garden_C::ExecuteUbergraph_BP_Placement_Garden(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Garden.BP_Placement_Garden_C.ExecuteUbergraph_BP_Placement_Garden"));

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
