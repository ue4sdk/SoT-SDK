// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaDebug_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaDebug.DrawDebugService.OnRep_PersistentShapeChanged
// (Final, Native, Private)

void ADrawDebugService::OnRep_PersistentShapeChanged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaDebug.DrawDebugService.OnRep_PersistentShapeChanged"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaDebug.DrawDebugService.Multicast_ClearGroup
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FName                   GroupName                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ADrawDebugService::Multicast_ClearGroup(const struct FName& GroupName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaDebug.DrawDebugService.Multicast_ClearGroup"));

	struct
	{
		struct FName                   GroupName;
	} params;

	params.GroupName = GroupName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaDebug.DrawDebugService.Multicast_AddStrings
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// TArray<struct FDrawDebugItemString> Strings                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void ADrawDebugService::Multicast_AddStrings(TArray<struct FDrawDebugItemString> Strings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaDebug.DrawDebugService.Multicast_AddStrings"));

	struct
	{
		TArray<struct FDrawDebugItemString> Strings;
	} params;

	params.Strings = Strings;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaDebug.DrawDebugService.Multicast_AddSpheres
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// TArray<struct FDrawDebugItemSphere> Spheres                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void ADrawDebugService::Multicast_AddSpheres(TArray<struct FDrawDebugItemSphere> Spheres)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaDebug.DrawDebugService.Multicast_AddSpheres"));

	struct
	{
		TArray<struct FDrawDebugItemSphere> Spheres;
	} params;

	params.Spheres = Spheres;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaDebug.DrawDebugService.Multicast_AddSectors
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// TArray<struct FDrawDebugItemSector> Sectors                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void ADrawDebugService::Multicast_AddSectors(TArray<struct FDrawDebugItemSector> Sectors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaDebug.DrawDebugService.Multicast_AddSectors"));

	struct
	{
		TArray<struct FDrawDebugItemSector> Sectors;
	} params;

	params.Sectors = Sectors;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaDebug.DrawDebugService.Multicast_AddLines
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// TArray<struct FDrawDebugItemLine> Lines                          (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void ADrawDebugService::Multicast_AddLines(TArray<struct FDrawDebugItemLine> Lines)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaDebug.DrawDebugService.Multicast_AddLines"));

	struct
	{
		TArray<struct FDrawDebugItemLine> Lines;
	} params;

	params.Lines = Lines;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaDebug.DrawDebugService.Multicast_AddCapsules
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// TArray<struct FDrawDebugItemCapsule> Capsules                       (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void ADrawDebugService::Multicast_AddCapsules(TArray<struct FDrawDebugItemCapsule> Capsules)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaDebug.DrawDebugService.Multicast_AddCapsules"));

	struct
	{
		TArray<struct FDrawDebugItemCapsule> Capsules;
	} params;

	params.Capsules = Capsules;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaDebug.DrawDebugService.Multicast_AddBoxes
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// TArray<struct FDrawDebugItemBox> Boxes                          (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void ADrawDebugService::Multicast_AddBoxes(TArray<struct FDrawDebugItemBox> Boxes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaDebug.DrawDebugService.Multicast_AddBoxes"));

	struct
	{
		TArray<struct FDrawDebugItemBox> Boxes;
	} params;

	params.Boxes = Boxes;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
