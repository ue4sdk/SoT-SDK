#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PiratePreview_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PiratePreview.BP_PiratePreview_C
// 0x0060 (0x07E0 - 0x0780)
class ABP_PiratePreview_C : public APiratePreviewActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0780(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PiratePreview.BP_PiratePreview_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PreviewBusy_Event(const struct FPiratePreviewBusyEvent& Data);
	void PreviewReady_Event(const struct FPiratePreviewReadyEvent& Data);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BP_PiratePreview(int EntryPoint);
	void PreviewShutdown__DelegateSignature(const struct FPiratePreviewShutdownEvent& Data);
	void PreviewReady__DelegateSignature(const struct FPiratePreviewReadyEvent& Data);
	void PreviewBusy__DelegateSignature(const struct FPiratePreviewBusyEvent& Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
