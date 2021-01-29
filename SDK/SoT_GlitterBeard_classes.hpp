#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GlitterBeard_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GlitterBeard.GlitterBeardTree
// 0x0148 (0x0570 - 0x0428)
class AGlitterBeardTree : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET
	float                                              UnlockDelay;                                              // 0x0430(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x13C];                                     // 0x0434(0x013C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GlitterBeard.GlitterBeardTree"));
		return ptr;
	}

};


// Class GlitterBeard.GlitterBeardTreeVisualFeedbackComponent
// 0x0048 (0x0110 - 0x00C8)
class UGlitterBeardTreeVisualFeedbackComponent : public UActorComponent
{
public:
	TArray<struct FVisualFeedbackList>                 FeedbackActions;                                          // 0x00C8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET
	struct FChangeGlitterBeardVFXStateEvent            NextStateEvent;                                           // 0x00E8(0x0008) (Net)
	unsigned char                                      UnknownData01[0x20];                                      // 0x00F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GlitterBeard.GlitterBeardTreeVisualFeedbackComponent"));
		return ptr;
	}


	void OnRep_NextStateEvent();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
