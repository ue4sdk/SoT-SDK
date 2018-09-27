#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SailAngle_FrontSail_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SailAngle_FrontSail.BP_SailAngle_FrontSail_C
// 0x0000 (0x07E8 - 0x07E8)
class ABP_SailAngle_FrontSail_C : public ABP_SailAngle_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_SailAngle_FrontSail.BP_SailAngle_FrontSail_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
