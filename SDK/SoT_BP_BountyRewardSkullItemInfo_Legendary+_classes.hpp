#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BountyRewardSkullItemInfo_Legendary+_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BountyRewardSkullItemInfo_Legendary+.BP_BountyRewardSkullItemInfo_Legendary+_C
// 0x0010 (0x05B8 - 0x05A8)
class ABP_BountyRewardSkullItemInfo_Legendary__C : public ABootyItemInfo
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BountyRewardSkullItemInfo_Legendary+.BP_BountyRewardSkullItemInfo_Legendary+_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Legendary_(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
