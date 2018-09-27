#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RenderToTexture_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class RenderToTexture.RenderToTextureSceneDetails
// 0x0080 (0x00A8 - 0x0028)
class URenderToTextureSceneDetails : public UObject
{
public:
	class UClass*                                      ClassToSpawn;                                             // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FIntPoint                                   Resolution;                                               // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWorld*                                      World;                                                    // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UWorld>                       ParentWorld;                                              // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       SpawnedActor;                                             // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0058(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RenderToTexture.RenderToTextureSceneDetails");
		return ptr;
	}


	class UTextureRenderTarget2D* GetTexture();
	class AActor* GetInstance();
	void DestroyTexture();
};


// Class RenderToTexture.RenderToTextureFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class URenderToTextureFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RenderToTexture.RenderToTextureFunctionLibrary");
		return ptr;
	}


	class URenderToTextureSceneDetails* STATIC_GetRenderToTexture(const struct FName& Identifier);
	class URenderToTextureSceneDetails* STATIC_CreateRenderToTexture(const struct FName& Identifier, class UClass* ClassToSpawn, const struct FIntPoint& Resolution, bool bForceLinearGamma);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
