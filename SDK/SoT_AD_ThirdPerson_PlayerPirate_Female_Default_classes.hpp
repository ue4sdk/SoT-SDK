#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AD_ThirdPerson_PlayerPirate_Female_Default_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AD_ThirdPerson_PlayerPirate_Female_Default.AD_ThirdPerson_PlayerPirate_Female_Default_C
// 0x0740 (0x0770 - 0x0030)
class UAD_ThirdPerson_PlayerPirate_Female_Default_C : public UAthenaAnimationThirdPersonAnimationData
{
public:
	struct FADS_IdlesNative                            Idles;                                                    // 0x0030(0x0010) (Edit, BlueprintVisible)
	struct FADS_LocomotionNative                       Locomotion;                                               // 0x0040(0x0048) (Edit, BlueprintVisible)
	struct FADS_LocomotionAlternateNative              LocomotionAlternate;                                      // 0x0088(0x0140) (Edit, BlueprintVisible)
	struct FADS_JumpingNative                          Jumping;                                                  // 0x01C8(0x0078) (Edit, BlueprintVisible)
	struct FADS_SwimmingNative                         Swimming;                                                 // 0x0240(0x0068) (Edit, BlueprintVisible)
	struct FADS_WheelNative                            Wheel;                                                    // 0x02A8(0x0088) (Edit, BlueprintVisible)
	struct FADS_CapstanNative                          Capstan;                                                  // 0x0330(0x0068) (Edit, BlueprintVisible)
	struct FADS_LadderNative                           Ladder;                                                   // 0x0398(0x0068) (Edit, BlueprintVisible)
	struct FADS_ObjectsNative                          Items;                                                    // 0x0400(0x0010) (Edit, BlueprintVisible)
	struct FADS_CannonNative                           Cannon;                                                   // 0x0410(0x0038) (Edit, BlueprintVisible)
	struct FADS_HarpoonLauncherNative                  HarpoonLauncher;                                          // 0x0448(0x0028) (Edit, BlueprintVisible)
	struct FADS_Sockets                                Sockets;                                                  // 0x0470(0x0002) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0472(0x0006) MISSED OFFSET
	struct FADS_FacialNative                           Facial;                                                   // 0x0478(0x0088) (Edit, BlueprintVisible)
	struct FADS_IKFootPlantingNative                   IkFootPlanting;                                           // 0x0500(0x0028) (Edit, BlueprintVisible)
	struct FADS_HitReactsNative                        HitReacts;                                                // 0x0528(0x0040) (Edit, BlueprintVisible)
	struct FADS_DeathNative                            Death;                                                    // 0x0568(0x0028) (Edit, BlueprintVisible)
	struct FADS_MapTableNative                         MapTable;                                                 // 0x0590(0x0030) (Edit, BlueprintVisible)
	struct FADS_SpawnNative2                           Spawning;                                                 // 0x05C0(0x0010) (Edit, BlueprintVisible)
	struct FADS_CharacterSelectNative                  CharacterSelect;                                          // 0x05D0(0x0010) (Edit, BlueprintVisible)
	struct FADS_SkeletonFleeNative                     SkeletonFlee;                                             // 0x05E0(0x0010) (Edit, BlueprintVisible)
	struct FADS_InteractionNative                      ShopInteraction;                                          // 0x05F0(0x0010) (Edit, BlueprintVisible)
	struct FADS_SkeletonSensing                        SkeletonSensing;                                          // 0x0600(0x0010) (Edit, BlueprintVisible)
	struct FADS_DiverseEmoteNative                     EmoteDiverse;                                             // 0x0610(0x0010) (Edit, BlueprintVisible)
	struct FADS_PersonaNative                          EmotePersonas;                                            // 0x0620(0x0010) (Edit, BlueprintVisible)
	struct FADS_SkeletonEmoteActions                   SkeletonActionEmotes;                                     // 0x0630(0x0010) (Edit, BlueprintVisible)
	struct FADS_RowingBoatNative                       Rowboat;                                                  // 0x0640(0x0098) (Edit, BlueprintVisible)
	struct FADS_SkeletonCaptainNative                  SkeletonShipCaptain;                                      // 0x06D8(0x0048) (Edit, BlueprintVisible)
	struct FADS_SkeletonCurseNative                    SkeletonCurse;                                            // 0x0720(0x0028) (Edit, BlueprintVisible)
	struct FADS_WaterPumpNative                        WaterPump;                                                // 0x0748(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AD_ThirdPerson_PlayerPirate_Female_Default.AD_ThirdPerson_PlayerPirate_Female_Default_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
