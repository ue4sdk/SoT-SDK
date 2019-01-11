// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Figurehead_MediumShip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Figurehead_MediumShip_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.OnPartMeshLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UStaticMesh*             Mesh                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Figurehead_MediumShip_C::OnPartMeshLoaded(class UStaticMesh* Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.OnPartMeshLoaded");

	struct
	{
		class UStaticMesh*             Mesh;
	} params;

	params.Mesh = Mesh;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.OnPartDescLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UGenericPartDescAsset*   Desc                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Figurehead_MediumShip_C::OnPartDescLoaded(class UGenericPartDescAsset* Desc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.OnPartDescLoaded");

	struct
	{
		class UGenericPartDescAsset*   Desc;
	} params;

	params.Desc = Desc;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.ExecuteUbergraph_BP_Figurehead_MediumShip
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Figurehead_MediumShip_C::ExecuteUbergraph_BP_Figurehead_MediumShip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.ExecuteUbergraph_BP_Figurehead_MediumShip");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
