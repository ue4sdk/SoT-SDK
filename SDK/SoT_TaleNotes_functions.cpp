// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TaleNotes_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TaleNotes.TaleNote.OnTextCanvasUpdate
// (Final, Native, Protected)
// Parameters:
// class UCanvas*                 InCanvas                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            InWidth                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InHeight                       (Parm, ZeroConstructor, IsPlainOldData)

void ATaleNote::OnTextCanvasUpdate(class UCanvas* InCanvas, int InWidth, int InHeight)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TaleNotes.TaleNote.OnTextCanvasUpdate"));

	struct
	{
		class UCanvas*                 InCanvas;
		int                            InWidth;
		int                            InHeight;
	} params;

	params.InCanvas = InCanvas;
	params.InWidth = InWidth;
	params.InHeight = InHeight;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
