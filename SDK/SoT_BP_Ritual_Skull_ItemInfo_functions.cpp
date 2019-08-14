// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Ritual_Skull_ItemInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Ritual_Skull_ItemInfo.BP_Ritual_Skull_ItemInfo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Ritual_Skull_ItemInfo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Ritual_Skull_ItemInfo.BP_Ritual_Skull_ItemInfo_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Ritual_Skull_ItemInfo.BP_Ritual_Skull_ItemInfo_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Ritual_Skull_ItemInfo_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Ritual_Skull_ItemInfo.BP_Ritual_Skull_ItemInfo_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Ritual_Skull_ItemInfo.BP_Ritual_Skull_ItemInfo_C.ExecuteUbergraph_BP_Ritual_Skull_ItemInfo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ritual_Skull_ItemInfo_C::ExecuteUbergraph_BP_Ritual_Skull_ItemInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Ritual_Skull_ItemInfo.BP_Ritual_Skull_ItemInfo_C.ExecuteUbergraph_BP_Ritual_Skull_ItemInfo"));

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
