#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Niagara_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Niagara.NiagaraActor
// 0x0008 (0x0478 - 0x0470)
class ANiagaraActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraActor");
		return ptr;
	}

};


// Class Niagara.NiagaraComponent
// 0x0010 (0x0680 - 0x0670)
class UNiagaraComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0670(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraComponent");
		return ptr;
	}

};


// Class Niagara.NiagaraScript
// 0x01A0 (0x01C8 - 0x0028)
class UNiagaraScript : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<unsigned char>                              ByteCode;                                                 // 0x01E3(0x0010) (ZeroConstructor)
	struct FNiagaraScriptConstantData                  ConstantData;                                             // 0x01E3(0x0180)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraScript");
		return ptr;
	}

};


// Class Niagara.NiagaraEmitterProperties
// 0x00D0 (0x00F8 - 0x0028)
class UNiagaraEmitterProperties : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class FString                                      EmitterName;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor)
	bool                                               bIsEnabled;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnRate;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   Material;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEmitterRenderModuleType>              RenderModuleType;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UNiagaraEffectRendererProperties*            RendererProperties;                                       // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraEmitterScriptProperties             UpdateScriptProps;                                        // 0x01E3(0x0048) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEmitterProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraEffect
// 0x0020 (0x0048 - 0x0028)
class UNiagaraEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FDeprecatedNiagaraEmitterProperties> EmitterPropsSerialized;                                   // 0x01E3(0x0010) (ZeroConstructor, Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEffect");
		return ptr;
	}

};


// Class Niagara.NiagaraFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraFunctionLibrary");
		return ptr;
	}


	class UNiagaraComponent* STATIC_SpawnEffectAttached(class UNiagaraEffect* EffectTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy);
	class UNiagaraComponent* STATIC_SpawnEffectAtLocation(class UObject* WorldContextObject, class UNiagaraEffect* EffectTemplate, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy);
	void STATIC_SetUpdateScriptConstant(class UNiagaraComponent* Component, const struct FName& EmitterName, const struct FName& ConstantName, const struct FVector& Value);
};


// Class Niagara.NiagaraScriptSourceBase
// 0x0020 (0x0048 - 0x0028)
class UNiagaraScriptSourceBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraScriptSourceBase");
		return ptr;
	}

};


// Class Niagara.NiagaraSequence
// 0x0008 (0x0030 - 0x0028)
class UNiagaraSequence : public UMovieSceneSequence
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSequence");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
