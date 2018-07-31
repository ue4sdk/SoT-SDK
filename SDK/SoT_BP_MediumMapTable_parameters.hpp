#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MediumMapTable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MediumMapTable.BP_MediumMapTable_C.UpdateBlurEffect
struct ABP_MediumMapTable_C_UpdateBlurEffect_Params
{
};

// Function BP_MediumMapTable.BP_MediumMapTable_C.GetClosestInteractionPoint
struct ABP_MediumMapTable_C_GetClosestInteractionPoint_Params
{
	struct FVector                                     ReferencePosition;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              OutInteractionPointRadius;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MediumMapTable.BP_MediumMapTable_C.UserConstructionScript
struct ABP_MediumMapTable_C_UserConstructionScript_Params
{
};

// Function BP_MediumMapTable.BP_MediumMapTable_C.ReceiveBeginPlay
struct ABP_MediumMapTable_C_ReceiveBeginPlay_Params
{
};

// Function BP_MediumMapTable.BP_MediumMapTable_C.SetEffectActiveWhenClose
struct ABP_MediumMapTable_C_SetEffectActiveWhenClose_Params
{
};

// Function BP_MediumMapTable.BP_MediumMapTable_C.OnMapActivate
struct ABP_MediumMapTable_C_OnMapActivate_Params
{
	bool*                                              IsMapActive;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D**                     Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MediumMapTable.BP_MediumMapTable_C.OnMapMove
struct ABP_MediumMapTable_C_OnMapMove_Params
{
	struct FVector2D*                                  CentreLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ZoomLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MediumMapTable.BP_MediumMapTable_C.ExecuteUbergraph_BP_MediumMapTable
struct ABP_MediumMapTable_C_ExecuteUbergraph_BP_MediumMapTable_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
