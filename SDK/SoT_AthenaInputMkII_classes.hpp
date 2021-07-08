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
// 0x00D8 (0x0228 - 0x0150)
class UAthenaCharacterBaseMovementComponent : public UInputComponent
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0150(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInputMkII.AthenaCharacterBaseMovementComponent"));
		return ptr;
	}

};


// Class AthenaInputMkII.AthenaCharacterBaseMovementComponentWithInterference
// 0x0008 (0x0230 - 0x0228)
class UAthenaCharacterBaseMovementComponentWithInterference : public UAthenaCharacterBaseMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0228(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInputMkII.AthenaCharacterBaseMovementComponentWithInterference"));
		return ptr;
	}

};


// Class AthenaInputMkII.MovementInterferenceComponent
// 0x0020 (0x0170 - 0x0150)
class UMovementInterferenceComponent : public UInputComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0150(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInputMkII.MovementInterferenceComponent"));
		return ptr;
	}


	void OnMoveRightInput(float Value);
	void OnMoveForwardInput(float Value);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
