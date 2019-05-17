// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LockedFateoftheMorningstarChest_ItemInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LockedFateoftheMorningstarChest_ItemInfo.BP_LockedFateoftheMorningstarChest_ItemInfo_C.FreeSouls
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LockedFateoftheMorningstarChest_ItemInfo_C::FreeSouls()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LockedFateoftheMorningstarChest_ItemInfo.BP_LockedFateoftheMorningstarChest_ItemInfo_C.FreeSouls"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LockedFateoftheMorningstarChest_ItemInfo.BP_LockedFateoftheMorningstarChest_ItemInfo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LockedFateoftheMorningstarChest_ItemInfo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LockedFateoftheMorningstarChest_ItemInfo.BP_LockedFateoftheMorningstarChest_ItemInfo_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LockedFateoftheMorningstarChest_ItemInfo.BP_LockedFateoftheMorningstarChest_ItemInfo_C.MulticastFreeSouls
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_LockedFateoftheMorningstarChest_ItemInfo_C::MulticastFreeSouls()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LockedFateoftheMorningstarChest_ItemInfo.BP_LockedFateoftheMorningstarChest_ItemInfo_C.MulticastFreeSouls"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LockedFateoftheMorningstarChest_ItemInfo.BP_LockedFateoftheMorningstarChest_ItemInfo_C.ExecuteUbergraph_BP_LockedFateoftheMorningstarChest_ItemInfo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LockedFateoftheMorningstarChest_ItemInfo_C::ExecuteUbergraph_BP_LockedFateoftheMorningstarChest_ItemInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LockedFateoftheMorningstarChest_ItemInfo.BP_LockedFateoftheMorningstarChest_ItemInfo_C.ExecuteUbergraph_BP_LockedFateoftheMorningstarChest_ItemInfo"));

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
