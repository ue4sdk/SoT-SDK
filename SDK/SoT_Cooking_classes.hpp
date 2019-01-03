#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Cooking_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Cooking.CookerInterface
// 0x0000 (0x0028 - 0x0028)
class UCookerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Cooking.CookerInterface");
		return ptr;
	}

};


// Class Cooking.CookerComponent
// 0x0008 (0x00D8 - 0x00D0)
class UCookerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Cooking.CookerComponent");
		return ptr;
	}

};


// Class Cooking.CookingPot
// 0x00C8 (0x0578 - 0x04B0)
class ACookingPot : public AInteractableBase
{
public:
	class UStaticMeshComponent*                        MeshComponent;                                            // 0x04B0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UActionRulesInteractableComponent*           InteractableComponent;                                    // 0x04B8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UCookerComponent*                            CookerComponent;                                          // 0x04C0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	float                                              HoldToInteractTime;                                       // 0x04C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	struct FText                                       NotWieldingItemTooltip;                                   // 0x04D0(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x20];                                      // 0x04CC(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       WieldingNonCookableItemTooltip;                           // 0x0508(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0508(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       WieldingCookableItemTooltip;                              // 0x0540(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0540(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Cooking.CookingPot");
		return ptr;
	}

};


// Class Cooking.PottableInterface
// 0x0000 (0x0028 - 0x0028)
class UPottableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Cooking.PottableInterface");
		return ptr;
	}

};


// Class Cooking.PottableComponent
// 0x0010 (0x00E0 - 0x00D0)
class UPottableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	bool                                               CanBePutInPot;                                            // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Cooking.PottableComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
