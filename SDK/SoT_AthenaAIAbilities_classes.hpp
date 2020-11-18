#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaAIAbilities_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaAIAbilities.AIAbilityVulnerableStatus
// 0x0000 (0x0030 - 0x0030)
class UAIAbilityVulnerableStatus : public UStatusBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.AIAbilityVulnerableStatus"));
		return ptr;
	}

};


// Class AthenaAIAbilities.AshenFireStatus
// 0x0000 (0x0030 - 0x0030)
class UAshenFireStatus : public UStatusBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.AshenFireStatus"));
		return ptr;
	}

};


// Class AthenaAIAbilities.ElectricShieldBuffInterface
// 0x0000 (0x0028 - 0x0028)
class UElectricShieldBuffInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.ElectricShieldBuffInterface"));
		return ptr;
	}

};


// Class AthenaAIAbilities.ElectricShieldStatus
// 0x0000 (0x0030 - 0x0030)
class UElectricShieldStatus : public UStatusBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.ElectricShieldStatus"));
		return ptr;
	}

};


// Class AthenaAIAbilities.StatusResponseActivateElectricShield
// 0x0008 (0x0038 - 0x0030)
class UStatusResponseActivateElectricShield : public UStatusResponse
{
public:
	float                                              Duration;                                                 // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAIAbilities.StatusResponseActivateElectricShield"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
