// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RenderToTexture_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RenderToTexture.RenderToTextureFunctionLibrary.GetRenderToTexture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Identifier                     (Parm, ZeroConstructor, IsPlainOldData)
// class URenderToTextureSceneDetails* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class URenderToTextureSceneDetails* URenderToTextureFunctionLibrary::GetRenderToTexture(const struct FName& Identifier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RenderToTexture.RenderToTextureFunctionLibrary.GetRenderToTexture"));

	struct
	{
		struct FName                   Identifier;
		class URenderToTextureSceneDetails* ReturnValue;
	} params;

	params.Identifier = Identifier;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RenderToTexture.RenderToTextureFunctionLibrary.CreateRenderToTexture
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   Identifier                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ClassToSpawn                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FIntPoint               Resolution                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceLinearGamma              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCaptureAlpha                  (Parm, ZeroConstructor, IsPlainOldData)
// class URenderToTextureSceneDetails* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class URenderToTextureSceneDetails* URenderToTextureFunctionLibrary::CreateRenderToTexture(const struct FName& Identifier, class UClass* ClassToSpawn, const struct FIntPoint& Resolution, bool bForceLinearGamma, bool bCaptureAlpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RenderToTexture.RenderToTextureFunctionLibrary.CreateRenderToTexture"));

	struct
	{
		struct FName                   Identifier;
		class UClass*                  ClassToSpawn;
		struct FIntPoint               Resolution;
		bool                           bForceLinearGamma;
		bool                           bCaptureAlpha;
		class URenderToTextureSceneDetails* ReturnValue;
	} params;

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
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTextureRenderTarget2D* URenderToTextureSceneDetails::GetTexture()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RenderToTexture.RenderToTextureSceneDetails.GetTexture"));

	struct
	{
		class UTextureRenderTarget2D*  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RenderToTexture.RenderToTextureSceneDetails.GetInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* URenderToTextureSceneDetails::GetInstance()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RenderToTexture.RenderToTextureSceneDetails.GetInstance"));

	struct
	{
		class AActor*                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RenderToTexture.RenderToTextureSceneDetails.DestroyTexture
// (Final, Native, Public, BlueprintCallable)

void URenderToTextureSceneDetails::DestroyTexture()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RenderToTexture.RenderToTextureSceneDetails.DestroyTexture"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
