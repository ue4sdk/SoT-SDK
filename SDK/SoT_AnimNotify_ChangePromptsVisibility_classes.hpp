#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AnimNotify_ChangePromptsVisibility_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimNotify_ChangePromptsVisibility.AnimNotify_ChangePromptsVisibility_C
// 0x0008 (0x0038 - 0x0030)
class UAnimNotify_ChangePromptsVisibility_C : public UAnimNotify
{
public:
	bool                                               HidePrompts;                                              // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ReEvaluate_Prompts;                                       // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	float                                              DelayInSeconds;                                           // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AnimNotify_ChangePromptsVisibility.AnimNotify_ChangePromptsVisibility_C"));
		return ptr;
	}


	class FString GetNotifyName();
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
