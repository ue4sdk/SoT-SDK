#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Skull_OoS_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Skull_OoS.BP_Skull_OoS_C
// 0x0008 (0x0430 - 0x0428)
class ABP_Skull_OoS_C : public AActor
{
public:
	class UStaticMeshComponent*                        gmp_bounty_skull_01_b;                                    // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Skull_OoS.BP_Skull_OoS_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
