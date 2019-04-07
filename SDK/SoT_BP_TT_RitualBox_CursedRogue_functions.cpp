// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TT_RitualBox_CursedRogue_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TT_RitualBox_CursedRogue.BP_TT_RitualBox_CursedRogue_C.Set Replaced Madame Olivia Box Hidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Hidden                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TT_RitualBox_CursedRogue_C::Set_Replaced_Madame_Olivia_Box_Hidden(bool Is_Hidden)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_RitualBox_CursedRogue.BP_TT_RitualBox_CursedRogue_C.Set Replaced Madame Olivia Box Hidden"));

	struct
	{
		bool                           Is_Hidden;
	} params;

	params.Is_Hidden = Is_Hidden;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TT_RitualBox_CursedRogue.BP_TT_RitualBox_CursedRogue_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TT_RitualBox_CursedRogue_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_RitualBox_CursedRogue.BP_TT_RitualBox_CursedRogue_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TT_RitualBox_CursedRogue.BP_TT_RitualBox_CursedRogue_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TT_RitualBox_CursedRogue_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_RitualBox_CursedRogue.BP_TT_RitualBox_CursedRogue_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TT_RitualBox_CursedRogue.BP_TT_RitualBox_CursedRogue_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_TT_RitualBox_CursedRogue_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_RitualBox_CursedRogue.BP_TT_RitualBox_CursedRogue_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TT_RitualBox_CursedRogue.BP_TT_RitualBox_CursedRogue_C.ExecuteUbergraph_BP_TT_RitualBox_CursedRogue
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TT_RitualBox_CursedRogue_C::ExecuteUbergraph_BP_TT_RitualBox_CursedRogue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_RitualBox_CursedRogue.BP_TT_RitualBox_CursedRogue_C.ExecuteUbergraph_BP_TT_RitualBox_CursedRogue"));

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
