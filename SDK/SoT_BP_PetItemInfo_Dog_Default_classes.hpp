#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PetItemInfo_Dog_Default_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PetItemInfo_Dog_Default.BP_PetItemInfo_Dog_Default_C
// 0x0008 (0x05F0 - 0x05E8)
class ABP_PetItemInfo_Dog_Default_C : public APetItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PetItemInfo_Dog_Default.BP_PetItemInfo_Dog_Default_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
