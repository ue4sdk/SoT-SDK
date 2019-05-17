#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_Shroudbreaker_MedallionDigSequenceVariables.DS_Shroudbreaker_MedallionDigSequenceVariables
// 0x0030
struct FDS_Shroudbreaker_MedallionDigSequenceVariables
{
	class UAISpawner*                                  MedallionDigSpawner_2_C082C0774C7E118E709CFF96EF9829AD;   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentMedallionIndex_5_04F7AA2A4BB0355EAA9D50869242119E; // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TAssetPtr<class AActor>                            SpawnLocation_8_B50A47B94FF580B68F6DE0994424B458;         // 0x0010(0x0020) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
