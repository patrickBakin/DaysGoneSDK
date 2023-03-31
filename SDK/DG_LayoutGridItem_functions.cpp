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

// Function LayoutGridItem.LayoutGridItem_C.Invalidate
// (Event, Public, BlueprintEvent)

void ULayoutGridItem_C::Invalidate()
{
	static auto fn = UObject::FindObject<UFunction>("Function LayoutGridItem.LayoutGridItem_C.Invalidate");

	ULayoutGridItem_C_Invalidate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LayoutGridItem.LayoutGridItem_C.ExecuteUbergraph_LayoutGridItem
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULayoutGridItem_C::ExecuteUbergraph_LayoutGridItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LayoutGridItem.LayoutGridItem_C.ExecuteUbergraph_LayoutGridItem");

	ULayoutGridItem_C_ExecuteUbergraph_LayoutGridItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
