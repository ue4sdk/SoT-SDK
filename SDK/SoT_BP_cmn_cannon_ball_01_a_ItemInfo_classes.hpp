#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_cmn_cannon_ball_01_a_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_cmn_cannon_ball_01_a_ItemInfo.BP_cmn_cannon_ball_01_a_ItemInfo_C
// 0x0008 (0x0510 - 0x0508)
class ABP_cmn_cannon_ball_01_a_ItemInfo_C : public AProjectileItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_cmn_cannon_ball_01_a_ItemInfo.BP_cmn_cannon_ball_01_a_ItemInfo_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
