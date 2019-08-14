#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BountyRewardSkullItemInfo_Legendary-_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BountyRewardSkullItemInfo_Legendary-.BP_BountyRewardSkullItemInfo_Legendary-_C
// 0x0010 (0x0748 - 0x0738)
class ABP_BountyRewardSkullItemInfo_Legendary__C : public ABootyItemInfo
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0738(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BountyRewardSkullItemInfo_Legendary-.BP_BountyRewardSkullItemInfo_Legendary-_C"));
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
