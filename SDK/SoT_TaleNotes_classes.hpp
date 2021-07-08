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
// 0x0200 (0x0970 - 0x0770)
class ATaleNote : public ASkeletalMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0770(0x0010) MISSED OFFSET
	int                                                CanvasWidth;                                              // 0x0780(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CanvasHeight;                                             // 0x0784(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FontScale;                                                // 0x0788(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x078C(0x0004) MISSED OFFSET
	class UFont*                                       Font;                                                     // 0x0790(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTreasureMapWidgetStreamedTexture           Image;                                                    // 0x0798(0x0030) (Edit, DisableEditOnInstance)
	struct FTreasureMapWidgetText                      TitleWidgetText;                                          // 0x07C8(0x0020) (Edit, DisableEditOnInstance)
	struct FTreasureMapWidgetText                      BodyWidgetText;                                           // 0x07E8(0x0020) (Edit, DisableEditOnInstance)
	float                                              NoteWidth;                                                // 0x0808(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x080C(0x0004) MISSED OFFSET
	struct FText                                       Title;                                                    // 0x0810(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       Body;                                                     // 0x0848(0x0038) (Edit, DisableEditOnInstance)
	class UMaybeCompressedCanvasRenderTarget2D*        RenderTarget;                                             // 0x0880(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNamedNotificationInputComponent*            NamedNotificationInputComponent;                          // 0x0888(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldableComponent;                                 // 0x0890(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UInventoryItemComponent*                     InventoryItemComponent;                                   // 0x0898(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0xD0];                                      // 0x08A0(0x00D0) MISSED OFFSET

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
