// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Blunderbuss_AI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Blunderbuss_AI.BP_Blunderbuss_AI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Blunderbuss_AI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Blunderbuss_AI.BP_Blunderbuss_AI_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Blunderbuss_AI.BP_Blunderbuss_AI_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Blunderbuss_AI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Blunderbuss_AI.BP_Blunderbuss_AI_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Blunderbuss_AI.BP_Blunderbuss_AI_C.ExecuteUbergraph_BP_Blunderbuss_AI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Blunderbuss_AI_C::ExecuteUbergraph_BP_Blunderbuss_AI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Blunderbuss_AI.BP_Blunderbuss_AI_C.ExecuteUbergraph_BP_Blunderbuss_AI"));

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
