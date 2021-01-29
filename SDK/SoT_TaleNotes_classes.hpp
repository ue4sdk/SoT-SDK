#pragma once

// Sea of Thieves (2.0) SDK

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
// 0x0200 (0x09D0 - 0x07D0)
class ATaleNote : public ASkeletalMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x07D0(0x0010) MISSED OFFSET
	int                                                CanvasWidth;                                              // 0x07E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CanvasHeight;                                             // 0x07E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FontScale;                                                // 0x07E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07EC(0x0004) MISSED OFFSET
	class UFont*                                       Font;                                                     // 0x07F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTreasureMapWidgetStreamedTexture           Image;                                                    // 0x07F8(0x0030) (Edit, DisableEditOnInstance)
	struct FTreasureMapWidgetText                      TitleWidgetText;                                          // 0x0828(0x0020) (Edit, DisableEditOnInstance)
	struct FTreasureMapWidgetText                      BodyWidgetText;                                           // 0x0848(0x0020) (Edit, DisableEditOnInstance)
	float                                              NoteWidth;                                                // 0x0868(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x086C(0x0004) MISSED OFFSET
	struct FText                                       Title;                                                    // 0x0870(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       Body;                                                     // 0x08A8(0x0038) (Edit, DisableEditOnInstance)
	class UMaybeCompressedCanvasRenderTarget2D*        RenderTarget;                                             // 0x08E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNamedNotificationInputComponent*            NamedNotificationInputComponent;                          // 0x08E8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldableComponent;                                 // 0x08F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UInventoryItemComponent*                     InventoryItemComponent;                                   // 0x08F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0xD0];                                      // 0x0900(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleNotes.TaleNote"));
		return ptr;
	}


	void OnTextCanvasUpdate(class UCanvas* InCanvas, int InWidth, int InHeight);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
