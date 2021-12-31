#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Describables_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Describables.DescribableComponent
// 0x0060 (0x0178 - 0x0118)
class UDescribableComponent : public UInteractableComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	bool                                               TooltipActiveOnBeginPlay;                                 // 0x0120(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	FText                                              DescribableTooltipText;                                   // 0x0128(0x0038) (Edit, DisableEditOnInstance)
	bool                                               TooltipActive;                                            // 0x0160(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x17];                                      // 0x0161(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Describables.DescribableComponent"));
		return ptr;
	}


	void SetTooltipActive(bool IsActive);
	void OnRep_TooltipActive();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
