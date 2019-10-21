#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Tutorial_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Tutorial.Tutorial2019Component
// 0x0008 (0x00D8 - 0x00D0)
class UTutorial2019Component : public UActorComponent
{
public:
	bool                                               IsEnabledByServer;                                        // 0x00D0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsInTutorialTale;                                         // 0x00D1(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00D2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tutorial.Tutorial2019Component"));
		return ptr;
	}


	void ReceiveTutorial2019BeginPlayOnServer();
	void ReceiveTutorial2019BeginPlayOnClient();
	void OnRep_IsEnabledByServer(bool OldIsEnabled);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
