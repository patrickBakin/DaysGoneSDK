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

// Function EquipGridItem.EquipGridItem_C.OnFail_95D10139492FBA34C6089E911FB1DE7E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UEquipGridItem_C::OnFail_95D10139492FBA34C6089E911FB1DE7E(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipGridItem.EquipGridItem_C.OnFail_95D10139492FBA34C6089E911FB1DE7E");

	UEquipGridItem_C_OnFail_95D10139492FBA34C6089E911FB1DE7E_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipGridItem.EquipGridItem_C.OnSuccess_95D10139492FBA34C6089E911FB1DE7E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UEquipGridItem_C::OnSuccess_95D10139492FBA34C6089E911FB1DE7E(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipGridItem.EquipGridItem_C.OnSuccess_95D10139492FBA34C6089E911FB1DE7E");

	UEquipGridItem_C_OnSuccess_95D10139492FBA34C6089E911FB1DE7E_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipGridItem.EquipGridItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEquipGridItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipGridItem.EquipGridItem_C.Construct");

	UEquipGridItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipGridItem.EquipGridItem_C.Invalidate
// (Event, Public, BlueprintEvent)

void UEquipGridItem_C::Invalidate()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipGridItem.EquipGridItem_C.Invalidate");

	UEquipGridItem_C_Invalidate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquipGridItem.EquipGridItem_C.ExecuteUbergraph_EquipGridItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEquipGridItem_C::ExecuteUbergraph_EquipGridItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquipGridItem.EquipGridItem_C.ExecuteUbergraph_EquipGridItem");

	UEquipGridItem_C_ExecuteUbergraph_EquipGridItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
