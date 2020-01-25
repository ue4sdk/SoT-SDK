#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SkullRitual_Skull_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SkullRitual_Skull.BP_SkullRitual_Skull_C
// 0x0008 (0x0418 - 0x0410)
class ABP_SkullRitual_Skull_C : public AActor
{
public:
	class UStaticMeshComponent*                        trs_briggsys_skull_01_c;                                  // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SkullRitual_Skull.BP_SkullRitual_Skull_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
