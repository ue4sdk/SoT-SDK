#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_vfx_SkeletonVfxCustom_Summon_Fast_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_vfx_SkeletonVfxCustom_Summon_Fast.BP_vfx_SkeletonVfxCustom_Summon_Fast_C
// 0x0000 (0x0028 - 0x0028)
class UBP_vfx_SkeletonVfxCustom_Summon_Fast_C : public UVfxCustomisationType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_vfx_SkeletonVfxCustom_Summon_Fast.BP_vfx_SkeletonVfxCustom_Summon_Fast_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
