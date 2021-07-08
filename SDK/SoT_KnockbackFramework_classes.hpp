#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_KnockbackFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class KnockbackFramework.KnockbackInterface
// 0x0000 (0x0028 - 0x0028)
class UKnockbackInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class KnockbackFramework.KnockbackInterface"));
		return ptr;
	}

};


// Class KnockbackFramework.KnockbackColliderComponent
// 0x0080 (0x0630 - 0x05B0)
class UKnockbackColliderComponent : public UBoxComponent
{
public:
	struct FCollisionProfileName                       KnockbackTraceProfile;                                    // 0x05B0(0x0008) (Edit)
	TEnumAsByte<EKnockbackType>                        KnockbackType;                                            // 0x05B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05B9(0x0003) MISSED OFFSET
	struct FKnockBackInfo                              KnockbackParams;                                          // 0x05BC(0x0050) (Edit)
	TWeakObjectPtr<class AActor>                       ActorToTarget;                                            // 0x060C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0614(0x0004) MISSED OFFSET
	class UClass*                                      KnockbackDamageType;                                      // 0x0618(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              KnockbackInterval;                                        // 0x0620(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0624(0x0004) MISSED OFFSET
	TEnumAsByte<ESolidState>                           SolidState;                                               // 0x0628(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0629(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class KnockbackFramework.KnockbackColliderComponent"));
		return ptr;
	}


	void OnRep_SolidState();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
