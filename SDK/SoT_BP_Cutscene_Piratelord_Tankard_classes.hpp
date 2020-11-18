#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Cutscene_Piratelord_Tankard_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Cutscene_Piratelord_Tankard.BP_Cutscene_Piratelord_Tankard_C
// 0x0008 (0x0468 - 0x0460)
class ABP_Cutscene_Piratelord_Tankard_C : public AActor
{
public:
	class UStaticMeshComponent*                        tls_tankard_01_b;                                         // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Cutscene_Piratelord_Tankard.BP_Cutscene_Piratelord_Tankard_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
