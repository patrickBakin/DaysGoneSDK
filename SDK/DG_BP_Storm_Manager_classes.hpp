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

// BlueprintGeneratedClass BP_Storm_Manager.BP_Storm_Manager_C
// 0x007C (0x040C - 0x0390)
class ABP_Storm_Manager_C : public AEditorTickableActorLabeled_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UClass*>                              Storms;                                                   // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Current_Number_of_Storms;                                 // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Debug___Print_Output;                                     // 0x03AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET
	TArray<class ABP_Storm_Base_C*>                    Active_Storms;                                            // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABP_Storm_Lightning_C*>               Active_Lightning_Storms;                                  // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class AActor*>                              Available_Lightning_Targets;                              // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABP_Storm_RegionalAmbientController_C*> AvailableRegionalAmbientStormControllers;                 // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class ABP_Storm_RegionalAmbientController_C*       ActiveRegionalAmbientStormController;                     // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastAmbientSpawnDeltaTime;                                // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowStormEvents;                                         // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	float                                              AllowStormEventsTime;                                     // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastTickTime;                                             // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Storm_Manager.BP_Storm_Manager_C");
		return ptr;
	}


	void HandleStormEvents();
	void SpawnAmbientStorm();
	void AmbientStormManager();
	void UpdateManager();
	void InventoryStormsAndTargets();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void Editor_Tick();
	void Spawn_Storm(class UClass* Storm_Type, const struct FVector2D& Storm_Formed_Position, const struct FVector2D& Storm_Direction, float Storm_Lifetime, float Storm_Formation___Fade_Rate, float Storm_Spawn_Distance, bool Storm_Forms_Instantly, bool Storm_Never_Ends, bool Ambiently_Spawned);
	void DisableStormEvents();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Storm_Manager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
