#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SunkenCurseArtefact_Emerald_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SunkenCurseArtefact_Emerald.BP_SunkenCurseArtefact_Emerald_C
// 0x0008 (0x06D0 - 0x06C8)
class ABP_SunkenCurseArtefact_Emerald_C : public ASunkenCurseArtefact
{
public:
	class UStaticMeshComponent*                        Glint;                                                    // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SunkenCurseArtefact_Emerald.BP_SunkenCurseArtefact_Emerald_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
