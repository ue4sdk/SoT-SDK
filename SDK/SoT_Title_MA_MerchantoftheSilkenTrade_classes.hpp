#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Title_MA_MerchantoftheSilkenTrade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Title_MA_MerchantoftheSilkenTrade.Title_MA_MerchantoftheSilkenTrade_C
// 0x0000 (0x00E0 - 0x00E0)
class UTitle_MA_MerchantoftheSilkenTrade_C : public UTitleDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Title_MA_MerchantoftheSilkenTrade.Title_MA_MerchantoftheSilkenTrade_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
