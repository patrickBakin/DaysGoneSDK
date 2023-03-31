#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AutomationMessages.AutomationWorkerScreenImage
// 0x0020
struct FAutomationWorkerScreenImage
{
	TArray<unsigned char>                              ScreenImage;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ScreenShotName;                                           // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AutomationMessages.AutomationWorkerNextNetworkCommandReply
// 0x0001
struct FAutomationWorkerNextNetworkCommandReply
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerRequestNextNetworkCommand
// 0x0004
struct FAutomationWorkerRequestNextNetworkCommand
{
	uint32_t                                           ExecutionCount;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AutomationMessages.AutomationWorkerRunTestsReply
// 0x0058
struct FAutomationWorkerRunTestsReply
{
	float                                              Duration;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FString>                             Errors;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor)
	uint32_t                                           ExecutionCount;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FString>                             Logs;                                                     // 0x0020(0x0010) (Edit, ZeroConstructor)
	bool                                               Success;                                                  // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FString                                     TestName;                                                 // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<struct FString>                             Warnings;                                                 // 0x0048(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AutomationMessages.AutomationWorkerRunTests
// 0x0030
struct FAutomationWorkerRunTests
{
	uint32_t                                           ExecutionCount;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RoleIndex;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     TestName;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FString                                     BeautifiedTestName;                                       // 0x0018(0x0010) (ZeroConstructor)
	bool                                               bScreenshotsEnabled;                                      // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFullSizeScreenShots;                                  // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSendAnalytics;                                           // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerRequestTestsReplyComplete
// 0x0001
struct FAutomationWorkerRequestTestsReplyComplete
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerRequestTestsReply
// 0x0018
struct FAutomationWorkerRequestTestsReply
{
	struct FString                                     TestInfo;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	int                                                TotalNumTests;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerRequestTests
// 0x0008
struct FAutomationWorkerRequestTests
{
	bool                                               DeveloperDirectoryIncluded;                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	uint32_t                                           RequestedTestFlags;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AutomationMessages.AutomationWorkerPong
// 0x0001
struct FAutomationWorkerPong
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerResetTests
// 0x0001
struct FAutomationWorkerResetTests
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerPing
// 0x0001
struct FAutomationWorkerPing
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerWorkerOffline
// 0x0001
struct FAutomationWorkerWorkerOffline
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AutomationMessages.AutomationWorkerFindWorkersResponse
// 0x0098
struct FAutomationWorkerFindWorkersResponse
{
	struct FString                                     DeviceName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     InstanceName;                                             // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FString                                     Platform;                                                 // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FString                                     OSVersionName;                                            // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ModelName;                                                // 0x0040(0x0010) (Edit, ZeroConstructor)
	struct FString                                     GPUName;                                                  // 0x0050(0x0010) (Edit, ZeroConstructor)
	struct FString                                     CPUModelName;                                             // 0x0060(0x0010) (Edit, ZeroConstructor)
	uint32_t                                           RAMInGB;                                                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FString                                     RenderModeName;                                           // 0x0078(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       SessionId;                                                // 0x0088(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AutomationMessages.AutomationWorkerFindWorkers
// 0x0038
struct FAutomationWorkerFindWorkers
{
	int                                                Changelist;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     GameName;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ProcessName;                                              // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       SessionId;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
