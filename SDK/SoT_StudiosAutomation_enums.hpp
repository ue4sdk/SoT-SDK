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

// Enum StudiosAutomation.EComparisonMethod
enum class EComparisonMethod : uint8_t
{
	EComparisonMethod__Equal_To    = 0,
	EComparisonMethod__Not_Equal_To = 1,
	EComparisonMethod__Greater_Than_Or_Equal_To = 2,
	EComparisonMethod__Less_Than_Or_Equal_To = 3,
	EComparisonMethod__Greater_Than = 4,
	EComparisonMethod__Less_Than   = 5,
	EComparisonMethod__EComparisonMethod_MAX = 6
};


// Enum StudiosAutomation.ETestAutomationPlayModeOverride
enum class ETestAutomationPlayModeOverride : uint8_t
{
	ETestAutomationPlayModeOverride__Adventure = 0,
	ETestAutomationPlayModeOverride__Contest = 1,
	ETestAutomationPlayModeOverride__Tutorial = 2,
	ETestAutomationPlayModeOverride__NotSelectedYet = 3,
	ETestAutomationPlayModeOverride__ETestAutomationPlayModeOverride_MAX = 4
};


// Enum StudiosAutomation.EPerformanceCaptureType
enum class EPerformanceCaptureType : uint8_t
{
	EPerformanceCaptureType__None  = 0,
	EPerformanceCaptureType__FrameTime = 1,
	EPerformanceCaptureType__StreamingMemory = 2,
	EPerformanceCaptureType__StreamingPositional = 3,
	EPerformanceCaptureType__EPerformanceCaptureType_MAX = 4
};


// Enum StudiosAutomation.ETestArea
enum class ETestArea : uint8_t
{
	ETestArea__None                = 0,
	ETestArea__Rendering           = 1,
	ETestArea__UserInterface       = 2,
	ETestArea__UserInterfaceInitialization = 3,
	ETestArea__Art                 = 4,
	ETestArea__Audio               = 5,
	ETestArea__ETestArea_MAX       = 6
};


// Enum StudiosAutomation.ETestCategory
enum class ETestCategory : uint8_t
{
	ETestCategory__Unit            = 0,
	ETestCategory__Integration     = 1,
	ETestCategory__Acceptance      = 2,
	ETestCategory__Stress          = 3,
	ETestCategory__Soak            = 4,
	ETestCategory__Performance     = 5,
	ETestCategory__ETestCategory_MAX = 6
};


// Enum StudiosAutomation.ETextureAuditorMipSetting
enum class ETextureAuditorMipSetting : uint8_t
{
	ETextureAuditorMipSetting__MipGenRequired = 0,
	ETextureAuditorMipSetting__NoMipGenRequired = 1,
	ETextureAuditorMipSetting__MipGenOptional = 2,
	ETextureAuditorMipSetting__ETextureAuditorMipSetting_MAX = 3
};


// Enum StudiosAutomation.ECollectionAuditType
enum class ECollectionAuditType : uint8_t
{
	ECollectionAuditType__NoneSet  = 0,
	ECollectionAuditType__UseParentType = 1,
	ECollectionAuditType__Totals   = 2,
	ECollectionAuditType__MeshLimits = 3,
	ECollectionAuditType__AnimSequenceLimits = 4,
	ECollectionAuditType__PhysicsAudits = 5,
	ECollectionAuditType__ExceptionList = 6,
	ECollectionAuditType__WIP      = 7,
	ECollectionAuditType__ECollectionAuditType_MAX = 8
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
