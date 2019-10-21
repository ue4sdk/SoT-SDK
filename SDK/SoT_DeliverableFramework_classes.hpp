#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_DeliverableFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DeliverableFramework.DeliverableInterface
// 0x0000 (0x0028 - 0x0028)
class UDeliverableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DeliverableFramework.DeliverableInterface"));
		return ptr;
	}

};


// Class DeliverableFramework.DeliverableComponent
// 0x0010 (0x00E0 - 0x00D0)
class UDeliverableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	class UDeliverableRequirementsDataAsset*           DeliveryRequirementsAsset;                                // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DeliverableFramework.DeliverableComponent"));
		return ptr;
	}

};


// Class DeliverableFramework.DeliverableRequirementBase
// 0x0000 (0x0028 - 0x0028)
class UDeliverableRequirementBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DeliverableFramework.DeliverableRequirementBase"));
		return ptr;
	}

};


// Class DeliverableFramework.DeliverableRequirementsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UDeliverableRequirementsDataAsset : public UDataAsset
{
public:
	TArray<class UDeliverableRequirementBase*>         Requirements;                                             // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DeliverableFramework.DeliverableRequirementsDataAsset"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
