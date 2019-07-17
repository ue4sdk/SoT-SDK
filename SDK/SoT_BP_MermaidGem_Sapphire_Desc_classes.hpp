#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MermaidGem_Sapphire_Desc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MermaidGem_Sapphire_Desc.BP_MermaidGem_Sapphire_Desc_C
// 0x0000 (0x0130 - 0x0130)
class UBP_MermaidGem_Sapphire_Desc_C : public UBootyItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MermaidGem_Sapphire_Desc.BP_MermaidGem_Sapphire_Desc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
