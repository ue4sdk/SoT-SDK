#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Figurehead_MediumShip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.UserConstructionScript
struct ABP_Figurehead_MediumShip_C_UserConstructionScript_Params
{
};

// Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.OnPartMeshLoaded
struct ABP_Figurehead_MediumShip_C_OnPartMeshLoaded_Params
{
	class UStaticMesh**                                Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.OnPartDescLoaded
struct ABP_Figurehead_MediumShip_C_OnPartDescLoaded_Params
{
	class UGenericPartDescAsset**                      Desc;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.ExecuteUbergraph_BP_Figurehead_MediumShip
struct ABP_Figurehead_MediumShip_C_ExecuteUbergraph_BP_Figurehead_MediumShip_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
