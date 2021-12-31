#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AggressiveShipPawn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AggressiveShipPawn.BP_AggressiveShipPawn_C
// 0x0008 (0x0488 - 0x0480)
class ABP_AggressiveShipPawn_C : public AShipProxyPawn
{
public:
	USceneComponent*                                   DefaultSceneRoot;                                         // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AggressiveShipPawn.BP_AggressiveShipPawn_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
