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

// Function CharacterGridItem.CharacterGridItem_C.OnFail_F6417D0549A492CABE7EBFB283E8DFAA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterGridItem_C::OnFail_F6417D0549A492CABE7EBFB283E8DFAA(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterGridItem.CharacterGridItem_C.OnFail_F6417D0549A492CABE7EBFB283E8DFAA");

	UCharacterGridItem_C_OnFail_F6417D0549A492CABE7EBFB283E8DFAA_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterGridItem.CharacterGridItem_C.OnSuccess_F6417D0549A492CABE7EBFB283E8DFAA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterGridItem_C::OnSuccess_F6417D0549A492CABE7EBFB283E8DFAA(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterGridItem.CharacterGridItem_C.OnSuccess_F6417D0549A492CABE7EBFB283E8DFAA");

	UCharacterGridItem_C_OnSuccess_F6417D0549A492CABE7EBFB283E8DFAA_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterGridItem.CharacterGridItem_C.Invalidate
// (Event, Public, BlueprintEvent)

void UCharacterGridItem_C::Invalidate()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterGridItem.CharacterGridItem_C.Invalidate");

	UCharacterGridItem_C_Invalidate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterGridItem.CharacterGridItem_C.FadeIn
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterGridItem_C::FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterGridItem.CharacterGridItem_C.FadeIn");

	UCharacterGridItem_C_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterGridItem.CharacterGridItem_C.FadeOut
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterGridItem_C::FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterGridItem.CharacterGridItem_C.FadeOut");

	UCharacterGridItem_C_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterGridItem.CharacterGridItem_C.Update Image
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (Parm)

void UCharacterGridItem_C::Update_Image(const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterGridItem.CharacterGridItem_C.Update Image");

	UCharacterGridItem_C_Update_Image_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterGridItem.CharacterGridItem_C.ExecuteUbergraph_CharacterGridItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterGridItem_C::ExecuteUbergraph_CharacterGridItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterGridItem.CharacterGridItem_C.ExecuteUbergraph_CharacterGridItem");

	UCharacterGridItem_C_ExecuteUbergraph_CharacterGridItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
