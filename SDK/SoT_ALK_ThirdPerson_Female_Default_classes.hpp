#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ALK_ThirdPerson_Female_Default_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ALK_ThirdPerson_Female_Default.ALK_ThirdPerson_Female_Default_C
// 0x0000 (0x0028 - 0x0028)
class UALK_ThirdPerson_Female_Default_C : public UAnimationDataStoreId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ALK_ThirdPerson_Female_Default.ALK_ThirdPerson_Female_Default_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
