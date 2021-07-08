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

// Enum AthenaRigging.EInstancedRopeParameterType
enum class EInstancedRopeParameterType : uint8_t
{
	RPT_Start                      = 0,
	RPT_End                        = 1,
	RPT_Roughness                  = 2,
	RPT_Thickness                  = 3,
	RPT_UVScale                    = 4,
	RPT_UVOffset                   = 5,
	RPT_Length                     = 6,
	RPT_SwingTime                  = 7,
	RPT_WindAmount                 = 8,
	RPT_CatenaryScale              = 9,
	RPT_CatenaryX0                 = 10,
	RPT_CatenaryY0                 = 11,
	RPT_CatenaryXYDistance         = 12,
	RPT_IsCatenary                 = 13,
	RPT_MAX                        = 14
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
