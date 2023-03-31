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

// Function RingGridItem.RingGridItem_C.UpdateByTag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (Parm)

void URingGridItem_C::UpdateByTag(const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function RingGridItem.RingGridItem_C.UpdateByTag");

	URingGridItem_C_UpdateByTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RingGridItem.RingGridItem_C.OnFail_2560A53E453D3924C8CF928094E16490
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void URingGridItem_C::OnFail_2560A53E453D3924C8CF928094E16490(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function RingGridItem.RingGridItem_C.OnFail_2560A53E453D3924C8CF928094E16490");

	URingGridItem_C_OnFail_2560A53E453D3924C8CF928094E16490_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RingGridItem.RingGridItem_C.OnSuccess_2560A53E453D3924C8CF928094E16490
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void URingGridItem_C::OnSuccess_2560A53E453D3924C8CF928094E16490(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function RingGridItem.RingGridItem_C.OnSuccess_2560A53E453D3924C8CF928094E16490");

	URingGridItem_C_OnSuccess_2560A53E453D3924C8CF928094E16490_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RingGridItem.RingGridItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URingGridItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RingGridItem.RingGridItem_C.Construct");

	URingGridItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RingGridItem.RingGridItem_C.Invalidate
// (Event, Public, BlueprintEvent)

void URingGridItem_C::Invalidate()
{
	static auto fn = UObject::FindObject<UFunction>("Function RingGridItem.RingGridItem_C.Invalidate");

	URingGridItem_C_Invalidate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RingGridItem.RingGridItem_C.FadeIn
// (Public, BlueprintCallable, BlueprintEvent)

void URingGridItem_C::FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function RingGridItem.RingGridItem_C.FadeIn");

	URingGridItem_C_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RingGridItem.RingGridItem_C.FadeOut
// (Public, BlueprintCallable, BlueprintEvent)

void URingGridItem_C::FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function RingGridItem.RingGridItem_C.FadeOut");

	URingGridItem_C_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RingGridItem.RingGridItem_C.Update Image
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (Parm)

void URingGridItem_C::Update_Image(const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function RingGridItem.RingGridItem_C.Update Image");

	URingGridItem_C_Update_Image_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RingGridItem.RingGridItem_C.ExecuteUbergraph_RingGridItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void URingGridItem_C::ExecuteUbergraph_RingGridItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RingGridItem.RingGridItem_C.ExecuteUbergraph_RingGridItem");

	URingGridItem_C_ExecuteUbergraph_RingGridItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
