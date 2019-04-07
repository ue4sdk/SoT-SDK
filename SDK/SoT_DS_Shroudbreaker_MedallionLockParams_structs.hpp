#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_Shroudbreaker_MedallionLockParams.DS_Shroudbreaker_MedallionLockParams
// 0x0028
struct FDS_Shroudbreaker_MedallionLockParams
{
	class AActor*                                      LockSpawnLocation_3_8259063542AAD0474BA0DE91358A660C;     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MedallionType_6_B653F9284799102D4AAE95A7B4E1D2A3;         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      MedallionLockReference_9_D17529A34DEB0D5DAEC6D4A60F685991;// 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstance*>                   VaultTableMaterials_14_47A565184FDD0F06C99DCA8BC652B11D;  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
