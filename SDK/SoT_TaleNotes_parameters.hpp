#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TaleNotes_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TaleNotes.TaleNote.OnTextCanvasUpdate
struct ATaleNote_OnTextCanvasUpdate_Params
{
	UCanvas*                                           InCanvas;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InWidth;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InHeight;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
