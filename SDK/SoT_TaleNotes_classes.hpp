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
// 0x01A0 (0x09B0 - 0x0810)
class ATaleNote : public ASkeletalMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0810(0x0008) MISSED OFFSET
	int                                                CanvasWidth;                                              // 0x0818(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CanvasHeight;                                             // 0x081C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FontScale;                                                // 0x0820(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0824(0x0004) MISSED OFFSET
	class UFont*                                       Font;                                                     // 0x0828(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTreasureMapWidgetTexture                   Image;                                                    // 0x0830(0x0028) (Edit, DisableEditOnInstance)
	struct FTreasureMapWidgetText                      TitleWidgetText;                                          // 0x0858(0x0020) (Edit, DisableEditOnInstance)
	struct FTreasureMapWidgetText                      BodyWidgetText;                                           // 0x0878(0x0020) (Edit, DisableEditOnInstance)
	float                                              NoteWidth;                                                // 0x0898(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x089C(0x0004) MISSED OFFSET
	struct FText                                       Title;                                                    // 0x08A0(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       Body;                                                     // 0x08D8(0x0038) (Edit, DisableEditOnInstance)
	class UMaybeCompressedCanvasRenderTarget2D*        RenderTarget;                                             // 0x0910(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNamedNotificationInputComponent*            NamedNotificationInputComponent;                          // 0x0918(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldableComponent;                                 // 0x0920(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UInventoryItemComponent*                     InventoryItemComponent;                                   // 0x0928(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x80];                                      // 0x0930(0x0080) MISSED OFFSET

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
