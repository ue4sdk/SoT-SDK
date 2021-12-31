#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Figurehead_MediumShip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.GetVFXComponent
struct ABP_Figurehead_MediumShip_C_GetVFXComponent_Params
{
	class UParticleSystemComponent*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.GetMeshComponent
struct ABP_Figurehead_MediumShip_C_GetMeshComponent_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.UserConstructionScript
struct ABP_Figurehead_MediumShip_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
