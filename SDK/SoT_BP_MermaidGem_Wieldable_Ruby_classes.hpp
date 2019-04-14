#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MermaidGem_Wieldable_Ruby_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MermaidGem_Wieldable_Ruby.BP_MermaidGem_Wieldable_Ruby_C
// 0x0000 (0x0808 - 0x0808)
class ABP_MermaidGem_Wieldable_Ruby_C : public ABP_TreasureArtifact_Wieldable_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MermaidGem_Wieldable_Ruby.BP_MermaidGem_Wieldable_Ruby_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
