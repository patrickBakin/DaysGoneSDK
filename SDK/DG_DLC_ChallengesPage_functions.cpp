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

// Function DLC_ChallengesPage.DLC_ChallengesPage_C.UnbindMouseEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UDLC_ChallengesPage_C::UnbindMouseEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.UnbindMouseEvents");

	UDLC_ChallengesPage_C_UnbindMouseEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.BindMouseEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UDLC_ChallengesPage_C::BindMouseEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.BindMouseEvents");

	UDLC_ChallengesPage_C_BindMouseEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.GetNextOverviewState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Next_Overview_State            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDLC_ChallengesPage_C::GetNextOverviewState(int* Next_Overview_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.GetNextOverviewState");

	UDLC_ChallengesPage_C_GetNextOverviewState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Next_Overview_State != nullptr)
		*Next_Overview_State = params.Next_Overview_State;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.UpdateOverview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OverviewState                  (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_ChallengesPage_C::UpdateOverview(int OverviewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.UpdateOverview");

	UDLC_ChallengesPage_C_UpdateOverview_Params params;
	params.OverviewState = OverviewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.UpdateVisibilityByLockState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsLocked                      (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_ChallengesPage_C::UpdateVisibilityByLockState(bool bIsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.UpdateVisibilityByLockState");

	UDLC_ChallengesPage_C_UpdateVisibilityByLockState_Params params;
	params.bIsLocked = bIsLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.UpdateHeader
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            RowName                        (Parm)

void UDLC_ChallengesPage_C::UpdateHeader(const struct FGameplayTag& RowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.UpdateHeader");

	UDLC_ChallengesPage_C_UpdateHeader_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.MakeChallengeData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FDLCGridWidgetData> ChallengeData                  (Parm, OutParm, ZeroConstructor)

void UDLC_ChallengesPage_C::MakeChallengeData(TArray<struct FDLCGridWidgetData>* ChallengeData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.MakeChallengeData");

	UDLC_ChallengesPage_C_MakeChallengeData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChallengeData != nullptr)
		*ChallengeData = params.ChallengeData;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.OnFail_29B37AC048E189ACF76F6D99BBA5B0D2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_ChallengesPage_C::OnFail_29B37AC048E189ACF76F6D99BBA5B0D2(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.OnFail_29B37AC048E189ACF76F6D99BBA5B0D2");

	UDLC_ChallengesPage_C_OnFail_29B37AC048E189ACF76F6D99BBA5B0D2_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.OnSuccess_29B37AC048E189ACF76F6D99BBA5B0D2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_ChallengesPage_C::OnSuccess_29B37AC048E189ACF76F6D99BBA5B0D2(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.OnSuccess_29B37AC048E189ACF76F6D99BBA5B0D2");

	UDLC_ChallengesPage_C_OnSuccess_29B37AC048E189ACF76F6D99BBA5B0D2_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDLC_ChallengesPage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.Construct");

	UDLC_ChallengesPage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.BndEvt__ChallengeGrid_K2Node_ComponentBoundEvent_7_DLCGridSelectionChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (Parm)

void UDLC_ChallengesPage_C::BndEvt__ChallengeGrid_K2Node_ComponentBoundEvent_7_DLCGridSelectionChangedDelegate__DelegateSignature(const struct FName& Key, const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.BndEvt__ChallengeGrid_K2Node_ComponentBoundEvent_7_DLCGridSelectionChangedDelegate__DelegateSignature");

	UDLC_ChallengesPage_C_BndEvt__ChallengeGrid_K2Node_ComponentBoundEvent_7_DLCGridSelectionChangedDelegate__DelegateSignature_Params params;
	params.Key = Key;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.RecieveUp
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_ChallengesPage_C::RecieveUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.RecieveUp");

	UDLC_ChallengesPage_C_RecieveUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.RecieveDown
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_ChallengesPage_C::RecieveDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.RecieveDown");

	UDLC_ChallengesPage_C_RecieveDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.RecieveLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_ChallengesPage_C::RecieveLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.RecieveLeft");

	UDLC_ChallengesPage_C_RecieveLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.RecieveRight
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_ChallengesPage_C::RecieveRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.RecieveRight");

	UDLC_ChallengesPage_C_RecieveRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.RecieveCross
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_ChallengesPage_C::RecieveCross()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.RecieveCross");

	UDLC_ChallengesPage_C_RecieveCross_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.RecieveCircle
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_ChallengesPage_C::RecieveCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.RecieveCircle");

	UDLC_ChallengesPage_C_RecieveCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.On Challenge Image
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    Image                          (Parm)
// struct FGameplayTag            ChallengeTag                   (Parm)

void UDLC_ChallengesPage_C::On_Challenge_Image(TAssetPtr<class UTexture2D> Image, const struct FGameplayTag& ChallengeTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.On Challenge Image");

	UDLC_ChallengesPage_C_On_Challenge_Image_Params params;
	params.Image = Image;
	params.ChallengeTag = ChallengeTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.Update Challenges
// (BlueprintCallable, BlueprintEvent)

void UDLC_ChallengesPage_C::Update_Challenges()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.Update Challenges");

	UDLC_ChallengesPage_C_Update_Challenges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.RecieveTriangle
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_ChallengesPage_C::RecieveTriangle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.RecieveTriangle");

	UDLC_ChallengesPage_C_RecieveTriangle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDLC_ChallengesPage_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.Destruct");

	UDLC_ChallengesPage_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_1098_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDLC_ChallengesPage_C::BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_1098_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_1098_OnMenuInteractClickedEvent__DelegateSignature");

	UDLC_ChallengesPage_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_1098_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_1101_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDLC_ChallengesPage_C::BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_1101_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_1101_OnMenuInteractClickedEvent__DelegateSignature");

	UDLC_ChallengesPage_C_BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_1101_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_1543_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDLC_ChallengesPage_C::BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_1543_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_1543_OnMenuInteractClickedEvent__DelegateSignature");

	UDLC_ChallengesPage_C_BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_1543_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.OnItemClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_ChallengesPage_C::OnItemClick(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.OnItemClick");

	UDLC_ChallengesPage_C_OnItemClick_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.OnItemHoverEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_ChallengesPage_C::OnItemHoverEnter(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.OnItemHoverEnter");

	UDLC_ChallengesPage_C_OnItemHoverEnter_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesPage.DLC_ChallengesPage_C.ExecuteUbergraph_DLC_ChallengesPage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_ChallengesPage_C::ExecuteUbergraph_DLC_ChallengesPage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesPage.DLC_ChallengesPage_C.ExecuteUbergraph_DLC_ChallengesPage");

	UDLC_ChallengesPage_C_ExecuteUbergraph_DLC_ChallengesPage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
