#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipwrightShady_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShipwrightShady.BP_ShipwrightShady_C
// 0x0048 (0x0640 - 0x05F8)
class ABP_ShipwrightShady_C : public AShipwrightOneShot
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x05F8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShipwrightShady.BP_ShipwrightShady_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BP_ShipwrightShady(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
