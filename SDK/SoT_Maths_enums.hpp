#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Maths.EBuoyancyBlend
enum class EBuoyancyBlend : uint8_t
{
	EBuoyancyBlend__PrimaryToSecondary = 0,
	EBuoyancyBlend__SecondaryToTertiary = 1,
	EBuoyancyBlend__EBuoyancyBlend_MAX = 2
};


// Enum Maths.EPlaneLineIntersectionType
enum class EPlaneLineIntersectionType : uint8_t
{
	EPlaneLineIntersectionType__IntersectionWithinLineSegment = 0,
	EPlaneLineIntersectionType__IntersectionOutsideOfLineSegment = 1,
	EPlaneLineIntersectionType__PlaneAndLineParallel = 2,
	EPlaneLineIntersectionType__EPlaneLineIntersectionType_MAX = 3
};


// Enum Maths.ESpatialOffsetMethod
enum class ESpatialOffsetMethod : uint8_t
{
	ESpatialOffsetMethod__ThreeDimensional = 0,
	ESpatialOffsetMethod__Horizontal = 1,
	ESpatialOffsetMethod__Vertical = 2,
	ESpatialOffsetMethod__ESpatialOffsetMethod_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
