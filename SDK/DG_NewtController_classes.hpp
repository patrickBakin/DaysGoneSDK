#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NewtController.NewtController_C
// 0x0018 (0x13F8 - 0x13E0)
class ANewtController_C : public ABendNewtController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x13E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      RoofStayNavFilter;                                        // 0x13E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GeneralNavFilter;                                         // 0x13F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NewtController.NewtController_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_NewtController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
