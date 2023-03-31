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

// Function UI_Inventory_Resources.UI_Inventory_Resources_C.SetResourceDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Inventory_Resources_C::SetResourceDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_Resources.UI_Inventory_Resources_C.SetResourceDetails");

	UUI_Inventory_Resources_C_SetResourceDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
