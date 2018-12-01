#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BountyRewardSkullItemInfo_Common_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BountyRewardSkullItemInfo_Common.BP_BountyRewardSkullItemInfo_Common_C
// 0x0010 (0x05E0 - 0x05D0)
class ABP_BountyRewardSkullItemInfo_Common_C : public ABootyItemInfo
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_BountyRewardSkullItemInfo_Common.BP_BountyRewardSkullItemInfo_Common_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Common(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
