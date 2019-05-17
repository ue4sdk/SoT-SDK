// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Sail_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Sail.BP_Sail_C.Debug
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Sail_C::Debug()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sail.BP_Sail_C.Debug"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Sail.BP_Sail_C.Initialise
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsMainSail                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          SailForceScalar                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Sail_C::Initialise(bool IsMainSail, float SailForceScalar)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sail.BP_Sail_C.Initialise"));

	struct
	{
		bool                           IsMainSail;
		float                          SailForceScalar;
	} params;

	params.IsMainSail = IsMainSail;
	params.SailForceScalar = SailForceScalar;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Sail.BP_Sail_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Sail_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Sail.BP_Sail_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
