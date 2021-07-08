#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_OceanNoEmergentSpawnContextZone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_OceanNoEmergentSpawnContextZone.BP_OceanNoEmergentSpawnContextZone_C
// 0x0000 (0x03E8 - 0x03E8)
class ABP_OceanNoEmergentSpawnContextZone_C : public ASpawnContextProviderZone
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_OceanNoEmergentSpawnContextZone.BP_OceanNoEmergentSpawnContextZone_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
