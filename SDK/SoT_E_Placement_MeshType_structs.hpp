#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// UserDefinedEnum E_Placement_MeshType.E_Placement_MeshType
enum class E_Placement_MeshType : uint8_t
{
	E_Placement_MeshType__NewEnumerator5 = 0,
	None                           = 1,
	E_Placement_MeshType__NewEnumerator3 = 2,
	None01                         = 3,
	NameProperty                   = 4,
	Diffuse                        = 5
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
