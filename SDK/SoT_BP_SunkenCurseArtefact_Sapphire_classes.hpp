#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SunkenCurseArtefact_Sapphire_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SunkenCurseArtefact_Sapphire.BP_SunkenCurseArtefact_Sapphire_C
// 0x0000 (0x05C0 - 0x05C0)
class ABP_SunkenCurseArtefact_Sapphire_C : public ASunkenCurseArtefact
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SunkenCurseArtefact_Sapphire.BP_SunkenCurseArtefact_Sapphire_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
