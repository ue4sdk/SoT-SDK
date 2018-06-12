#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Occlusion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Occlusion.OcclusionFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UOcclusionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Occlusion.OcclusionFunctionLibrary");
		return ptr;
	}


	TEnumAsByte<EOcclusionTypes> STATIC_IsActorOccludedFromActor(class UObject* WorldContextObject, class AActor* Observer, class AActor* Target, const struct FVector& TargetPosition, float InteractionPointRadius, TArray<class AActor*> AdditionalIgnoredActors);
};


// Class Occlusion.OcclusionInterface
// 0x0000 (0x0028 - 0x0028)
class UOcclusionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Occlusion.OcclusionInterface");
		return ptr;
	}


	TEnumAsByte<EOcclusionTypes> IsActorOccludedFromActor(class AActor* Observer, class AActor* Target, const struct FVector& TargetPosition, float Tolerance, TEnumAsByte<ECollisionChannel> CollisionChannel, TArray<class AActor*> AdditionalIgnoredActors);
};


// Class Occlusion.OcclusionMock
// 0x0010 (0x0038 - 0x0028)
class UOcclusionMock : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Occlusion.OcclusionMock");
		return ptr;
	}

};


// Class Occlusion.OcclusionService
// 0x0020 (0x0048 - 0x0028)
class UOcclusionService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Occlusion.OcclusionService");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
