#pragma once

// Sea of Thieves (1.1.1) SDK

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
	class FString                                      String;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	TAssetPtr<class UClass>                            AssetClass;                                               // 0x0010(0x0020) (Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
