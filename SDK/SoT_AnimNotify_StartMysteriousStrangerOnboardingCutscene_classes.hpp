#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AnimNotify_StartMysteriousStrangerOnboardingCutscene_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimNotify_StartMysteriousStrangerOnboardingCutscene.AnimNotify_StartMysteriousStrangerOnboardingCutscene_C
// 0x0000 (0x0030 - 0x0030)
class UAnimNotify_StartMysteriousStrangerOnboardingCutscene_C : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AnimNotify_StartMysteriousStrangerOnboardingCutscene.AnimNotify_StartMysteriousStrangerOnboardingCutscene_C"));
		return ptr;
	}


	class FString GetNotifyName();
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
