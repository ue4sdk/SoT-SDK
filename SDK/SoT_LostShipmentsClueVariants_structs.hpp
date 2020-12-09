#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_LostShipmentsClueVariants_enums.hpp"
#include "SoT_LostShipmentsClueFramework_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
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

// ScriptStruct LostShipmentsClueVariants.GenderSpecificTextPairings
// 0x0070
struct FGenderSpecificTextPairings
{
	struct FText                                       MasculineClueDestinationDescription;                      // 0x0000(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       FeminineClueDestinationDescription;                       // 0x0038(0x0038) (Edit, DisableEditOnInstance)
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
