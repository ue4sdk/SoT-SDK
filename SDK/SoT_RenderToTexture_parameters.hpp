#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RenderToTexture_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RenderToTexture.RenderToTextureSceneDetails.GetTexture
struct URenderToTextureSceneDetails_GetTexture_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RenderToTexture.RenderToTextureSceneDetails.GetInstance
struct URenderToTextureSceneDetails_GetInstance_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RenderToTexture.RenderToTextureSceneDetails.DestroyTexture
struct URenderToTextureSceneDetails_DestroyTexture_Params
{
};

// Function RenderToTexture.RenderToTextureFunctionLibrary.GetRenderToTexture
struct URenderToTextureFunctionLibrary_GetRenderToTexture_Params
{
	struct FName                                       Identifier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class URenderToTextureSceneDetails*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RenderToTexture.RenderToTextureFunctionLibrary.CreateRenderToTexture
struct URenderToTextureFunctionLibrary_CreateRenderToTexture_Params
{
	struct FName                                       Identifier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ClassToSpawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   Resolution;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceLinearGamma;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class URenderToTextureSceneDetails*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
