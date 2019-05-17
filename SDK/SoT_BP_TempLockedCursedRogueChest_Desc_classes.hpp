#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TempLockedCursedRogueChest_Desc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TempLockedCursedRogueChest_Desc.BP_TempLockedCursedRogueChest_Desc_C
// 0x0000 (0x0120 - 0x0120)
class UBP_TempLockedCursedRogueChest_Desc_C : public UBP_CollectorsChest_Desc_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TempLockedCursedRogueChest_Desc.BP_TempLockedCursedRogueChest_Desc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
