// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CollectibleNotification.UI_CollectibleNotification_C.DeactivateNotification
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_CollectibleNotification_C::DeactivateNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CollectibleNotification.UI_CollectibleNotification_C.DeactivateNotification");

	UUI_CollectibleNotification_C_DeactivateNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CollectibleNotification.UI_CollectibleNotification_C.ActivateNotification
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_CollectibleNotification_C::ActivateNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CollectibleNotification.UI_CollectibleNotification_C.ActivateNotification");

	UUI_CollectibleNotification_C_ActivateNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CollectibleNotification.UI_CollectibleNotification_C.SetDisplayTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CollectibleNotification_C::SetDisplayTimer(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CollectibleNotification.UI_CollectibleNotification_C.SetDisplayTimer");

	UUI_CollectibleNotification_C_SetDisplayTimer_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CollectibleNotification.UI_CollectibleNotification_C.ActiveCollectibleKey
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Key                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CollectibleNotification_C::ActiveCollectibleKey(int* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CollectibleNotification.UI_CollectibleNotification_C.ActiveCollectibleKey");

	UUI_CollectibleNotification_C_ActiveCollectibleKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
}


// Function UI_CollectibleNotification.UI_CollectibleNotification_C.TickCollectible
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CollectibleNotification_C::TickCollectible(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CollectibleNotification.UI_CollectibleNotification_C.TickCollectible");

	UUI_CollectibleNotification_C_TickCollectible_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CollectibleNotification.UI_CollectibleNotification_C.SetCollectibleItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItemCollectible* Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CollectibleNotification_C::SetCollectibleItem(class UInventoryItemCollectible* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CollectibleNotification.UI_CollectibleNotification_C.SetCollectibleItem");

	UUI_CollectibleNotification_C_SetCollectibleItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CollectibleNotification.UI_CollectibleNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CollectibleNotification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CollectibleNotification.UI_CollectibleNotification_C.Construct");

	UUI_CollectibleNotification_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CollectibleNotification.UI_CollectibleNotification_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CollectibleNotification_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CollectibleNotification.UI_CollectibleNotification_C.Tick");

	UUI_CollectibleNotification_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CollectibleNotification.UI_CollectibleNotification_C.SpawnPauseMenu
// (BlueprintCallable, BlueprintEvent)

void UUI_CollectibleNotification_C::SpawnPauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CollectibleNotification.UI_CollectibleNotification_C.SpawnPauseMenu");

	UUI_CollectibleNotification_C_SpawnPauseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CollectibleNotification.UI_CollectibleNotification_C.OnAnimationFinished_Event_1
// (BlueprintCallable, BlueprintEvent)

void UUI_CollectibleNotification_C::OnAnimationFinished_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CollectibleNotification.UI_CollectibleNotification_C.OnAnimationFinished_Event_1");

	UUI_CollectibleNotification_C_OnAnimationFinished_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CollectibleNotification.UI_CollectibleNotification_C.ExecuteUbergraph_UI_CollectibleNotification
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CollectibleNotification_C::ExecuteUbergraph_UI_CollectibleNotification(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CollectibleNotification.UI_CollectibleNotification_C.ExecuteUbergraph_UI_CollectibleNotification");

	UUI_CollectibleNotification_C_ExecuteUbergraph_UI_CollectibleNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
