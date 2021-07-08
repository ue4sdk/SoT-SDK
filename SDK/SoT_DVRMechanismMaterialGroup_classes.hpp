#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_DVRMechanismMaterialGroup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DVRMechanismMaterialGroup.DVRMechanismMaterialGroup_C
// 0x0000 (0x0028 - 0x0028)
class UDVRMechanismMaterialGroup_C : public UMechanismMaterialGroup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass DVRMechanismMaterialGroup.DVRMechanismMaterialGroup_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
