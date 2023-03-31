#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AmbientEventStatePackage.AmbientEventStatePackage_C.TelemetryMgrCheck
struct AAmbientEventStatePackage_C_TelemetryMgrCheck_Params
{
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientEventStatePackage.AmbientEventStatePackage_C.UserConstructionScript
struct AAmbientEventStatePackage_C_UserConstructionScript_Params
{
};

// Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventEngagedCall
struct AAmbientEventStatePackage_C_AmbientEventEngagedCall_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	TEnumAsByte<EAmbientEventClass>                    EventClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlayerLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AmbientEventLocation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventConcludedCall
struct AAmbientEventStatePackage_C_AmbientEventConcludedCall_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	TEnumAsByte<EAmbientEventClass>                    EventClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAmbientEventCompletionStatus>         EventResult;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlayerLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AmbientEventLocation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientManagerBlockedCall
struct AAmbientEventStatePackage_C_AmbientManagerBlockedCall_Params
{
	TEnumAsByte<EAmbientEventManagerBlockMsg>          BlockedReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventLoadedCall
struct AAmbientEventStatePackage_C_AmbientEventLoadedCall_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	TEnumAsByte<EAmbientEventClass>                    EventClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeToLoad;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlayerLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AmbientEventLocation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventUnloadedCall
struct AAmbientEventStatePackage_C_AmbientEventUnloadedCall_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	TEnumAsByte<EAmbientEventClass>                    EventClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeInPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlayerLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AmbientEventLocation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventChosenCall
struct AAmbientEventStatePackage_C_AmbientEventChosenCall_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	TEnumAsByte<EAmbientEventClass>                    EventClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysLoaded;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlayerLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AmbientEventLocation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientEventStatePackage.AmbientEventStatePackage_C.ReceiveBeginPlay
struct AAmbientEventStatePackage_C_ReceiveBeginPlay_Params
{
};

// Function AmbientEventStatePackage.AmbientEventStatePackage_C.PlayerRespawned
struct AAmbientEventStatePackage_C_PlayerRespawned_Params
{
	class ABendPlayerController*                       PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientEventStatePackage.AmbientEventStatePackage_C.RecheckAEM
struct AAmbientEventStatePackage_C_RecheckAEM_Params
{
};

// Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventEngaged
struct AAmbientEventStatePackage_C_AmbientEventEngaged_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	TEnumAsByte<EAmbientEventClass>                    EventClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlayerLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AmbientEventLocation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventConcluded
struct AAmbientEventStatePackage_C_AmbientEventConcluded_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	TEnumAsByte<EAmbientEventClass>                    EventClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAmbientEventCompletionStatus>         EventResult;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlayerLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AmbientEventLocation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientManagerBlocked
struct AAmbientEventStatePackage_C_AmbientManagerBlocked_Params
{
	TEnumAsByte<EAmbientEventManagerBlockMsg>          BlockReason;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventLoaded
struct AAmbientEventStatePackage_C_AmbientEventLoaded_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	TEnumAsByte<EAmbientEventClass>                    EventClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeToLoad;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlayerLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AmbientEventLocation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventUnloaded
struct AAmbientEventStatePackage_C_AmbientEventUnloaded_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	TEnumAsByte<EAmbientEventClass>                    EventClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeInPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlayerLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AmbientEventLocation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventChosen
struct AAmbientEventStatePackage_C_AmbientEventChosen_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	TEnumAsByte<EAmbientEventClass>                    EventClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysLoaded;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlayerLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AmbientEventLocation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientEventStatePackage.AmbientEventStatePackage_C.ExecuteUbergraph_AmbientEventStatePackage
struct AAmbientEventStatePackage_C_ExecuteUbergraph_AmbientEventStatePackage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
