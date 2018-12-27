#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Renderer.ERefChangeFadPhase
enum class ERefChangeFadPhase : uint8_t
{
	NoFading                       = 0,
	FadeOut                        = 1,
	FadeIn                         = 2,
	ERefChangeFadPhase_MAX         = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
