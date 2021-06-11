#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_GoldHoarder_SkeletonKey_Desc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GoldHoarder_SkeletonKey_Desc.BP_GoldHoarder_SkeletonKey_Desc_C
// 0x0000 (0x0130 - 0x0130)
class UBP_GoldHoarder_SkeletonKey_Desc_C : public UBootyItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_GoldHoarder_SkeletonKey_Desc.BP_GoldHoarder_SkeletonKey_Desc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
