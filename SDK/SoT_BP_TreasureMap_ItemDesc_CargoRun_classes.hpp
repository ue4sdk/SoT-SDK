#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureMap_ItemDesc_CargoRun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureMap_ItemDesc_CargoRun.BP_TreasureMap_ItemDesc_CargoRun_C
// 0x0000 (0x0120 - 0x0120)
class UBP_TreasureMap_ItemDesc_CargoRun_C : public UTreasureMapItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_TreasureMap_ItemDesc_CargoRun.BP_TreasureMap_ItemDesc_CargoRun_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
