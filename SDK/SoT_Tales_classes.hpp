#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Tales_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Tales.TaleQuestStep
// 0x0040 (0x0068 - 0x0028)
class UTaleQuestStep : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestStepDesc
// 0x0008 (0x0030 - 0x0028)
class UTaleQuestStepDesc : public UObject
{
public:
	bool                                               Fork;                                                     // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestService
// 0x0018 (0x0040 - 0x0028)
class UTaleQuestService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestService"));
		return ptr;
	}

};


// Class Tales.TaleQuestServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestServiceDesc : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestServiceDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestFramedStep
// 0x0038 (0x00A0 - 0x0068)
class UTaleQuestFramedStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
	class UTaleQuestFramedStepDesc*                    FrameDesc;                                                // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UTaleQuestService*>                   Services;                                                 // 0x0078(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	class UScriptStruct*                               StructForCollector;                                       // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestFramedStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestFramedStepDesc
// 0x0018 (0x0048 - 0x0030)
class UTaleQuestFramedStepDesc : public UTaleQuestStepDesc
{
public:
	TArray<class UTaleQuestServiceDesc*>               Services;                                                 // 0x0030(0x0010) (Edit, ExportObject, ZeroConstructor)
	class UScriptStruct*                               Variables;                                                // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestFramedStepDesc"));
		return ptr;
	}

};


// Class Tales.SplineFootprintPathComponent
// 0x0020 (0x0640 - 0x0620)
class USplineFootprintPathComponent : public USplineComponent
{
public:
	class UMaterialInterface*                          DecalMaterial;                                            // 0x0620(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSplineFootprintPathTool                    PathTool;                                                 // 0x0628(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0629(0x0003) MISSED OFFSET
	float                                              DecalYaw;                                                 // 0x062C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DecalUniformScale;                                        // 0x0630(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x063C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SplineFootprintPathComponent"));
		return ptr;
	}

};


// Class Tales.TaleQuestGrantRewardStep
// 0x0038 (0x00A0 - 0x0068)
class UTaleQuestGrantRewardStep : public UTaleQuestStep
{
public:
	class UTaleQuestGrantRewardStepDesc*               Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0070(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestGrantRewardStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestWaitForHandInStep
// 0x0010 (0x0078 - 0x0068)
class UTaleQuestWaitForHandInStep : public UTaleQuestStep
{
public:
	class UTaleQuestWaitForHandInStepDesc*             Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestWaitForHandInStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestGrantRewardStepDesc
// 0x0020 (0x0050 - 0x0030)
class UTaleQuestGrantRewardStepDesc : public UTaleQuestStepDesc
{
public:
	struct FRewardId                                   RewardId;                                                 // 0x0030(0x0008) (Edit)
	class UClass*                                      Company;                                                  // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Id;                                                       // 0x0040(0x0010) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestGrantRewardStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestWaitForHandInStepDesc
// 0x0018 (0x0048 - 0x0030)
class UTaleQuestWaitForHandInStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         HandInActor;                                              // 0x0030(0x0010) (Edit)
	class UClass*                                      SpecificItem;                                             // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestWaitForHandInStepDesc"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
