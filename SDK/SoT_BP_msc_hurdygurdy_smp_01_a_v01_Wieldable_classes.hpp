#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_msc_hurdygurdy_smp_01_a_v01_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_msc_hurdygurdy_smp_01_a_v01_Wieldable.BP_msc_hurdygurdy_smp_01_a_v01_Wieldable_C
// 0x0018 (0x0868 - 0x0850)
class ABP_msc_hurdygurdy_smp_01_a_v01_Wieldable_C : public ABP_HurdyGurdy_C
{
public:
	class UStaticMeshComponent*                        shroudmask_tp;                                            // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shroud_tp;                                                // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shroud_fp;                                                // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_msc_hurdygurdy_smp_01_a_v01_Wieldable.BP_msc_hurdygurdy_smp_01_a_v01_Wieldable_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
