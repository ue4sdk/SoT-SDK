#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MermaidGem_Wieldable_Sapphire_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MermaidGem_Wieldable_Sapphire.BP_MermaidGem_Wieldable_Sapphire_C
// 0x0000 (0x0810 - 0x0810)
class ABP_MermaidGem_Wieldable_Sapphire_C : public ABP_TreasureArtifact_Wieldable_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_MermaidGem_Wieldable_Sapphire.BP_MermaidGem_Wieldable_Sapphire_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
