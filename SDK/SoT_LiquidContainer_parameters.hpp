#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LiquidContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LiquidContainer.LiquidContainerInterface.SetLiquidLevel
struct ULiquidContainerInterface_SetLiquidLevel_Params
{
	float                                              Level;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LiquidContainer.LiquidContainerInterface.GetWantedLiquidLevel
struct ULiquidContainerInterface_GetWantedLiquidLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiquidContainer.LiquidContainerInterface.GetMaxLiquidCollectionAmount
struct ULiquidContainerInterface_GetMaxLiquidCollectionAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiquidContainer.LiquidContainerInterface.GetLiquidLevel
struct ULiquidContainerInterface_GetLiquidLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiquidContainer.LiquidContainerInterface.CollectLiquidAmount
struct ULiquidContainerInterface_CollectLiquidAmount_Params
{
	float                                              DesiredAmount;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiquidContainer.LiquidContainerComponent.SetLiquidType
struct ULiquidContainerComponent_SetLiquidType_Params
{
	TEnumAsByte<ELiquidType>                           LiquidType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LiquidContainer.LiquidContainerComponent.SetLiquidLevel
struct ULiquidContainerComponent_SetLiquidLevel_Params
{
	float                                              Level;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LiquidContainer.LiquidContainerComponent.GetLiquidLevel
struct ULiquidContainerComponent_GetLiquidLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiquidContainer.LiquidContainerComponent.CollectLiquidMaterials
struct ULiquidContainerComponent_CollectLiquidMaterials_Params
{
	UMeshComponent*                                    MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
