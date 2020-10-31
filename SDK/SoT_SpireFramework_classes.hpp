#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SpireFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SpireFramework.SpireServiceInterface
// 0x0000 (0x0028 - 0x0028)
class USpireServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.SpireServiceInterface"));
		return ptr;
	}

};


// Class SpireFramework.SpireService
// 0x0060 (0x04C0 - 0x0460)
class ASpireService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0460(0x0008) MISSED OFFSET
	TArray<struct FSpireInfo>                          SpireLevels;                                              // 0x0468(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0478(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.SpireService"));
		return ptr;
	}


	void OnRep_SpireLevels(TArray<struct FSpireInfo> PreviousSpireLevels);
};


// Class SpireFramework.TaleLoadSpireStep
// 0x0000 (0x0068 - 0x0068)
class UTaleLoadSpireStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.TaleLoadSpireStep"));
		return ptr;
	}

};


// Class SpireFramework.TaleSpireService
// 0x0020 (0x0060 - 0x0040)
class UTaleSpireService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.TaleSpireService"));
		return ptr;
	}

};


// Class SpireFramework.TaleSpireServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UTaleSpireServiceDesc : public UTaleQuestServiceDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.TaleSpireServiceDesc"));
		return ptr;
	}

};


// Class SpireFramework.TaleLoadSpireStepDesc
// 0x0000 (0x0030 - 0x0030)
class UTaleLoadSpireStepDesc : public UTaleQuestStepDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.TaleLoadSpireStepDesc"));
		return ptr;
	}

};


// Class SpireFramework.TaleRegisterSpireStep
// 0x0010 (0x0078 - 0x0068)
class UTaleRegisterSpireStep : public UTaleQuestStep
{
public:
	class UTaleRegisterSpireStepDesc*                  StepDesc;                                                 // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.TaleRegisterSpireStep"));
		return ptr;
	}

};


// Class SpireFramework.TaleRegisterSpireStepDesc
// 0x0020 (0x0050 - 0x0030)
class UTaleRegisterSpireStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableSpireHandle                   AllocatedSpireHandle;                                     // 0x0030(0x0010) (Edit)
	struct FQuestVariableVector                        AllocatedSpireLocation;                                   // 0x0040(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.TaleRegisterSpireStepDesc"));
		return ptr;
	}

};


// Class SpireFramework.TaleReleaseSpireStep
// 0x0010 (0x0078 - 0x0068)
class UTaleReleaseSpireStep : public UTaleQuestStep
{
public:
	class UTaleReleaseSpireStepDesc*                   StepDesc;                                                 // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.TaleReleaseSpireStep"));
		return ptr;
	}

};


// Class SpireFramework.TaleReleaseSpireStepDesc
// 0x0010 (0x0040 - 0x0030)
class UTaleReleaseSpireStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableSpireHandle                   SpireHandle;                                              // 0x0030(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.TaleReleaseSpireStepDesc"));
		return ptr;
	}

};


// Class SpireFramework.TaleUnloadSpireStep
// 0x0000 (0x0068 - 0x0068)
class UTaleUnloadSpireStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.TaleUnloadSpireStep"));
		return ptr;
	}

};


// Class SpireFramework.TaleUnloadSpireStepDesc
// 0x0000 (0x0030 - 0x0030)
class UTaleUnloadSpireStepDesc : public UTaleQuestStepDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.TaleUnloadSpireStepDesc"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
