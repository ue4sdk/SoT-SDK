#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SkeletonUnarmedLightImpactId_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SkeletonUnarmedLightImpactId.BP_SkeletonUnarmedLightImpactId_C
// 0x0000 (0x0028 - 0x0028)
class UBP_SkeletonUnarmedLightImpactId_C : public UImpactProjectileId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_SkeletonUnarmedLightImpactId.BP_SkeletonUnarmedLightImpactId_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
