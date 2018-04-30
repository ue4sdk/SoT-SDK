#pragma once

// Sea of Thieves (1.0.5) SDK

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

// ScriptStruct EngineSettings.AutoCompleteCommand
// 0x0030
struct FAutoCompleteCommand
{
	class FString                                      Command;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      Desc;                                                     // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      Keywords;                                                 // 0x0020(0x0010) (Edit, ZeroConstructor, Config)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
