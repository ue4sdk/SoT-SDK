#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PetAnimationDataStore_Dog_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PetAnimationDataStore_Dog.PetAnimationDataStore_Dog_C
// 0x0000 (0x0030 - 0x0030)
class UPetAnimationDataStore_Dog_C : public UPetAnimationDataStore
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PetAnimationDataStore_Dog.PetAnimationDataStore_Dog_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
