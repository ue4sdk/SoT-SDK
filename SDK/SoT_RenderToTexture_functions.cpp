// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RenderToTexture_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RenderToTexture.RenderToTextureFunctionLibrary.GetRenderToTexture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FName                          Identifier                     (Parm, ZeroConstructor, IsPlainOldData)
// URenderToTextureSceneDetails*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

URenderToTextureSceneDetails* URenderToTextureFunctionLibrary::GetRenderToTexture(const FName& Identifier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RenderToTexture.RenderToTextureFunctionLibrary.GetRenderToTexture"));

	URenderToTextureFunctionLibrary_GetRenderToTexture_Params params;
	params.Identifier = Identifier;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RenderToTexture.RenderToTextureFunctionLibrary.CreateRenderToTexture
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// FName                          Identifier                     (Parm, ZeroConstructor, IsPlainOldData)
// UClass*                        ClassToSpawn                   (Parm, ZeroConstructor, IsPlainOldData)
// FIntPoint                      Resolution                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceLinearGamma              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCaptureAlpha                  (Parm, ZeroConstructor, IsPlainOldData)
// URenderToTextureSceneDetails*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

URenderToTextureSceneDetails* URenderToTextureFunctionLibrary::CreateRenderToTexture(const FName& Identifier, UClass* ClassToSpawn, const FIntPoint& Resolution, bool bForceLinearGamma, bool bCaptureAlpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RenderToTexture.RenderToTextureFunctionLibrary.CreateRenderToTexture"));

	URenderToTextureFunctionLibrary_CreateRenderToTexture_Params params;
	params.Identifier = Identifier;
	params.ClassToSpawn = ClassToSpawn;
	params.Resolution = Resolution;
	params.bForceLinearGamma = bForceLinearGamma;
	params.bCaptureAlpha = bCaptureAlpha;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RenderToTexture.RenderToTextureSceneDetails.GetTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UTextureRenderTarget2D*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UTextureRenderTarget2D* URenderToTextureSceneDetails::GetTexture()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RenderToTexture.RenderToTextureSceneDetails.GetTexture"));

	URenderToTextureSceneDetails_GetTexture_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RenderToTexture.RenderToTextureSceneDetails.GetInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// AActor*                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

AActor* URenderToTextureSceneDetails::GetInstance()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RenderToTexture.RenderToTextureSceneDetails.GetInstance"));

	URenderToTextureSceneDetails_GetInstance_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RenderToTexture.RenderToTextureSceneDetails.DestroyTexture
// (Final, Native, Public, BlueprintCallable)

void URenderToTextureSceneDetails::DestroyTexture()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RenderToTexture.RenderToTextureSceneDetails.DestroyTexture"));

	URenderToTextureSceneDetails_DestroyTexture_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
