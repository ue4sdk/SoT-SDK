#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Animation_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct RevivingAnimation.ReviveGhostAnimations
// 0x0020
struct FReviveGhostAnimations
{
	class UAnimSequence*                               ReviveInto;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               ReviveLoop;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               ReviveOutOf;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               ReviveOutOfLoop;                                          // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
