// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TheSunkenCrystal_DiveDownDebrisSpawner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TheSunkenCrystal_DiveDownDebrisSpawner.BP_TheSunkenCrystal_DiveDownDebrisSpawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TheSunkenCrystal_DiveDownDebrisSpawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TheSunkenCrystal_DiveDownDebrisSpawner.BP_TheSunkenCrystal_DiveDownDebrisSpawner_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TheSunkenCrystal_DiveDownDebrisSpawner.BP_TheSunkenCrystal_DiveDownDebrisSpawner_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_TheSunkenCrystal_DiveDownDebrisSpawner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TheSunkenCrystal_DiveDownDebrisSpawner.BP_TheSunkenCrystal_DiveDownDebrisSpawner_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TheSunkenCrystal_DiveDownDebrisSpawner.BP_TheSunkenCrystal_DiveDownDebrisSpawner_C.ExecuteUbergraph_BP_TheSunkenCrystal_DiveDownDebrisSpawner
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TheSunkenCrystal_DiveDownDebrisSpawner_C::ExecuteUbergraph_BP_TheSunkenCrystal_DiveDownDebrisSpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TheSunkenCrystal_DiveDownDebrisSpawner.BP_TheSunkenCrystal_DiveDownDebrisSpawner_C.ExecuteUbergraph_BP_TheSunkenCrystal_DiveDownDebrisSpawner"));

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
