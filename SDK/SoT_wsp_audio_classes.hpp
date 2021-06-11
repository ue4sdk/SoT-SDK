#pragma once

// Sea of Thieves (2.1) SDK

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
// 0x0030 (0x0468 - 0x0438)
class Awsp_audio_C : public ALevelScriptActor
{
public:
	float                                              PreviousFrameTime;                                        // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	struct FWwiseEmitter                               WSP_Audio_2D_Emitter;                                     // 0x0440(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UObject*                                     TimeInterface;                                            // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass wsp_audio.wsp_audio_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
