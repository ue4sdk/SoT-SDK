#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Tales_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TaleMaps.TaleQuestVariableMapMarkType
// 0x0000 (0x0010 - 0x0010)
struct FTaleQuestVariableMapMarkType : public FQuestVariable
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
