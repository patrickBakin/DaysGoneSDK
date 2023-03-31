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

// Function UI_GridItem_TrophySlot.UI_GridItem_TrophySlot_C.StoreTrophyData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendTrophy             TrophyData                     (Parm)

void UUI_GridItem_TrophySlot_C::StoreTrophyData(const struct FBendTrophy& TrophyData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_TrophySlot.UI_GridItem_TrophySlot_C.StoreTrophyData");

	UUI_GridItem_TrophySlot_C_StoreTrophyData_Params params;
	params.TrophyData = TrophyData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_TrophySlot.UI_GridItem_TrophySlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GridItem_TrophySlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_TrophySlot.UI_GridItem_TrophySlot_C.Construct");

	UUI_GridItem_TrophySlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_TrophySlot.UI_GridItem_TrophySlot_C.ExecuteUbergraph_UI_GridItem_TrophySlot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_TrophySlot_C::ExecuteUbergraph_UI_GridItem_TrophySlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_TrophySlot.UI_GridItem_TrophySlot_C.ExecuteUbergraph_UI_GridItem_TrophySlot");

	UUI_GridItem_TrophySlot_C_ExecuteUbergraph_UI_GridItem_TrophySlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
