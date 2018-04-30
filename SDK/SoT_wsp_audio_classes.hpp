#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_audio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wsp_audio.wsp_audio_C
// 0x0038 (0x04B0 - 0x0478)
class Awsp_audio_C : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0478(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass wsp_audio.wsp_audio_C");
		return ptr;
	}


	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_wsp_audio(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
