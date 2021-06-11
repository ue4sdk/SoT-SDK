#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ServerMigration.EExecutionTarget
enum class EExecutionTarget : uint8_t
{
	EExecutionTarget__OldServer    = 0,
	EExecutionTarget__NewServer    = 1,
	EExecutionTarget__Client       = 2,
	EExecutionTarget__EExecutionTarget_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
