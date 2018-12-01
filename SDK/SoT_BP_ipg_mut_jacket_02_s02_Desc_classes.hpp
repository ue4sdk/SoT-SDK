#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ipg_mut_jacket_02_s02_Desc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ipg_mut_jacket_02_s02_Desc.BP_ipg_mut_jacket_02_s02_Desc_C
// 0x0000 (0x00E0 - 0x00E0)
class UBP_ipg_mut_jacket_02_s02_Desc_C : public UClothingDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_ipg_mut_jacket_02_s02_Desc.BP_ipg_mut_jacket_02_s02_Desc_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
