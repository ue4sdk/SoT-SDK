#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TaleNotes_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TaleNotes.TaleNote
// 0x0200 (0x0990 - 0x0790)
class ATaleNote : public ASkeletalMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0790(0x0010) MISSED OFFSET
	int                                                CanvasWidth;                                              // 0x07A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CanvasHeight;                                             // 0x07A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FontScale;                                                // 0x07A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07AC(0x0004) MISSED OFFSET
	UFont*                                             Font;                                                     // 0x07B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FTreasureMapWidgetStreamedTexture                  Image;                                                    // 0x07B8(0x0030) (Edit, DisableEditOnInstance)
	FTreasureMapWidgetText                             TitleWidgetText;                                          // 0x07E8(0x0020) (Edit, DisableEditOnInstance)
	FTreasureMapWidgetText                             BodyWidgetText;                                           // 0x0808(0x0020) (Edit, DisableEditOnInstance)
	float                                              NoteWidth;                                                // 0x0828(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x082C(0x0004) MISSED OFFSET
	FText                                              Title;                                                    // 0x0830(0x0038) (Edit, DisableEditOnInstance)
	FText                                              Body;                                                     // 0x0868(0x0038) (Edit, DisableEditOnInstance)
	UMaybeCompressedCanvasRenderTarget2D*              RenderTarget;                                             // 0x08A0(0x0008) (ZeroConstructor, IsPlainOldData)
	UNamedNotificationInputComponent*                  NamedNotificationInputComponent;                          // 0x08A8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UUsableWieldableComponent*                         UsableWieldableComponent;                                 // 0x08B0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UInventoryItemComponent*                           InventoryItemComponent;                                   // 0x08B8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0xD0];                                      // 0x08C0(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleNotes.TaleNote"));
		return ptr;
	}


	void OnTextCanvasUpdate(UCanvas* InCanvas, int InWidth, int InHeight);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
