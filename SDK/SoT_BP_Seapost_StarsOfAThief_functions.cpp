// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Seapost_StarsOfAThief_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Seapost_StarsOfAThief.BP_Seapost_StarsOfAThief_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Seapost_StarsOfAThief_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Seapost_StarsOfAThief.BP_Seapost_StarsOfAThief_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Seapost_StarsOfAThief.BP_Seapost_StarsOfAThief_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Seapost_StarsOfAThief_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Seapost_StarsOfAThief.BP_Seapost_StarsOfAThief_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Seapost_StarsOfAThief.BP_Seapost_StarsOfAThief_C.ExecuteUbergraph_BP_Seapost_StarsOfAThief
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Seapost_StarsOfAThief_C::ExecuteUbergraph_BP_Seapost_StarsOfAThief(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Seapost_StarsOfAThief.BP_Seapost_StarsOfAThief_C.ExecuteUbergraph_BP_Seapost_StarsOfAThief"));

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
