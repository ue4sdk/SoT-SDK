#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AudioBoatSkeletonHullAmbi_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AudioBoatSkeletonHullAmbi.BP_AudioBoatSkeletonHullAmbi_C
// 0x01A0 (0x06F0 - 0x0550)
class ABP_AudioBoatSkeletonHullAmbi_C : public AShipHullAudio
{
public:
	class UShipAudioEmitterComponent*                  brig_Creak_BrigDeck_Centre2;                              // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTritonComponent*                            Triton;                                                   // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  ShipAudio_StrainEmitter;                                  // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  wake_Bow;                                                 // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  water_Wash_Front_Right;                                   // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  water_Wash_Front_Left;                                    // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  water_Wash_Bow;                                           // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  water_Wash_Back_Right;                                    // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  water_Wash_Back_Left;                                     // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  wake_Stern;                                               // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  deck_Creak_TopDeck_Side_Right;                            // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  deck_Creak_TopDeck_Side_Left;                             // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  deck_Creak_TopDeck_PitchRoll;                             // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  deck_Creak_TopDeck_Front_Top;                             // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  deck_Creak_TopDeck_Front_Right;                           // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  deck_creak_TopDeck_Back_Left;                             // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  deck_Creak_TopDeck_Bow_Rope;                              // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  deck_Creak_TopDeck_Bow_Bottom;                            // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  deck_Creak_TopDeck_Back_Rope;                             // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  deck_creak_TopDeck_Back_Right;                            // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  deck_Creak_TopDeck_Front_Left;                            // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  deck_Creak_Mast_Mizzen_Base;                              // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  deck_Creak_Mast_Mizzen_Sail2;                             // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  deck_Creak_Mast_Mizzen_Sail1;                             // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  deck_Creak_Mast_Main_Sail1;                               // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  deck_Creak_Mast_Main_Sail3;                               // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  deck_Creak_Mast_Main_Sail2;                               // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  deck_Creak_Mast_Main_Base;                                // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  deck_Creak_Mast_Fore_Base;                                // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  deck_Creak_Mast_Fore_Sail2;                               // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  deck_Creak_Mast_Fore_Sail1;                               // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  map_ShipAudio_Creak_MapDeck_Pillar_Front_Right;           // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  map_ShipAudio_Creak_MapDeck_Pillar_Front_Left;            // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  map_ShipAudio_Creak_MapDeck_Pillar_Mid_Left;              // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  map_ShipAudio_Creak_MapDeck_Mast_Mizzen;                  // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  map_ShipAudio_Creak_MapDeck_Mast_Main;                    // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  map_ShipAudio_Creak_MapDeck_Mast_Fore;                    // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  map_Creak_MapDeck_Pillar_Back_Left;                       // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  captain_Creak_Captain_Back_Left;                          // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  captain_Creak_Captain_Front_Right;                        // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  captain_Creak_Captain_Front_Left;                         // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  captain_Creak_Captain_Cage;                               // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  captain_Creak_Captain_Back_Right;                         // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  brig_Creak_BrigDeck_Pillar_Front_Right;                   // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  brig_Creak_BrigDeck_Pillar_Front_Left;                    // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  brig_Creak_BrigDeck_Pillar_Back_Right;                    // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  brig_Creak_BrigDeck_Pillar_Back_Left;                     // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioPortalComponent*                       portal_BrigDeckDoor;                                      // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioPortalComponent*                       portal_MapDeckStairs;                                     // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioPortalComponent*                       portal_MapDeckGrille;                                     // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioPortalComponent*                       portal_CaptCab_DeckDoor;                                  // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioPortalComponent*                       portal_CaptCab_SideDoor;                                  // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AudioBoatSkeletonHullAmbi.BP_AudioBoatSkeletonHullAmbi_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
