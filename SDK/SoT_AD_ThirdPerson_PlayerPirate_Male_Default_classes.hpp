#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AD_ThirdPerson_PlayerPirate_Male_Default_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AD_ThirdPerson_PlayerPirate_Male_Default.AD_ThirdPerson_PlayerPirate_Male_Default_C
// 0x0600 (0x0628 - 0x0028)
class UAD_ThirdPerson_PlayerPirate_Male_Default_C : public UAnimationData
{
public:
	struct FADS_IdlesNative                            Idles;                                                    // 0x0028(0x0010) (Edit, BlueprintVisible)
	struct FADS_LocomotionNative                       Locomotion;                                               // 0x0038(0x0048) (Edit, BlueprintVisible)
	struct FADS_LocomotionAlternateNative              LocomotionAlternate;                                      // 0x0080(0x00F0) (Edit, BlueprintVisible)
	struct FADS_JumpingNative                          Jumping;                                                  // 0x0170(0x0078) (Edit, BlueprintVisible)
	struct FADS_SwimmingNative                         Swimming;                                                 // 0x01E8(0x0068) (Edit, BlueprintVisible)
	struct FADS_WheelNative                            Wheel;                                                    // 0x0250(0x0088) (Edit, BlueprintVisible)
	struct FADS_CapstanNative                          Capstan;                                                  // 0x02D8(0x0068) (Edit, BlueprintVisible)
	struct FADS_SailControlNative                      SailControlRaise;                                         // 0x0340(0x0048) (Edit, BlueprintVisible)
	struct FADS_ObjectsNative                          Items;                                                    // 0x0388(0x0010) (Edit, BlueprintVisible)
	struct FADS_LadderNative                           Ladder;                                                   // 0x0398(0x0058) (Edit, BlueprintVisible)
	struct FADS_CannonNative                           Cannon;                                                   // 0x03F0(0x0038) (Edit, BlueprintVisible)
	struct FADS_Sockets                                Sockets;                                                  // 0x0428(0x0002) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x6];                                       // 0x042A(0x0006) MISSED OFFSET
	struct FADS_FacialNative                           Facial;                                                   // 0x0430(0x0080) (Edit, BlueprintVisible)
	struct FADS_IKFootPlantingNative                   IkFootPlanting;                                           // 0x04B0(0x0028) (Edit, BlueprintVisible)
	struct FADS_HitReactsNative                        HitReacts;                                                // 0x04D8(0x0040) (Edit, BlueprintVisible)
	struct FADS_DeathNative                            Death;                                                    // 0x0518(0x0020) (Edit, BlueprintVisible)
	struct FADS_MapTableNative                         MapTable;                                                 // 0x0538(0x0030) (Edit, BlueprintVisible)
	struct FADS_SpawnNative2                           Spawning;                                                 // 0x0568(0x0010) (Edit, BlueprintVisible)
	struct FADS_CharacterSelectNative                  CharacterSelect;                                          // 0x0578(0x0010) (Edit, BlueprintVisible)
	struct FADS_SkeletonFleeNative                     SkeletonFlee;                                             // 0x0588(0x0010) (Edit, BlueprintVisible)
	struct FADS_InteractionNative                      ShopInteraction;                                          // 0x0598(0x0010) (Edit, BlueprintVisible)
	struct FADS_SkeletonSensing                        SkeletonSensing;                                          // 0x05A8(0x0010) (Edit, BlueprintVisible)
	struct FADS_EmotesNative                           Emotes;                                                   // 0x05B8(0x0010) (Edit, BlueprintVisible)
	struct FADS_SkeletonEmoteActions                   SkeletonActionEmotes;                                     // 0x05C8(0x0010) (Edit, BlueprintVisible)
	struct FADS_RowingBoatNative                       Rowboat;                                                  // 0x05D8(0x0030) (Edit, BlueprintVisible)
	struct FADS_SkeletonCaptainNative                  SkeletonShipCaptain;                                      // 0x0608(0x0020) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AD_ThirdPerson_PlayerPirate_Male_Default.AD_ThirdPerson_PlayerPirate_Male_Default_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
