#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaInputMkII_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaInputMkII.AthenaCharacterBaseMovementComponent
// 0x0128 (0x0278 - 0x0150)
class UAthenaCharacterBaseMovementComponent : public UInputComponent
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0150(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInputMkII.AthenaCharacterBaseMovementComponent"));
		return ptr;
	}

};


// Class AthenaInputMkII.AthenaCharacterBaseMovementComponentWithInterference
// 0x0008 (0x0280 - 0x0278)
class UAthenaCharacterBaseMovementComponentWithInterference : public UAthenaCharacterBaseMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0278(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInputMkII.AthenaCharacterBaseMovementComponentWithInterference"));
		return ptr;
	}

};


// Class AthenaInputMkII.MovementInterferenceComponent
// 0x0070 (0x01C0 - 0x0150)
class UMovementInterferenceComponent : public UInputComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0150(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInputMkII.MovementInterferenceComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
