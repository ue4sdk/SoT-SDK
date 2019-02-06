#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AxisControlInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AxisControlInterface.BP_AxisControlInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_AxisControlInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AxisControlInterface.BP_AxisControlInterface_C"));
		return ptr;
	}


	void StickInput(float StickInputX);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
