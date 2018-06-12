#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MathAndTrigAnimation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C
// 0x0000 (0x0028 - 0x0028)
class UBP_MathAndTrigAnimation_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C");
		return ptr;
	}


	void STATIC_DisplayAllCharacterSockets(class AAthenaCharacter* Athena_Character, float Size, class UObject* __WorldContext);
	void STATIC_DecrementFloat(float DecrementValue, class UObject* __WorldContext, float* Float);
	void STATIC_Increment_Float(float Incement_Value, class UObject* __WorldContext, float* Float);
	void STATIC_Apply_Relative_Transform(const struct FTransform& RelativeTransform, const struct FTransform& BaseTransform, class UObject* __WorldContext, struct FTransform* CombinedTransform);
	void STATIC_Calculate_Relative_Transform(const struct FTransform& RelativeObjectsWorldTransform, const struct FTransform& BaseObjectsWorldTransform, class UObject* __WorldContext, struct FTransform* RealtiveOffsetTransform);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
