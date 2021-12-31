#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AuthenticationToken_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AuthenticationToken.JwtAuthenticationTokenSettings
// 0x0010 (0x0038 - 0x0028)
class UJwtAuthenticationTokenSettings : public UObject
{
public:
	FString                                            TokenSecretKey;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AuthenticationToken.JwtAuthenticationTokenSettings"));
		return ptr;
	}

};


// Class AuthenticationToken.JwtAuthenticationTokenEditorSettings
// 0x0010 (0x0038 - 0x0028)
class UJwtAuthenticationTokenEditorSettings : public UObject
{
public:
	FString                                            TokenSecretKey;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AuthenticationToken.JwtAuthenticationTokenEditorSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
