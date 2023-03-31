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

// BlueprintGeneratedClass GrappleButtonPressEvent.GrappleButtonPressEvent_C
// 0x0020 (0x0490 - 0x0470)
class AGrappleButtonPressEvent_C : public ABendGrappleButtonPressEvent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USlateInputInteractComponent*                SlateInputInteract;                                       // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUI_GrappleMeter3_C*                         GrappleWidget;                                            // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GrappleButtonPressEvent.GrappleButtonPressEvent_C");
		return ptr;
	}


	void StartPosition();
	void OffsetBasedOnButton(const struct FVector2D& InPosition, struct FVector2D* OutPosition);
	void SetupNewGrappleButtonPressEvent(TEnumAsByte<EControllerInputButton> Button, float SuccessPressRate, float MaxGrappleTime, bool Can_Fail_Grapple, const struct FVector2D& Screen_Location, class AActor* Follow_Actor, class UActorComponent* Follow_Component, const struct FName& Follow_Socket_In_Actor, bool Start_On_Play, int GrappleTiers, bool Debug);
	float GetCompletionPercent();
	void CheckForSuccess();
	void HandleInput();
	void DestroySelf();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void NotifyButtonEventActivated();
	void NotifyButtonEventDeactivated();
	void NotifyButtonEvent();
	void ButtonFade();
	void SetButtonEventFail();
	void SetButtonEventSuccessful();
	void PlayerDied(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void StartButtonEvent();
	void TimeScaleInputEvent();
	void OnSuccess_Event_1();
	void OnCompletionPercentChanged();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_GrappleButtonPressEvent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
