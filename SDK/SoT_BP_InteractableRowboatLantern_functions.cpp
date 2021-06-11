// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_InteractableRowboatLantern_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_InteractableRowboatLantern.BP_InteractableRowboatLantern_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_InteractableRowboatLantern_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractableRowboatLantern.BP_InteractableRowboatLantern_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_InteractableRowboatLantern.BP_InteractableRowboatLantern_C.LightStateChanged
// (Event, Public, BlueprintEvent)

void ABP_InteractableRowboatLantern_C::LightStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractableRowboatLantern.BP_InteractableRowboatLantern_C.LightStateChanged"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_InteractableRowboatLantern.BP_InteractableRowboatLantern_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_InteractableRowboatLantern_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractableRowboatLantern.BP_InteractableRowboatLantern_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_InteractableRowboatLantern.BP_InteractableRowboatLantern_C.ExecuteUbergraph_BP_InteractableRowboatLantern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InteractableRowboatLantern_C::ExecuteUbergraph_BP_InteractableRowboatLantern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractableRowboatLantern.BP_InteractableRowboatLantern_C.ExecuteUbergraph_BP_InteractableRowboatLantern"));

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
