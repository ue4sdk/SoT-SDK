#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AuthenticationTokenRequest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AuthenticationTokenRequest.DevAuthenticationTokenRequestSettings
// 0x0088 (0x00B0 - 0x0028)
class UDevAuthenticationTokenRequestSettings : public UObject
{
public:
	class FString                                      SandboxId;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      ClientTitleId;                                            // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      ServerTitleId;                                            // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      TokenServiceUrl;                                          // 0x0058(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               UseDevTokenOnXbox;                                        // 0x0068(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	class FString                                      ClientId;                                                 // 0x0070(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      ClientSecret;                                             // 0x0080(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      ClientCertificateThumbprint;                              // 0x0090(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      LivePrivileges;                                           // 0x00A0(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AuthenticationTokenRequest.DevAuthenticationTokenRequestSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
