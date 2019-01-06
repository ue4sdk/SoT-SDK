// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DamageZoneInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DamageZoneInterface.BP_DamageZoneInterface_C.GetNumExternalHits
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumExternalHits                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_DamageZoneInterface_C::GetNumExternalHits(int* NumExternalHits)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DamageZoneInterface.BP_DamageZoneInterface_C.GetNumExternalHits");

	struct
	{
		int                            NumExternalHits;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NumExternalHits != nullptr)
		*NumExternalHits = params.NumExternalHits;
}


// Function BP_DamageZoneInterface.BP_DamageZoneInterface_C.ClearDecalFlags
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_DamageZoneInterface_C::ClearDecalFlags()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DamageZoneInterface.BP_DamageZoneInterface_C.ClearDecalFlags");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DamageZoneInterface.BP_DamageZoneInterface_C.AddExternalHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHullDamageHit          Hit_Data                       (Parm)

void UBP_DamageZoneInterface_C::AddExternalHit(const struct FHullDamageHit& Hit_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DamageZoneInterface.BP_DamageZoneInterface_C.AddExternalHit");

	struct
	{
		struct FHullDamageHit          Hit_Data;
	} params;

	params.Hit_Data = Hit_Data;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
