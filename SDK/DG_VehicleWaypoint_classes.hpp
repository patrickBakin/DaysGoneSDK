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

// BlueprintGeneratedClass VehicleWaypoint.VehicleWaypoint_C
// 0x0030 (0x03A0 - 0x0370)
class AVehicleWaypoint_C : public AAIVehicleWaypoint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box1;                                                     // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    ReachedEndWaypoint;                                       // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReachedWaypoint;                                          // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VehicleWaypoint.VehicleWaypoint_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnReachedEndWaypoint(class AVehiclePawn** VehiclePawn);
	void OnReachedWaypoint(class AVehiclePawn** VehiclePawn, bool* isEndWaypoint);
	void ExecuteUbergraph_VehicleWaypoint(int EntryPoint);
	void ReachedWaypoint__DelegateSignature(class AVehiclePawn* VehiclePawn, bool isEndWaypoint);
	void ReachedEndWaypoint__DelegateSignature(class AVehiclePawn* VehiclePawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
