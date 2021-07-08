#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_LostShipmentsClueVariants_enums.hpp"
#include "SoT_LostShipmentsClueFramework_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_Tales_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LostShipmentsClueVariants.ClueDestinationToTextIndex
// 0x0028
struct FClueDestinationToTextIndex
{
	class UClass*                                      DestinationType;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class UAbandonedNoteClueTextIndexAssetBase> RequiredIndexAsset;                                       // 0x0008(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct LostShipmentsClueVariants.ClueDestinationChoice
// 0x0010
struct FClueDestinationChoice
{
	class UClueDestinationDescriptor*                  Destination;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int16_t                                            ClueChoice;                                               // 0x0008(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct LostShipmentsClueVariants.GenderSpecificTextPairings
// 0x0070
struct FGenderSpecificTextPairings
{
	struct FText                                       MasculineClueDestinationDescription;                      // 0x0000(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FeminineClueDestinationDescription;                       // 0x0038(0x0038) (Edit, DisableEditOnInstance)
};

// ScriptStruct LostShipmentsClueVariants.TextEntryWithLayout
// 0x0058
struct FTextEntryWithLayout
{
	struct FText                                       TextEntry;                                                // 0x0000(0x0038) (Edit, DisableEditOnInstance)
	struct FTreasureMapWidgetText                      TextLayout;                                               // 0x0038(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct LostShipmentsClueVariants.MapRadialIconData
// 0x0018
struct FMapRadialIconData
{
	struct FStringAssetReference                       AssetReference;                                           // 0x0000(0x0010) (ZeroConstructor)
	float                                              Rotation;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct LostShipmentsClueVariants.ExistingNPCToPhasedNPC
// 0x0040
struct FExistingNPCToPhasedNPC
{
	TAssetPtr<class UClass>                            ExistingNPC;                                              // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	TAssetPtr<class UClass>                            PhasedNPC;                                                // 0x0020(0x0020) (Edit, DisableEditOnInstance)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
