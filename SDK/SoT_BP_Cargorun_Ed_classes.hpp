#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Cargorun_Ed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Cargorun_Ed.BP_Cargorun_Ed_C
// 0x0008 (0x0628 - 0x0620)
class ABP_Cargorun_Ed_C : public ABP_Cargorun_C
{
public:
	class UNPCLootSpawnComponent*                      NPCLootSpawn;                                             // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Cargorun_Ed.BP_Cargorun_Ed_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
