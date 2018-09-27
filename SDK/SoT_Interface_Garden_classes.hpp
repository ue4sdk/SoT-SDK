#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Interface_Garden_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Interface_Garden.Interface_Garden_C
// 0x0000 (0x0028 - 0x0028)
class UInterface_Garden_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Interface_Garden.Interface_Garden_C");
		return ptr;
	}


	void Set_Garden_Parameters(float Radius, int Int, bool* Instances_Created);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
