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

// Function UI_GridItem_InventorySlot.UI_GridItem_InventorySlot_C.GetItemInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UTexture2D>    ImageAsset                     (Parm, OutParm)
// struct FText                   ItenName                       (Parm, OutParm)
// struct FText                   ItemDesc                       (Parm, OutParm)

void UUI_GridItem_InventorySlot_C::GetItemInfo(int* Count, TAssetPtr<class UTexture2D>* ImageAsset, struct FText* ItenName, struct FText* ItemDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_InventorySlot.UI_GridItem_InventorySlot_C.GetItemInfo");

	UUI_GridItem_InventorySlot_C_GetItemInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
	if (ImageAsset != nullptr)
		*ImageAsset = params.ImageAsset;
	if (ItenName != nullptr)
		*ItenName = params.ItenName;
	if (ItemDesc != nullptr)
		*ItemDesc = params.ItemDesc;
}


// Function UI_GridItem_InventorySlot.UI_GridItem_InventorySlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GridItem_InventorySlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_InventorySlot.UI_GridItem_InventorySlot_C.Construct");

	UUI_GridItem_InventorySlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_InventorySlot.UI_GridItem_InventorySlot_C.ExecuteUbergraph_UI_GridItem_InventorySlot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_InventorySlot_C::ExecuteUbergraph_UI_GridItem_InventorySlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_InventorySlot.UI_GridItem_InventorySlot_C.ExecuteUbergraph_UI_GridItem_InventorySlot");

	UUI_GridItem_InventorySlot_C_ExecuteUbergraph_UI_GridItem_InventorySlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
