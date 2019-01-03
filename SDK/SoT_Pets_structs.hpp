#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_AthenaAI_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Pets.HangoutSpotParams
// 0x0008
struct FHangoutSpotParams
{
	struct FName                                       HangoutSpotName;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Pets.HangoutSpotId
// 0x0008
struct FHangoutSpotId
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Pets.HangoutSpotPosition
// 0x0040
struct FHangoutSpotPosition
{
	struct FHangoutSpotId                              Id;                                                       // 0x0000(0x0008) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (Edit, IsPlainOldData)
};

// ScriptStruct Pets.PetCustomisation
// 0x0018
struct FPetCustomisation
{
	class FString                                      PetName;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                PetPartIndex;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Pets.PetListingTypeEntry
// 0x0020
struct FPetListingTypeEntry
{
	struct FStringClassReference                       PetType;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPetCustomisation>                   PetCustomisations;                                        // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
