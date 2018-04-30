#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_MovieScene_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Niagara.NiagaraVariableInfo
// 0x000C
struct FNiagaraVariableInfo
{
	TEnumAsByte<ENiagaraDataType>                      Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.DeprecatedNiagaraConstants
// 0x0080
struct FDeprecatedNiagaraConstants
{
	TArray<struct FMatrix>                             MatrixConstants;                                          // 0x0000(0x0010) (ZeroConstructor, Deprecated)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TArray<struct FNiagaraVariableInfo>                ScalarConstantsInfo;                                      // 0x01E3(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FNiagaraVariableInfo>                VectorConstantsInfo;                                      // 0x01E3(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FNiagaraVariableInfo>                MatrixConstantsInfo;                                      // 0x01E3(0x0010) (ZeroConstructor, Deprecated)
	TArray<float>                                      ScalarConstants;                                          // 0x01E3(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FVector4>                            VectorConstants;                                          // 0x01E3(0x0010) (ZeroConstructor, Deprecated)
};

// ScriptStruct Niagara.NiagaraConstantBase
// 0x0008
struct FNiagaraConstantBase
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraConstants_Float
// 0x0004 (0x000C - 0x0008)
struct FNiagaraConstants_Float : public FNiagaraConstantBase
{
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	float                                              Value;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraConstants_Vector
// 0x0018 (0x0020 - 0x0008)
struct FNiagaraConstants_Vector : public FNiagaraConstantBase
{
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FVector4                                    Value;                                                    // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraConstants_Matrix
// 0x0048 (0x0050 - 0x0008)
struct FNiagaraConstants_Matrix : public FNiagaraConstantBase
{
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FMatrix                                     Value;                                                    // 0x01E3(0x0040) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraConstants_DataObject
// 0x0008 (0x0010 - 0x0008)
struct FNiagaraConstants_DataObject : public FNiagaraConstantBase
{
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UNiagaraDataObject*                          Value;                                                    // 0x01E3(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraConstants
// 0x0040
struct FNiagaraConstants
{
	TArray<struct FNiagaraConstants_DataObject>        DataObjectConstants;                                      // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TArray<struct FNiagaraConstants_Float>             ScalarConstants;                                          // 0x01E3(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FNiagaraConstants_Vector>            VectorConstants;                                          // 0x01E3(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FNiagaraConstants_Matrix>            MatrixConstants;                                          // 0x01E3(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraScriptConstantData
// 0x0180
struct FNiagaraScriptConstantData
{
	struct FNiagaraConstants                           InternalConstantsNew;                                     // 0x0000(0x0040)
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	struct FDeprecatedNiagaraConstants                 ExternalConstants;                                        // 0x01E3(0x0080) (Deprecated)
	struct FDeprecatedNiagaraConstants                 InternalConstants;                                        // 0x01E3(0x0080) (Deprecated)
	struct FNiagaraConstants                           ExternalConstantsNew;                                     // 0x01E3(0x0040)
};

// ScriptStruct Niagara.NiagaraEmitterScriptProperties
// 0x0048
struct FNiagaraEmitterScriptProperties
{
	struct FNiagaraConstants                           ExternalConstants;                                        // 0x0000(0x0040) (Edit)
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	class UNiagaraScript*                              Script;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraConstantMap
// 0x0148
struct FNiagaraConstantMap
{
	unsigned char                                      UnknownData00[0x148];                                     // 0x0000(0x0148) MISSED OFFSET
};

// ScriptStruct Niagara.DeprecatedNiagaraEmitterProperties
// 0x02E0
struct FDeprecatedNiagaraEmitterProperties
{
	int                                                NumLoops;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class FString                                      Name;                                                     // 0x01E3(0x0010) (ZeroConstructor)
	bool                                               bIsEnabled;                                               // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              SpawnRate;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	class UNiagaraScript*                              UpdateScript;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNiagaraScript*                              SpawnScript;                                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   Material;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEmitterRenderModuleType>              RenderModuleType;                                         // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	class UNiagaraEffectRendererProperties*            RendererProperties;                                       // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FNiagaraConstantMap                         ExternalConstants;                                        // 0x01E3(0x0148)
	struct FNiagaraConstantMap                         ExternalSpawnConstants;                                   // 0x01E3(0x0148)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
