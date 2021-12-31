#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Wind_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Wind.WindZoneInterface
// 0x0000 (0x0028 - 0x0028)
class UWindZoneInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Wind.WindZoneInterface"));
		return ptr;
	}


	FWindZoneParams GetWindZoneParams();
	FVector2D GetWindZoneLocation();
	FWindZoneTurbulence GetTurbulence(const FVector& Location);
};


// Class Wind.WindInterface
// 0x0000 (0x0028 - 0x0028)
class UWindInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Wind.WindInterface"));
		return ptr;
	}


	void UnregisterWindZone(const TScriptInterface<class UWindZoneInterface>& InWindZone);
	void TriggerChange(bool ChangeInstantly);
	void SetParams(const FWindServiceParams& Params);
	void SetGlobalWindVector(const FVector& InWindVector);
	void SetGlobalWindMagnitude(float InWindMagnitude);
	void SetGlobalWindDirection(const FVector& InWindDirection);
	void SetGlobalWindAngle(float InAngle);
	void SetCustomMode(bool InCustomMode);
	void RegisterWindZone(const TScriptInterface<class UWindZoneInterface>& InWindZone);
	TScriptInterface<class UWindZoneInterface> GetWindZoneAtLocation(const FVector& SamplePosition);
	FVector GetWindVector(const FVector& SamplePosition);
	float GetWindMagnitude(const FVector& SamplePosition);
	FVector GetWindDirection(const FVector& SamplePosition);
	float GetWindAngle(const FVector& SamplePosition);
	FWindZoneTurbulence GetTurbulenceForTrees(const FVector& SamplePosition);
	FWindZoneTurbulence GetTurbulence(const FVector& SamplePosition);
	float GetMaxWindMagnitude();
};


// Class Wind.DebugWindInterface
// 0x0000 (0x0028 - 0x0028)
class UDebugWindInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Wind.DebugWindInterface"));
		return ptr;
	}

};


// Class Wind.MockWindService
// 0x0018 (0x0040 - 0x0028)
class UMockWindService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Wind.MockWindService"));
		return ptr;
	}

};


// Class Wind.TestWindInterface
// 0x0040 (0x0068 - 0x0028)
class UTestWindInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET
	TArray<TScriptInterface<class UWindZoneInterface>> WindZones;                                                // 0x0058(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Wind.TestWindInterface"));
		return ptr;
	}

};


// Class Wind.TestWindZone
// 0x0028 (0x0050 - 0x0028)
class UTestWindZone : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Wind.TestWindZone"));
		return ptr;
	}

};


// Class Wind.WindFunctions
// 0x0000 (0x0028 - 0x0028)
class UWindFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Wind.WindFunctions"));
		return ptr;
	}


	static void SetDefaultWindBlowingNorth(UObject* WorldContextObject);
	static FVector GetWindAtLocation(UObject* WorldContextObject, const FVector& WorldPosition);
};


// Class Wind.WindService
// 0x0128 (0x04F8 - 0x03D0)
class AWindService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03D0(0x0010) MISSED OFFSET
	AWindDirectionalSource*                            GlobalWindSource;                                         // 0x03E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03E8(0x0010) MISSED OFFSET
	float                                              CurrentWindAngle;                                         // 0x03F8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              CurrentWindMagnitude;                                     // 0x03FC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xE8];                                      // 0x0400(0x00E8) MISSED OFFSET
	TArray<TScriptInterface<class UWindZoneInterface>> WindZones;                                                // 0x04E8(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Wind.WindService"));
		return ptr;
	}


	void OnRep_WindMagnitude();
	void OnRep_WindAngle();
	FWindServiceParams GetWindParams();
};


// Class Wind.DebugWindService
// 0x0010 (0x0508 - 0x04F8)
class ADebugWindService : public AWindService
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Wind.DebugWindService"));
		return ptr;
	}

};


// Class Wind.WindServiceParamsFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UWindServiceParamsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Wind.WindServiceParamsFunctionLibrary"));
		return ptr;
	}


	static bool AreWindServiceParamsEqual(const FWindServiceParams& Params1, const FWindServiceParams& Params2);
};


// Class Wind.WindZoneComponent
// 0x0090 (0x0340 - 0x02B0)
class UWindZoneComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET
	FWindTurbulenceParameters                          TurbulenceParams;                                         // 0x02B8(0x0070) (Edit, BlueprintVisible)
	FWindZoneParams                                    WindZoneParams;                                           // 0x0328(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Wind.WindZoneComponent"));
		return ptr;
	}

};


// Class Wind.TestWindZoneComponent
// 0x0000 (0x0340 - 0x0340)
class UTestWindZoneComponent : public UWindZoneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Wind.TestWindZoneComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
