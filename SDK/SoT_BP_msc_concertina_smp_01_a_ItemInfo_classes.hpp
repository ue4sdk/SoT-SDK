#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_msc_concertina_smp_01_a_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_msc_concertina_smp_01_a_ItemInfo.BP_msc_concertina_smp_01_a_ItemInfo_C
// 0x0008 (0x0508 - 0x0500)
class ABP_msc_concertina_smp_01_a_ItemInfo_C : public AItemInfo
{
public:
	USceneComponent*                                   DefaultSceneRoot;                                         // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_msc_concertina_smp_01_a_ItemInfo.BP_msc_concertina_smp_01_a_ItemInfo_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
