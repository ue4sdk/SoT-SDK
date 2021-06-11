#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_ActionStateMachine_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_AthenaInput_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WaterSlide.WaterSlideParams
// 0x001C
struct FWaterSlideParams
{
	float                                              ForwardSpeed;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IncreaseForwardSpeedMultiplier;                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecreaseForwardSpeedMultiplier;                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VeeringSpeed;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LeftVeeringDistance;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RightVeeringDistance;                                     // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceAboveSlideOffset;                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WaterSlide.WaterSlideActionStateConstructionInfo
// 0x0008 (0x0038 - 0x0030)
struct FWaterSlideActionStateConstructionInfo : public FActorActionStateConstructionInfo
{
	class USceneComponent*                             SceneComponent;                                           // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct WaterSlide.WaterSlideActionStateParams
// 0x0024
struct FWaterSlideActionStateParams
{
	float                                              ForcedFieldOfView;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ForceStash;                                               // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FLookAtOffsetParams                         LookAtOffsetParams;                                       // 0x0008(0x001C) (Edit)
};

// ScriptStruct WaterSlide.OnPlayerSpeedOnWaterSlideChangedActionStateEvent
// 0x0004
struct FOnPlayerSpeedOnWaterSlideChangedActionStateEvent
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct WaterSlide.OnPlayerChangedWaterSlideRouteActionStateEvent
// 0x0001
struct FOnPlayerChangedWaterSlideRouteActionStateEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct WaterSlide.OnEndWaterSlideActionStateEvent
// 0x0001
struct FOnEndWaterSlideActionStateEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct WaterSlide.OnStartWaterSlideActionStateEvent
// 0x0001
struct FOnStartWaterSlideActionStateEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct WaterSlide.OnExitedWaterSlideEvent
// 0x0001
struct FOnExitedWaterSlideEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
