#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallMapTable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SmallMapTable.BP_SmallMapTable_C.UpdateBlurEffect
struct ABP_SmallMapTable_C_UpdateBlurEffect_Params
{
};

// Function BP_SmallMapTable.BP_SmallMapTable_C.GetClosestInteractionPoint
struct ABP_SmallMapTable_C_GetClosestInteractionPoint_Params
{
	FVector                                            ReferencePosition;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              OutInteractionPointRadius;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	FVector                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SmallMapTable.BP_SmallMapTable_C.UserConstructionScript
struct ABP_SmallMapTable_C_UserConstructionScript_Params
{
};

// Function BP_SmallMapTable.BP_SmallMapTable_C.ReceiveBeginPlay
struct ABP_SmallMapTable_C_ReceiveBeginPlay_Params
{
};

// Function BP_SmallMapTable.BP_SmallMapTable_C.SetEffectActiveWhenClose
struct ABP_SmallMapTable_C_SetEffectActiveWhenClose_Params
{
};

// Function BP_SmallMapTable.BP_SmallMapTable_C.OnMapActivate
struct ABP_SmallMapTable_C_OnMapActivate_Params
{
	bool                                               IsMapActive;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	UTextureRenderTarget2D*                            Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmallMapTable.BP_SmallMapTable_C.OnMapMove
struct ABP_SmallMapTable_C_OnMapMove_Params
{
	FVector2D                                          CentreLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	FVector2D                                          ZoomLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmallMapTable.BP_SmallMapTable_C.ExecuteUbergraph_BP_SmallMapTable
struct ABP_SmallMapTable_C_ExecuteUbergraph_BP_SmallMapTable_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
