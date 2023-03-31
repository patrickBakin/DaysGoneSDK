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

// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.SetLeaderboardType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBendLeaderboardID> Id                             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ELeaderboardType>  Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_LeaderboardsPage_C::SetLeaderboardType(TEnumAsByte<EBendLeaderboardID> Id, TEnumAsByte<ELeaderboardType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.SetLeaderboardType");

	UDLC_LeaderboardsPage_C_SetLeaderboardType_Params params;
	params.Id = Id;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.SetGlobalRank
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerRank                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Total                          (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_LeaderboardsPage_C::SetGlobalRank(int PlayerRank, int Total)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.SetGlobalRank");

	UDLC_LeaderboardsPage_C_SetGlobalRank_Params params;
	params.PlayerRank = PlayerRank;
	params.Total = Total;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.Set Challenge
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            ChallengeTag                   (ConstParm, Parm, OutParm, ReferenceParm)

void UDLC_LeaderboardsPage_C::Set_Challenge(const struct FGameplayTag& ChallengeTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.Set Challenge");

	UDLC_LeaderboardsPage_C_Set_Challenge_Params params;
	params.ChallengeTag = ChallengeTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.OnFail_A388C0E641F7F6852B8B1A8A57E3EEF5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_LeaderboardsPage_C::OnFail_A388C0E641F7F6852B8B1A8A57E3EEF5(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.OnFail_A388C0E641F7F6852B8B1A8A57E3EEF5");

	UDLC_LeaderboardsPage_C_OnFail_A388C0E641F7F6852B8B1A8A57E3EEF5_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.OnSuccess_A388C0E641F7F6852B8B1A8A57E3EEF5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_LeaderboardsPage_C::OnSuccess_A388C0E641F7F6852B8B1A8A57E3EEF5(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.OnSuccess_A388C0E641F7F6852B8B1A8A57E3EEF5");

	UDLC_LeaderboardsPage_C_OnSuccess_A388C0E641F7F6852B8B1A8A57E3EEF5_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDLC_LeaderboardsPage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.Construct");

	UDLC_LeaderboardsPage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.RecieveCircle
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_LeaderboardsPage_C::RecieveCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.RecieveCircle");

	UDLC_LeaderboardsPage_C_RecieveCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.RecieveTriangle
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_LeaderboardsPage_C::RecieveTriangle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.RecieveTriangle");

	UDLC_LeaderboardsPage_C_RecieveTriangle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.RecieveL2
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_LeaderboardsPage_C::RecieveL2()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.RecieveL2");

	UDLC_LeaderboardsPage_C_RecieveL2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.RecieveR2
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_LeaderboardsPage_C::RecieveR2()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.RecieveR2");

	UDLC_LeaderboardsPage_C_RecieveR2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.On Challenge Image
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    Image                          (Parm)

void UDLC_LeaderboardsPage_C::On_Challenge_Image(TAssetPtr<class UTexture2D> Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.On Challenge Image");

	UDLC_LeaderboardsPage_C_On_Challenge_Image_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.BndEvt__LeaderboardsLeaderboard_K2Node_ComponentBoundEvent_27_RankUpdate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Rank                           (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_LeaderboardsPage_C::BndEvt__LeaderboardsLeaderboard_K2Node_ComponentBoundEvent_27_RankUpdate__DelegateSignature(int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.BndEvt__LeaderboardsLeaderboard_K2Node_ComponentBoundEvent_27_RankUpdate__DelegateSignature");

	UDLC_LeaderboardsPage_C_BndEvt__LeaderboardsLeaderboard_K2Node_ComponentBoundEvent_27_RankUpdate__DelegateSignature_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.BndEvt__MenuInteract_Loadout_K2Node_ComponentBoundEvent_1849_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDLC_LeaderboardsPage_C::BndEvt__MenuInteract_Loadout_K2Node_ComponentBoundEvent_1849_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.BndEvt__MenuInteract_Loadout_K2Node_ComponentBoundEvent_1849_OnMenuInteractClickedEvent__DelegateSignature");

	UDLC_LeaderboardsPage_C_BndEvt__MenuInteract_Loadout_K2Node_ComponentBoundEvent_1849_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2105_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDLC_LeaderboardsPage_C::BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2105_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2105_OnMenuInteractClickedEvent__DelegateSignature");

	UDLC_LeaderboardsPage_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2105_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_2109_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDLC_LeaderboardsPage_C::BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_2109_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_2109_OnMenuInteractClickedEvent__DelegateSignature");

	UDLC_LeaderboardsPage_C_BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_2109_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.ExecuteUbergraph_DLC_LeaderboardsPage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_LeaderboardsPage_C::ExecuteUbergraph_DLC_LeaderboardsPage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.ExecuteUbergraph_DLC_LeaderboardsPage");

	UDLC_LeaderboardsPage_C_ExecuteUbergraph_DLC_LeaderboardsPage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.OnLoadoutClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UDLC_LeaderboardsPage_C::OnLoadoutClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_LeaderboardsPage.DLC_LeaderboardsPage_C.OnLoadoutClicked__DelegateSignature");

	UDLC_LeaderboardsPage_C_OnLoadoutClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
