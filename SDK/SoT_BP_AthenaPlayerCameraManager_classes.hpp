#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AthenaPlayerCameraManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AthenaPlayerCameraManager.BP_AthenaPlayerCameraManager_C
// 0x0000 (0x1C90 - 0x1C90)
class ABP_AthenaPlayerCameraManager_C : public AAthenaPlayerCameraManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AthenaPlayerCameraManager.BP_AthenaPlayerCameraManager_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
