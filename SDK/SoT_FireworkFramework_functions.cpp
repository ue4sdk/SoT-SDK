// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_FireworkFramework_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FireworkFramework.PrototypeFireworkProjectile.Explode
// (Event, Protected, BlueprintEvent)

void APrototypeFireworkProjectile::Explode()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FireworkFramework.PrototypeFireworkProjectile.Explode"));

	APrototypeFireworkProjectile_Explode_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
