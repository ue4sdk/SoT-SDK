#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Wind_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Wind.WindInterface
// 0x0000 (0x0028 - 0x0028)
class UWindInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Wind.WindInterface");
		return ptr;
	}


	void UnregisterWindZone(const TScriptInterface<class UWindZoneInterface>& InWindZone);
	void TriggerChange(bool ChangeInstantly);
	void SetParams(const struct FWindServiceParams& Params);
	void SetGlobalWindVector(const struct FVector& InWindVector);
	void SetGlobalWindMagnitude(float InWindMagnitude);
	void SetGlobalWindDirection(const struct FVector& InWindDirection);
	void SetGlobalWindAngle(float InAngle);
	void RegisterWindZone(const TScriptInterface<class UWindZoneInterface>& InWindZone);
	TScriptInterface<class UWindZoneInterface> GetWindZoneAtLocation(const struct FVector& SamplePosition);
	struct FVector GetWindVector(const struct FVector& SamplePosition);
	float GetWindMagnitude(const struct FVector& SamplePosition);
	struct FVector GetWindDirection(const struct FVector& SamplePosition);
	float GetWindAngle(const struct FVector& SamplePosition);
	struct FWindZoneTurbulence GetTurbulenceForTrees(const struct FVector& SamplePosition);
	struct FWindZoneTurbulence GetTurbulence(const struct FVector& SamplePosition);
	float GetMaxWindMagnitude();
};


// Class Wind.DebugWindInterface
// 0x0000 (0x0028 - 0x0028)
class UDebugWindInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Wind.DebugWindInterface");
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
		static auto ptr = UObject::FindObject<UClass>("Class Wind.MockWindService");
		return ptr;
	}

};


// Class Wind.TestWindInterface
// 0x0038 (0x0060 - 0x0028)
class UTestWindInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
	TArray<TScriptInterface<class UWindZoneInterface>> WindZones;                                                // 0x0050(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Wind.TestWindInterface");
		return ptr;
	}

};


// Class Wind.WindZoneInterface
// 0x0000 (0x0028 - 0x0028)
class UWindZoneInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Wind.WindZoneInterface");
		return ptr;
	}


	struct FWindZoneParams GetWindZoneParams();
	struct FVector2D GetWindZoneLocation();
	struct FWindZoneTurbulence GetTurbulence(const struct FVector& Location);
};


// Class Wind.TestWindZone
// 0x0028 (0x0050 - 0x0028)
class UTestWindZone : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Wind.TestWindZone");
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
		static auto ptr = UObject::FindObject<UClass>("Class Wind.WindFunctions");
		return ptr;
	}


	void STATIC_SetDefaultWindBlowingNorth(class UObject* WorldContextObject);
	struct FVector STATIC_GetWindAtLocation(class UObject* WorldContextObject, const struct FVector& WorldPosition);
};


// Class Wind.WindService
// 0x0120 (0x05B0 - 0x0490)
class AWindService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0490(0x0010) MISSED OFFSET
	class AWindDirectionalSource*                      GlobalWindSource;                                         // 0x04A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x04A8(0x0010) MISSED OFFSET
	float                                              CurrentWindAngle;                                         // 0x04B8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              CurrentWindMagnitude;                                     // 0x04BC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xE0];                                      // 0x04C0(0x00E0) MISSED OFFSET
	TArray<class UObject*>                             WindZones;                                                // 0x05A0(0x0010) (Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Wind.WindService");
		return ptr;
	}


	void OnRep_WindMagnitude();
	void OnRep_WindAngle();
	struct FWindServiceParams GetWindParams();
};


// Class Wind.DebugWindService
// 0x0010 (0x05C0 - 0x05B0)
class ADebugWindService : public AWindService
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Wind.DebugWindService");
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
		static auto ptr = UObject::FindObject<UClass>("Class Wind.WindServiceParamsFunctionLibrary");
		return ptr;
	}


	bool STATIC_AreWindServiceParamsEqual(const struct FWindServiceParams& Params1, const struct FWindServiceParams& Params2);
};


// Class Wind.WindZoneComponent
// 0x0090 (0x0340 - 0x02B0)
class UWindZoneComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET
	struct FWindTurbulenceParameters                   TurbulenceParams;                                         // 0x02B8(0x0070) (Edit, BlueprintVisible)
	struct FWindZoneParams                             WindZoneParams;                                           // 0x0328(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Wind.WindZoneComponent");
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
		static auto ptr = UObject::FindObject<UClass>("Class Wind.TestWindZoneComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
