#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum FireworkFramework.EFireworkAmbientLightFadeState
enum class EFireworkAmbientLightFadeState : uint8_t
{
	EFireworkAmbientLightFadeState__None = 0,
	EFireworkAmbientLightFadeState__FadeIn = 1,
	EFireworkAmbientLightFadeState__Lifetime = 2,
	EFireworkAmbientLightFadeState__FadeOut = 3,
	EFireworkAmbientLightFadeState__EFireworkAmbientLightFadeState_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
