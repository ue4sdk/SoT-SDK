// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_dmn_ship_world_01_a_design_1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function dmn_ship_world_01_a_design_1.dmn_ship_world_01_a_design_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Admn_ship_world_01_a_design_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function dmn_ship_world_01_a_design_1.dmn_ship_world_01_a_design_C.ReceiveBeginPlay");

	Admn_ship_world_01_a_design_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function dmn_ship_world_01_a_design_1.dmn_ship_world_01_a_design_C.ExecuteUbergraph_dmn_ship_world_01_a_design
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Admn_ship_world_01_a_design_C::ExecuteUbergraph_dmn_ship_world_01_a_design(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function dmn_ship_world_01_a_design_1.dmn_ship_world_01_a_design_C.ExecuteUbergraph_dmn_ship_world_01_a_design");

	Admn_ship_world_01_a_design_C_ExecuteUbergraph_dmn_ship_world_01_a_design_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
