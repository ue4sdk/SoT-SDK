#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Lord_Ashen_AudioComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Lord_Ashen_AudioComponent.BP_Lord_Ashen_AudioComponent_C
// 0x0058 (0x0388 - 0x0330)
class UBP_Lord_Ashen_AudioComponent_C : public USkeletonAICharacterAudioComponent
{
public:
	bool                                               Public_Variab;                                            // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0331(0x0003) MISSED OFFSET
	float                                              Cooldown;                                                 // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timer;                                                    // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SkeletonState;                                            // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FObjectMessagingHandle                      Dispatcher_handle;                                        // 0x0340(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Lord_Ashen_AudioComponent.BP_Lord_Ashen_AudioComponent_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
