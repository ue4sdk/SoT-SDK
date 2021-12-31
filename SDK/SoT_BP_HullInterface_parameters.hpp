#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_HullInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_HullInterface.BP_HullInterface_C.Apply Hit
struct UBP_HullInterface_C_Apply_Hit_Params
{
	FVector                                            HitPosition;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HitStrength;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Has_Decal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	UDecalComponent*                                   Decal;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
