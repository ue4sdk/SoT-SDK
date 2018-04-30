#pragma once

// Sea of Thieves (1.0.5) SDK

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
// 0x0034 (0x0064 - 0x0030)
class UAnimNotify_PlayParticleEffect_C : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	class UParticleSystem*                             PSTemplate;                                               // 0x01E3(0x0008) (Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      SocketName;                                               // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Attached;                                                 // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C");
		return ptr;
	}


	class FString GetNotifyName();
	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
