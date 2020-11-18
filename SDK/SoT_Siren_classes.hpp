#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Siren_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Siren.DistantIdleAIAbility
// 0x0000 (0x0070 - 0x0070)
class UDistantIdleAIAbility : public UAthenaAIAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Siren.DistantIdleAIAbility"));
		return ptr;
	}

};


// Class Siren.DistantIdleAIAbilityParams
// 0x0010 (0x00A8 - 0x0098)
class UDistantIdleAIAbilityParams : public UAthenaAIAbilityParams
{
public:
	TArray<struct FAthenaAIControllerParamValue>       NamedControllerParams;                                    // 0x0098(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Siren.DistantIdleAIAbilityParams"));
		return ptr;
	}

};


// Class Siren.DistantIdleAIAbilityType
// 0x0000 (0x0028 - 0x0028)
class UDistantIdleAIAbilityType : public UAthenaAIAbilityType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Siren.DistantIdleAIAbilityType"));
		return ptr;
	}

};


// Class Siren.ScratchAIAbility
// 0x0008 (0x0078 - 0x0070)
class UScratchAIAbility : public UAthenaAIAbility
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Siren.ScratchAIAbility"));
		return ptr;
	}

};


// Class Siren.ScratchAttackId
// 0x0000 (0x0028 - 0x0028)
class UScratchAttackId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Siren.ScratchAttackId"));
		return ptr;
	}

};


// Class Siren.ScratchAIAbilityParams
// 0x0010 (0x00A8 - 0x0098)
class UScratchAIAbilityParams : public UAthenaAIAbilityParams
{
public:
	TArray<struct FSirenScratchTypeWeights>            SirenScratchTypeWeights;                                  // 0x0098(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Siren.ScratchAIAbilityParams"));
		return ptr;
	}

};


// Class Siren.ScratchAIAbilityType
// 0x0000 (0x0028 - 0x0028)
class UScratchAIAbilityType : public UAthenaAIAbilityType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Siren.ScratchAIAbilityType"));
		return ptr;
	}

};


// Class Siren.ScratchComboAttackId
// 0x0000 (0x0028 - 0x0028)
class UScratchComboAttackId : public UScratchAttackId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Siren.ScratchComboAttackId"));
		return ptr;
	}

};


// Class Siren.ScratchHeavySwipeAttackId
// 0x0000 (0x0028 - 0x0028)
class UScratchHeavySwipeAttackId : public UScratchAttackId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Siren.ScratchHeavySwipeAttackId"));
		return ptr;
	}

};


// Class Siren.ScratchLightSwipeAttackId
// 0x0000 (0x0028 - 0x0028)
class UScratchLightSwipeAttackId : public UScratchAttackId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Siren.ScratchLightSwipeAttackId"));
		return ptr;
	}

};


// Class Siren.SirenPartsDesc
// 0x0018 (0x0048 - 0x0030)
class USirenPartsDesc : public UAIPartsDesc
{
public:
	struct FStringAssetReference                       Mesh;                                                     // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UClass*                                      AnimationID;                                              // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Siren.SirenPartsDesc"));
		return ptr;
	}

};


// Class Siren.SirenScratchRespiteStrategyId
// 0x0000 (0x0028 - 0x0028)
class USirenScratchRespiteStrategyId : public UAIStrategyId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Siren.SirenScratchRespiteStrategyId"));
		return ptr;
	}

};


// Class Siren.SirenScratchStrategyId
// 0x0000 (0x0028 - 0x0028)
class USirenScratchStrategyId : public UAIStrategyId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Siren.SirenScratchStrategyId"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
