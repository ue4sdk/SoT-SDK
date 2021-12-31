// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TavernBoard_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TavernBoard.BP_TavernBoard_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TavernBoard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TavernBoard.BP_TavernBoard_C.UserConstructionScript"));

	ABP_TavernBoard_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TavernBoard.BP_TavernBoard_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_TavernBoard_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TavernBoard.BP_TavernBoard_C.ReceiveBeginPlay"));

	ABP_TavernBoard_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TavernBoard.BP_TavernBoard_C.ExecuteUbergraph_BP_TavernBoard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TavernBoard_C::ExecuteUbergraph_BP_TavernBoard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TavernBoard.BP_TavernBoard_C.ExecuteUbergraph_BP_TavernBoard"));

	ABP_TavernBoard_C_ExecuteUbergraph_BP_TavernBoard_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
