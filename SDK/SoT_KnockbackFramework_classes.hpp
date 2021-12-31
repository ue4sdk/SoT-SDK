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
// 0x0080 (0x0640 - 0x05C0)
class UKnockbackColliderComponent : public UBoxComponent
{
public:
	FCollisionProfileName                              KnockbackTraceProfile;                                    // 0x05C0(0x0008) (Edit)
	TEnumAsByte<EKnockbackType>                        KnockbackType;                                            // 0x05C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05C9(0x0003) MISSED OFFSET
	FKnockBackInfo                                     KnockbackParams;                                          // 0x05CC(0x0050) (Edit)
	TWeakObjectPtr<class AActor>                       ActorToTarget;                                            // 0x061C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0624(0x0004) MISSED OFFSET
	UClass*                                            KnockbackDamageType;                                      // 0x0628(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              KnockbackInterval;                                        // 0x0630(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0634(0x0004) MISSED OFFSET
	TEnumAsByte<ESolidState>                           SolidState;                                               // 0x0638(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0639(0x0007) MISSED OFFSET

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
