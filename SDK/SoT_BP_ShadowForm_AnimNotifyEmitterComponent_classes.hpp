#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShadowForm_AnimNotifyEmitterComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShadowForm_AnimNotifyEmitterComponent.BP_ShadowForm_AnimNotifyEmitterComponent_C
// 0x0000 (0x0310 - 0x0310)
class UBP_ShadowForm_AnimNotifyEmitterComponent_C : public UAnimNotifyAdditionalEventsWwiseEmitterComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShadowForm_AnimNotifyEmitterComponent.BP_ShadowForm_AnimNotifyEmitterComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
