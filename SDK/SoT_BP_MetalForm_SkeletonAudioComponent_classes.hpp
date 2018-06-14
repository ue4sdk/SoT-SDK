#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MetalForm_SkeletonAudioComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MetalForm_SkeletonAudioComponent.BP_MetalForm_SkeletonAudioComponent_C
// 0x0000 (0x0310 - 0x0310)
class UBP_MetalForm_SkeletonAudioComponent_C : public USkeletonAICharacterAudioComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MetalForm_SkeletonAudioComponent.BP_MetalForm_SkeletonAudioComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
