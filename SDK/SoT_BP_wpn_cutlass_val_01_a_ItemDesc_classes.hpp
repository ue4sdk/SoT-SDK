#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_wpn_cutlass_val_01_a_ItemDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_wpn_cutlass_val_01_a_ItemDesc.BP_wpn_cutlass_val_01_a_ItemDesc_C
// 0x0000 (0x0130 - 0x0130)
class UBP_wpn_cutlass_val_01_a_ItemDesc_C : public UItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_wpn_cutlass_val_01_a_ItemDesc.BP_wpn_cutlass_val_01_a_ItemDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
