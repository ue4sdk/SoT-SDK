// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_HullInterface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HullInterface.BP_HullInterface_C.Apply Hit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// FVector                        HitPosition                    (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          HitStrength                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Has_Decal                      (Parm, ZeroConstructor, IsPlainOldData)
// UDecalComponent*               Decal                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_HullInterface_C::Apply_Hit(const FVector& HitPosition, const FVector& HitNormal, float HitStrength, bool Has_Decal, UDecalComponent** Decal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_HullInterface.BP_HullInterface_C.Apply Hit"));

	UBP_HullInterface_C_Apply_Hit_Params params;
	params.HitPosition = HitPosition;
	params.HitNormal = HitNormal;
	params.HitStrength = HitStrength;
	params.Has_Decal = Has_Decal;

	UObject::ProcessEvent(fn, &params);

	if (Decal != nullptr)
		*Decal = params.Decal;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
