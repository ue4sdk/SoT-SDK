#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LockedFateoftheMorningstarChest_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LockedFateoftheMorningstarChest_ItemInfo.BP_LockedFateoftheMorningstarChest_ItemInfo_C
// 0x0008 (0x0798 - 0x0790)
class ABP_LockedFateoftheMorningstarChest_ItemInfo_C : public ABP_CollectorsChest_ItemInfo_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LockedFateoftheMorningstarChest_ItemInfo.BP_LockedFateoftheMorningstarChest_ItemInfo_C"));
		return ptr;
	}


	void FreeSouls();
	void UserConstructionScript();
	void MulticastFreeSouls();
	void ExecuteUbergraph_BP_LockedFateoftheMorningstarChest_ItemInfo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
