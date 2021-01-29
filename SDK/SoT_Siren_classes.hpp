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
// 0x0000 (0x00A8 - 0x00A8)
class UDistantIdleAIAbilityParams : public UAthenaAIAbilityParams
{
public:

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
// 0x0000 (0x0078 - 0x0078)
class UScratchAIAbility : public UMeleeAIAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Siren.ScratchAIAbility"));
		return ptr;
	}

};


// Class Siren.ScratchAIAbilityParams
// 0x0000 (0x00B8 - 0x00B8)
class UScratchAIAbilityParams : public UMeleeAIAbilityParams
{
public:

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


// Class Siren.SirenCalmHealStrategyId
// 0x0000 (0x0028 - 0x0028)
class USirenCalmHealStrategyId : public UAIStrategyId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Siren.SirenCalmHealStrategyId"));
		return ptr;
	}

};


// Class Siren.SirenEmeraldHealStatus
// 0x0000 (0x0030 - 0x0030)
class USirenEmeraldHealStatus : public UStatusBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Siren.SirenEmeraldHealStatus"));
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


// Class Siren.SirenRubyHealStatus
// 0x0000 (0x0030 - 0x0030)
class USirenRubyHealStatus : public UStatusBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Siren.SirenRubyHealStatus"));
		return ptr;
	}

};


// Class Siren.SirenSapphireHealStatus
// 0x0000 (0x0030 - 0x0030)
class USirenSapphireHealStatus : public UStatusBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Siren.SirenSapphireHealStatus"));
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


// Class Siren.SirenSongAIAbility
// 0x0000 (0x0070 - 0x0070)
class USirenSongAIAbility : public UAthenaAIAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Siren.SirenSongAIAbility"));
		return ptr;
	}

};


// Class Siren.SirenSongAIAbilityParams
// 0x0000 (0x00A8 - 0x00A8)
class USirenSongAIAbilityParams : public UAthenaAIAbilityParams
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Siren.SirenSongAIAbilityParams"));
		return ptr;
	}

};


// Class Siren.SirenSongAIAbilityType
// 0x0000 (0x0028 - 0x0028)
class USirenSongAIAbilityType : public UAthenaAIAbilityType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Siren.SirenSongAIAbilityType"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
