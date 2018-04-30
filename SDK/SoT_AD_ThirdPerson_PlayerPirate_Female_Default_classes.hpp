#pragma once

// Sea of Thieves (1.0.5) SDK

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
// 0x05A8 (0x05D0 - 0x0028)
class UAD_ThirdPerson_PlayerPirate_Female_Default_C : public UAnimationData
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FADS_IdlesNative                            Idles;                                                    // 0x01E3(0x0010) (Edit, BlueprintVisible)
	struct FADS_LocomotionNative                       Locomotion;                                               // 0x01E3(0x0048) (Edit, BlueprintVisible)
	struct FADS_LocomotionAlternateNative              LocomotionAlternate;                                      // 0x01E3(0x00F0) (Edit, BlueprintVisible)
	struct FADS_JumpingNative                          Jumping;                                                  // 0x01E3(0x0078) (Edit, BlueprintVisible)
	struct FADS_SwimmingNative                         Swimming;                                                 // 0x01E3(0x0068) (Edit, BlueprintVisible)
	struct FADS_WheelNative                            Wheel;                                                    // 0x01E3(0x0088) (Edit, BlueprintVisible)
	struct FADS_CapstanNative                          Capstan;                                                  // 0x01E3(0x0068) (Edit, BlueprintVisible)
	struct FADS_SailControlNative                      SailControlRaise;                                         // 0x01E3(0x0048) (Edit, BlueprintVisible)
	struct FADS_ObjectsNative                          Items;                                                    // 0x01E3(0x0010) (Edit, BlueprintVisible)
	struct FADS_LadderNative                           Ladder;                                                   // 0x01E3(0x0058) (Edit, BlueprintVisible)
	struct FADS_CannonNative                           Cannon;                                                   // 0x01E3(0x0038) (Edit, BlueprintVisible)
	struct FADS_Sockets                                Sockets;                                                  // 0x01E3(0x0002) (Edit, BlueprintVisible)
	struct FADS_FacialNative                           Facial;                                                   // 0x01E3(0x0080) (Edit, BlueprintVisible)
	struct FADS_IKFootPlantingNative                   IkFootPlanting;                                           // 0x01E3(0x0028) (Edit, BlueprintVisible)
	struct FADS_HitReactsNative                        HitReacts;                                                // 0x01E3(0x0040) (Edit, BlueprintVisible)
	struct FADS_DeathNative                            Death;                                                    // 0x01E3(0x0020) (Edit, BlueprintVisible)
	struct FADS_MapTableNative                         MapTable;                                                 // 0x01E3(0x0030) (Edit, BlueprintVisible)
	struct FADS_SpawnNative2                           Spawning;                                                 // 0x01E3(0x0010) (Edit, BlueprintVisible)
	struct FADS_CharacterSelectNative                  CharacterSelect;                                          // 0x01E3(0x0010) (Edit, BlueprintVisible)
	struct FADS_SkeletonFleeNative                     SkeletonFlee;                                             // 0x01E3(0x0010) (Edit, BlueprintVisible)
	struct FADS_InteractionNative                      ShopInteraction;                                          // 0x01E3(0x0010) (Edit, BlueprintVisible)
	struct FADS_SkeletonSensing                        SkeletonSensing;                                          // 0x01E3(0x0010) (Edit, BlueprintVisible)
	struct FADS_EmotesNative                           Emotes;                                                   // 0x01E3(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3DD];                                     // 0x01F3(0x03DD) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AD_ThirdPerson_PlayerPirate_Female_Default.AD_ThirdPerson_PlayerPirate_Female_Default_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
