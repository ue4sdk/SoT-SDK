#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AshAIFormWithVFXComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AshAIFormWithVFXComponent.BP_AshAIFormWithVFXComponent_C
// 0x0000 (0x0150 - 0x0150)
class UBP_AshAIFormWithVFXComponent_C : public UAIFormWithVFXComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AshAIFormWithVFXComponent.BP_AshAIFormWithVFXComponent_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
