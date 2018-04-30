#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaRigging_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaRigging.InstancedRopeComponent
// 0x00C0 (0x0730 - 0x0670)
class UInstancedRopeComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0670(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaRigging.InstancedRopeComponent");
		return ptr;
	}


	void SetUnderwater(bool Underwater);
	void SetRopes(TArray<struct FInstancedRopeParams> InRopes);
};


// Class AthenaRigging.MaterialExpressionRopeParameter
// 0x0008 (0x0078 - 0x0070)
class UMaterialExpressionRopeParameter : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	TEnumAsByte<EInstancedRopeParameterType>           RopeParameterType;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaRigging.MaterialExpressionRopeParameter");
		return ptr;
	}

};


// Class AthenaRigging.RiggingSystem
// 0x0128 (0x0598 - 0x0470)
class ARiggingSystem : public AActor
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0470(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaRigging.RiggingSystem");
		return ptr;
	}

};


// Class AthenaRigging.RiggingSystemComponent
// 0x0040 (0x0330 - 0x02F0)
class URiggingSystemComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02F0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaRigging.RiggingSystemComponent");
		return ptr;
	}


	void SetSocketLookupSource(class AActor* InSocketSource);
};


// Class AthenaRigging.RopeInterface
// 0x0000 (0x0028 - 0x0028)
class URopeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaRigging.RopeInterface");
		return ptr;
	}


	void SetRopeUVOffset(float InUVOffset);
	void SetRopeEndpoints(const struct FVector& InWorldSpaceStart, const struct FVector& InWorldSpaceEnd);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
