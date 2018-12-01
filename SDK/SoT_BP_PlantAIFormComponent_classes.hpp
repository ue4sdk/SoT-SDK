#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PlantAIFormComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlantAIFormComponent.BP_PlantAIFormComponent_C
// 0x0000 (0x01E0 - 0x01E0)
class UBP_PlantAIFormComponent_C : public UPlantAIFormComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_PlantAIFormComponent.BP_PlantAIFormComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
