#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BumperZone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BumperZone.ShipBumperZone
// 0x0058 (0x0480 - 0x0428)
class AShipBumperZone : public AActor
{
public:
	bool                                               UseInverseRightVector;                                    // 0x0428(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x0429(0x002F) MISSED OFFSET
	class UBoxComponent*                               BumperZoneComponent;                                      // 0x0458(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USphereComponent*                            DistanceRadiusComponent;                                  // 0x0460(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               ApplyAngularImpulse;                                      // 0x0468(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0469(0x0003) MISSED OFFSET
	float                                              AngularImpulse;                                           // 0x046C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideWheelControl;                                     // 0x0470(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyWheelTurbulence;                                     // 0x0471(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0472(0x0002) MISSED OFFSET
	float                                              MinWheelTurbulence;                                       // 0x0474(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxWheelTurbulence;                                       // 0x0478(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x047C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class BumperZone.ShipBumperZone"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
