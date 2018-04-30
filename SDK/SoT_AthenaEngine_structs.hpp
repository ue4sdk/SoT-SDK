#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaEngine.StringAssetClassPair
// 0x0030
struct FStringAssetClassPair
{
	TAssetPtr<class UClass>                            AssetClass;                                               // 0x0000(0x0020) (Edit)
	unsigned char                                      UnknownData00[0x1C3];                                     // 0x0020(0x01C3) MISSED OFFSET
	class FString                                      String;                                                   // 0x01E3(0x0010) (Edit, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
