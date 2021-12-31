#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SunkenCurseArtefact_Ruby_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SunkenCurseArtefact_Ruby.BP_SunkenCurseArtefact_Ruby_C
// 0x0010 (0x0708 - 0x06F8)
class ABP_SunkenCurseArtefact_Ruby_C : public ASunkenCurseArtefact
{
public:
	USunkenCurseArtefactItemSpawnComponent*            SunkenCurseArtefactItemSpawn;                             // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              Glint;                                                    // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SunkenCurseArtefact_Ruby.BP_SunkenCurseArtefact_Ruby_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
