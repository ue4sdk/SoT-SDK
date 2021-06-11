#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Figurehead_MediumShip_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C
// 0x0008 (0x0440 - 0x0438)
class ABP_Figurehead_MediumShip_C : public AGenericPart
{
public:
	class UStaticMeshComponent*                        Figurehead;                                               // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C"));
		return ptr;
	}


	class UStaticMeshComponent* GetMeshComponent();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
