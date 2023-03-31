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

// AnimBlueprintGeneratedClass NewtVim.NewtVim_C
// 0x12CCD (0x13C5D - 0x0F90)
class UNewtVim_C : public UBendNewtAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0F90(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_54124AEA48114EE237D5508152CF9BCA;      // 0x0F98(0x0060)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_70885CD24AEF5339151E18BDE94C06DB;// 0x0FF8(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E703808744FCC248125B76B37239C39C;// 0x1040(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0DD6B33845F633A0F41E46A6FEC6915D;      // 0x1088(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_04FDFDE44059E4D77E21939FC6367F81;// 0x10E8(0x00F8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D2B6C4844BFACAE4FE758591E4481E66;// 0x11E0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B67A72C740CC1EA574334790010F734D;// 0x1228(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_179073304802194A1D81CA87DBC2E1F0;// 0x1270(0x00A8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C8CC04D44CA753A6F06C1199F093BF00;// 0x1318(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B9752FB54D1C67FF944CB6B4E7C1150A;// 0x13B8(0x0048)
	struct FAnimNode_BendTwoBoneIKRaycast              AnimGraphNode_BendTwoBoneIKRaycast_8EBE90F349BA1C907B8C68937C52ACC8;// 0x1400(0x01E0)
	struct FAnimNode_BendTwoBoneIKRaycast              AnimGraphNode_BendTwoBoneIKRaycast_C83A464B4A63E0A1A65A5DB8F34C250D;// 0x15E0(0x01E0)
	struct FAnimNode_SaggyMesh                         AnimGraphNode_SaggyMesh_F77635EE4AA948E2A9850C9130E76592; // 0x17C0(0x0190)
	struct FAnimNode_BendTwoBoneIKRaycast              AnimGraphNode_BendTwoBoneIKRaycast_3BD47D7846A089BB7F7E24A92E9A1B2D;// 0x1950(0x01E0)
	struct FAnimNode_BendTwoBoneIKRaycast              AnimGraphNode_BendTwoBoneIKRaycast_450B316849247C1854C40CA9FDAE67AA;// 0x1B30(0x01E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9024F11248B9D13F082CC9A98DBB1B03;// 0x1D10(0x00A8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_433400B447AE849FF1B163AEB1BC22DE;// 0x1DB8(0x00A0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_DA8766E244A735EE2D990EB3FAFCF0EA;// 0x1E58(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7F04EF614D42FE05E7E071B3357A35B2;// 0x1EC0(0x00F8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x1FB8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8AA62C884981DB28A295F280DC8F428A2;// 0x1FC0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C7043EDF4A07E525C9732F816385B6F02;// 0x2050(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18A0F3264F637774EE550FB2BA2D61912;// 0x20E0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E7C68FF04C17E9381A39CE9C34493A2E2;// 0x2170(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E3A53C3048AF1E825312AD912EAEC1412;// 0x2200(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9DF79B7C4B9DA011190214ABAAAFAF9E2;// 0x2290(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9BDEDD594AE21E9851ECDBA72C33F6C62;// 0x2320(0x0090)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_665509C14AE27751317C31B744E4D6F02;// 0x23B0(0x0058)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_53773097429B28A9C324F9AFAFCECF5B2;// 0x2408(0x0058)
	struct FAnimNode_MultiAnchorSequence               AnimGraphNode_MultiAnchorSequence_9DB2695B4A74F65829589EBBD6D796CC2;// 0x2460(0x00C8)
	struct FAnimNode_MultiAnchorSequence               AnimGraphNode_MultiAnchorSequence_72F8224D4AC2678438730EA4290DD4D02;// 0x2528(0x00C8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8C5DABEE447FBC3680A2F5839A52CFDA2;// 0x25F0(0x00F0)
	struct FAnimNode_RandomBlendSpace                  AnimGraphNode_RandomBlendSpace_7F5F5EC74A5512861EFE22B226A348B12;// 0x26E0(0x0238)
	struct FAnimNode_RandomBlendSpace                  AnimGraphNode_RandomBlendSpace_BC26D8B3449B8F008BACFBAED32228AC2;// 0x2918(0x0238)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_29FF54544502144D069B968C2E66613D2;// 0x2B50(0x0048)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_03B94D77435B0789ECF9B6A39438903B2;// 0x2B98(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3F1284564D7AAD300633409A6BE56ED32;// 0x2BF0(0x00F0)
	struct FAnimNode_RandomBlendSpace                  AnimGraphNode_RandomBlendSpace_FA98C71943A2F5154FAAB18807DE323E2;// 0x2CE0(0x0238)
	struct FAnimNode_RandomBlendSpace                  AnimGraphNode_RandomBlendSpace_D329565944AFA5D33EF49B829B16409D2;// 0x2F18(0x0238)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EDD18C0A4FE381AE9E1DC59DFE72117A2;// 0x3150(0x00F0)
	struct FAnimNode_RandomBlendSpace                  AnimGraphNode_RandomBlendSpace_3E4480E743E8D6020E1F95AB5A174D942;// 0x3240(0x0238)
	struct FAnimNode_RandomBlendSpace                  AnimGraphNode_RandomBlendSpace_DDA82C5545C9329F566A418A420575B52;// 0x3478(0x0238)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B7F1CE094666C4605643DE92C8EBD57E2;// 0x36B0(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2C88E6664263956AE5F5ACB7F2B23FBE2;// 0x37A0(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_AAB399AE45BE2FEE6A86A7BAC46D28A32;// 0x37E8(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C195551C4F26CCB4242BE5A3556D76372;// 0x3820(0x0048)
	struct FAnimNode_RandomSequence                    AnimGraphNode_RandomSequence_569D1CC84F5180081A674BAF3C93D6E42;// 0x3868(0x0170)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B360DD1349C5227529DD55A05D06A2FC2;// 0x39D8(0x00F0)
	struct FAnimNode_RandomSequence                    AnimGraphNode_RandomSequence_95F4936A4285E1419E65989B65381D0A2;// 0x3AC8(0x0170)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_074712534AFCD7BA30EB8C979430112C2;// 0x3C38(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C8F00E164770B248EEC88892297EC66A;// 0x3C80(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4BC0DC984ED1FAF873D6A8829A66378F;// 0x3D90(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_85E7057C4D46EEDED5DBDDA0B5F8A004;// 0x3DD8(0x0110)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4F2301EF44417CF71778FDBAD6F7C65F;// 0x3EE8(0x00F8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_39510F364342450BDEA19BA0E9227931;// 0x3FE0(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_23C91EC441D02A60CA245D9F316FED49;// 0x4028(0x00F8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F715DA574257F9DD0E3A8E8321B4D045;// 0x4120(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_087F9E2E48FD84D7951B24BDFBD22DA2;// 0x41B0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_85A1591A48A3CF44EB0E55B45711E378;// 0x4240(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_039726FA46C4E707601621A13076B2A9;// 0x42D0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C627D7B248F8B78EBA859BB40E5864CE;// 0x4360(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_84412DD04256059ED6CEECB514898B8F;// 0x43F0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_184D79E44F3256960DA601B2C6413A30;// 0x4480(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E5B1642C447665C2F2DA39B95D829B7B;// 0x4510(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_27EE2D414BE8805E2EAB0286895A5642;// 0x45A0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_675E04AD466D4418EF6DCABE8E06298D;// 0x4630(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DF63140E43828C92475B49BBD5FB1CA9;// 0x46C0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_048C46AF45ABD10FF0E9568E2914D493;// 0x4750(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_67E3425B477651DBBFD152BB5FB53931;// 0x47E0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18913AFF439CA5B8768F1ABB35CD649A;// 0x4870(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8C73E8CB4B3E09C08A1C84AAAFC4CBA4;// 0x4900(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9EA2CDA64B56C72A75C24DA2E51EB6A7;// 0x4990(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_99E7B0094CD6F15223E38E995A60D1F8;// 0x4A20(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F9B62FCE4D4601EA596A5D81D46A8868;// 0x4AB0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_81B4DDCD45B97AE0DC49DE9CAAD2AB5F;// 0x4B40(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_350962D0428881DF716D53BA74FB0F87;// 0x4BD0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7ACD26C5421D7D6B98F19FAAF2C2BF15;// 0x4C60(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A201A3D9447C716B3D4EAE8160BB42D9;// 0x4CF0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E184E6154CCB972969A58EB825F2B310;// 0x4D80(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8402FF2A40321E7E027C6EB5E5D665A1;// 0x4E10(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5CDC73DC474F855DACA75FA384D9D33A;// 0x4EA0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_52AF95D645564E806CFEB991BBFCFCF1;// 0x4F30(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_673B1CC545BDBC465335178B5C516D9E;// 0x4FC0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30793B264A31A6B140834586AAD13D5F;// 0x5050(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_102A71B44985CD1555FD998AD36055CA;// 0x50E0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7EE4AA3F474F89E85BEC6D9D1E8D442C;// 0x5170(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A2F25786482AFB6F397E3FAC85047266;// 0x5200(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_350620884EAAD44ED7239DB8D155B1A6;// 0x5290(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1DB45E614A02207BA9F489AE55CFE68B;// 0x5320(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A7D7E9034B50834259760DBBCF78A6CD;// 0x53B0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A226424D46E250088073BC84D198D8AF;// 0x5440(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A96149014C4836B7E600D2B17060919D;// 0x54D0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_87A1B06A40757FD2A71DF18B36CD8A27;// 0x5560(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9780DB3B46F2A1CFAEF89699F4784D1F;// 0x55F0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7B8BEED84A64741753EBC792A9D4E5B9;// 0x5680(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6380A2F84417FFBB4AB89E9EEAA40711;// 0x5710(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4E33AFEC465015B79F369B9C912AB553;// 0x57A0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DE7549F9415CD8F10008E7A6B511F263;// 0x5830(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3D3896CB4B351C6049E6F7B704D5B96D;// 0x58C0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5C0CB74B4D159B28FFAB66B102AC2A40;// 0x5950(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4D6C374048602A6CF85359B20D86966F;// 0x59E0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A09E86A94AAF6888C46FB6A6B0C7EA2F;// 0x5A70(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9E4E76774624A02594AC089D7A0C8C29;// 0x5B00(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C50DC0E54A2D5E6882BDFC9A941F51A9;// 0x5B90(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25DFA38441E0F9F3CA2ABA9B6CFB23E0;// 0x5C20(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8FAE63C44CCAB9307C9E01847506E0F4;// 0x5CB0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EFABE833419B1801F2C834A29DF620E9;// 0x5D40(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_359F05CA4758946E2B878EA5E8F284BC;// 0x5DD0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EB397467469E33D87F17BEA763EDEA3C;// 0x5E60(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9708329C4A1A435869CBCAB2D185F42B;// 0x5EF0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6B8BD87C4A1E4519EDAF4ABBEBC1FBD6;// 0x5F80(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3D2E484A4ACD27DAFA1BEC9CF70A6FB8;// 0x6010(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_36753F384E410CE0C5A41ABBB20F3A5C;// 0x60A0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8D7973E0439AD422D7294D90126CD0D3;// 0x6130(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_229EE9304FC6BE81173951B3943C6779;// 0x61C0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D0CCE19340804E2067104B871514AC1D;// 0x6250(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D64F489D4DAE14CACFB293BCB48813BF;// 0x62E0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_41435CFB4D7470BCD1B866A6B08172B5;// 0x6370(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3CB2461846AD6029BA4B099B093E67BA;// 0x6400(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DB89E51B4373136ED05A959014633337;// 0x6490(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E5A73ED040EFBB432F87BA84E9454DA6;// 0x6520(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0C5251654944C472DCBA389F94E77ADA;// 0x65B0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AC89F18B49D6F3406FA85A826017DD04;// 0x6640(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FA05127045B35FA7DC89C6832C5D0347;// 0x66D0(0x0090)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_AF38D60F43BB9145804EBBB714CE96E2;// 0x6760(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_195676204220A32F5EE5B0A30A128A1E;// 0x67C8(0x0048)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_E8B2FF43455F8A77C35AABBBAE05F539;// 0x6810(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2017A5894827FD047C4E80A23C2D2B56;// 0x6868(0x0088)
	struct FAnimNode_Anchor                            AnimGraphNode_Anchor_103713ED4593367ACEE25FB27825DBBA;    // 0x68F0(0x01A0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CAE6124F48271C91577F4BBCD9D97799;// 0x6A90(0x0048)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_E4DA341D49760E7E7883999B2073ED85;// 0x6AD8(0x0058)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_B61BAA7D4DFBDA4657757BA15E0B2BD2;// 0x6B30(0x0058)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_2127A2124C6CAECF16992ABDDBB76D25;// 0x6B88(0x0058)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_865EE9C542575B35E26F36B398468028;// 0x6BE0(0x0070)
	struct FAnimNode_Anchor                            AnimGraphNode_Anchor_2D65356A4732BD2D52930CA70B062543;    // 0x6C50(0x01A0)
	struct FAnimNode_Anchor                            AnimGraphNode_Anchor_16CE20DA4BC86BC94F52159E6EB567DE;    // 0x6DF0(0x01A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FCB88A0445B196DD0700AEB23AC14287;// 0x6F90(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DDE1923B466CA5D32230A4917D9C5C73;// 0x7080(0x0088)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0A65D3CF4B7CC715F6FB58B357F8B527;// 0x7108(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_651C66974F46489A3D9597AE22BA8019;// 0x71F8(0x0088)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_02F93FD740CC4AF053BE3385A5E415A6;// 0x7280(0x0160)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2842989F4F772898FF92DCBBF835ECCF;// 0x73E0(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7DDA26944449C2674DC246BF23870AB9;// 0x7540(0x0048)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_E1071228483F4FF26A20A8AECF76223D;// 0x7588(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7C61DE284FB5859F451AF0B84F355C38;// 0x75E0(0x0088)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A1C1E1184B22DEC318586B920CE81532;// 0x7668(0x0160)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2829DCB3487FEFE9876B01853AC34C55;// 0x77C8(0x00F0)
	unsigned char                                      UnknownData01[0x8];                                       // 0x78B8(0x0008) MISSED OFFSET
	struct FAnimNode_Anchor                            AnimGraphNode_Anchor_B38D38F04B1B736CB96AB5B614D5973C;    // 0x78C0(0x01A0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E423AE7F4272D6ACEF8A2FA85F9688A7;// 0x7A60(0x0048)
	struct FAnimNode_RandomSequence                    AnimGraphNode_RandomSequence_29ACA43243D32798C4F51AB6209D9468;// 0x7AA8(0x0170)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A920EDDD452A1E4E6DF5669D9FD7DC3E;// 0x7C18(0x00F0)
	struct FAnimNode_RandomBlendSpace                  AnimGraphNode_RandomBlendSpace_DF7929C34DD779D81BB077BBE7438FC8;// 0x7D08(0x0238)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C1D2E6B94975DE189B9C18A26A15E5FE;// 0x7F40(0x00F0)
	struct FAnimNode_Anchor                            AnimGraphNode_Anchor_CCB7B3544C394300237BC5816075B307;    // 0x8030(0x01A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_A47C1DB2482305FC2315DDA0D7A063FC;// 0x81D0(0x0180)
	struct FAnimNode_RandomSequence                    AnimGraphNode_RandomSequence_55C7693B4C424FDCB80F5BB2418F96CB;// 0x8350(0x0170)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3329F083494F0CF580D001A2AA6A7861;// 0x84C0(0x00F0)
	struct FAnimNode_RandomBlendSpace                  AnimGraphNode_RandomBlendSpace_78DA50434EECA86814391B94DCCE76BD;// 0x85B0(0x0238)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2273B7874A766880A04B9AB1AE246F0E;// 0x87E8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_E645A82B47485C68589E1EA4E0C58F21;// 0x8830(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C0E542D1404ACA85099211B590527EE9;// 0x8868(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6A14DBC940071566E580D294D0D3FC81;// 0x88B0(0x0088)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C35F3D8D447A985BE6DC38970D5C5D60;// 0x8938(0x0160)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5CCB2C2C475FE793CFA464952CA2BAA2;// 0x8A98(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CAFDB76A4561122BD5832DA3E2E9263E;// 0x8B88(0x0048)
	struct FAnimNode_BendTwoBoneIKExternal             AnimGraphNode_BendTwoBoneIKExternal_3FD48F794C027F46AD54B88EE914B5AC;// 0x8BD0(0x00E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CC19E08F4F558AE27448B99F69DE6D5D;// 0x8CB0(0x00A8)
	unsigned char                                      UnknownData02[0x8];                                       // 0x8D58(0x0008) MISSED OFFSET
	struct FAnimNode_BendTwoBoneIKExternal             AnimGraphNode_BendTwoBoneIKExternal_A16262CD4F2AD8203CD335A8FC9D45D6;// 0x8D60(0x00E0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_09853BA149D5D69DD6C401BC2E600F0D;// 0x8E40(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_17512D064A135168F2FCEB8457FB0AD0;// 0x8E88(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9A6DDCC248C55D3AAA619490FC18F99E;// 0x8ED0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_527AA78E4081110F7100E5B42C81D6D3;// 0x8F60(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E3953D3B4A9720EAD73B3A92B91C37F5;// 0x8FF0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_772B39574034EF1AA96D70807611721A;// 0x9080(0x0090)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B1F750EF4112ECEDC7E187A6BC875663;// 0x9110(0x0048)
	unsigned char                                      UnknownData03[0x8];                                       // 0x9158(0x0008) MISSED OFFSET
	struct FAnimNode_Anchor                            AnimGraphNode_Anchor_4C9AC993478A280CD74FFC857604E113;    // 0x9160(0x01A0)
	struct FAnimNode_RandomSequence                    AnimGraphNode_RandomSequence_5F008277409F4AC5072F6080963553E8;// 0x9300(0x0170)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_47DF9C0A4BF90E8AAEC7B78B50294DBB;// 0x9470(0x0048)
	unsigned char                                      UnknownData04[0x8];                                       // 0x94B8(0x0008) MISSED OFFSET
	struct FAnimNode_Anchor                            AnimGraphNode_Anchor_C9CC58C94A7A93B29D6681B010946106;    // 0x94C0(0x01A0)
	struct FAnimNode_RandomBlendSpace                  AnimGraphNode_RandomBlendSpace_3ED864A4407ACC428A071AA553FB83C0;// 0x9660(0x0238)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_670756F7435389C848253FA372E30A8E;// 0x9898(0x0048)
	struct FAnimNode_Anchor                            AnimGraphNode_Anchor_3BB0E3E64523824951B9DBB5A329CAC6;    // 0x98E0(0x01A0)
	struct FAnimNode_RandomSequence                    AnimGraphNode_RandomSequence_926F5B36491BDDFE676E0A8DE2CCF3E8;// 0x9A80(0x0170)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F7372ABC4D59FF3CE091D29B74CEBC96;// 0x9BF0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1BA80FB54F4E45C834DBFA804B188733;// 0x9C38(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6507EDA042FB26AFFC704DB63A1D15C6;// 0x9D48(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_A9076BEE42C6E65B3A66AD956C7F4871;// 0x9D90(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_92FA032F4BDAD396B8F90391A76508A5;// 0x9DC8(0x0048)
	struct FAnimNode_RandomSequence                    AnimGraphNode_RandomSequence_8CFCE96E4161F47C6BFE46A7B7C13DD4;// 0x9E10(0x0170)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_34092FBF47A7F221CAB23CBED4C9F19A;// 0x9F80(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2ED12E704AC41B5A01315A8AD4685AF8;// 0x9FC8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EEDEAF89467477AED84147A90ED08207;// 0xA050(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_EDCE137541439F1A5B02B3992554339B;// 0xA098(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_856577A74A9053EA56586C9D18E0BC75;// 0xA0D0(0x0048)
	unsigned char                                      UnknownData05[0x8];                                       // 0xA118(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21F81D4B4DD2A287A7CB78BCC1B976AE;// 0xA120(0x0090)
	struct FAnimNode_MultiAnchorSequence               AnimGraphNode_MultiAnchorSequence_648B543841086785D225E0A4B7E893FA;// 0xA1B0(0x00C8)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_CEF31CC1426B6DF877985686DE41409F;// 0xA278(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5CE3134C437C865218B3A9AA1C50BB7A;// 0xA2D0(0x0088)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_A72653D44C5AF6A2047B29B755233933;// 0xA358(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_881B940C4C43720E3FD4B4A7E673BCBC;// 0xA3B0(0x0048)
	unsigned char                                      UnknownData06[0x8];                                       // 0xA3F8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A5C2B4444B15F7483AD06EAB338BD04E;// 0xA400(0x0090)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_0BE6D1B84BD0DBE3E5882E8D4EEA03CB;// 0xA490(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E977882B46123DE0D474FB8202093F09;// 0xA4C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4BC5AA7742888230F59ED897CADF965A;// 0xA510(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_48DA6DBF4ABE63C1E214AAAB5789DEF5;// 0xA5A0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11706FA3489F3B273C258496F87AF0A9;// 0xA630(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_91163A244B597056C432D48BC8DCF9A4;// 0xA6C0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_83D241E44369EF2369A085BE8B3ECA34;// 0xA750(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FB2F8C5F45A3225E3D581CAC532717DA;// 0xA7E0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AEB4787B4E4BF297E8C0CFBF29EB8751;// 0xA870(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_55186A254BBA4D3B10C3FCB4D354B0BA;// 0xA900(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31111CAD466BCBDFD7F1A0AE021E023E;// 0xA990(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0E3CB6EE4EC06D93EA740C9D2256BE53;// 0xAA20(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DB6A363D4B3A2E444BEA71B4D898F54D;// 0xAAB0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C4F6D92D4D34BBDECBD0F38D6C0F1EF9;// 0xAB40(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12541C024C9BD06F2F23CB8E7734DF28;// 0xABD0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_223583564E9CF42D9F720D87752C2E7F;// 0xAC60(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_068886C946E4F396663450BF14BDFAA1;// 0xACF0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8974443145910003CDA9149DB788D22E;// 0xAD80(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A656B0664798C1F852E512895F8B14A3;// 0xAE10(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_753AF7A0461E9F8995FF27BDD04FEF81;// 0xAEA0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4151C47944F24866175062ADECADFA2A;// 0xAF30(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A9B9712D40EE7E57640CA1A626A01E63;// 0xAFC0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3F5AABEC4DFBFE19FDA95CBA4B01A4FB;// 0xB050(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EC37B9254D866C41B5F724AF78C66A25;// 0xB0E0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CC0FD75542A7D38BCFDA99B602CE4BDE;// 0xB170(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_359A08E142B6A60A5FBF46B5797401F8;// 0xB200(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F84CC4784121BFC6CB32ED943F65261F;// 0xB290(0x0090)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_76DA922B42CC3AD8DF251C98E9AA0303;// 0xB320(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7B8530C04915C826031BD3AF38191372;// 0xB358(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_85FCDB1240756A5930D9E984511CE252;// 0xB3A0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9BA158ED4DA790EE8070D1BBC43CCF0B;// 0xB428(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_08DDB4BC47971339F6F9648529E1F490;// 0xB470(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4D3976A0487DDA5B4BA9589881CB4A5C;// 0xB4F8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_CF2B0D1E424453F898A3999B77673A93;// 0xB540(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EAFC4A24454FD4D1EA70E2A8B5A80A31;// 0xB578(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C110B72648B94CDC055B4E94901CB3A6;// 0xB5C0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_ACE9E6304557606158F8B390EF71B274;// 0xB648(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B96D267A496B90D6EB9133A289129935;// 0xB690(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_25CCCF8B4B5E8363EAAED28277FE276E;// 0xB718(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E679F4274F4D2502123F2792D45B36E8;// 0xB760(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DB3DF49C49F294004E83DE9FC43A36AF;// 0xB7E8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7BF4935E4F24D0F4DA8F3EAE41BE0288;// 0xB830(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_88C9288A49431C2B53FF0C96EB0B4C66;// 0xB940(0x0048)
	unsigned char                                      UnknownData07[0x8];                                       // 0xB988(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_87E6A0B448D8795CDDDB56AA9FAFA4D2;// 0xB990(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FB8884414F6B1E0AC7D542BB267FD86D;// 0xBA20(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7BEED8954000F6C7E5A1A5AEFB8DEF27;// 0xBAB0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E1348A3F44B1DC4C207347B6A8B2C3CC;// 0xBB40(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_948D20E44B51D4D4632EFBACF49A222A;// 0xBBD0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A372282044C247286295F8B2D98B279D;// 0xBC60(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8E5B2722417CF46A70393F8D8E28F04C;// 0xBCF0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_91840FA246BEB62D7DAAEB8BE816B8E8;// 0xBD80(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AFC6558A4366E52885A4E6A2AF9D9422;// 0xBE10(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A37A5ABC4F701D763679A588362A58A9;// 0xBEA0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5444D9E34FCDFBD5938A4EBA6ED8CF42;// 0xBF30(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_976285374BC19B722E7A00928AA97A78;// 0xBFC0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D4379AE646CF2404DE0A32B59D1676C7;// 0xC050(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FF0530C241C7ED5D89DC36BE2E9B7AED;// 0xC0E0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B3D1F56444E34A29C02C9F875284CAF9;// 0xC170(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5ADDB1F5483B012D1CF883A5CFDC66AC;// 0xC200(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6C84FE4B47CC6013F4D329AC29B7D3A9;// 0xC290(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FBD798E54A873E457D31CDBBBFB882BA;// 0xC320(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6B6E0AF24C4A153E9321819E23D7E9BA;// 0xC3B0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2D180E02435C845E7864C28FDA81ED84;// 0xC440(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22EA83FD41A7F1D140172DB350416DE0;// 0xC4D0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_706610254427EC39AEB34B825E473D10;// 0xC560(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F23B0CCB43D9AC5D0B2ADE904B01BBEC;// 0xC5F0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CED69D9C4FF8435E09C7958E74E9DEB3;// 0xC680(0x0090)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_102300F2456833404C9D37AD3A08BA35;// 0xC710(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_619BEB3D4639E8F15AB0199D93FA8F52;// 0xC748(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_190DCC1C4F99DE7CA8C8CF99E3E187CC;// 0xC790(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_76A668A04AB6A22519A221A963F37A95;// 0xC8F0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_93F768624E0807BC76E4FBAD70EE1BEB;// 0xC938(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_118EB0DB4F60A7835FE4F698E1FAFDD7;// 0xCA98(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_D472AB9F4ED9E901B10A57A13ED94A5C;// 0xCAE0(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_651CE0054FAB3CDE7394528DFF335FB5;// 0xCB18(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8D7933FF4E284647E7C832AF5807678A;// 0xCB60(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_67AA0CC74A7C2BCCF504368AF405A013;// 0xCCC0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C03C618442A69C4F0D2498B6D2C42AC2;// 0xCD08(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_93BB21984C8E05DBBE238EBC9992B036;// 0xCD90(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FCBC823146F575F171959AB512B372C4;// 0xCDD8(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_00F1AAC5483F0FC3540D16A96AC7B0F2;// 0xCF38(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F03B6E114FE6D5B86BE646A379CE3F15;// 0xCF80(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D354F79046526A9E027095B0FC155F94;// 0xD090(0x0048)
	unsigned char                                      UnknownData08[0x8];                                       // 0xD0D8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CB936EAF40286070358A638E5866F774;// 0xD0E0(0x0090)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E449E00A4D4C27AF3816BABCB350A5F8;// 0xD170(0x0088)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_42DF0E1F4B60BB242110C69756DF122B;// 0xD1F8(0x0160)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_32BFB1254D167A5928BB65A7C64D5DF8;// 0xD358(0x0058)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_12C7D9114670B25A17C9CEBBD7865B44;// 0xD3B0(0x0058)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_2FF69251484EC44B828D3DB32DCA38AB;// 0xD408(0x0058)
	struct FAnimNode_Anchor                            AnimGraphNode_Anchor_54D5F78541FDAC708213929F8D91290F;    // 0xD460(0x01A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F3CAB4314848C2CBDF0DE7ADB33275F7;// 0xD600(0x00F0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_18EB1CA84C0E7AC7139C10957B45CE67;// 0xD6F0(0x00F0)
	struct FAnimNode_OffsetStartBlendspace             AnimGraphNode_OffsetStartBlendspace_4165D27547FECE1274BE5FBF6676A588;// 0xD7E0(0x0168)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C937D23249F1B1EBC7D0EDA7CADC4061;// 0xD948(0x00F0)
	struct FAnimNode_StartSequence                     AnimGraphNode_OffsetStartSequence_5198CAF94143A18567670EA20840C538;// 0xDA38(0x00A0)
	unsigned char                                      UnknownData09[0x8];                                       // 0xDAD8(0x0008) MISSED OFFSET
	struct FAnimNode_Anchor                            AnimGraphNode_Anchor_B5BBAAC646235166D710CCB78FF72B84;    // 0xDAE0(0x01A0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B4F04ABD4C7C8122D72D1D98753339A8;// 0xDC80(0x0048)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_B9D57D4946208889F39B7BB94C724C91;// 0xDCC8(0x0058)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_7077560C452886FD467613B9C08906F3;// 0xDD20(0x0058)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_EE0CEF9842222952E6430D86FE798B89;// 0xDD78(0x0058)
	struct FAnimNode_Anchor                            AnimGraphNode_Anchor_22EA14F148274E5DEE7A4E900F6F4EB0;    // 0xDDD0(0x01A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E62436D6435A52D8237218A5E967819E;// 0xDF70(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_969429A84188B056819BD684344B3B5B;// 0xE060(0x0088)
	unsigned char                                      UnknownData10[0x8];                                       // 0xE0E8(0x0008) MISSED OFFSET
	struct FAnimNode_Anchor                            AnimGraphNode_Anchor_78086F104282519CB26D1D89B26813C5;    // 0xE0F0(0x01A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DB11D1B94432EF0EED87EE911E4D7A30;// 0xE290(0x0088)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_2A04E6954BFFD1D8D78575A6F6A2B5F7;// 0xE318(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6D48C0DC492E251568E888B170B6AC22;// 0xE388(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2F974D17483825645BA86489259AC3E8;// 0xE410(0x0048)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_DC3C2BB240870E34697DB2B74D2627D6;// 0xE458(0x0058)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_7349371E41938107F1A324AB366B005F;// 0xE4B0(0x0058)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_7CD26B8E4EADEE0FA781F18B4D2F249F;// 0xE508(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D90FB98C43DC35AFF1C84D9B9EB37244;// 0xE560(0x0088)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3631DAED42F099EA292938A8F554DCD0;// 0xE5E8(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D4663D9C4A15B7042D50509284B0D943;// 0xE6D8(0x0088)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_261DB20945D0CDE6E92E6686433EE7DB;// 0xE760(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CFB6A7834F0DD035F4E6719B55B62E2F;// 0xE850(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F2E8A42B4E6C2BB7D824D285B84D8DB2;// 0xE8D8(0x0048)
	struct FAnimNode_Anchor                            AnimGraphNode_Anchor_584FA1C54C89CD00E7E1F5A13484C179;    // 0xE920(0x01A0)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_B84F48B74B3221B305A30A89D09DB6E3;// 0xEAC0(0x0058)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_FB7A9EB1482873A4E4DA4C97229090D4;// 0xEB18(0x0058)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_487C565D4B01904AEDBAC99EA2D7F932;// 0xEB70(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_934D409449853E228CF54A88A45798E0;// 0xEBC8(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D535309E4423B6B71EE19E9DA4929AAB;// 0xECB8(0x0088)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D0B41CDB432B130E54219CB6E1DFD614;// 0xED40(0x0088)
	unsigned char                                      UnknownData11[0x8];                                       // 0xEDC8(0x0008) MISSED OFFSET
	struct FAnimNode_Anchor                            AnimGraphNode_Anchor_84B5FD29499C7F80ADEA0BA281024E27;    // 0xEDD0(0x01A0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_551E2A2740AC29D50ED69EAF3C66A612;// 0xEF70(0x0048)
	unsigned char                                      UnknownData12[0x8];                                       // 0xEFB8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F010B2FD4AE543D6FECE5B98A982CA3E;// 0xEFC0(0x0090)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_9C9C071F40D9FE0C0354DE8586E0FF68;// 0xF050(0x0058)
	struct FAnimNode_MultiAnchorSequence               AnimGraphNode_MultiAnchorSequence_9F6F6E204089D5ACDE6AFB9130CB6CF6;// 0xF0A8(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B96324C340968034EF3D48B010B871D7;// 0xF170(0x0088)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4871713A41892A49F9BECABE0EDB48F8;// 0xF1F8(0x00F0)
	struct FBendAnimNode_AddAnimGraphTags              BendAnimGraphNode_AddAnimGraphTags_FFE6DFAB489B4A56D39DFBABC7060027;// 0xF2E8(0x0068)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_7E41D59E4D4D6CC51FE1059782A170CC;// 0xF350(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_66EA3AFA422B8A91642F18912E2E240C;// 0xF3A8(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5FF32EF6476451E144E74E9B31393AF8;// 0xF498(0x0088)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BB59C0DB49391922E9B95E87133B0D8A;// 0xF520(0x0088)
	struct FAnimNode_MultiAnchorSequence               AnimGraphNode_MultiAnchorSequence_3AEE774E48E6CC86CC14DF86615943A4;// 0xF5A8(0x00C8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B8E446914BB771ED8EFC5FBF70974B9D;// 0xF670(0x0048)
	struct FBendAnimNode_AddAnimGraphTags              BendAnimGraphNode_AddAnimGraphTags_DD0442A8496353D93DEE33A98CE4720E;// 0xF6B8(0x0068)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_DDF4363849ECD1193A522CB5E84AD900;// 0xF720(0x0070)
	struct FAnimNode_Anchor                            AnimGraphNode_Anchor_2B83278A438BC2763628E9902D0B2E0C;    // 0xF790(0x01A0)
	struct FAnimNode_Anchor                            AnimGraphNode_Anchor_B99C0BFA4E33FBF28D5BD9819393F95F;    // 0xF930(0x01A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AD8AA5314C452053AA68CFB1EC83A978;// 0xFAD0(0x0088)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CDA99654467E0A97E5C3149FF6999973;// 0xFB58(0x0088)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E755022045F51FD6A6A6408795E2D27B;// 0xFBE0(0x0088)
	struct FAnimNode_CollectCurveValue                 AnimGraphNode_CollectCurveValue_74394E54458256258175F1937F3B3C26;// 0xFC68(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2DC98EFE446E02B5EF93439EF5BC3142;// 0xFCC8(0x00F0)
	unsigned char                                      UnknownData13[0x8];                                       // 0xFDB8(0x0008) MISSED OFFSET
	struct FAnimNode_Anchor                            AnimGraphNode_Anchor_4164888D49C7B49D29809FBFD4917E65;    // 0xFDC0(0x01A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2E9ED93449F546397403B69A7ABC4F30;// 0xFF60(0x0088)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C7B0ECCC42ADFC34E4312D9DFF1942D5;// 0xFFE8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_234A14354D9CD45B91D701A5F5A9026A;// 0x100D8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_9AA306F0426BD71E3427B293F3CC5C13;// 0x10120(0x0038)
	unsigned char                                      UnknownData14[0x8];                                       // 0x10158(0x0008) MISSED OFFSET
	struct FAnimNode_Anchor                            AnimGraphNode_Anchor_B52D3F684AE8B8BAC1E872903CD8FD67;    // 0x10160(0x01A0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_40EBBB75494F61B299892FBE5328383B;// 0x10300(0x0048)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_6839C4F343716BEFC05A3887311DE686;// 0x10348(0x0058)
	struct FBendAnimNode_ResetGraphBelow               BendAnimGraphNode_ResetGraphBelow_53D56C7F4B1CB1B5819964B86EBA5022;// 0x103A0(0x0050)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_F2049A0B4B27AB4BFA55B6B201B1839C;// 0x103F0(0x0058)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_61458B6343E61CDEE2B7DD817474C23C;// 0x10448(0x0180)
	unsigned char                                      UnknownData15[0x8];                                       // 0x105C8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C719F915407EB2807A1D74BB1FB59937;// 0x105D0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8AA62C884981DB28A295F280DC8F428A;// 0x10660(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18A0F3264F637774EE550FB2BA2D6191;// 0x106F0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C7043EDF4A07E525C9732F816385B6F0;// 0x10780(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_62581B0649A854AEE22DBCBF75C17B42;// 0x10810(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E7C68FF04C17E9381A39CE9C34493A2E;// 0x108A0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E3A53C3048AF1E825312AD912EAEC141;// 0x10930(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5728874B4BF4F50F145C768BF749F05C;// 0x109C0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9DF79B7C4B9DA011190214ABAAAFAF9E;// 0x10A50(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9BDEDD594AE21E9851ECDBA72C33F6C6;// 0x10AE0(0x0090)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_58D4B48D4092927A33E258A3851DDF85;// 0x10B70(0x00F0)
	struct FAnimNode_RandomBlendSpace                  AnimGraphNode_RandomBlendSpace_9EB56A024C4A77D1C7EC03BBE3A1BD87;// 0x10C60(0x0238)
	struct FAnimNode_MultiAnchorSequence               AnimGraphNode_MultiAnchorSequence_0A27CBE4456669FFAE13D98C3E77FA35;// 0x10E98(0x00C8)
	struct FAnimNode_RandomBlendSpace                  AnimGraphNode_RandomBlendSpace_C116159C493F2823C4C6FBA9180A6BF0;// 0x10F60(0x0238)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_84A8FC0F480923952924D59BF670D8A6;// 0x11198(0x0058)
	struct FAnimNode_SetLocalFloats                    AnimGraphNode_SetLocalFloats_60F5223B432A5B189F9958BC0CCB695F;// 0x111F0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B8F4216E480E49570BCC5386A0A2E5A4;// 0x11260(0x0048)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_665509C14AE27751317C31B744E4D6F0;// 0x112A8(0x0058)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_53773097429B28A9C324F9AFAFCECF5B;// 0x11300(0x0058)
	struct FAnimNode_MultiAnchorSequence               AnimGraphNode_MultiAnchorSequence_9DB2695B4A74F65829589EBBD6D796CC;// 0x11358(0x00C8)
	struct FAnimNode_MultiAnchorSequence               AnimGraphNode_MultiAnchorSequence_72F8224D4AC2678438730EA4290DD4D0;// 0x11420(0x00C8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8C5DABEE447FBC3680A2F5839A52CFDA;// 0x114E8(0x00F0)
	struct FAnimNode_RandomBlendSpace                  AnimGraphNode_RandomBlendSpace_7F5F5EC74A5512861EFE22B226A348B1;// 0x115D8(0x0238)
	struct FAnimNode_RandomBlendSpace                  AnimGraphNode_RandomBlendSpace_BC26D8B3449B8F008BACFBAED32228AC;// 0x11810(0x0238)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_29FF54544502144D069B968C2E66613D;// 0x11A48(0x0048)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_03B94D77435B0789ECF9B6A39438903B;// 0x11A90(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3F1284564D7AAD300633409A6BE56ED3;// 0x11AE8(0x00F0)
	struct FAnimNode_RandomBlendSpace                  AnimGraphNode_RandomBlendSpace_FA98C71943A2F5154FAAB18807DE323E;// 0x11BD8(0x0238)
	struct FAnimNode_RandomBlendSpace                  AnimGraphNode_RandomBlendSpace_D329565944AFA5D33EF49B829B16409D;// 0x11E10(0x0238)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EDD18C0A4FE381AE9E1DC59DFE72117A;// 0x12048(0x00F0)
	struct FAnimNode_RandomBlendSpace                  AnimGraphNode_RandomBlendSpace_3E4480E743E8D6020E1F95AB5A174D94;// 0x12138(0x0238)
	struct FAnimNode_RandomBlendSpace                  AnimGraphNode_RandomBlendSpace_DDA82C5545C9329F566A418A420575B5;// 0x12370(0x0238)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B7F1CE094666C4605643DE92C8EBD57E;// 0x125A8(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2C88E6664263956AE5F5ACB7F2B23FBE;// 0x12698(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_AAB399AE45BE2FEE6A86A7BAC46D28A3;// 0x126E0(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C195551C4F26CCB4242BE5A3556D7637;// 0x12718(0x0048)
	struct FAnimNode_RandomSequence                    AnimGraphNode_RandomSequence_569D1CC84F5180081A674BAF3C93D6E4;// 0x12760(0x0170)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B360DD1349C5227529DD55A05D06A2FC;// 0x128D0(0x00F0)
	struct FAnimNode_RandomSequence                    AnimGraphNode_RandomSequence_95F4936A4285E1419E65989B65381D0A;// 0x129C0(0x0170)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_074712534AFCD7BA30EB8C979430112C;// 0x12B30(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6AA10E9749F9CABB7C8806B3E34B0D96;// 0x12B78(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FEAB06A6476CBA7175AEF7875AB36EE2;// 0x12C88(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_36F5CC0D499DDAA46702C1A7624A04A9;// 0x12CD0(0x0110)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E070669849BA05E9768A4DA19796420C;// 0x12DE0(0x00A0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A803AA544F4AE887503F31973C5B4B76;      // 0x12E80(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FAABDE5146A991B61A376B83490ED5F7;      // 0x12EE0(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_64DDCC0E43D365C4929729B4A957CA13;// 0x12F40(0x00F8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CA92EDE14FC727668FFB259DDC497766;// 0x13038(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B8C026394ABE880E53128A8AD08F0D1E;// 0x13080(0x0048)
	struct FBendAnimNode_BlockGraphTillSetupValid      BendAnimGraphNode_BlockGraphTillSetupValid_E671632D42A526680A8FA9809EF11EF3;// 0x130C8(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D7AB4F924CDAED3DAB4615B966EF6606;// 0x13118(0x0088)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_818979BB4769CA8D8C791EA0B26D8085;      // 0x131A0(0x0060)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_50E812F348E0A14FFD9CC7A367FCD1F6;// 0x13200(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8B3B10FD4C2644CC6B44699758D1B8FA;// 0x132A0(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E389AE8B45F8E746CB262CA30861E017;// 0x13340(0x00F8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_689BA70744BD7FF95D1762AC12A9D105;// 0x13438(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_Root_FC78F7314E1A2EF632AE66B8A2B7D14E;      // 0x13480(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0B02EA214C2C6159FF5244ACC63E0C39;// 0x134C8(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_C42166B64E514E42DEBCBDAD2FC9F831;// 0x13510(0x0070)
	struct FBendAnimNode_ExcludeJoints                 BendAnimGraphNode_ExcludeJoints_D5868E794B4CDB73346CD6B6CBB98DDA;// 0x13580(0x0148)
	struct FBendAnimNode_ExcludeJoints                 BendAnimGraphNode_ExcludeJoints_CEFFB67E490E2840E11147ABD01816D6;// 0x136C8(0x0148)
	struct FBendAnimNode_PostPhysicsSwitch             BendAnimGraphNode_PostPhysicsSwitch_09EF8B934ECB8F4D90ABDEBCA0D29F1F;// 0x13810(0x0060)
	struct FBendAnimNode_SmoothStepUpStepDown          BendAnimGraphNode_SmoothStepUpStepDown_9A6446B9430440D6CF6B17BAA493051E;// 0x13870(0x0118)
	struct FBendAnimNode_FixupAnchoredMeshPostCollision BendAnimGraphNode_FixupAnchoredMeshPostCollision_FBEC8822476DFE16535E30B8A794A987;// 0x13988(0x0158)
	struct FBendAnimNode_PostPhysicsInitialPose        BendAnimGraphNode_PostPhysicsInitialPose_26F5DDD947D8731018132788AEC72EDA;// 0x13AE0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_983EB4C945D0E5A4BF0EED914137D40A;// 0x13B28(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_64A0207A4C5285B27E1E3AB33EAB648E;// 0x13B70(0x0048)
	struct FBendAnimNode_ResetGraphBelow               BendAnimGraphNode_ResetGraphBelow_E8CA44E64C2CB1F9A5AF7A9A43996F59;// 0x13BB8(0x0050)
	struct FBendAnimNode_ResetGraphBelow               BendAnimGraphNode_ResetGraphBelow_9F3D74EE409284F9015CC9B6F59196B9;// 0x13C08(0x0050)
	float                                              Delta_Time_X;                                             // 0x13C58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GrappleFromAbove;                                         // 0x13C5C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass NewtVim.NewtVim_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_LayeredBoneBlend_C8CC04D44CA753A6F06C1199F093BF00();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_BendTwoBoneIKRaycast_8EBE90F349BA1C907B8C68937C52ACC8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_BendTwoBoneIKRaycast_C83A464B4A63E0A1A65A5DB8F34C250D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_SaggyMesh_F77635EE4AA948E2A9850C9130E76592();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_BendTwoBoneIKRaycast_3BD47D7846A089BB7F7E24A92E9A1B2D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_BendTwoBoneIKRaycast_450B316849247C1854C40CA9FDAE67AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_ModifyBone_9024F11248B9D13F082CC9A98DBB1B03();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_LayeredBoneBlend_433400B447AE849FF1B163AEB1BC22DE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_8AA62C884981DB28A295F280DC8F428A_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_18A0F3264F637774EE550FB2BA2D6191_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_E3A53C3048AF1E825312AD912EAEC141_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_9BDEDD594AE21E9851ECDBA72C33F6C6_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_RandomBlendSpace_D329565944AFA5D33EF49B829B16409D_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_BlendListByBool_EDD18C0A4FE381AE9E1DC59DFE72117A_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_RandomBlendSpace_DDA82C5545C9329F566A418A420575B5_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_BlendListByBool_B7F1CE094666C4605643DE92C8EBD57E_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_F715DA574257F9DD0E3A8E8321B4D045();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_087F9E2E48FD84D7951B24BDFBD22DA2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_85A1591A48A3CF44EB0E55B45711E378();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_039726FA46C4E707601621A13076B2A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_C627D7B248F8B78EBA859BB40E5864CE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_84412DD04256059ED6CEECB514898B8F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_184D79E44F3256960DA601B2C6413A30();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_E5B1642C447665C2F2DA39B95D829B7B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_27EE2D414BE8805E2EAB0286895A5642();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_675E04AD466D4418EF6DCABE8E06298D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_DF63140E43828C92475B49BBD5FB1CA9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_048C46AF45ABD10FF0E9568E2914D493();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_67E3425B477651DBBFD152BB5FB53931();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_18913AFF439CA5B8768F1ABB35CD649A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_8C73E8CB4B3E09C08A1C84AAAFC4CBA4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_9EA2CDA64B56C72A75C24DA2E51EB6A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_F9B62FCE4D4601EA596A5D81D46A8868();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_81B4DDCD45B97AE0DC49DE9CAAD2AB5F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_350962D0428881DF716D53BA74FB0F87();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_A201A3D9447C716B3D4EAE8160BB42D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_8402FF2A40321E7E027C6EB5E5D665A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_673B1CC545BDBC465335178B5C516D9E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_30793B264A31A6B140834586AAD13D5F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_102A71B44985CD1555FD998AD36055CA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_7EE4AA3F474F89E85BEC6D9D1E8D442C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_350620884EAAD44ED7239DB8D155B1A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_A7D7E9034B50834259760DBBCF78A6CD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_87A1B06A40757FD2A71DF18B36CD8A27();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_9780DB3B46F2A1CFAEF89699F4784D1F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_6380A2F84417FFBB4AB89E9EEAA40711();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_4E33AFEC465015B79F369B9C912AB553();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_DE7549F9415CD8F10008E7A6B511F263();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_3D3896CB4B351C6049E6F7B704D5B96D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_A09E86A94AAF6888C46FB6A6B0C7EA2F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_C50DC0E54A2D5E6882BDFC9A941F51A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_25DFA38441E0F9F3CA2ABA9B6CFB23E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_8FAE63C44CCAB9307C9E01847506E0F4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_EFABE833419B1801F2C834A29DF620E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_359F05CA4758946E2B878EA5E8F284BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_EB397467469E33D87F17BEA763EDEA3C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_9708329C4A1A435869CBCAB2D185F42B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_36753F384E410CE0C5A41ABBB20F3A5C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_41435CFB4D7470BCD1B866A6B08172B5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_3CB2461846AD6029BA4B099B093E67BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_DB89E51B4373136ED05A959014633337();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_E5A73ED040EFBB432F87BA84E9454DA6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_AC89F18B49D6F3406FA85A826017DD04();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TwoWayBlend_865EE9C542575B35E26F36B398468028();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_BlendSpacePlayer_02F93FD740CC4AF053BE3385A5E415A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_BlendSpacePlayer_2842989F4F772898FF92DCBBF835ECCF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_BlendListByBool_2829DCB3487FEFE9876B01853AC34C55();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_SequencePlayer_6A14DBC940071566E580D294D0D3FC81();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_BlendSpacePlayer_C35F3D8D447A985BE6DC38970D5C5D60();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_BlendListByBool_5CCB2C2C475FE793CFA464952CA2BAA2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_BendTwoBoneIKExternal_3FD48F794C027F46AD54B88EE914B5AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_BendTwoBoneIKExternal_A16262CD4F2AD8203CD335A8FC9D45D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_527AA78E4081110F7100E5B42C81D6D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_772B39574034EF1AA96D70807611721A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_A5C2B4444B15F7483AD06EAB338BD04E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_4BC5AA7742888230F59ED897CADF965A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_48DA6DBF4ABE63C1E214AAAB5789DEF5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_11706FA3489F3B273C258496F87AF0A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_91163A244B597056C432D48BC8DCF9A4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_83D241E44369EF2369A085BE8B3ECA34();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_FB2F8C5F45A3225E3D581CAC532717DA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_AEB4787B4E4BF297E8C0CFBF29EB8751();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_55186A254BBA4D3B10C3FCB4D354B0BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_31111CAD466BCBDFD7F1A0AE021E023E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_0E3CB6EE4EC06D93EA740C9D2256BE53();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_C4F6D92D4D34BBDECBD0F38D6C0F1EF9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_12541C024C9BD06F2F23CB8E7734DF28();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_223583564E9CF42D9F720D87752C2E7F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_068886C946E4F396663450BF14BDFAA1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_A656B0664798C1F852E512895F8B14A3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_753AF7A0461E9F8995FF27BDD04FEF81();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_4151C47944F24866175062ADECADFA2A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_A9B9712D40EE7E57640CA1A626A01E63();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_3F5AABEC4DFBFE19FDA95CBA4B01A4FB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_EC37B9254D866C41B5F724AF78C66A25();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_CC0FD75542A7D38BCFDA99B602CE4BDE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_F84CC4784121BFC6CB32ED943F65261F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_SequencePlayer_85FCDB1240756A5930D9E984511CE252();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_SequencePlayer_08DDB4BC47971339F6F9648529E1F490();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_SequencePlayer_C110B72648B94CDC055B4E94901CB3A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_SequencePlayer_B96D267A496B90D6EB9133A289129935();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_SequencePlayer_E679F4274F4D2502123F2792D45B36E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_87E6A0B448D8795CDDDB56AA9FAFA4D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_FB8884414F6B1E0AC7D542BB267FD86D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_7BEED8954000F6C7E5A1A5AEFB8DEF27();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_E1348A3F44B1DC4C207347B6A8B2C3CC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_948D20E44B51D4D4632EFBACF49A222A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_A372282044C247286295F8B2D98B279D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_8E5B2722417CF46A70393F8D8E28F04C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_91840FA246BEB62D7DAAEB8BE816B8E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_AFC6558A4366E52885A4E6A2AF9D9422();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_A37A5ABC4F701D763679A588362A58A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_976285374BC19B722E7A00928AA97A78();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_D4379AE646CF2404DE0A32B59D1676C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_FF0530C241C7ED5D89DC36BE2E9B7AED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_B3D1F56444E34A29C02C9F875284CAF9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_6C84FE4B47CC6013F4D329AC29B7D3A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_FBD798E54A873E457D31CDBBBFB882BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_6B6E0AF24C4A153E9321819E23D7E9BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_2D180E02435C845E7864C28FDA81ED84();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_22EA83FD41A7F1D140172DB350416DE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_706610254427EC39AEB34B825E473D10();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_F23B0CCB43D9AC5D0B2ADE904B01BBEC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_CED69D9C4FF8435E09C7958E74E9DEB3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_BlendSpacePlayer_190DCC1C4F99DE7CA8C8CF99E3E187CC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_BlendSpacePlayer_93F768624E0807BC76E4FBAD70EE1BEB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_BlendSpacePlayer_8D7933FF4E284647E7C832AF5807678A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_SequencePlayer_C03C618442A69C4F0D2498B6D2C42AC2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_BlendSpacePlayer_FCBC823146F575F171959AB512B372C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_BlendListByBool_F3CAB4314848C2CBDF0DE7ADB33275F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_BlendListByBool_C937D23249F1B1EBC7D0EDA7CADC4061();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TwoWayBlend_2A04E6954BFFD1D8D78575A6F6A2B5F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_BlendListByBool_261DB20945D0CDE6E92E6686433EE7DB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_SequencePlayer_B96324C340968034EF3D48B010B871D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_BlendListByBool_4871713A41892A49F9BECABE0EDB48F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_SequencePlayer_5FF32EF6476451E144E74E9B31393AF8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_SequencePlayer_BB59C0DB49391922E9B95E87133B0D8A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TwoWayBlend_DDF4363849ECD1193A522CB5E84AD900();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_BlendListByBool_2DC98EFE446E02B5EF93439EF5BC3142();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_BendAnimGraphNode_AddCurveValue_6839C4F343716BEFC05A3887311DE686();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_BendAnimGraphNode_ResetGraphBelow_53D56C7F4B1CB1B5819964B86EBA5022();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_C719F915407EB2807A1D74BB1FB59937();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_8AA62C884981DB28A295F280DC8F428A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_18A0F3264F637774EE550FB2BA2D6191();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_62581B0649A854AEE22DBCBF75C17B42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_E3A53C3048AF1E825312AD912EAEC141();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_5728874B4BF4F50F145C768BF749F05C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_TransitionResult_9BDEDD594AE21E9851ECDBA72C33F6C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_RandomBlendSpace_9EB56A024C4A77D1C7EC03BBE3A1BD87();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_RandomBlendSpace_C116159C493F2823C4C6FBA9180A6BF0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_RandomBlendSpace_D329565944AFA5D33EF49B829B16409D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_BlendListByBool_EDD18C0A4FE381AE9E1DC59DFE72117A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_RandomBlendSpace_DDA82C5545C9329F566A418A420575B5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_BlendListByBool_B7F1CE094666C4605643DE92C8EBD57E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_LayeredBoneBlend_E070669849BA05E9768A4DA19796420C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NewtVim_AnimGraphNode_LayeredBoneBlend_8B3B10FD4C2644CC6B44699758D1B8FA();
	void AnimNotify_FaceStateMachine_Momentary_Entered();
	void AnimNotify_OnGroundIdle_Entered();
	void AnimNotify_OnGroundIdle_Left();
	void AnimNotify_OnGroundMove_Entered();
	void AnimNotify_OnGroundMove_Left();
	void AnimNotify_ClimbStarted();
	void AnimNotify_MeleeAttack_Start();
	void AnimNotify_MeleeAttack_End();
	void AnimNotify_MeleeAttack_EndInturrupt();
	void AnimNotify_FailedGrappleStarted();
	void AnimNotify_FailedGrappleEnded();
	void AnimNotify_StartGrappleStarted();
	void AnimNotify_GrapplerExitEnded();
	void AnimNotify_DirectGrapple_Started();
	void AnimNotify_GrapplerEnded();
	void AnimNotify_GrapplerStarted();
	void AnimNotify_DamageAnim_Done();
	void AnimNotify_DamageFullBody_StateEntered();
	void AnimNotify_DamageRecovery_Enter();
	void AnimNotify_DamageAnim_Enter();
	void AnimNotify_DamageAnim_Exit();
	void AnimNotify_DamageDoneState_Exit();
	void AnimNotify_DamageAnim_Done_UpperBody();
	void AnimNotify_DamageDoneState_Exit_UpperBody();
	void AnimNotify_DamageAnim_Done_Additive();
	void AnimNotify_DamageDoneState_Exit_Additive();
	void AnimNotify_Kill();
	void AnimNotify_DestroyHead();
	void AnimNotify_DestroyHeadDemo();
	void AnimNotify_LandingEnding();
	void AnimNotify_CanFall();
	void AnimNotify_GrappleExitUnanchor();
	void AnimNotify_LandingEntered();
	void AnimNotify_Dead_Entered();
	void AnimNotify_MeleeAttackToFalling();
	void ExecuteUbergraph_NewtVim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
