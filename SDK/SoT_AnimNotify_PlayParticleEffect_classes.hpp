#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AnimNotify_PlayParticleEffect_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C
// 0x0034 (0x006C - 0x0038)
class UAnimNotify_PlayParticleEffect_C : public UAnimNotify
{
public:
	class UParticleSystem*                             PSTemplate;                                               // 0x0038(0x0008) (Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      SocketName;                                               // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Attached;                                                 // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FVector                                     LocationOffset;                                           // 0x0054(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x0060(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C"));
		return ptr;
	}


	class FString GetNotifyName();
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
