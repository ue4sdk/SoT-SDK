#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FishedItem_FishBones_ItemDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FishedItem_FishBones_ItemDesc.BP_FishedItem_FishBones_ItemDesc_C
// 0x0000 (0x0130 - 0x0130)
class UBP_FishedItem_FishBones_ItemDesc_C : public UBootyItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FishedItem_FishBones_ItemDesc.BP_FishedItem_FishBones_ItemDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
