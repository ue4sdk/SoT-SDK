#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_Shroudbreaker_CollectorsChestParams.DS_Shroudbreaker_CollectorsChestParams
// 0x002C
struct FDS_Shroudbreaker_CollectorsChestParams
{
	class AActor*                                      Location_21_4465C65D441FFD590A78389C953AB28F;             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CollectorsChest_10_FD954DCF4885DDAB219D70941156EC78;      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      CollectorChestInstance_16_E8449E964F88498BF5C7BEA67BBA5507;// 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StoreItem_19_E5A8F8B944295CE31434C7A8BBE96CF5;            // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ChestSpawnVector_24_3F43BA574090628A40FFEDAB5C81E3B7;     // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
