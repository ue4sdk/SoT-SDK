// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Tethering_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tethering.Tether.OnRep_HasAttached
// (Final, Native, Private)

void ATether::OnRep_HasAttached()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tethering.Tether.OnRep_HasAttached"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
