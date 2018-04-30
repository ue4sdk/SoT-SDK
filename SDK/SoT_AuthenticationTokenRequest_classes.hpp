#pragma once

// Sea of Thieves (1.0.5) SDK

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
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class FString                                      SandboxId;                                                // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      ClientTitleId;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      ServerTitleId;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      TokenServiceUrl;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               UseDevTokenOnXbox;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	class FString                                      ClientId;                                                 // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      ClientSecret;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      ClientCertificateThumbprint;                              // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AuthenticationTokenRequest.DevAuthenticationTokenRequestSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
