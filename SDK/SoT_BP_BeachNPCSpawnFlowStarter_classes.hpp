#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BeachNPCSpawnFlowStarter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BeachNPCSpawnFlowStarter.BP_BeachNPCSpawnFlowStarter_C
// 0x0000 (0x0060 - 0x0060)
class UBP_BeachNPCSpawnFlowStarter_C : public UBeachNPCSpawnFlowStarter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BeachNPCSpawnFlowStarter.BP_BeachNPCSpawnFlowStarter_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
