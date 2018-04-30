#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AD_FirstPerson_PlayerPirate_Male_Default_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AD_FirstPerson_PlayerPirate_Male_Default.AD_FirstPerson_PlayerPirate_Male_Default_C
// 0x02E8 (0x0310 - 0x0028)
class UAD_FirstPerson_PlayerPirate_Male_Default_C : public UAnimationData
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FADS_IdlesNative                            Idles;                                                    // 0x01E3(0x0010) (Edit, BlueprintVisible)
	struct FADS_LocomotionNative                       Locomotion;                                               // 0x01E3(0x0048) (Edit, BlueprintVisible)
	struct FADS_JumpingNative                          Jumping;                                                  // 0x01E3(0x0078) (Edit, BlueprintVisible)
	struct FADS_SwimmingNative                         Swimming;                                                 // 0x01E3(0x0068) (Edit, BlueprintVisible)
	struct FADS_WheelNative                            Wheel;                                                    // 0x01E3(0x0088) (Edit, BlueprintVisible)
	struct FADS_CapstanNative                          Capstan;                                                  // 0x01E3(0x0068) (Edit, BlueprintVisible)
	struct FADS_CameraAdditiveNative                   CameraAdditive;                                           // 0x01E3(0x0050) (Edit, BlueprintVisible)
	struct FADS_ObjectsNative                          Items;                                                    // 0x01E3(0x0010) (Edit, BlueprintVisible)
	struct FADS_Sockets                                Sockets;                                                  // 0x01E3(0x0002) (Edit, BlueprintVisible)
	struct FADS_DeathNative                            Death;                                                    // 0x01E3(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x10D];                                     // 0x0203(0x010D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AD_FirstPerson_PlayerPirate_Male_Default.AD_FirstPerson_PlayerPirate_Male_Default_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
