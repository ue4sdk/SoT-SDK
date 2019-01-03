#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// AnimDataEntryStruct ADS_ObjectsNative.ADS_ObjectsNative
// 0x0010
struct FADS_ObjectsNative
{
	TArray<struct FAthenaAnimationLoadObjectsWrapper>  Object_145_5145F88C4BCB8F97FE9B0FAE5E4D16F6;              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
