#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_skin_col_asian_03_Desc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_skin_col_asian_03_Desc.BP_skin_col_asian_03_Desc_C
// 0x0000 (0x00E0 - 0x00E0)
class UBP_skin_col_asian_03_Desc_C : public UClothingDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_skin_col_asian_03_Desc.BP_skin_col_asian_03_Desc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
