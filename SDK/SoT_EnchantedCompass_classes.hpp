#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_EnchantedCompass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EnchantedCompass.MultiTargetEnchantedCompass
// 0x0020 (0x08D0 - 0x08B0)
class AMultiTargetEnchantedCompass : public ACompass
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08B0(0x0008) MISSED OFFSET
	TArray<struct FGuid>                               LocationIds;                                              // 0x08B8(0x0010) (ZeroConstructor, Transient)
	class UInventoryItemComponent*                     InventoryItem;                                            // 0x08C8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.MultiTargetEnchantedCompass"));
		return ptr;
	}

};


// Class EnchantedCompass.PrototypeMultiTargetEnchantedCompass
// 0x0000 (0x08D0 - 0x08D0)
class APrototypeMultiTargetEnchantedCompass : public AMultiTargetEnchantedCompass
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.PrototypeMultiTargetEnchantedCompass"));
		return ptr;
	}


	float GetFloatMax();
	float CalculateDesiredYaw(const struct FRotator& CompassRotation);
	TArray<struct FVector> BP_GetTargetLocations();
};


// Class EnchantedCompass.TaleQuestMultiTargetCompassAddTrackedLocationStep
// 0x0008 (0x0070 - 0x0068)
class UTaleQuestMultiTargetCompassAddTrackedLocationStep : public UTaleQuestStep
{
public:
	class UTaleQuestMultiTargetCompassAddTrackedLocationStepDesc* Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestMultiTargetCompassAddTrackedLocationStep"));
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestMultiTargetCompassAddTrackedLocationStepDesc
// 0x0020 (0x0050 - 0x0030)
class UTaleQuestMultiTargetCompassAddTrackedLocationStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableVector                        Location;                                                 // 0x0030(0x0010)
	struct FQuestVariableGuid                          TargetID;                                                 // 0x0040(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestMultiTargetCompassAddTrackedLocationStepDesc"));
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestMultiTargetCompassRemoveTrackedLocationStep
// 0x0010 (0x0078 - 0x0068)
class UTaleQuestMultiTargetCompassRemoveTrackedLocationStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestMultiTargetCompassRemoveTrackedLocationStep"));
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestMultiTargetCompassRemoveTrackedLocationStepDesc
// 0x0010 (0x0040 - 0x0030)
class UTaleQuestMultiTargetCompassRemoveTrackedLocationStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableGuid                          TargetID;                                                 // 0x0030(0x0010) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestMultiTargetCompassRemoveTrackedLocationStepDesc"));
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestMultiTargetCompassService
// 0x0020 (0x0120 - 0x0100)
class UTaleQuestMultiTargetCompassService : public UTaleQuestToolService
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0100(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestMultiTargetCompassService"));
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestMultiTargetCompassServiceDesc
// 0x0008 (0x0038 - 0x0030)
class UTaleQuestMultiTargetCompassServiceDesc : public UTaleQuestToolServiceDesc
{
public:
	class UClass*                                      CompassDesc;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestMultiTargetCompassServiceDesc"));
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestSetCompassTargetToTargetStep
// 0x0028 (0x0090 - 0x0068)
class UTaleQuestSetCompassTargetToTargetStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0068(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestSetCompassTargetToTargetStep"));
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestSetCompassTargetBaseStepDesc
// 0x0008 (0x0038 - 0x0030)
class UTaleQuestSetCompassTargetBaseStepDesc : public UTaleQuestStepDesc
{
public:
	TEnumAsByte<ETargetUpdateReason>                   TargetUpdateReason;                                       // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestSetCompassTargetBaseStepDesc"));
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestSetCompassTargetToActorStepDesc
// 0x0010 (0x0048 - 0x0038)
class UTaleQuestSetCompassTargetToActorStepDesc : public UTaleQuestSetCompassTargetBaseStepDesc
{
public:
	struct FQuestVariableActor                         TargetActor;                                              // 0x0038(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestSetCompassTargetToActorStepDesc"));
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestSetCompassTargetToPointStepDesc
// 0x0010 (0x0048 - 0x0038)
class UTaleQuestSetCompassTargetToPointStepDesc : public UTaleQuestSetCompassTargetBaseStepDesc
{
public:
	struct FQuestVariableOrientedPoint                 TargetPoint;                                              // 0x0038(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestSetCompassTargetToPointStepDesc"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
