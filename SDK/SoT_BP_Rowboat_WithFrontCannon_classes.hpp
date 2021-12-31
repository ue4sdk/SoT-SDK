#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Rowboat_WithFrontCannon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Rowboat_WithFrontCannon.BP_Rowboat_WithFrontCannon_C
// 0x0010 (0x0A40 - 0x0A30)
class ABP_Rowboat_WithFrontCannon_C : public ABP_Rowboat_C
{
public:
	class UCannonRecoilComponent*                      CannonRecoil;                                             // 0x0A30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Cannon;                                                   // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Rowboat_WithFrontCannon.BP_Rowboat_WithFrontCannon_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
