#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ServiceHttp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ServiceHttp.ServiceHttpSettings
// 0x0018 (0x0040 - 0x0028)
class UServiceHttpSettings : public UObject
{
public:
	class FString                                      DiscoveryServiceUrl;                                      // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	TEnumAsByte<EServiceHttpMetricsLevel>              ServerMetricsLevel;                                       // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EServiceHttpMetricsLevel>              ClientMetricsLevel;                                       // 0x0039(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServiceHttp.ServiceHttpSettings"));
		return ptr;
	}

};


// Class ServiceHttp.DevelopmentAuthenticationSettings
// 0x0050 (0x0078 - 0x0028)
class UDevelopmentAuthenticationSettings : public UObject
{
public:
	class FString                                      SandboxId;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      TokenServiceUrl;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      ClientId;                                                 // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      ClientSecret;                                             // 0x0058(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      LivePrivileges;                                           // 0x0068(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ServiceHttp.DevelopmentAuthenticationSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
