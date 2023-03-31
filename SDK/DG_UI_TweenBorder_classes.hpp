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

// WidgetBlueprintGeneratedClass UI_TweenBorder.UI_TweenBorder_C
// 0x0088 (0x0380 - 0x02F8)
class UUI_TweenBorder_C : public UUI_TweenBorder
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                                  WidgetSlot;                                               // 0x0300(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     Wrapper;                                                  // 0x0308(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnColorEnd;                                               // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTranslationEnd;                                         // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnScaleEnd;                                               // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAngleEnd;                                               // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPivotEnd;                                               // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnScalarParamEnd;                                         // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnVectorParamEnd;                                         // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TweenBorder.UI_TweenBorder_C");
		return ptr;
	}


	void SetAngle(float Duration, float angle);
	void PauseTweenOpacity();
	void SetAlignment(float Duration, const struct FVector2D& Alignment);
	void TweenAlignment();
	void SetScale(float Duration, const struct FVector2D& Scale);
	void SetTranslation(float Duration, const struct FVector2D& Translation);
	void SetOpacity(float Duration, float Opacity);
	void SetColor(float Duration, const struct FLinearColor& Color);
	void TweenVectorParameter();
	void TweenScalarParameter();
	void TweenPivot();
	void TweenAngle();
	void TweenScale();
	void TweenTranslation();
	void TweenOpacity();
	void TweenColor();
	void Construct();
	void ExecuteUbergraph_UI_TweenBorder(int EntryPoint);
	void OnVectorParamEnd__DelegateSignature();
	void OnScalarParamEnd__DelegateSignature();
	void OnPivotEnd__DelegateSignature();
	void OnAngleEnd__DelegateSignature();
	void OnScaleEnd__DelegateSignature();
	void OnTranslationEnd__DelegateSignature();
	void OnColorEnd__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
