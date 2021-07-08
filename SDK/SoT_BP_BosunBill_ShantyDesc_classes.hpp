#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BosunBill_ShantyDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BosunBill_ShantyDesc.BP_BosunBill_ShantyDesc_C
// 0x0000 (0x0118 - 0x0118)
class UBP_BosunBill_ShantyDesc_C : public UShantyItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BosunBill_ShantyDesc.BP_BosunBill_ShantyDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
