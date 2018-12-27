#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum WwiseAudio.EWwiseAsyncIOPriorityDisplay
enum class EWwiseAsyncIOPriorityDisplay : uint8_t
{
	EWwiseAsyncIOPriorityDisplay__Low = 0,
	EWwiseAsyncIOPriorityDisplay__BelowNormal = 1,
	EWwiseAsyncIOPriorityDisplay__Normal = 2,
	EWwiseAsyncIOPriorityDisplay__High = 3,
	EWwiseAsyncIOPriorityDisplay__EWwiseAsyncIOPriorityDisplay_MAX = 4
};


// Enum WwiseAudio.EWwiseLanguageOrder
enum class EWwiseLanguageOrder : uint8_t
{
	EWwiseLanguageOrder__English   = 0,
	EWwiseLanguageOrder__French    = 1,
	EWwiseLanguageOrder__Italian   = 2,
	EWwiseLanguageOrder__German    = 3,
	EWwiseLanguageOrder__Spanish   = 4,
	EWwiseLanguageOrder__Mexican   = 5,
	EWwiseLanguageOrder__Brazil    = 6,
	EWwiseLanguageOrder__Russian   = 7,
	EWwiseLanguageOrder__Japanese  = 8,
	EWwiseLanguageOrder__EWwiseLanguageOrder_MAX = 9
};


// Enum WwiseAudio.EWwise7Point1Order
enum class EWwise7Point1Order : uint8_t
{
	EWwise7Point1Order__Front_Left = 0,
	EWwise7Point1Order__Front_Right = 1,
	EWwise7Point1Order__Center     = 2,
	EWwise7Point1Order__Left_Surround = 3,
	EWwise7Point1Order__Right_Surround = 4,
	EWwise7Point1Order__Left_Side  = 5,
	EWwise7Point1Order__Right_Side = 6,
	EWwise7Point1Order__LFE        = 7,
	EWwise7Point1Order__Null_Channel = 8,
	EWwise7Point1Order__EWwise7Point1Order_MAX = 9
};


// Enum WwiseAudio.EWwiseEventDurationType
enum class EWwiseEventDurationType : uint8_t
{
	EWwiseEventDurationType__OneShot = 0,
	EWwiseEventDurationType__Mixed = 1,
	EWwiseEventDurationType__Infinite = 2,
	EWwiseEventDurationType__Unknown = 3,
	EWwiseEventDurationType__EWwiseEventDurationType_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
