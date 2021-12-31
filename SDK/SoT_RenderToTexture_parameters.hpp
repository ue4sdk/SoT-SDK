#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RenderToTexture_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RenderToTexture.RenderToTextureFunctionLibrary.GetRenderToTexture
struct URenderToTextureFunctionLibrary_GetRenderToTexture_Params
{
	FName                                              Identifier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	URenderToTextureSceneDetails*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RenderToTexture.RenderToTextureFunctionLibrary.CreateRenderToTexture
struct URenderToTextureFunctionLibrary_CreateRenderToTexture_Params
{
	FName                                              Identifier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            ClassToSpawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	FIntPoint                                          Resolution;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceLinearGamma;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCaptureAlpha;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	URenderToTextureSceneDetails*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RenderToTexture.RenderToTextureSceneDetails.GetTexture
struct URenderToTextureSceneDetails_GetTexture_Params
{
	UTextureRenderTarget2D*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RenderToTexture.RenderToTextureSceneDetails.GetInstance
struct URenderToTextureSceneDetails_GetInstance_Params
{
	AActor*                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RenderToTexture.RenderToTextureSceneDetails.DestroyTexture
struct URenderToTextureSceneDetails_DestroyTexture_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
