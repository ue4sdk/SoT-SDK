// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RotatableSignalCloud_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RotatableSignalCloud.BP_RotatableSignalCloud_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RotatableSignalCloud_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_RotatableSignalCloud.BP_RotatableSignalCloud_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_RotatableSignalCloud.BP_RotatableSignalCloud_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_RotatableSignalCloud_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_RotatableSignalCloud.BP_RotatableSignalCloud_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_RotatableSignalCloud.BP_RotatableSignalCloud_C.ExecuteUbergraph_BP_RotatableSignalCloud
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_RotatableSignalCloud_C::ExecuteUbergraph_BP_RotatableSignalCloud(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_RotatableSignalCloud.BP_RotatableSignalCloud_C.ExecuteUbergraph_BP_RotatableSignalCloud"));

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
