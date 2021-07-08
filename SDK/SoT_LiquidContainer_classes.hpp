#pragma once

// Sea of Thieves (2) SDK

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
// 0x0060 (0x0128 - 0x00C8)
class ULiquidContainerComponent : public UActorComponent
{
public:
	struct FName                                       LiquidMaterialName;                                       // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LiquidMaterialParameterName;                              // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FLiquidTypeParams>                   LiquidTypeParams;                                         // 0x00D8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              StartingLiquidLevelNormalised;                            // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	class UCurveFloat*                                 TransitionCurve;                                          // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TransitionSpeedDecrease;                                  // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TransitionSpeedIncrease;                                  // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            LiquidMaterials;                                          // 0x0100(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0110(0x0018) MISSED OFFSET

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


// Class LiquidContainer.LiquidContainerServiceInterface
// 0x0000 (0x0028 - 0x0028)
class ULiquidContainerServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LiquidContainer.LiquidContainerServiceInterface"));
		return ptr;
	}

};


// Class LiquidContainer.LiquidContainerService
// 0x0008 (0x0078 - 0x0070)
class ULiquidContainerService : public UInteractableService
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LiquidContainer.LiquidContainerService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
