#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PetDesc_wil_Parrot_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PetDesc_wil_Parrot_02.BP_PetDesc_wil_Parrot_02_C
// 0x0000 (0x00F0 - 0x00F0)
class UBP_PetDesc_wil_Parrot_02_C : public UPetCustomizationDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PetDesc_wil_Parrot_02.BP_PetDesc_wil_Parrot_02_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
