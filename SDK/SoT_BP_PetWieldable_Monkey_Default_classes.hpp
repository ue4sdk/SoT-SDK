#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PetWieldable_Monkey_Default_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PetWieldable_Monkey_Default.BP_PetWieldable_Monkey_Default_C
// 0x0000 (0x0940 - 0x0940)
class ABP_PetWieldable_Monkey_Default_C : public ABP_PetWieldable_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PetWieldable_Monkey_Default.BP_PetWieldable_Monkey_Default_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
