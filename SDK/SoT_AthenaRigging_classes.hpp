#pragma once

// Sea of Thieves (1.1.6) SDK

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
// 0x00D0 (0x0670 - 0x05A0)
class UInstancedRopeComponent : public UPrimitiveComponent
{
public:
	class UStaticMesh*                                 StaticMesh;                                               // 0x05A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FInstancedRopeParams>                Ropes;                                                    // 0x05A8(0x0010) (Edit, ZeroConstructor, EditConst)
	int                                                ShadowLOD;                                                // 0x05B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB4];                                      // 0x05BC(0x00B4) MISSED OFFSET

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
	TEnumAsByte<EInstancedRopeParameterType>           RopeParameterType;                                        // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaRigging.MaterialExpressionRopeParameter");
		return ptr;
	}

};


// Class AthenaRigging.RiggingSystem
// 0x0138 (0x05C0 - 0x0488)
class ARiggingSystem : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0488(0x0008) MISSED OFFSET
	class USceneComponent*                             Root;                                                     // 0x0490(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInstancedRopeComponent*                     InstancedRopes;                                           // 0x0498(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FRiggingSystemLine>                  Lines;                                                    // 0x04A0(0x0010) (ZeroConstructor)
	TArray<struct FInstancedRopeParams>                Ropes;                                                    // 0x04B0(0x0010) (ZeroConstructor)
	class UMobileInstancedStaticMeshComponent*         PulleyInstances;                                          // 0x04C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FRiggingSystemPulleyData                    Pulleys;                                                  // 0x04C8(0x0050)
	TArray<struct FSocketId>                           Sockets;                                                  // 0x0518(0x0010) (ZeroConstructor)
	TArray<float>                                      InitialMainRopeLengths;                                   // 0x0528(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x88];                                      // 0x0538(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaRigging.RiggingSystem");
		return ptr;
	}

};


// Class AthenaRigging.RiggingSystemComponent
// 0x0040 (0x02E0 - 0x02A0)
class URiggingSystemComponent : public USceneComponent
{
public:
	struct FRopeStyleParams                            RopeStyle;                                                // 0x02A0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FRiggingSystemLineGroup>             LineGroups;                                               // 0x02C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class ARiggingSystem*                              Impl;                                                     // 0x02D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaRigging.RiggingSystemComponent");
		return ptr;
	}


	void SetSocketLookupSource(class AActor* InSocketSource);
	int ConvertLineToRopeIndex(const struct FName& InLineGroupName, int InLineOffset);
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
