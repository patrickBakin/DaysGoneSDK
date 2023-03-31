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

// BlueprintGeneratedClass BLDG_wigwam_hotel_b1_Nest.BLDG_wigwam_hotel_b1_Nest_C
// 0x01B0 (0x073A - 0x058A)
class ABLDG_wigwam_hotel_b1_Nest_C : public AMasterBuilding_NestBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x058A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             cc_rain_interior_wood_2D;                                 // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             amb_room_tone_med_01;                                     // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendNavModifierComponent*                   BendNavModifier;                                          // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        WeatherListener_Interior_WoodRoof;                        // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Room_Tone;                                                // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWorldEdgeChildComponent*                BendWorldEdgeChild20;                                     // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWorldEdgeChildComponent*                BendWorldEdgeChild19;                                     // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWorldEdgeChildComponent*                BendWorldEdgeChild18;                                     // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWorldEdgeChildComponent*                BendWorldEdgeChild17;                                     // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWorldEdgeChildComponent*                BendWorldEdgeChild16;                                     // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWorldEdgeChildComponent*                BendWorldEdgeChild15;                                     // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWorldEdgeChildComponent*                BendWorldEdgeChild14;                                     // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWorldEdgeChildComponent*                BendWorldEdgeChild5;                                      // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWorldEdgeChildComponent*                BendWorldEdgeChild4;                                      // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWorldEdgeChildComponent*                BendWorldEdgeChild3;                                      // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWorldEdgeChildComponent*                BendWorldEdgeChild2;                                      // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWorldEdgeChildComponent*                BendWorldEdgeChild1;                                      // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWorldEdgeChildComponent*                BendWorldEdgeChild;                                       // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendCoverComponent*                         BendCover7;                                               // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendCoverComponent*                         BendCover6;                                               // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendCoverComponent*                         BendCover5;                                               // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendCoverComponent*                         BendCover3;                                               // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendCoverComponent*                         BendCover2;                                               // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Reverb_Portal_6;                                          // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Reverb_Portal_5;                                          // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Reverb_Portal_4;                                          // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Reverb_Portal_3;                                          // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Weather_Listener_EXT_Metal;                               // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Weather_Listener_EXT_Wood4;                               // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Weather_Listener_EXT_Wood3;                               // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Weather_Listener_EXT_Wood2;                               // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Weather_Listener_EXT_Wood;                                // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Reverb_Portal_2;                                          // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Reverb_Portal_1;                                          // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Structure_EXT;                                            // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWorldEdgeChildComponent*                BendWorldEdgeChild12;                                     // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWorldEdgeChildComponent*                BendWorldEdgeChild13;                                     // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Traversal7;                                               // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWorldEdgeChildComponent*                BendWorldEdgeChild10;                                     // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Traversal6;                                               // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWorldEdgeChildComponent*                BendWorldEdgeChild11;                                     // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Traversal5;                                               // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWorldEdgeChildComponent*                BendWorldEdgeChild9;                                      // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWorldEdgeChildComponent*                BendWorldEdgeChild8;                                      // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Traversal4;                                               // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWorldEdgeChildComponent*                BendWorldEdgeChild7;                                      // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWorldEdgeChildComponent*                BendWorldEdgeChild6;                                      // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendCoverComponent*                         BendCover1;                                               // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendCoverComponent*                         BendCover;                                                // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendReverbComponent*                        Reverb_Box_Office;                                        // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendReverbComponent*                        Reverb_Box_Main_Room;                                     // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Audio;                                                    // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInZone1;                                                 // 0x0738(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInZone2;                                                 // 0x0739(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BLDG_wigwam_hotel_b1_Nest.BLDG_wigwam_hotel_b1_Nest_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__BendReverb_K2Node_ComponentBoundEvent_483_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BendReverb_K2Node_ComponentBoundEvent_488_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void FireGoneOut();
	void NestDestroyed(struct FString* Nest_ID);
	void BndEvt__Reverb_Box_Office_K2Node_ComponentBoundEvent_893_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Reverb_Box_Office_K2Node_ComponentBoundEvent_897_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BLDG_wigwam_hotel_b1_Nest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
