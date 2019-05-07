#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AudioBoatMediumHullAmbi_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AudioBoatMediumHullAmbi.BP_AudioBoatMediumHullAmbi_C
// 0x00E0 (0x06E8 - 0x0608)
class ABP_AudioBoatMediumHullAmbi_C : public AShipHullAudio
{
public:
	class UTritonComponent*                            Triton;                                                   // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_water_laps_FL;                                      // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_water_laps_FR;                                      // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_metal2;                                       // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_metal;                                        // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_window;                                       // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_cabin_04;                                     // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_cabin_03;                                     // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_cabin_02;                                     // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_cabin_01;                                     // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_map_01;                                       // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_map_continuous;                               // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_map_02;                                       // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_deck_back;                                    // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioPortalComponent*                       DeckGrille;                                               // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioPortalComponent*                       DeckGrille2;                                              // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_mast_rear;                                    // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_wake_stern;                                         // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_wake_bow;                                           // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_wake_side_L;                                        // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_wake_side_R;                                        // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_mast_front_nest;                              // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_mast_front;                                   // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_FL;                                           // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_FR;                                           // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_rope_front;                                   // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_smallship_global;                             // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioPortalComponent*                       Deckgrille3;                                              // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AudioBoatMediumHullAmbi.BP_AudioBoatMediumHullAmbi_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
