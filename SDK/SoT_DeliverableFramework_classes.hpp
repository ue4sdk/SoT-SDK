#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_DeliverableFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DeliverableFramework.DeliverableRequirementBase
// 0x0008 (0x0030 - 0x0028)
class UDeliverableRequirementBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DeliverableFramework.DeliverableRequirementBase"));
		return ptr;
	}

};


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


// Class DeliverableFramework.DeliverableRedirectionInterface
// 0x0000 (0x0028 - 0x0028)
class UDeliverableRedirectionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DeliverableFramework.DeliverableRedirectionInterface"));
		return ptr;
	}

};


// Class DeliverableFramework.DeliverableComponent
// 0x0020 (0x00E8 - 0x00C8)
class UDeliverableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
	UDeliverableRequirementsDataAsset*                 DeliveryRequirementsAsset;                                // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DeliverableFramework.DeliverableComponent"));
		return ptr;
	}

};


// Class DeliverableFramework.DeliverableRedirectionComponent
// 0x0010 (0x00D8 - 0x00C8)
class UDeliverableRedirectionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	UDeliverableRedirectionContextBase*                Context;                                                  // 0x00D0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DeliverableFramework.DeliverableRedirectionComponent"));
		return ptr;
	}

};


// Class DeliverableFramework.DeliverableRedirectionContextBase
// 0x0000 (0x0028 - 0x0028)
class UDeliverableRedirectionContextBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DeliverableFramework.DeliverableRedirectionContextBase"));
		return ptr;
	}

};


// Class DeliverableFramework.DeliverableRedirectionNoContext
// 0x0000 (0x0028 - 0x0028)
class UDeliverableRedirectionNoContext : public UDeliverableRedirectionContextBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DeliverableFramework.DeliverableRedirectionNoContext"));
		return ptr;
	}

};


// Class DeliverableFramework.DeliverableRedirectionCompositeContext
// 0x0028 (0x0050 - 0x0028)
class UDeliverableRedirectionCompositeContext : public UDeliverableRedirectionContextBase
{
public:
	TArray<UDeliverableRedirectionContextBase*>        Contexts;                                                 // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DeliverableFramework.DeliverableRedirectionCompositeContext"));
		return ptr;
	}

};


// Class DeliverableFramework.DeliverableRedirectionDestinationDescriptorBase
// 0x0000 (0x0028 - 0x0028)
class UDeliverableRedirectionDestinationDescriptorBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DeliverableFramework.DeliverableRedirectionDestinationDescriptorBase"));
		return ptr;
	}

};


// Class DeliverableFramework.DeliverableRedirectionContextHandlerBase
// 0x0008 (0x0030 - 0x0028)
class UDeliverableRedirectionContextHandlerBase : public UObject
{
public:
	UDeliverableRedirectionDestinationDescriptorBase*  DestinationDescriptor;                                    // 0x0028(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DeliverableFramework.DeliverableRedirectionContextHandlerBase"));
		return ptr;
	}

};


// Class DeliverableFramework.DeliverableRedirectionLiteralDestinationDescriptor
// 0x0038 (0x0060 - 0x0028)
class UDeliverableRedirectionLiteralDestinationDescriptor : public UDeliverableRedirectionDestinationDescriptorBase
{
public:
	FText                                              Destination;                                              // 0x0028(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DeliverableFramework.DeliverableRedirectionLiteralDestinationDescriptor"));
		return ptr;
	}

};


// Class DeliverableFramework.DeliverableRequirementsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UDeliverableRequirementsDataAsset : public UDataAsset
{
public:
	TArray<UDeliverableRequirementBase*>               Requirements;                                             // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DeliverableFramework.DeliverableRequirementsDataAsset"));
		return ptr;
	}

};


// Class DeliverableFramework.DeliverableTooltipCustomizerInterface
// 0x0000 (0x0028 - 0x0028)
class UDeliverableTooltipCustomizerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class DeliverableFramework.DeliverableTooltipCustomizerInterface"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
