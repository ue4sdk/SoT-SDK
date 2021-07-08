#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Siren_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Siren.SirenTeleportAIAbilityType
// 0x0000 (0x0028 - 0x0028)
class USirenTeleportAIAbilityType : public UAthenaAIAbilityType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Siren.SirenTeleportAIAbilityType"));
		return ptr;
	}

};


// Class Siren.DistantIdleAIAbility
// 0x0000 (0x0078 - 0x0078)
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
// 0x0000 (0x00C8 - 0x00C8)
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
// 0x0000 (0x0080 - 0x0080)
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
// 0x0000 (0x00D8 - 0x00D8)
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


// Class Siren.SirenController
// 0x0008 (0x09D8 - 0x09D0)
class ASirenController : public AAthenaSwimmingAIController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x09D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Siren.SirenController"));
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
// 0x0008 (0x0088 - 0x0080)
class USirenPartsDesc : public UMeshMemoryConstraintsAIPartsDesc
{
public:
	class UClass*                                      AnimationID;                                              // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

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
// 0x0000 (0x0078 - 0x0078)
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
// 0x0000 (0x00C8 - 0x00C8)
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


// Class Siren.SirenTeleportAIAbility
// 0x0000 (0x0080 - 0x0080)
class USirenTeleportAIAbility : public UTeleportAIAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Siren.SirenTeleportAIAbility"));
		return ptr;
	}

};


// Class Siren.SirenTeleportAIAbilityParams
// 0x0000 (0x00F0 - 0x00F0)
class USirenTeleportAIAbilityParams : public UTeleportAIAbilityParams
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Siren.SirenTeleportAIAbilityParams"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
