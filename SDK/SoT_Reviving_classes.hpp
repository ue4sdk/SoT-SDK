#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Reviving_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Reviving.ReviveableCharacterInterface
// 0x0000 (0x0028 - 0x0028)
class UReviveableCharacterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Reviving.ReviveableCharacterInterface"));
		return ptr;
	}

};


// Class Reviving.ReviveInterface
// 0x0000 (0x0028 - 0x0028)
class UReviveInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Reviving.ReviveInterface"));
		return ptr;
	}

};


// Class Reviving.ReviveComponent
// 0x00B0 (0x01C8 - 0x0118)
class UReviveComponent : public UInteractableComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET
	class ACharacter*                                  OwningCharacter;                                          // 0x0128(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EReviveState>                          ReviveState;                                              // 0x0130(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractableState>                    InteractionState;                                         // 0x0131(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0132(0x0002) MISSED OFFSET
	float                                              ReviveTime;                                               // 0x0134(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumReviveDistance;                                    // 0x0138(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8C];                                      // 0x013C(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Reviving.ReviveComponent"));
		return ptr;
	}


	void OnRep_ReviveState(TEnumAsByte<EReviveState> PreviousReviveState);
};


// Class Reviving.ReviveGhost
// 0x0010 (0x0420 - 0x0410)
class AReviveGhost : public AActor
{
public:
	class USkeletalMeshComponent*                      MeshComponent;                                            // 0x0410(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAnimationDataStoreComponent*                AnimationDataStoreComponent;                              // 0x0418(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Reviving.ReviveGhost"));
		return ptr;
	}

};


// Class Reviving.RevivePlayerActionStateId
// 0x0000 (0x0028 - 0x0028)
class URevivePlayerActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Reviving.RevivePlayerActionStateId"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
