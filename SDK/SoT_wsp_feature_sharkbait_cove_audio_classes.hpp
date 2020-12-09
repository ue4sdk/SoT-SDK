#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_feature_sharkbait_cove_audio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wsp_feature_sharkbait_cove_audio.wsp_feature_sharkbait_cove_audio_C
// 0x0008 (0x0480 - 0x0478)
class Awsp_feature_sharkbait_cove_audio_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass wsp_feature_sharkbait_cove_audio.wsp_feature_sharkbait_cove_audio_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_wsp_feature_sharkbait_cove_audio(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
