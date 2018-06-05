#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_StatusEffects_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class StatusEffects.StatusBase
// 0x0000 (0x0028 - 0x0028)
class UStatusBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.StatusBase");
		return ptr;
	}

};


// Class StatusEffects.StatusResponse
// 0x0000 (0x0028 - 0x0028)
class UStatusResponse : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.StatusResponse");
		return ptr;
	}

};


// Class StatusEffects.StatusEffectRecipientInterface
// 0x0000 (0x0028 - 0x0028)
class UStatusEffectRecipientInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.StatusEffectRecipientInterface");
		return ptr;
	}

};


// Class StatusEffects.StatusEffectTicketDispenserInterface
// 0x0000 (0x0028 - 0x0028)
class UStatusEffectTicketDispenserInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.StatusEffectTicketDispenserInterface");
		return ptr;
	}

};


// Class StatusEffects.StatusResponseAsset
// 0x0020 (0x0048 - 0x0028)
class UStatusResponseAsset : public UDataAsset
{
public:
	TArray<class UClass*>                              TriggerStatus;                                            // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<class UStatusResponse*>                     Responses;                                                // 0x0038(0x0010) (Edit, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.StatusResponseAsset");
		return ptr;
	}

};


// Class StatusEffects.StatusEffectManagerComponent
// 0x0108 (0x01D8 - 0x00D0)
class UStatusEffectManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET
	TArray<class UStatusResponseAsset*>                Responses;                                                // 0x00E0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FActiveStatusEffect>                 ActiveEffects;                                            // 0x00F0(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0xD8];                                      // 0x0100(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.StatusEffectManagerComponent");
		return ptr;
	}


	void OnRep_ActiveEffects(TArray<struct FActiveStatusEffect> OldActiveEffects);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
