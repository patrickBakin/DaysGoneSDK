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

// Function UI_GridItem_StoryItemSlot.UI_GridItem_StoryItemSlot_C.StoreItemData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTRUCT_MenuInventoryData* InventoryData                  (Parm)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_StoryItemSlot_C::StoreItemData(struct FSTRUCT_MenuInventoryData* InventoryData, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_StoryItemSlot.UI_GridItem_StoryItemSlot_C.StoreItemData");

	UUI_GridItem_StoryItemSlot_C_StoreItemData_Params params;
	params.InventoryData = InventoryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_GridItem_StoryItemSlot.UI_GridItem_StoryItemSlot_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_StoryItemSlot_C::SetSelected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_StoryItemSlot.UI_GridItem_StoryItemSlot_C.SetSelected");

	UUI_GridItem_StoryItemSlot_C_SetSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_StoryItemSlot.UI_GridItem_StoryItemSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GridItem_StoryItemSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_StoryItemSlot.UI_GridItem_StoryItemSlot_C.Construct");

	UUI_GridItem_StoryItemSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_StoryItemSlot.UI_GridItem_StoryItemSlot_C.ExecuteUbergraph_UI_GridItem_StoryItemSlot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_StoryItemSlot_C::ExecuteUbergraph_UI_GridItem_StoryItemSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_StoryItemSlot.UI_GridItem_StoryItemSlot_C.ExecuteUbergraph_UI_GridItem_StoryItemSlot");

	UUI_GridItem_StoryItemSlot_C_ExecuteUbergraph_UI_GridItem_StoryItemSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
