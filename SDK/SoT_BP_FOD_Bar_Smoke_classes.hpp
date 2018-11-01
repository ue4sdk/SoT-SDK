#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FOD_Bar_Smoke_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FOD_Bar_Smoke.BP_FOD_Bar_Smoke_C
// 0x0000 (0x04E0 - 0x04E0)
class ABP_FOD_Bar_Smoke_C : public AEmitter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_FOD_Bar_Smoke.BP_FOD_Bar_Smoke_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
