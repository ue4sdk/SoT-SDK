#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_UdpMessaging_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UdpMessaging.UdpMessagingSettings
// 0x0078 (0x00A0 - 0x0028)
class UUdpMessagingSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	bool                                               EnableTransport;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	class FString                                      UnicastEndpoint;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      MulticastEndpoint;                                        // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	unsigned char                                      MulticastTimeToLive;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<class FString>                              StaticEndpoints;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               EnableTunnel;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	class FString                                      TunnelUnicastEndpoint;                                    // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      TunnelMulticastEndpoint;                                  // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UdpMessaging.UdpMessagingSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
