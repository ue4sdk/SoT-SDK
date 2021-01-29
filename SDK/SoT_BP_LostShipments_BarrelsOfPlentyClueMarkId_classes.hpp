#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LostShipments_BarrelsOfPlentyClueMarkId_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LostShipments_BarrelsOfPlentyClueMarkId.BP_LostShipments_BarrelsOfPlentyClueMarkId_C
// 0x0000 (0x0028 - 0x0028)
class UBP_LostShipments_BarrelsOfPlentyClueMarkId_C : public UMapMarkId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LostShipments_BarrelsOfPlentyClueMarkId.BP_LostShipments_BarrelsOfPlentyClueMarkId_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
