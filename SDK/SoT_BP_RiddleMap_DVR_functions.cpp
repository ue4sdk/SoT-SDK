// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RiddleMap_DVR_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RiddleMap_DVR.BP_RiddleMap_DVR_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RiddleMap_DVR_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_RiddleMap_DVR.BP_RiddleMap_DVR_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_RiddleMap_DVR.BP_RiddleMap_DVR_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_RiddleMap_DVR_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_RiddleMap_DVR.BP_RiddleMap_DVR_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_RiddleMap_DVR.BP_RiddleMap_DVR_C.OnIsWielded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventWieldableItemSetIsWielded NewParam                       (Parm)

void ABP_RiddleMap_DVR_C::OnIsWielded(const struct FEventWieldableItemSetIsWielded& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_RiddleMap_DVR.BP_RiddleMap_DVR_C.OnIsWielded"));

	struct
	{
		struct FEventWieldableItemSetIsWielded NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_RiddleMap_DVR.BP_RiddleMap_DVR_C.ExecuteUbergraph_BP_RiddleMap_DVR
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_RiddleMap_DVR_C::ExecuteUbergraph_BP_RiddleMap_DVR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_RiddleMap_DVR.BP_RiddleMap_DVR_C.ExecuteUbergraph_BP_RiddleMap_DVR"));

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
