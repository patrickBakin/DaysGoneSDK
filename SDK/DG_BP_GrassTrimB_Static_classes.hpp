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

// BlueprintGeneratedClass BP_GrassTrimB_Static.BP_GrassTrimB_Static_C
// 0x0026 (0x0390 - 0x036A)
class ABP_GrassTrimB_Static_C : public AStaticMeshActor_Env_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x036A(0x0006) MISSED OFFSET
	class UStaticMeshComponent*                        StaticMesh2;                                              // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Grass_Mixed_Belknap_Line_2m_v1;                           // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GrassTrimB_Static.BP_GrassTrimB_Static_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
