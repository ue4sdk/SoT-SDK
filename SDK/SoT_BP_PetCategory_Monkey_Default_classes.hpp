#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PetCategory_Monkey_Default_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PetCategory_Monkey_Default.BP_PetCategory_Monkey_Default_C
// 0x0000 (0x0080 - 0x0080)
class UBP_PetCategory_Monkey_Default_C : public UPetCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PetCategory_Monkey_Default.BP_PetCategory_Monkey_Default_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
