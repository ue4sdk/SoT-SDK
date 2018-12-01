#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AggressiveShipAIController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AggressiveShipAIController.BP_AggressiveShipAIController_C
// 0x0000 (0x07A0 - 0x07A0)
class ABP_AggressiveShipAIController_C : public AAthenaAIShipController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_AggressiveShipAIController.BP_AggressiveShipAIController_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
