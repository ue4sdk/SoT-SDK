#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum EditorStyle.EColorVisionDeficiency
enum class EColorVisionDeficiency : uint8_t
{
	CVD_NormalVision               = 0,
	CVD_Deuteranomly               = 1,
	CVD_Deuteranopia               = 2,
	CVD_Protanomly                 = 3,
	CVD_Protanopia                 = 4,
	CVD_Tritanomaly                = 5,
	CVD_Tritanopia                 = 6,
	CVD_Achromatopsia              = 7,
	CVD_MAX                        = 8
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
