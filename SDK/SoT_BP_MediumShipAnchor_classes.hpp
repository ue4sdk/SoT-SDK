#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MediumShipAnchor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MediumShipAnchor.BP_MediumShipAnchor_C
// 0x0008 (0x0410 - 0x0408)
class ABP_MediumShipAnchor_C : public AAnchor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MediumShipAnchor.BP_MediumShipAnchor_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
