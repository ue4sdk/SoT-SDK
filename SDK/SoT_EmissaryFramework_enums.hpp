#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum EmissaryFramework.EEmisaryCompanyActionType
enum class EEmisaryCompanyActionType : uint8_t
{
	EEmisaryCompanyActionType__CompleteRiddleStep = 0,
	EEmisaryCompanyActionType__CompleteRiddleQuest = 1,
	EEmisaryCompanyActionType__CompleteXMarksTheSpotQuest = 2,
	EEmisaryCompanyActionType__DefeatNamedSkeleton = 3,
	EEmisaryCompanyActionType__CompleteBountyQuest = 4,
	EEmisaryCompanyActionType__CompleteCargoRunStep = 5,
	EEmisaryCompanyActionType__CompleteCargoRunQuest = 6,
	EEmisaryCompanyActionType__CompleteMerchantStep = 7,
	EEmisaryCompanyActionType__CompleteMerchantQuest = 8,
	EEmisaryCompanyActionType__CompleteGhostShipQuest = 9,
	EEmisaryCompanyActionType__MapPieceFound = 10,
	EEmisaryCompanyActionType__CompleteWayfinderVoyage = 11,
	EEmisaryCompanyActionType__DiscoveredLostShipmentsClue = 12,
	EEmisaryCompanyActionType__CompleteLostShipmentsVoyage = 13,
	EEmisaryCompanyActionType__EEmisaryCompanyActionType_MAX = 14
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
