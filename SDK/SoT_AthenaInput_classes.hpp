#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaInput_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaInput.NotificationInputId
// 0x0010 (0x0038 - 0x0028)
class UNotificationInputId : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInput.NotificationInputId"));
		return ptr;
	}

};


// Class AthenaInput.CompositeInputHandler
// 0x00B0 (0x00D8 - 0x0028)
class UCompositeInputHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInput.CompositeInputHandler"));
		return ptr;
	}


	void SetNotificationInputHandler(UClass* Id, const FScriptDelegate& Handler);
	void SetAnalogInputHandler(UClass* Id, const FScriptDelegate& Handler);
};


// Class AthenaInput.AnalogInputId
// 0x0010 (0x0038 - 0x0028)
class UAnalogInputId : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInput.AnalogInputId"));
		return ptr;
	}

};


// Class AthenaInput.InputBinder
// 0x0060 (0x0088 - 0x0028)
class UInputBinder : public UObject
{
public:
	UInputComponent*                                   InputComponent;                                           // 0x0028(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInput.InputBinder"));
		return ptr;
	}


	void SpoofNotificationInput(UClass* Id);
	void SpoofAnalogInput(UClass* Id, float Value);
	bool IsContinuousActionActive(UClass* BeginNotificationInputId);
	void IgnoreNonSpoofedInput(bool InShouldIgnore);
};


// Class AthenaInput.InputHandlerInterface
// 0x0000 (0x0028 - 0x0028)
class UInputHandlerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInput.InputHandlerInterface"));
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> HandleNotificationInput(UClass* Id);
	TEnumAsByte<EInputHandlerResult> HandleAnalogInput(UClass* Id, float Input);
};


// Class AthenaInput.TestAnalogInputId
// 0x0000 (0x0038 - 0x0038)
class UTestAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInput.TestAnalogInputId"));
		return ptr;
	}

};


// Class AthenaInput.TestAnalogInput2Id
// 0x0000 (0x0038 - 0x0038)
class UTestAnalogInput2Id : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInput.TestAnalogInput2Id"));
		return ptr;
	}

};


// Class AthenaInput.CompositeInputDelegatorTestsCallbackHelper
// 0x0050 (0x0078 - 0x0028)
class UCompositeInputDelegatorTestsCallbackHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInput.CompositeInputDelegatorTestsCallbackHelper"));
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnSecondNotificationHandler();
	TEnumAsByte<EInputHandlerResult> OnSecondHandler(float Value);
	TEnumAsByte<EInputHandlerResult> OnFirstNotificationHandler();
	TEnumAsByte<EInputHandlerResult> OnFirstHandler(float Value);
};


// Class AthenaInput.MockDerivedCompositeInputHandler
// 0x0008 (0x00E0 - 0x00D8)
class UMockDerivedCompositeInputHandler : public UCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInput.MockDerivedCompositeInputHandler"));
		return ptr;
	}

};


// Class AthenaInput.InputHandlerFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UInputHandlerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInput.InputHandlerFunctionLibrary"));
		return ptr;
	}


	static UCompositeInputHandler* MakeCompositeInputHandler();
};


// Class AthenaInput.MockInputHandlerCharacter
// 0x0000 (0x05E0 - 0x05E0)
class AMockInputHandlerCharacter : public ACharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInput.MockInputHandlerCharacter"));
		return ptr;
	}

};


// Class AthenaInput.NamedNotificationInputInterface
// 0x0000 (0x0028 - 0x0028)
class UNamedNotificationInputInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInput.NamedNotificationInputInterface"));
		return ptr;
	}


	FText GetNotificationInputDisplayName(UClass* InputID);
};


// Class AthenaInput.NamedNotificationInputComponent
// 0x0018 (0x00E0 - 0x00C8)
class UNamedNotificationInputComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	TArray<FNotificationInputDisplayName>              NotificationInputDisplayNames;                            // 0x00D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInput.NamedNotificationInputComponent"));
		return ptr;
	}

};


// Class AthenaInput.CrewNameplatesToggleInputId
// 0x0000 (0x0038 - 0x0038)
class UCrewNameplatesToggleInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInput.CrewNameplatesToggleInputId"));
		return ptr;
	}

};


// Class AthenaInput.OpenQuickMenuNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UOpenQuickMenuNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInput.OpenQuickMenuNotificationInputId"));
		return ptr;
	}

};


// Class AthenaInput.PressedNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UPressedNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInput.PressedNotificationInputId"));
		return ptr;
	}

};


// Class AthenaInput.ReleasedNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UReleasedNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInput.ReleasedNotificationInputId"));
		return ptr;
	}

};


// Class AthenaInput.ScrambleGamertagsToggleInputId
// 0x0000 (0x0038 - 0x0038)
class UScrambleGamertagsToggleInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInput.ScrambleGamertagsToggleInputId"));
		return ptr;
	}

};


// Class AthenaInput.TestNotificationInput2Id
// 0x0000 (0x0038 - 0x0038)
class UTestNotificationInput2Id : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInput.TestNotificationInput2Id"));
		return ptr;
	}

};


// Class AthenaInput.TestNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UTestNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInput.TestNotificationInputId"));
		return ptr;
	}

};


// Class AthenaInput.ReceivesInputInterface
// 0x0000 (0x0028 - 0x0028)
class UReceivesInputInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInput.ReceivesInputInterface"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
