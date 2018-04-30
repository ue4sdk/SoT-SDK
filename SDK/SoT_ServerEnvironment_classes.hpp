#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ServerEnvironment_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ServerEnvironment.DefaultServerEnvironmentSettings
// 0x0010 (0x0038 - 0x0028)
class UDefaultServerEnvironmentSettings : public UObject
{
public:
	class FString                                      EnvironmentId;                                            // 0x0028(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerEnvironment.DefaultServerEnvironmentSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
