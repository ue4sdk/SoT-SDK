#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LiquidContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LiquidContainer.LiquidContainerInterface
// 0x0000 (0x0028 - 0x0028)
class ULiquidContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LiquidContainer.LiquidContainerInterface"));
		return ptr;
	}


	void SetLiquidLevel(float Level);
	float GetWantedLiquidLevel();
	float GetMaxLiquidCollectionAmount();
	float GetLiquidLevel();
	float CollectLiquidAmount(float DesiredAmount);
};


// Class LiquidContainer.LiquidContainerComponent
// 0x0060 (0x0130 - 0x00D0)
class ULiquidContainerComponent : public UActorComponent
{
public:
	struct FName                                       LiquidMaterialName;                                       // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LiquidMaterialParameterName;                              // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FLiquidTypeParams>                   LiquidTypeParams;                                         // 0x00E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              StartingLiquidLevelNormalised;                            // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 TransitionCurve;                                          // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TransitionSpeedDecrease;                                  // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TransitionSpeedIncrease;                                  // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            LiquidMaterials;                                          // 0x0108(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0118(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LiquidContainer.LiquidContainerComponent"));
		return ptr;
	}


	void SetLiquidType(TEnumAsByte<ELiquidType> LiquidType);
	void SetLiquidLevel(float Level);
	float GetLiquidLevel();
	void CollectLiquidMaterials(class UMeshComponent* MeshComponent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
