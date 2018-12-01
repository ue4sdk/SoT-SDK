#pragma once

// Sea of Thieves (1.4) SDK

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
// 0x0008 (0x0530 - 0x0528)
class ABP_AggressiveShipPawn_C : public AShipProxyPawn
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_AggressiveShipPawn.BP_AggressiveShipPawn_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
