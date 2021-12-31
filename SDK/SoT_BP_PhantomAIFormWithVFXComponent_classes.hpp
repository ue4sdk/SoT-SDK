#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PhantomAIFormWithVFXComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PhantomAIFormWithVFXComponent.BP_PhantomAIFormWithVFXComponent_C
// 0x0000 (0x0150 - 0x0150)
class UBP_PhantomAIFormWithVFXComponent_C : public UAIFormWithVFXComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PhantomAIFormWithVFXComponent.BP_PhantomAIFormWithVFXComponent_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
