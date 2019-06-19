#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_DS_CursedRogue_BuryPointPuzzle_classes.hpp"
#include "SoT_DS_CursedRogue_KeyCrewPuzzle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_CursedRogue_SelectedPuzzles.DS_CursedRogue_SelectedPuzzles
// 0x0030
struct FDS_CursedRogue_SelectedPuzzles
{
	struct FDS_CursedRogue_KeyCrewPuzzle               KeyCrewPuzzle_4_D35DB0324A2C3D56A3CE24BECF326222;         // 0x0000(0x0008) (Edit, BlueprintVisible)
	struct FDS_CursedRogue_BuryPointPuzzle             BuryPointPuzzle_5_38372379447D7684E724C49866E0C80C;       // 0x0008(0x0028) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
