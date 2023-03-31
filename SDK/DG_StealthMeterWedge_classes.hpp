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

// WidgetBlueprintGeneratedClass StealthMeterWedge.StealthMeterWedge_C
// 0x0000 (0x02E0 - 0x02E0)
class UStealthMeterWedge_C : public UStealthMeterWedge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StealthMeterWedge.StealthMeterWedge_C");
		return ptr;
	}


	void TweenHatch();
	void SetHatch(float Amount);
	void TweenRotation();
	void SetRotation(float angle);
	void Init(class UMaterialInstanceDynamic* DMI);
	void TweenColor();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
