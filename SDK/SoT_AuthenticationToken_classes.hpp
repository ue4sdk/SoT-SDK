#pragma once

// Sea of Thieves (1.0.5) SDK

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
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AuthenticationToken.JwtAuthenticationTokenSettings");
		return ptr;
	}

};


// Class AuthenticationToken.JwtAuthenticationTokenEditorSettings
// 0x0010 (0x0038 - 0x0028)
class UJwtAuthenticationTokenEditorSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AuthenticationToken.JwtAuthenticationTokenEditorSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
