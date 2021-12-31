#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_EmissaryFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EmissaryFramework.EmissaryLevelServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UEmissaryLevelServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryFramework.EmissaryLevelServiceInterface"));
		return ptr;
	}

};


// Class EmissaryFramework.EmissaryParticipantInterface
// 0x0000 (0x0028 - 0x0028)
class UEmissaryParticipantInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryFramework.EmissaryParticipantInterface"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
