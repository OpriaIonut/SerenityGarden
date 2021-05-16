﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Photon.Pun.PhotonView
struct PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B;
// SerenityGarden.BattleStageStateManager
struct BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E;
// SerenityGarden.BuildableTurret
struct BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98;
// SerenityGarden.BulletMovement
struct BulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5;
// SerenityGarden.Commander
struct Commander_tB3DCEA8AD7D9DBD008C973FBADB172E0C5663E70;
// SerenityGarden.CommanderUI
struct CommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706;
// SerenityGarden.EnemyAmbusher
struct EnemyAmbusher_t9182D45D5CED1FC31D7BE1FDC49E6A42D37E9567;
// SerenityGarden.EnemyBase
struct EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F;
// SerenityGarden.EnemyFlying
struct EnemyFlying_tAA8D6943B40B4DDD10EDE48626EAC94BF965463C;
// SerenityGarden.EnemyMelee
struct EnemyMelee_t2481A9E094840C4F79E9A7FD0F7FCD493A2DA012;
// SerenityGarden.EnemyRanged
struct EnemyRanged_t55401E0A01EBBDF001EFAC55C30255FD83E810ED;
// SerenityGarden.EnemyScriptable
struct EnemyScriptable_t2584BB5F1C028422F65872DD1D319E368515ACD0;
// SerenityGarden.EnemySpawn
struct EnemySpawn_tAD5AE60DDE30CB98B3287B4BA0AAA09873B53251;
// SerenityGarden.EnemySpawn[]
struct EnemySpawnU5BU5D_t8B90BAE714E41597260C23FFE5A27D99876D982E;
// SerenityGarden.GamePauseManager
struct GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284;
// SerenityGarden.GamePauseManager/UnpauseGameEvent
struct UnpauseGameEvent_tF8B3717899C31909A04021E3B7B30BC2CD7C1406;
// SerenityGarden.HexagonalBlock
struct HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580;
// SerenityGarden.HexagonalBlock[]
struct HexagonalBlockU5BU5D_tE15E926CFFE45E90AB569258E728CA12EE135B77;
// SerenityGarden.HexagonalGrid
struct HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF;
// SerenityGarden.InputManager
struct InputManager_tE289ADE1B6513132E4401B7750E0AA2D31D40DF4;
// SerenityGarden.InstantiationManager
struct InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D;
// SerenityGarden.LockOnManager
struct LockOnManager_tC44F3665659845C6B4B74C0044FB68513D1D2CAC;
// SerenityGarden.LogicProcessBase
struct LogicProcessBase_t0BA44484532560F6B824BAA719C44898468A1540;
// SerenityGarden.NavigationManager
struct NavigationManager_t2BDA4F216BC1C342E12FC4682084C70663B97155;
// SerenityGarden.PermanentUpgrade
struct PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160;
// SerenityGarden.PermanentUpgrade[]
struct PermanentUpgradeU5BU5D_t6C13DE4C6C8D4B652FA96134A7A9BF4D3E48F6DC;
// SerenityGarden.PlayerBase
struct PlayerBase_t78C7F5333ACAFFE352C61B60F683F32363A70B4E;
// SerenityGarden.PlayerDataSaver
struct PlayerDataSaver_t0DF77BE78C4E557888DF1F9F9AD801FAF46B22CA;
// SerenityGarden.SceneClickManager
struct SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F;
// SerenityGarden.SceneDataRetainer
struct SceneDataRetainer_tDC5BF2B9D42AA0F469B4B9312A2CEA24F1F4A8C2;
// SerenityGarden.ShopManager
struct ShopManager_t3BC41D78DB91E598887143A4DCF889A63D9D9D86;
// SerenityGarden.StageScriptable
struct StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050;
// SerenityGarden.TurretBase
struct TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441;
// SerenityGarden.TurretBuildManager
struct TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7;
// SerenityGarden.TurretElectricFence
struct TurretElectricFence_t8802834981F4B4FBE7E88F186516E8EE690B29BB;
// SerenityGarden.TurretExcavator
struct TurretExcavator_t001FFF47594E9C24A7F31DD9E9C86C7CA923331D;
// SerenityGarden.TurretLevel
struct TurretLevel_t84FC9A4C36E5DD3A1FDA61745215D4AE17F09645;
// SerenityGarden.TurretLevel[]
struct TurretLevelU5BU5D_tD00007533801B68FD58737A590B50209619E84F8;
// SerenityGarden.TurretMachineCannon
struct TurretMachineCannon_t2C32689BFD88BBFB3381B49C932C9DEA0158259D;
// SerenityGarden.TurretMachineGun
struct TurretMachineGun_t8A92F40FBBDC488B54284FFF5FEEC92CEA48818C;
// SerenityGarden.TurretPermanentUpgrades
struct TurretPermanentUpgrades_t3961F1EB370D4D942BACB195FBF68BD75CEEBA7D;
// SerenityGarden.TurretPermanentUpgrades[]
struct TurretPermanentUpgradesU5BU5D_t5098164DEE5B9C3C6B00371C8C3103F895AE4BCA;
// SerenityGarden.TurretRailgun
struct TurretRailgun_t71400EE018F6A7159144942B33599565CE4F05FD;
// SerenityGarden.TurretStatusScriptable
struct TurretStatusScriptable_tC2CA1463FF3352C59A01B5547EB7A385CD97F9A0;
// SerenityGarden.TurretVulkan
struct TurretVulkan_tE60C25A88F22EA33484804BED57F7ED0B8614665;
// SerenityGarden.UIUpgradeRow
struct UIUpgradeRow_t0D7CA0173330442E3CA78B85BFD5AF948D0CF79B;
// SerenityGarden.UIUpgradeRow[]
struct UIUpgradeRowU5BU5D_t98FA91485B91ADAFFC2AF9548A16970411E6882C;
// SerenityGarden.WaveManager
struct WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6;
// SerenityGarden.WaveManager/<WaveSpawner>d__21
struct U3CWaveSpawnerU3Ed__21_t2CE338B394097B889D892CB0C000CC35E9AB5A25;
// SerenityGarden.WaveScriptable
struct WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC;
// SerenityGarden.WaveScriptable[]
struct WaveScriptableU5BU5D_t6A3A20CA18EE7F4286348D3DEF3FBC3358EE3D83;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F;
// System.Collections.Generic.IList`1<SerenityGarden.HexagonalBlock>
struct IList_1_tE760CF77622B16BCD993E31761C2FB77F585F6AE;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_tE09735A322C3B17000EF4E4BC8026FEDEB7B0D9B;
// System.Collections.Generic.IList`1<UnityEngine.GameObject>
struct IList_1_tD230A0C801E1C65C2379C57A8842128433958378;
// System.Collections.Generic.List`1<SerenityGarden.HexagonalBlock>
struct List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t6A61046573B0BC4E12950B90305C189DD041D786;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tA9C10612DACE8F188F3B35F6173354C7225A0883;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Decimal[]
struct DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_t041AB6BBA06AC552F17A2D2F97B1728A58D16029;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t974D5AB2327337E73FB2126366C9513F1C075512;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_t3D406BC30294F6C79CA548107716A642055062CE;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t9FFF9E8A3B0E6A173F18EF9C847BCF27D1BF4ACB;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tABE518DC1E2361D29583B0048AF69206C12C9E1C;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652;
// TMPro.TMP_Character
struct TMP_Character_t1875AACA978396521498D6A699052C187903553D;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487;
// TMPro.TMP_Style
struct TMP_Style_t9FD01084B9E3F1D4B92E87114C454C98BA20FBAD;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_tC6C45E5B0EC8EF4BA7BB147712516656B0D26C04;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505;
// TMPro.TMP_TextElement
struct TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_tD40BE2C9C48281D1F72B04DDB85CBF15B89FCA29;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438;
// TMPro.TextMeshProUGUI[]
struct TextMeshProUGUIU5BU5D_t630DB598E90AE8903F6A17F1C02F182796A49130;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t799E5463E49BC0C14AE127D8821E83BA61F3A000;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Material[]
struct MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Rigidbody
struct Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5;
// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.Button
struct Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.Image
struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;

IL2CPP_EXTERN_C RuntimeClass* BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HelperMethods_tF794A64CE21A4C293EF6848144CEA37A7D926AE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LockOnManager_tC44F3665659845C6B4B74C0044FB68513D1D2CAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneDataRetainer_tDC5BF2B9D42AA0F469B4B9312A2CEA24F1F4A8C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaveSpawnerU3Ed__21_t2CE338B394097B889D892CB0C000CC35E9AB5A25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnpauseGameEvent_tF8B3717899C31909A04021E3B7B30BC2CD7C1406_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UpgradeType_tD83A19CDA609103A6CA3E9CB57471EB9834E9763_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3CDF2936DA2FC556BFA533AB1EB59CE710AC80E5;
IL2CPP_EXTERN_C String_t* _stringLiteral48BB4CCC1851FDF5A40944978528D0D811AAA079;
IL2CPP_EXTERN_C String_t* _stringLiteral7B186E235F284107DF6B4DBE6060D2B6A5D9F1E5;
IL2CPP_EXTERN_C String_t* _stringLiteral8C93DD1F29227CB702A2949C2AAFD2109BDA692B;
IL2CPP_EXTERN_C String_t* _stringLiteralBED51C02D4697D4220C3FE6C1492ADC79364BBF8;
IL2CPP_EXTERN_C String_t* _stringLiteralC7F90D3E2CFE0AD65BDE6BA16574268311B02D07;
IL2CPP_EXTERN_C String_t* _stringLiteralD8CDB573350DE78596E4852BC9CACFC94E8D17ED;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98_mDDED64410FBCD4345197F977C4C636ED8D9E1862_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2813644ACEECB35DAC617DA72E03AA151ADEBC1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2F098739DB5189DB8882D85812DDC945FDC4381E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB2BD36D116535B3FD78BD644C1A9D64B77D78908_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisTextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_m4CE477F96983D518A70384D2D73CA1540C4CDE62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98_mEBF0A5AB64E72A07FCC9DE2051D8085AA34F39D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5_mD121EF1455C0C0F9868B4E75912627E0D6582ACB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemyAmbusher_t9182D45D5CED1FC31D7BE1FDC49E6A42D37E9567_mADE479D57DB58A56D036850B5BDCBFDD85F28D1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F_m185C70C01C6A98844C6DA396B9FF9205EC35C205_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemyFlying_tAA8D6943B40B4DDD10EDE48626EAC94BF965463C_mA8E7F91CD72C927CC9429CDD5B00B67E584E12BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemyMelee_t2481A9E094840C4F79E9A7FD0F7FCD493A2DA012_m8B35CC903DDC9BF51F9B736FAB552D3AFA6F1AFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemyRanged_t55401E0A01EBBDF001EFAC55C30255FD83E810ED_m5DDC5082CBBB1C8B001FCBF65C21F5361E93A63C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerBase_t78C7F5333ACAFFE352C61B60F683F32363A70B4E_m989D72DB73AC781B8F6BC2C5A15743974886F7D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTurretElectricFence_t8802834981F4B4FBE7E88F186516E8EE690B29BB_mF5A9A54FB25C91FFA035C2D95103AE58A8616D39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTurretExcavator_t001FFF47594E9C24A7F31DD9E9C86C7CA923331D_mEA084C222DE53EAB428B995C0ED5E4634BA1CA63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTurretMachineCannon_t2C32689BFD88BBFB3381B49C932C9DEA0158259D_mA337480AEABB367DDE874085414037F618C330B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTurretMachineGun_t8A92F40FBBDC488B54284FFF5FEEC92CEA48818C_mE1C0FA8FC105E13B8A4CB02144494633C4FB77FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTurretRailgun_t71400EE018F6A7159144942B33599565CE4F05FD_mABF3104A822CBA2B6890F2FD0215DEFDC481753A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTurretVulkan_tE60C25A88F22EA33484804BED57F7ED0B8614665_m56A577C4DFB52CF96A1CAF5623E0205336538075_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HelperMethods_Shuffle_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mAD11E41C30D5AED71DF7F7BB7340CC7C163EB01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HelperMethods_Shuffle_TisHexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580_m181E9906675504BC65C9D2A8E0B671EADD01B66C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEF74AAEA759F8E3425CF1B087CC096D016CC2C10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6A7E6B48CFEF309A2F13AC78FFEA7EEE92908FEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m5CC4AD52FC4DFB350A9097AAF59BDE15076E035D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m23BDA1112566B2E9149D885E4061EA3063EEDA60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m26EC8457AE25886A5FBF1408B6BD0125004330F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7145EDAA2AF16164459A6546A42805AD13260A9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9C1B1A3A565196DE22D197A9BC1F33552B7348EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6F172C4530A046588461DFCDEC1BF0BBD463F5C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB59D528B0017953D5CB28B8B9BE96CD8EB324FB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisCommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706_m774E098A79CDABD816AC5917A7DC1217E142B8A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisHexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF_m1C3ABA20749165939594D5BF593EBD4679D577AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisSceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F_mF24DC407E9881D70916EE28BC837E8208A1BE707_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaveSpawnerU3Ed__21_System_Collections_IEnumerator_Reset_m07514378B7FF493863D653BC51D8E75CDFE3246B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveManager_OnResumeGame_mF648BC96990129AFFF2E0B97CCB3F445ED799F90_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t LockOnManager_get_SelectedEnemy_m7369E961F04C315C52362153FE0651F323BA2E0BAssemblyU2DCSharp1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretBuildManager_Awake_m579C5678976EB15D56AC529B5C9B6C21BFC83A5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretBuildManager_SelectHexagon_mE236D0CCC140FA4421B78E6F17C9425975E0E803_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretBuildManager_SelectTurret_mE54124F5BFCCF68138E00FFA960033B9E83DDE8E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretBuildManager_Start_m1A77D99F2EB495DE9AF3E62A92ECCA1EB26610E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretBuildManager_Update_m7A2CC0F35A87C00513790061CE7A01BDB2D3790D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretBuildManager__BuildTurret_mD59EBC2A33968AEFA9901A4AD1C6AB28F2A397B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretBuildManager__RepairTurret_mE400560B3F4A48867345D26DB0BA2C5633BFA310_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretBuildManager__SellTurret_mCEE2CCF2FE21267521958526F58B3EE83DEEA9F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretBuildManager__UpgradeTurret_m09B6412CCF064BD3146391D2552FF7E88CA59001_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretBuildManager_set_Money_mCE514B684D28E883848FA914C34F2501AEC5FAEA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretElectricFence_Attack_m6AFDC3C9CE6002CA58FA117AFA20E565DC98579A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretElectricFence_FindTarget_m239528AD86662BE771D5D8E5A787FDA4D41A3922_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretElectricFence_Update_mF5CB5CF546A9388678D97816DA0F94BD80EDE2D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretExcavator_Start_m46EF037B1E6FE436F43D064FCD0C74775BDE4F75_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretExcavator_Update_m9DE35E427902EF0A160C49844A4C7D7DE02D2E83_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretMachineCannon_Attack_m45F30EB7A574FE2D748428A0561FB4C9E83F4A59_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretMachineCannon_FindTarget_mBDB7FEA2BDEBF99E18D84D717297A66C5DDD08D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretMachineCannon_Update_mF317F0CAECC185E899BC2B1520B8FFEDE94C671A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretMachineGun_Attack_m4643157D53C01D5758494D7E416735BB55D01D68_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretMachineGun_FindTarget_m229269333553572AC9004332D3DF99641B637E4B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretMachineGun_Update_m5B90E21E5A181AB6F6F06E109FCDC550C2EEC00B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretRailgun_Attack_mCE726329142D06552ABDED8E1738E004B7BABA09_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretRailgun_FindTarget_mD2396735100B35E602E6A5E6D9F23DCAA44AE946_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretRailgun_Update_mECF16A35F9C7D99CD98E046E0A530D528D9E341A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretVulkan_Attack_mEBFB342E28C3C85ABAB3565299E574C094B1D5CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretVulkan_FindTarget_m6D754723D75BDEFAACAF0EF825007293E68513CB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TurretVulkan_Update_m842BBADD1AF6510FE7D0EF79044B7FA15A7C510F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CWaveSpawnerU3Ed__21_MoveNext_mE06FDE8C7A82234D71F7A6DAB36653EDF7374E24_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CWaveSpawnerU3Ed__21_System_Collections_IEnumerator_Reset_m07514378B7FF493863D653BC51D8E75CDFE3246B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIUpgradeRow_CalculateCost_m1127E6158750E1C92DC5C3316B2389A686B22572_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIUpgradeRow_Init_m85A188046E2D1D1255C68F33B9558C99480E4BCA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveManager_Awake_mA0ED3904596DBF0DD862FE555C4D35FD7B7C5533_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveManager_FindSpawnPoints_mFC3B3E57F871A7706C3ECCF775BDA036D5ADF0F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveManager_Init_m5C7967C0C41FF4AC629A251963EEA7F384062D3C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveManager_OnResumeGame_mF648BC96990129AFFF2E0B97CCB3F445ED799F90_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveManager_SpawnEnemy_mDF86640AA87C3672926F0A8975D08F5A70F36706_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveManager_Start_m333BCF2BC0B91B1A6437E8752B87DE8439776F05_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveManager_Update_m2DC0DCD16EA71D939C92040D5043AFAD62BDD947_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveManager_WaveSpawner_m555E275C062BA1B5C2835386259EDBD316E105B5_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EnemySpawnU5BU5D_t8B90BAE714E41597260C23FFE5A27D99876D982E;
struct PermanentUpgradeU5BU5D_t6C13DE4C6C8D4B652FA96134A7A9BF4D3E48F6DC;
struct WaveScriptableU5BU5D_t6A3A20CA18EE7F4286348D3DEF3FBC3358EE3D83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct TextMeshProUGUIU5BU5D_t630DB598E90AE8903F6A17F1C02F182796A49130;
struct ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252;
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
struct ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// SerenityGarden.EnemySpawn
struct  EnemySpawn_tAD5AE60DDE30CB98B3287B4BA0AAA09873B53251  : public RuntimeObject
{
public:
	// UnityEngine.GameObject SerenityGarden.EnemySpawn::enemy
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___enemy_0;
	// System.Int32 SerenityGarden.EnemySpawn::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_enemy_0() { return static_cast<int32_t>(offsetof(EnemySpawn_tAD5AE60DDE30CB98B3287B4BA0AAA09873B53251, ___enemy_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_enemy_0() const { return ___enemy_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_enemy_0() { return &___enemy_0; }
	inline void set_enemy_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___enemy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemy_0), (void*)value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(EnemySpawn_tAD5AE60DDE30CB98B3287B4BA0AAA09873B53251, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};


// SerenityGarden.TurretLevel
struct  TurretLevel_t84FC9A4C36E5DD3A1FDA61745215D4AE17F09645  : public RuntimeObject
{
public:
	// System.Single SerenityGarden.TurretLevel::health
	float ___health_0;
	// System.Single SerenityGarden.TurretLevel::damage
	float ___damage_1;
	// System.Single SerenityGarden.TurretLevel::attackCooldown
	float ___attackCooldown_2;
	// System.Single SerenityGarden.TurretLevel::range
	float ___range_3;
	// System.Int32 SerenityGarden.TurretLevel::upgradeCost
	int32_t ___upgradeCost_4;
	// System.Int32 SerenityGarden.TurretLevel::sellReward
	int32_t ___sellReward_5;
	// UnityEngine.GameObject SerenityGarden.TurretLevel::gfx
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gfx_6;

public:
	inline static int32_t get_offset_of_health_0() { return static_cast<int32_t>(offsetof(TurretLevel_t84FC9A4C36E5DD3A1FDA61745215D4AE17F09645, ___health_0)); }
	inline float get_health_0() const { return ___health_0; }
	inline float* get_address_of_health_0() { return &___health_0; }
	inline void set_health_0(float value)
	{
		___health_0 = value;
	}

	inline static int32_t get_offset_of_damage_1() { return static_cast<int32_t>(offsetof(TurretLevel_t84FC9A4C36E5DD3A1FDA61745215D4AE17F09645, ___damage_1)); }
	inline float get_damage_1() const { return ___damage_1; }
	inline float* get_address_of_damage_1() { return &___damage_1; }
	inline void set_damage_1(float value)
	{
		___damage_1 = value;
	}

	inline static int32_t get_offset_of_attackCooldown_2() { return static_cast<int32_t>(offsetof(TurretLevel_t84FC9A4C36E5DD3A1FDA61745215D4AE17F09645, ___attackCooldown_2)); }
	inline float get_attackCooldown_2() const { return ___attackCooldown_2; }
	inline float* get_address_of_attackCooldown_2() { return &___attackCooldown_2; }
	inline void set_attackCooldown_2(float value)
	{
		___attackCooldown_2 = value;
	}

	inline static int32_t get_offset_of_range_3() { return static_cast<int32_t>(offsetof(TurretLevel_t84FC9A4C36E5DD3A1FDA61745215D4AE17F09645, ___range_3)); }
	inline float get_range_3() const { return ___range_3; }
	inline float* get_address_of_range_3() { return &___range_3; }
	inline void set_range_3(float value)
	{
		___range_3 = value;
	}

	inline static int32_t get_offset_of_upgradeCost_4() { return static_cast<int32_t>(offsetof(TurretLevel_t84FC9A4C36E5DD3A1FDA61745215D4AE17F09645, ___upgradeCost_4)); }
	inline int32_t get_upgradeCost_4() const { return ___upgradeCost_4; }
	inline int32_t* get_address_of_upgradeCost_4() { return &___upgradeCost_4; }
	inline void set_upgradeCost_4(int32_t value)
	{
		___upgradeCost_4 = value;
	}

	inline static int32_t get_offset_of_sellReward_5() { return static_cast<int32_t>(offsetof(TurretLevel_t84FC9A4C36E5DD3A1FDA61745215D4AE17F09645, ___sellReward_5)); }
	inline int32_t get_sellReward_5() const { return ___sellReward_5; }
	inline int32_t* get_address_of_sellReward_5() { return &___sellReward_5; }
	inline void set_sellReward_5(int32_t value)
	{
		___sellReward_5 = value;
	}

	inline static int32_t get_offset_of_gfx_6() { return static_cast<int32_t>(offsetof(TurretLevel_t84FC9A4C36E5DD3A1FDA61745215D4AE17F09645, ___gfx_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_gfx_6() const { return ___gfx_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_gfx_6() { return &___gfx_6; }
	inline void set_gfx_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___gfx_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gfx_6), (void*)value);
	}
};


// SerenityGarden.WaveManager/<WaveSpawner>d__21
struct  U3CWaveSpawnerU3Ed__21_t2CE338B394097B889D892CB0C000CC35E9AB5A25  : public RuntimeObject
{
public:
	// System.Int32 SerenityGarden.WaveManager/<WaveSpawner>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SerenityGarden.WaveManager/<WaveSpawner>d__21::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// SerenityGarden.WaveManager SerenityGarden.WaveManager/<WaveSpawner>d__21::<>4__this
	WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * ___U3CU3E4__this_2;
	// SerenityGarden.WaveScriptable SerenityGarden.WaveManager/<WaveSpawner>d__21::wave
	WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC * ___wave_3;
	// System.Collections.Generic.List`1<SerenityGarden.HexagonalBlock> SerenityGarden.WaveManager/<WaveSpawner>d__21::<targetSpawnPoints>5__2
	List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * ___U3CtargetSpawnPointsU3E5__2_4;
	// SerenityGarden.EnemySpawn[] SerenityGarden.WaveManager/<WaveSpawner>d__21::<>7__wrap2
	EnemySpawnU5BU5D_t8B90BAE714E41597260C23FFE5A27D99876D982E* ___U3CU3E7__wrap2_5;
	// System.Int32 SerenityGarden.WaveManager/<WaveSpawner>d__21::<>7__wrap3
	int32_t ___U3CU3E7__wrap3_6;
	// SerenityGarden.EnemySpawn SerenityGarden.WaveManager/<WaveSpawner>d__21::<item>5__5
	EnemySpawn_tAD5AE60DDE30CB98B3287B4BA0AAA09873B53251 * ___U3CitemU3E5__5_7;
	// System.Int32 SerenityGarden.WaveManager/<WaveSpawner>d__21::<index>5__6
	int32_t ___U3CindexU3E5__6_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SerenityGarden.WaveManager/<WaveSpawner>d__21::<enemyToSpawn>5__7
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___U3CenemyToSpawnU3E5__7_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaveSpawnerU3Ed__21_t2CE338B394097B889D892CB0C000CC35E9AB5A25, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaveSpawnerU3Ed__21_t2CE338B394097B889D892CB0C000CC35E9AB5A25, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaveSpawnerU3Ed__21_t2CE338B394097B889D892CB0C000CC35E9AB5A25, ___U3CU3E4__this_2)); }
	inline WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_wave_3() { return static_cast<int32_t>(offsetof(U3CWaveSpawnerU3Ed__21_t2CE338B394097B889D892CB0C000CC35E9AB5A25, ___wave_3)); }
	inline WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC * get_wave_3() const { return ___wave_3; }
	inline WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC ** get_address_of_wave_3() { return &___wave_3; }
	inline void set_wave_3(WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC * value)
	{
		___wave_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wave_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtargetSpawnPointsU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CWaveSpawnerU3Ed__21_t2CE338B394097B889D892CB0C000CC35E9AB5A25, ___U3CtargetSpawnPointsU3E5__2_4)); }
	inline List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * get_U3CtargetSpawnPointsU3E5__2_4() const { return ___U3CtargetSpawnPointsU3E5__2_4; }
	inline List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 ** get_address_of_U3CtargetSpawnPointsU3E5__2_4() { return &___U3CtargetSpawnPointsU3E5__2_4; }
	inline void set_U3CtargetSpawnPointsU3E5__2_4(List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * value)
	{
		___U3CtargetSpawnPointsU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtargetSpawnPointsU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_5() { return static_cast<int32_t>(offsetof(U3CWaveSpawnerU3Ed__21_t2CE338B394097B889D892CB0C000CC35E9AB5A25, ___U3CU3E7__wrap2_5)); }
	inline EnemySpawnU5BU5D_t8B90BAE714E41597260C23FFE5A27D99876D982E* get_U3CU3E7__wrap2_5() const { return ___U3CU3E7__wrap2_5; }
	inline EnemySpawnU5BU5D_t8B90BAE714E41597260C23FFE5A27D99876D982E** get_address_of_U3CU3E7__wrap2_5() { return &___U3CU3E7__wrap2_5; }
	inline void set_U3CU3E7__wrap2_5(EnemySpawnU5BU5D_t8B90BAE714E41597260C23FFE5A27D99876D982E* value)
	{
		___U3CU3E7__wrap2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_6() { return static_cast<int32_t>(offsetof(U3CWaveSpawnerU3Ed__21_t2CE338B394097B889D892CB0C000CC35E9AB5A25, ___U3CU3E7__wrap3_6)); }
	inline int32_t get_U3CU3E7__wrap3_6() const { return ___U3CU3E7__wrap3_6; }
	inline int32_t* get_address_of_U3CU3E7__wrap3_6() { return &___U3CU3E7__wrap3_6; }
	inline void set_U3CU3E7__wrap3_6(int32_t value)
	{
		___U3CU3E7__wrap3_6 = value;
	}

	inline static int32_t get_offset_of_U3CitemU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CWaveSpawnerU3Ed__21_t2CE338B394097B889D892CB0C000CC35E9AB5A25, ___U3CitemU3E5__5_7)); }
	inline EnemySpawn_tAD5AE60DDE30CB98B3287B4BA0AAA09873B53251 * get_U3CitemU3E5__5_7() const { return ___U3CitemU3E5__5_7; }
	inline EnemySpawn_tAD5AE60DDE30CB98B3287B4BA0AAA09873B53251 ** get_address_of_U3CitemU3E5__5_7() { return &___U3CitemU3E5__5_7; }
	inline void set_U3CitemU3E5__5_7(EnemySpawn_tAD5AE60DDE30CB98B3287B4BA0AAA09873B53251 * value)
	{
		___U3CitemU3E5__5_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CitemU3E5__5_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CindexU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CWaveSpawnerU3Ed__21_t2CE338B394097B889D892CB0C000CC35E9AB5A25, ___U3CindexU3E5__6_8)); }
	inline int32_t get_U3CindexU3E5__6_8() const { return ___U3CindexU3E5__6_8; }
	inline int32_t* get_address_of_U3CindexU3E5__6_8() { return &___U3CindexU3E5__6_8; }
	inline void set_U3CindexU3E5__6_8(int32_t value)
	{
		___U3CindexU3E5__6_8 = value;
	}

	inline static int32_t get_offset_of_U3CenemyToSpawnU3E5__7_9() { return static_cast<int32_t>(offsetof(U3CWaveSpawnerU3Ed__21_t2CE338B394097B889D892CB0C000CC35E9AB5A25, ___U3CenemyToSpawnU3E5__7_9)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_U3CenemyToSpawnU3E5__7_9() const { return ___U3CenemyToSpawnU3E5__7_9; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_U3CenemyToSpawnU3E5__7_9() { return &___U3CenemyToSpawnU3E5__7_9; }
	inline void set_U3CenemyToSpawnU3E5__7_9(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___U3CenemyToSpawnU3E5__7_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CenemyToSpawnU3E5__7_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<SerenityGarden.HexagonalBlock>
struct  List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	HexagonalBlockU5BU5D_tE15E926CFFE45E90AB569258E728CA12EE135B77* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644, ____items_1)); }
	inline HexagonalBlockU5BU5D_tE15E926CFFE45E90AB569258E728CA12EE135B77* get__items_1() const { return ____items_1; }
	inline HexagonalBlockU5BU5D_tE15E926CFFE45E90AB569258E728CA12EE135B77** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(HexagonalBlockU5BU5D_tE15E926CFFE45E90AB569258E728CA12EE135B77* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	HexagonalBlockU5BU5D_tE15E926CFFE45E90AB569258E728CA12EE135B77* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644_StaticFields, ____emptyArray_5)); }
	inline HexagonalBlockU5BU5D_tE15E926CFFE45E90AB569258E728CA12EE135B77* get__emptyArray_5() const { return ____emptyArray_5; }
	inline HexagonalBlockU5BU5D_tE15E926CFFE45E90AB569258E728CA12EE135B77** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(HexagonalBlockU5BU5D_tE15E926CFFE45E90AB569258E728CA12EE135B77* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0, ____items_1)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<SerenityGarden.HexagonalBlock>
struct  Enumerator_t46B753E212405AEC64A15AC021C802D63445A3BB 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t46B753E212405AEC64A15AC021C802D63445A3BB, ___list_0)); }
	inline List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * get_list_0() const { return ___list_0; }
	inline List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t46B753E212405AEC64A15AC021C802D63445A3BB, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t46B753E212405AEC64A15AC021C802D63445A3BB, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t46B753E212405AEC64A15AC021C802D63445A3BB, ___current_3)); }
	inline HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * get_current_3() const { return ___current_3; }
	inline HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// TMPro.MaterialReference
struct  MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___fontAsset_1)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___material_3)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_material_3() const { return ___material_3; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___fallbackMaterial_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// TMPro.TMP_FontStyleStack
struct  TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 
{
public:
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};


// TMPro.TMP_Offset
struct  TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA 
{
public:
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;

public:
	inline static int32_t get_offset_of_m_Left_0() { return static_cast<int32_t>(offsetof(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA, ___m_Left_0)); }
	inline float get_m_Left_0() const { return ___m_Left_0; }
	inline float* get_address_of_m_Left_0() { return &___m_Left_0; }
	inline void set_m_Left_0(float value)
	{
		___m_Left_0 = value;
	}

	inline static int32_t get_offset_of_m_Right_1() { return static_cast<int32_t>(offsetof(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA, ___m_Right_1)); }
	inline float get_m_Right_1() const { return ___m_Right_1; }
	inline float* get_address_of_m_Right_1() { return &___m_Right_1; }
	inline void set_m_Right_1(float value)
	{
		___m_Right_1 = value;
	}

	inline static int32_t get_offset_of_m_Top_2() { return static_cast<int32_t>(offsetof(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA, ___m_Top_2)); }
	inline float get_m_Top_2() const { return ___m_Top_2; }
	inline float* get_address_of_m_Top_2() { return &___m_Top_2; }
	inline void set_m_Top_2(float value)
	{
		___m_Top_2 = value;
	}

	inline static int32_t get_offset_of_m_Bottom_3() { return static_cast<int32_t>(offsetof(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA, ___m_Bottom_3)); }
	inline float get_m_Bottom_3() const { return ___m_Bottom_3; }
	inline float* get_address_of_m_Bottom_3() { return &___m_Bottom_3; }
	inline void set_m_Bottom_3(float value)
	{
		___m_Bottom_3 = value;
	}
};

struct TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA_StaticFields
{
public:
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  ___k_ZeroOffset_4;

public:
	inline static int32_t get_offset_of_k_ZeroOffset_4() { return static_cast<int32_t>(offsetof(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA_StaticFields, ___k_ZeroOffset_4)); }
	inline TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  get_k_ZeroOffset_4() const { return ___k_ZeroOffset_4; }
	inline TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA * get_address_of_k_ZeroOffset_4() { return &___k_ZeroOffset_4; }
	inline void set_k_ZeroOffset_4(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  value)
	{
		___k_ZeroOffset_4 = value;
	}
};


// TMPro.TMP_Text/SpecialCharacter
struct  SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF 
{
public:
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF, ___character_0)); }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D * get_character_0() const { return ___character_0; }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D ** get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(TMP_Character_t1875AACA978396521498D6A699052C187903553D * value)
	{
		___character_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_0), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF, ___fontAsset_1)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF, ___material_2)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_material_2() const { return ___material_2; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_2), (void*)value);
	}

	inline static int32_t get_offset_of_materialIndex_3() { return static_cast<int32_t>(offsetof(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF, ___materialIndex_3)); }
	inline int32_t get_materialIndex_3() const { return ___materialIndex_3; }
	inline int32_t* get_address_of_materialIndex_3() { return &___materialIndex_3; }
	inline void set_materialIndex_3(int32_t value)
	{
		___materialIndex_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF_marshaled_pinvoke
{
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___character_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF_marshaled_com
{
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___character_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct  TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06, ___itemStack_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_itemStack_0() const { return ___itemStack_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Single>
struct  TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA, ___itemStack_0)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_itemStack_0() const { return ___itemStack_0; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA, ___m_DefaultItem_2)); }
	inline float get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline float* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(float value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct  TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___itemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* get_itemStack_0() const { return ___itemStack_0; }
	inline TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___m_DefaultItem_2)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultItem_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_SelectedSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_3)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};

// SerenityGarden.EnemyType
struct  EnemyType_tABD7717A5899EEE7EAA6805407F0C81936A41EBA 
{
public:
	// System.Int32 SerenityGarden.EnemyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EnemyType_tABD7717A5899EEE7EAA6805407F0C81936A41EBA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SerenityGarden.HexagonType
struct  HexagonType_t66470D2F8F9C46E87A982B2E4C64CDF788FB3214 
{
public:
	// System.Int32 SerenityGarden.HexagonType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HexagonType_t66470D2F8F9C46E87A982B2E4C64CDF788FB3214, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SerenityGarden.PhotonObj
struct  PhotonObj_tA2B8C4FACA0866B8CD1A9214C85C62B2B95C0E0B 
{
public:
	// System.Int32 SerenityGarden.PhotonObj::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PhotonObj_tA2B8C4FACA0866B8CD1A9214C85C62B2B95C0E0B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SerenityGarden.SpawnPointsID
struct  SpawnPointsID_t03092B983E73C97F7F66C508EAA4C3961CDE0A81 
{
public:
	// System.Int32 SerenityGarden.SpawnPointsID::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpawnPointsID_t03092B983E73C97F7F66C508EAA4C3961CDE0A81, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SerenityGarden.TurretType
struct  TurretType_t991276265CC67E14BC468F85BE01B5F4BFC9603E 
{
public:
	// System.Int32 SerenityGarden.TurretType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TurretType_t991276265CC67E14BC468F85BE01B5F4BFC9603E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SerenityGarden.UpgradeType
struct  UpgradeType_tD83A19CDA609103A6CA3E9CB57471EB9834E9763 
{
public:
	// System.Int32 SerenityGarden.UpgradeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpgradeType_tD83A19CDA609103A6CA3E9CB57471EB9834E9763, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// TMPro.ColorMode
struct  ColorMode_tA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_tA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.Extents
struct  Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___max_3;

public:
	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3, ___min_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_min_2() const { return ___min_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___min_2 = value;
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3, ___max_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_max_3() const { return ___max_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___max_3 = value;
	}
};

struct Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3_StaticFields
{
public:
	// TMPro.Extents TMPro.Extents::zero
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___uninitialized_1;

public:
	inline static int32_t get_offset_of_zero_0() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3_StaticFields, ___zero_0)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_zero_0() const { return ___zero_0; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_zero_0() { return &___zero_0; }
	inline void set_zero_0(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___zero_0 = value;
	}

	inline static int32_t get_offset_of_uninitialized_1() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3_StaticFields, ___uninitialized_1)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_uninitialized_1() const { return ___uninitialized_1; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_uninitialized_1() { return &___uninitialized_1; }
	inline void set_uninitialized_1(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___uninitialized_1 = value;
	}
};


// TMPro.FontStyles
struct  FontStyles_t31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_t31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.FontWeight
struct  FontWeight_tE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.HighlightState
struct  HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601 
{
public:
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  ___padding_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601, ___color_0)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_color_0() const { return ___color_0; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_padding_1() { return static_cast<int32_t>(offsetof(HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601, ___padding_1)); }
	inline TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  get_padding_1() const { return ___padding_1; }
	inline TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA * get_address_of_padding_1() { return &___padding_1; }
	inline void set_padding_1(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  value)
	{
		___padding_1 = value;
	}
};


// TMPro.HorizontalAlignmentOptions
struct  HorizontalAlignmentOptions_tC75AF4FA369C73A4CDEF3AA5C313BA8576DB516F 
{
public:
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HorizontalAlignmentOptions_tC75AF4FA369C73A4CDEF3AA5C313BA8576DB516F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_Text/TextInputSources
struct  TextInputSources_t08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4 
{
public:
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextElementType
struct  TMP_TextElementType_tBF2553FA730CC21CF99473E591C33DC52360D509 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_tBF2553FA730CC21CF99473E591C33DC52360D509, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct  TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___itemStack_0)); }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* get_itemStack_0() const { return ___itemStack_0; }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___m_DefaultItem_2)); }
	inline MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct  TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___itemStack_0)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get_itemStack_0() const { return ___itemStack_0; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___m_DefaultItem_2)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TextAlignmentOptions
struct  TextAlignmentOptions_t4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextOverflowModes
struct  TextOverflowModes_tC4F820014333ECAF4D52B02F75171FD9E52B9D76 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_tC4F820014333ECAF4D52B02F75171FD9E52B9D76, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextRenderFlags
struct  TextRenderFlags_t29165355D5674BAEF40359B740631503FA9C0B56 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_t29165355D5674BAEF40359B740631503FA9C0B56, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextureMappingOptions
struct  TextureMappingOptions_tAC77A218D6DF5F386DA38AEAF3D9C943F084BD10 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_tAC77A218D6DF5F386DA38AEAF3D9C943F084BD10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VertexGradient
struct  VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___topLeft_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___topRight_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_topRight_1() const { return ___topRight_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___bottomLeft_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___bottomRight_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___bottomRight_3 = value;
	}
};


// TMPro.VertexSortingOrder
struct  VertexSortingOrder_t2571FF911BB69CC1CC229DF12DE68568E3F850E5 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t2571FF911BB69CC1CC229DF12DE68568E3F850E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VerticalAlignmentOptions
struct  VerticalAlignmentOptions_t52EA4E859AFA2147B9B1433C87D5CE5FE568FFB6 
{
public:
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VerticalAlignmentOptions_t52EA4E859AFA2147B9B1433C87D5CE5FE568FFB6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_SelectedColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct  FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct  Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct  Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct  Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SerenityGarden.PermanentUpgrade
struct  PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160  : public RuntimeObject
{
public:
	// SerenityGarden.UpgradeType SerenityGarden.PermanentUpgrade::type
	int32_t ___type_0;
	// System.Single SerenityGarden.PermanentUpgrade::minMultiplier
	float ___minMultiplier_1;
	// System.Single SerenityGarden.PermanentUpgrade::maxMultiplier
	float ___maxMultiplier_2;
	// System.Int32 SerenityGarden.PermanentUpgrade::startCost
	int32_t ___startCost_3;
	// System.Single SerenityGarden.PermanentUpgrade::costMultiplierPerLevel
	float ___costMultiplierPerLevel_4;
	// System.Int32 SerenityGarden.PermanentUpgrade::currentLevel
	int32_t ___currentLevel_5;
	// System.Int32 SerenityGarden.PermanentUpgrade::maxLevel
	int32_t ___maxLevel_6;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_minMultiplier_1() { return static_cast<int32_t>(offsetof(PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160, ___minMultiplier_1)); }
	inline float get_minMultiplier_1() const { return ___minMultiplier_1; }
	inline float* get_address_of_minMultiplier_1() { return &___minMultiplier_1; }
	inline void set_minMultiplier_1(float value)
	{
		___minMultiplier_1 = value;
	}

	inline static int32_t get_offset_of_maxMultiplier_2() { return static_cast<int32_t>(offsetof(PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160, ___maxMultiplier_2)); }
	inline float get_maxMultiplier_2() const { return ___maxMultiplier_2; }
	inline float* get_address_of_maxMultiplier_2() { return &___maxMultiplier_2; }
	inline void set_maxMultiplier_2(float value)
	{
		___maxMultiplier_2 = value;
	}

	inline static int32_t get_offset_of_startCost_3() { return static_cast<int32_t>(offsetof(PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160, ___startCost_3)); }
	inline int32_t get_startCost_3() const { return ___startCost_3; }
	inline int32_t* get_address_of_startCost_3() { return &___startCost_3; }
	inline void set_startCost_3(int32_t value)
	{
		___startCost_3 = value;
	}

	inline static int32_t get_offset_of_costMultiplierPerLevel_4() { return static_cast<int32_t>(offsetof(PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160, ___costMultiplierPerLevel_4)); }
	inline float get_costMultiplierPerLevel_4() const { return ___costMultiplierPerLevel_4; }
	inline float* get_address_of_costMultiplierPerLevel_4() { return &___costMultiplierPerLevel_4; }
	inline void set_costMultiplierPerLevel_4(float value)
	{
		___costMultiplierPerLevel_4 = value;
	}

	inline static int32_t get_offset_of_currentLevel_5() { return static_cast<int32_t>(offsetof(PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160, ___currentLevel_5)); }
	inline int32_t get_currentLevel_5() const { return ___currentLevel_5; }
	inline int32_t* get_address_of_currentLevel_5() { return &___currentLevel_5; }
	inline void set_currentLevel_5(int32_t value)
	{
		___currentLevel_5 = value;
	}

	inline static int32_t get_offset_of_maxLevel_6() { return static_cast<int32_t>(offsetof(PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160, ___maxLevel_6)); }
	inline int32_t get_maxLevel_6() const { return ___maxLevel_6; }
	inline int32_t* get_address_of_maxLevel_6() { return &___maxLevel_6; }
	inline void set_maxLevel_6(int32_t value)
	{
		___maxLevel_6 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// TMPro.TMP_LineInfo
struct  TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 
{
public:
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lineExtents_19)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___lineExtents_19 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct  TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___itemStack_0)); }
	inline FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* get_itemStack_0() const { return ___itemStack_0; }
	inline FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct  TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_t3D406BC30294F6C79CA548107716A642055062CE* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___itemStack_0)); }
	inline HighlightStateU5BU5D_t3D406BC30294F6C79CA548107716A642055062CE* get_itemStack_0() const { return ___itemStack_0; }
	inline HighlightStateU5BU5D_t3D406BC30294F6C79CA548107716A642055062CE** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HighlightStateU5BU5D_t3D406BC30294F6C79CA548107716A642055062CE* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___m_DefaultItem_2)); }
	inline HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct  TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t9FFF9E8A3B0E6A173F18EF9C847BCF27D1BF4ACB* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___itemStack_0)); }
	inline HorizontalAlignmentOptionsU5BU5D_t9FFF9E8A3B0E6A173F18EF9C847BCF27D1BF4ACB* get_itemStack_0() const { return ___itemStack_0; }
	inline HorizontalAlignmentOptionsU5BU5D_t9FFF9E8A3B0E6A173F18EF9C847BCF27D1BF4ACB** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HorizontalAlignmentOptionsU5BU5D_t9FFF9E8A3B0E6A173F18EF9C847BCF27D1BF4ACB* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.UI.Navigation
struct  Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};

// SerenityGarden.GamePauseManager/UnpauseGameEvent
struct  UnpauseGameEvent_tF8B3717899C31909A04021E3B7B30BC2CD7C1406  : public MulticastDelegate_t
{
public:

public:
};


// SerenityGarden.StageScriptable
struct  StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.String SerenityGarden.StageScriptable::stageName
	String_t* ___stageName_4;
	// System.String SerenityGarden.StageScriptable::stageFilePath
	String_t* ___stageFilePath_5;
	// UnityEngine.GameObject SerenityGarden.StageScriptable::mapObj
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___mapObj_6;
	// SerenityGarden.WaveScriptable[] SerenityGarden.StageScriptable::waves
	WaveScriptableU5BU5D_t6A3A20CA18EE7F4286348D3DEF3FBC3358EE3D83* ___waves_7;
	// System.Boolean SerenityGarden.StageScriptable::isBossStage
	bool ___isBossStage_8;
	// System.Int32 SerenityGarden.StageScriptable::baseReward
	int32_t ___baseReward_9;
	// System.Int32 SerenityGarden.StageScriptable::starRanking
	int32_t ___starRanking_10;
	// System.Int32 SerenityGarden.StageScriptable::rewardPerStar
	int32_t ___rewardPerStar_11;

public:
	inline static int32_t get_offset_of_stageName_4() { return static_cast<int32_t>(offsetof(StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050, ___stageName_4)); }
	inline String_t* get_stageName_4() const { return ___stageName_4; }
	inline String_t** get_address_of_stageName_4() { return &___stageName_4; }
	inline void set_stageName_4(String_t* value)
	{
		___stageName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stageName_4), (void*)value);
	}

	inline static int32_t get_offset_of_stageFilePath_5() { return static_cast<int32_t>(offsetof(StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050, ___stageFilePath_5)); }
	inline String_t* get_stageFilePath_5() const { return ___stageFilePath_5; }
	inline String_t** get_address_of_stageFilePath_5() { return &___stageFilePath_5; }
	inline void set_stageFilePath_5(String_t* value)
	{
		___stageFilePath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stageFilePath_5), (void*)value);
	}

	inline static int32_t get_offset_of_mapObj_6() { return static_cast<int32_t>(offsetof(StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050, ___mapObj_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_mapObj_6() const { return ___mapObj_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_mapObj_6() { return &___mapObj_6; }
	inline void set_mapObj_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___mapObj_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mapObj_6), (void*)value);
	}

	inline static int32_t get_offset_of_waves_7() { return static_cast<int32_t>(offsetof(StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050, ___waves_7)); }
	inline WaveScriptableU5BU5D_t6A3A20CA18EE7F4286348D3DEF3FBC3358EE3D83* get_waves_7() const { return ___waves_7; }
	inline WaveScriptableU5BU5D_t6A3A20CA18EE7F4286348D3DEF3FBC3358EE3D83** get_address_of_waves_7() { return &___waves_7; }
	inline void set_waves_7(WaveScriptableU5BU5D_t6A3A20CA18EE7F4286348D3DEF3FBC3358EE3D83* value)
	{
		___waves_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waves_7), (void*)value);
	}

	inline static int32_t get_offset_of_isBossStage_8() { return static_cast<int32_t>(offsetof(StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050, ___isBossStage_8)); }
	inline bool get_isBossStage_8() const { return ___isBossStage_8; }
	inline bool* get_address_of_isBossStage_8() { return &___isBossStage_8; }
	inline void set_isBossStage_8(bool value)
	{
		___isBossStage_8 = value;
	}

	inline static int32_t get_offset_of_baseReward_9() { return static_cast<int32_t>(offsetof(StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050, ___baseReward_9)); }
	inline int32_t get_baseReward_9() const { return ___baseReward_9; }
	inline int32_t* get_address_of_baseReward_9() { return &___baseReward_9; }
	inline void set_baseReward_9(int32_t value)
	{
		___baseReward_9 = value;
	}

	inline static int32_t get_offset_of_starRanking_10() { return static_cast<int32_t>(offsetof(StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050, ___starRanking_10)); }
	inline int32_t get_starRanking_10() const { return ___starRanking_10; }
	inline int32_t* get_address_of_starRanking_10() { return &___starRanking_10; }
	inline void set_starRanking_10(int32_t value)
	{
		___starRanking_10 = value;
	}

	inline static int32_t get_offset_of_rewardPerStar_11() { return static_cast<int32_t>(offsetof(StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050, ___rewardPerStar_11)); }
	inline int32_t get_rewardPerStar_11() const { return ___rewardPerStar_11; }
	inline int32_t* get_address_of_rewardPerStar_11() { return &___rewardPerStar_11; }
	inline void set_rewardPerStar_11(int32_t value)
	{
		___rewardPerStar_11 = value;
	}
};


// SerenityGarden.TurretPermanentUpgrades
struct  TurretPermanentUpgrades_t3961F1EB370D4D942BACB195FBF68BD75CEEBA7D  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// SerenityGarden.TurretType SerenityGarden.TurretPermanentUpgrades::turretType
	int32_t ___turretType_4;
	// SerenityGarden.PermanentUpgrade[] SerenityGarden.TurretPermanentUpgrades::upgrades
	PermanentUpgradeU5BU5D_t6C13DE4C6C8D4B652FA96134A7A9BF4D3E48F6DC* ___upgrades_5;

public:
	inline static int32_t get_offset_of_turretType_4() { return static_cast<int32_t>(offsetof(TurretPermanentUpgrades_t3961F1EB370D4D942BACB195FBF68BD75CEEBA7D, ___turretType_4)); }
	inline int32_t get_turretType_4() const { return ___turretType_4; }
	inline int32_t* get_address_of_turretType_4() { return &___turretType_4; }
	inline void set_turretType_4(int32_t value)
	{
		___turretType_4 = value;
	}

	inline static int32_t get_offset_of_upgrades_5() { return static_cast<int32_t>(offsetof(TurretPermanentUpgrades_t3961F1EB370D4D942BACB195FBF68BD75CEEBA7D, ___upgrades_5)); }
	inline PermanentUpgradeU5BU5D_t6C13DE4C6C8D4B652FA96134A7A9BF4D3E48F6DC* get_upgrades_5() const { return ___upgrades_5; }
	inline PermanentUpgradeU5BU5D_t6C13DE4C6C8D4B652FA96134A7A9BF4D3E48F6DC** get_address_of_upgrades_5() { return &___upgrades_5; }
	inline void set_upgrades_5(PermanentUpgradeU5BU5D_t6C13DE4C6C8D4B652FA96134A7A9BF4D3E48F6DC* value)
	{
		___upgrades_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___upgrades_5), (void*)value);
	}
};


// SerenityGarden.TurretStatusScriptable
struct  TurretStatusScriptable_tC2CA1463FF3352C59A01B5547EB7A385CD97F9A0  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// SerenityGarden.TurretType SerenityGarden.TurretStatusScriptable::turretType
	int32_t ___turretType_4;
	// SerenityGarden.TurretLevel[] SerenityGarden.TurretStatusScriptable::levelProp
	TurretLevelU5BU5D_tD00007533801B68FD58737A590B50209619E84F8* ___levelProp_5;

public:
	inline static int32_t get_offset_of_turretType_4() { return static_cast<int32_t>(offsetof(TurretStatusScriptable_tC2CA1463FF3352C59A01B5547EB7A385CD97F9A0, ___turretType_4)); }
	inline int32_t get_turretType_4() const { return ___turretType_4; }
	inline int32_t* get_address_of_turretType_4() { return &___turretType_4; }
	inline void set_turretType_4(int32_t value)
	{
		___turretType_4 = value;
	}

	inline static int32_t get_offset_of_levelProp_5() { return static_cast<int32_t>(offsetof(TurretStatusScriptable_tC2CA1463FF3352C59A01B5547EB7A385CD97F9A0, ___levelProp_5)); }
	inline TurretLevelU5BU5D_tD00007533801B68FD58737A590B50209619E84F8* get_levelProp_5() const { return ___levelProp_5; }
	inline TurretLevelU5BU5D_tD00007533801B68FD58737A590B50209619E84F8** get_address_of_levelProp_5() { return &___levelProp_5; }
	inline void set_levelProp_5(TurretLevelU5BU5D_tD00007533801B68FD58737A590B50209619E84F8* value)
	{
		___levelProp_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelProp_5), (void*)value);
	}
};


// SerenityGarden.WaveScriptable
struct  WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// SerenityGarden.EnemySpawn[] SerenityGarden.WaveScriptable::waveEnemies
	EnemySpawnU5BU5D_t8B90BAE714E41597260C23FFE5A27D99876D982E* ___waveEnemies_4;
	// SerenityGarden.SpawnPointsID SerenityGarden.WaveScriptable::spawnPointsID
	int32_t ___spawnPointsID_5;
	// System.Boolean SerenityGarden.WaveScriptable::spawnRandomly
	bool ___spawnRandomly_6;

public:
	inline static int32_t get_offset_of_waveEnemies_4() { return static_cast<int32_t>(offsetof(WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC, ___waveEnemies_4)); }
	inline EnemySpawnU5BU5D_t8B90BAE714E41597260C23FFE5A27D99876D982E* get_waveEnemies_4() const { return ___waveEnemies_4; }
	inline EnemySpawnU5BU5D_t8B90BAE714E41597260C23FFE5A27D99876D982E** get_address_of_waveEnemies_4() { return &___waveEnemies_4; }
	inline void set_waveEnemies_4(EnemySpawnU5BU5D_t8B90BAE714E41597260C23FFE5A27D99876D982E* value)
	{
		___waveEnemies_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waveEnemies_4), (void*)value);
	}

	inline static int32_t get_offset_of_spawnPointsID_5() { return static_cast<int32_t>(offsetof(WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC, ___spawnPointsID_5)); }
	inline int32_t get_spawnPointsID_5() const { return ___spawnPointsID_5; }
	inline int32_t* get_address_of_spawnPointsID_5() { return &___spawnPointsID_5; }
	inline void set_spawnPointsID_5(int32_t value)
	{
		___spawnPointsID_5 = value;
	}

	inline static int32_t get_offset_of_spawnRandomly_6() { return static_cast<int32_t>(offsetof(WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC, ___spawnRandomly_6)); }
	inline bool get_spawnRandomly_6() const { return ___spawnRandomly_6; }
	inline bool* get_address_of_spawnRandomly_6() { return &___spawnRandomly_6; }
	inline void set_spawnRandomly_6(bool value)
	{
		___spawnRandomly_6 = value;
	}
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// TMPro.WordWrapState
struct  WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 
{
public:
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScale
	float ___fontScale_27;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_28;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_29;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_30;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_31;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_32;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_33;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_34;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_35;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_36;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_37;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_40;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_41;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_42;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___italicAngleStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___colorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___underlineColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___strikethroughColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___highlightColorStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  ___highlightStateStack_48;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  ___colorGradientStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___sizeStack_50;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___indentStack_51;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  ___fontWeightStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___styleStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___baselineStack_54;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___actionStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  ___materialReferenceStack_56;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  ___lineJustificationStack_57;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_58;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_59;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_60;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_61;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_62;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_63;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_64;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_65;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_startOfLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___startOfLineAscender_13)); }
	inline float get_startOfLineAscender_13() const { return ___startOfLineAscender_13; }
	inline float* get_address_of_startOfLineAscender_13() { return &___startOfLineAscender_13; }
	inline void set_startOfLineAscender_13(float value)
	{
		___startOfLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxLineAscender_14)); }
	inline float get_maxLineAscender_14() const { return ___maxLineAscender_14; }
	inline float* get_address_of_maxLineAscender_14() { return &___maxLineAscender_14; }
	inline void set_maxLineAscender_14(float value)
	{
		___maxLineAscender_14 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxLineDescender_15)); }
	inline float get_maxLineDescender_15() const { return ___maxLineDescender_15; }
	inline float* get_address_of_maxLineDescender_15() { return &___maxLineDescender_15; }
	inline void set_maxLineDescender_15(float value)
	{
		___maxLineDescender_15 = value;
	}

	inline static int32_t get_offset_of_pageAscender_16() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___pageAscender_16)); }
	inline float get_pageAscender_16() const { return ___pageAscender_16; }
	inline float* get_address_of_pageAscender_16() { return &___pageAscender_16; }
	inline void set_pageAscender_16(float value)
	{
		___pageAscender_16 = value;
	}

	inline static int32_t get_offset_of_horizontalAlignment_17() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___horizontalAlignment_17)); }
	inline int32_t get_horizontalAlignment_17() const { return ___horizontalAlignment_17; }
	inline int32_t* get_address_of_horizontalAlignment_17() { return &___horizontalAlignment_17; }
	inline void set_horizontalAlignment_17(int32_t value)
	{
		___horizontalAlignment_17 = value;
	}

	inline static int32_t get_offset_of_marginLeft_18() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___marginLeft_18)); }
	inline float get_marginLeft_18() const { return ___marginLeft_18; }
	inline float* get_address_of_marginLeft_18() { return &___marginLeft_18; }
	inline void set_marginLeft_18(float value)
	{
		___marginLeft_18 = value;
	}

	inline static int32_t get_offset_of_marginRight_19() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___marginRight_19)); }
	inline float get_marginRight_19() const { return ___marginRight_19; }
	inline float* get_address_of_marginRight_19() { return &___marginRight_19; }
	inline void set_marginRight_19(float value)
	{
		___marginRight_19 = value;
	}

	inline static int32_t get_offset_of_xAdvance_20() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___xAdvance_20)); }
	inline float get_xAdvance_20() const { return ___xAdvance_20; }
	inline float* get_address_of_xAdvance_20() { return &___xAdvance_20; }
	inline void set_xAdvance_20(float value)
	{
		___xAdvance_20 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_21() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___preferredWidth_21)); }
	inline float get_preferredWidth_21() const { return ___preferredWidth_21; }
	inline float* get_address_of_preferredWidth_21() { return &___preferredWidth_21; }
	inline void set_preferredWidth_21(float value)
	{
		___preferredWidth_21 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_22() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___preferredHeight_22)); }
	inline float get_preferredHeight_22() const { return ___preferredHeight_22; }
	inline float* get_address_of_preferredHeight_22() { return &___preferredHeight_22; }
	inline void set_preferredHeight_22(float value)
	{
		___preferredHeight_22 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_23() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previousLineScale_23)); }
	inline float get_previousLineScale_23() const { return ___previousLineScale_23; }
	inline float* get_address_of_previousLineScale_23() { return &___previousLineScale_23; }
	inline void set_previousLineScale_23(float value)
	{
		___previousLineScale_23 = value;
	}

	inline static int32_t get_offset_of_wordCount_24() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___wordCount_24)); }
	inline int32_t get_wordCount_24() const { return ___wordCount_24; }
	inline int32_t* get_address_of_wordCount_24() { return &___wordCount_24; }
	inline void set_wordCount_24(int32_t value)
	{
		___wordCount_24 = value;
	}

	inline static int32_t get_offset_of_fontStyle_25() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontStyle_25)); }
	inline int32_t get_fontStyle_25() const { return ___fontStyle_25; }
	inline int32_t* get_address_of_fontStyle_25() { return &___fontStyle_25; }
	inline void set_fontStyle_25(int32_t value)
	{
		___fontStyle_25 = value;
	}

	inline static int32_t get_offset_of_italicAngle_26() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___italicAngle_26)); }
	inline int32_t get_italicAngle_26() const { return ___italicAngle_26; }
	inline int32_t* get_address_of_italicAngle_26() { return &___italicAngle_26; }
	inline void set_italicAngle_26(int32_t value)
	{
		___italicAngle_26 = value;
	}

	inline static int32_t get_offset_of_fontScale_27() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontScale_27)); }
	inline float get_fontScale_27() const { return ___fontScale_27; }
	inline float* get_address_of_fontScale_27() { return &___fontScale_27; }
	inline void set_fontScale_27(float value)
	{
		___fontScale_27 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_28() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontScaleMultiplier_28)); }
	inline float get_fontScaleMultiplier_28() const { return ___fontScaleMultiplier_28; }
	inline float* get_address_of_fontScaleMultiplier_28() { return &___fontScaleMultiplier_28; }
	inline void set_fontScaleMultiplier_28(float value)
	{
		___fontScaleMultiplier_28 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_29() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentFontSize_29)); }
	inline float get_currentFontSize_29() const { return ___currentFontSize_29; }
	inline float* get_address_of_currentFontSize_29() { return &___currentFontSize_29; }
	inline void set_currentFontSize_29(float value)
	{
		___currentFontSize_29 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_30() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___baselineOffset_30)); }
	inline float get_baselineOffset_30() const { return ___baselineOffset_30; }
	inline float* get_address_of_baselineOffset_30() { return &___baselineOffset_30; }
	inline void set_baselineOffset_30(float value)
	{
		___baselineOffset_30 = value;
	}

	inline static int32_t get_offset_of_lineOffset_31() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineOffset_31)); }
	inline float get_lineOffset_31() const { return ___lineOffset_31; }
	inline float* get_address_of_lineOffset_31() { return &___lineOffset_31; }
	inline void set_lineOffset_31(float value)
	{
		___lineOffset_31 = value;
	}

	inline static int32_t get_offset_of_isDrivenLineSpacing_32() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___isDrivenLineSpacing_32)); }
	inline bool get_isDrivenLineSpacing_32() const { return ___isDrivenLineSpacing_32; }
	inline bool* get_address_of_isDrivenLineSpacing_32() { return &___isDrivenLineSpacing_32; }
	inline void set_isDrivenLineSpacing_32(bool value)
	{
		___isDrivenLineSpacing_32 = value;
	}

	inline static int32_t get_offset_of_glyphHorizontalAdvanceAdjustment_33() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___glyphHorizontalAdvanceAdjustment_33)); }
	inline float get_glyphHorizontalAdvanceAdjustment_33() const { return ___glyphHorizontalAdvanceAdjustment_33; }
	inline float* get_address_of_glyphHorizontalAdvanceAdjustment_33() { return &___glyphHorizontalAdvanceAdjustment_33; }
	inline void set_glyphHorizontalAdvanceAdjustment_33(float value)
	{
		___glyphHorizontalAdvanceAdjustment_33 = value;
	}

	inline static int32_t get_offset_of_cSpace_34() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___cSpace_34)); }
	inline float get_cSpace_34() const { return ___cSpace_34; }
	inline float* get_address_of_cSpace_34() { return &___cSpace_34; }
	inline void set_cSpace_34(float value)
	{
		___cSpace_34 = value;
	}

	inline static int32_t get_offset_of_mSpace_35() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___mSpace_35)); }
	inline float get_mSpace_35() const { return ___mSpace_35; }
	inline float* get_address_of_mSpace_35() { return &___mSpace_35; }
	inline void set_mSpace_35(float value)
	{
		___mSpace_35 = value;
	}

	inline static int32_t get_offset_of_textInfo_36() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___textInfo_36)); }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * get_textInfo_36() const { return ___textInfo_36; }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 ** get_address_of_textInfo_36() { return &___textInfo_36; }
	inline void set_textInfo_36(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * value)
	{
		___textInfo_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_36), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_37() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineInfo_37)); }
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  get_lineInfo_37() const { return ___lineInfo_37; }
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 * get_address_of_lineInfo_37() { return &___lineInfo_37; }
	inline void set_lineInfo_37(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  value)
	{
		___lineInfo_37 = value;
	}

	inline static int32_t get_offset_of_vertexColor_38() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___vertexColor_38)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_vertexColor_38() const { return ___vertexColor_38; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_vertexColor_38() { return &___vertexColor_38; }
	inline void set_vertexColor_38(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___vertexColor_38 = value;
	}

	inline static int32_t get_offset_of_underlineColor_39() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___underlineColor_39)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_underlineColor_39() const { return ___underlineColor_39; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_underlineColor_39() { return &___underlineColor_39; }
	inline void set_underlineColor_39(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___underlineColor_39 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_40() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___strikethroughColor_40)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_strikethroughColor_40() const { return ___strikethroughColor_40; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_strikethroughColor_40() { return &___strikethroughColor_40; }
	inline void set_strikethroughColor_40(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___strikethroughColor_40 = value;
	}

	inline static int32_t get_offset_of_highlightColor_41() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightColor_41)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_highlightColor_41() const { return ___highlightColor_41; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_highlightColor_41() { return &___highlightColor_41; }
	inline void set_highlightColor_41(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___highlightColor_41 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___basicStyleStack_42)); }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  get_basicStyleStack_42() const { return ___basicStyleStack_42; }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 * get_address_of_basicStyleStack_42() { return &___basicStyleStack_42; }
	inline void set_basicStyleStack_42(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  value)
	{
		___basicStyleStack_42 = value;
	}

	inline static int32_t get_offset_of_italicAngleStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___italicAngleStack_43)); }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  get_italicAngleStack_43() const { return ___italicAngleStack_43; }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06 * get_address_of_italicAngleStack_43() { return &___italicAngleStack_43; }
	inline void set_italicAngleStack_43(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  value)
	{
		___italicAngleStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___italicAngleStack_43))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___colorStack_44)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_colorStack_44() const { return ___colorStack_44; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_colorStack_44() { return &___colorStack_44; }
	inline void set_colorStack_44(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___colorStack_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorStack_44))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_underlineColorStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___underlineColorStack_45)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_underlineColorStack_45() const { return ___underlineColorStack_45; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_underlineColorStack_45() { return &___underlineColorStack_45; }
	inline void set_underlineColorStack_45(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___underlineColorStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___underlineColorStack_45))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_strikethroughColorStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___strikethroughColorStack_46)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_strikethroughColorStack_46() const { return ___strikethroughColorStack_46; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_strikethroughColorStack_46() { return &___strikethroughColorStack_46; }
	inline void set_strikethroughColorStack_46(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___strikethroughColorStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightColorStack_47() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightColorStack_47)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_highlightColorStack_47() const { return ___highlightColorStack_47; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_highlightColorStack_47() { return &___highlightColorStack_47; }
	inline void set_highlightColorStack_47(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___highlightColorStack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightColorStack_47))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightStateStack_48() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightStateStack_48)); }
	inline TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  get_highlightStateStack_48() const { return ___highlightStateStack_48; }
	inline TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2 * get_address_of_highlightStateStack_48() { return &___highlightStateStack_48; }
	inline void set_highlightStateStack_48(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  value)
	{
		___highlightStateStack_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightStateStack_48))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorGradientStack_49() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___colorGradientStack_49)); }
	inline TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  get_colorGradientStack_49() const { return ___colorGradientStack_49; }
	inline TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C * get_address_of_colorGradientStack_49() { return &___colorGradientStack_49; }
	inline void set_colorGradientStack_49(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  value)
	{
		___colorGradientStack_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sizeStack_50() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___sizeStack_50)); }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  get_sizeStack_50() const { return ___sizeStack_50; }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA * get_address_of_sizeStack_50() { return &___sizeStack_50; }
	inline void set_sizeStack_50(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  value)
	{
		___sizeStack_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sizeStack_50))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indentStack_51() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___indentStack_51)); }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  get_indentStack_51() const { return ___indentStack_51; }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA * get_address_of_indentStack_51() { return &___indentStack_51; }
	inline void set_indentStack_51(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  value)
	{
		___indentStack_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indentStack_51))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_fontWeightStack_52() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontWeightStack_52)); }
	inline TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  get_fontWeightStack_52() const { return ___fontWeightStack_52; }
	inline TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285 * get_address_of_fontWeightStack_52() { return &___fontWeightStack_52; }
	inline void set_fontWeightStack_52(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  value)
	{
		___fontWeightStack_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___fontWeightStack_52))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_styleStack_53() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___styleStack_53)); }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  get_styleStack_53() const { return ___styleStack_53; }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06 * get_address_of_styleStack_53() { return &___styleStack_53; }
	inline void set_styleStack_53(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  value)
	{
		___styleStack_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___styleStack_53))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_baselineStack_54() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___baselineStack_54)); }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  get_baselineStack_54() const { return ___baselineStack_54; }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA * get_address_of_baselineStack_54() { return &___baselineStack_54; }
	inline void set_baselineStack_54(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  value)
	{
		___baselineStack_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___baselineStack_54))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_actionStack_55() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___actionStack_55)); }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  get_actionStack_55() const { return ___actionStack_55; }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06 * get_address_of_actionStack_55() { return &___actionStack_55; }
	inline void set_actionStack_55(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  value)
	{
		___actionStack_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___actionStack_55))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_materialReferenceStack_56() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___materialReferenceStack_56)); }
	inline TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  get_materialReferenceStack_56() const { return ___materialReferenceStack_56; }
	inline TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A * get_address_of_materialReferenceStack_56() { return &___materialReferenceStack_56; }
	inline void set_materialReferenceStack_56(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  value)
	{
		___materialReferenceStack_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lineJustificationStack_57() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineJustificationStack_57)); }
	inline TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  get_lineJustificationStack_57() const { return ___lineJustificationStack_57; }
	inline TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7 * get_address_of_lineJustificationStack_57() { return &___lineJustificationStack_57; }
	inline void set_lineJustificationStack_57(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  value)
	{
		___lineJustificationStack_57 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_spriteAnimationID_58() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___spriteAnimationID_58)); }
	inline int32_t get_spriteAnimationID_58() const { return ___spriteAnimationID_58; }
	inline int32_t* get_address_of_spriteAnimationID_58() { return &___spriteAnimationID_58; }
	inline void set_spriteAnimationID_58(int32_t value)
	{
		___spriteAnimationID_58 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_59() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentFontAsset_59)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_currentFontAsset_59() const { return ___currentFontAsset_59; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_currentFontAsset_59() { return &___currentFontAsset_59; }
	inline void set_currentFontAsset_59(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___currentFontAsset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFontAsset_59), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_60() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentSpriteAsset_60)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_currentSpriteAsset_60() const { return ___currentSpriteAsset_60; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_currentSpriteAsset_60() { return &___currentSpriteAsset_60; }
	inline void set_currentSpriteAsset_60(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___currentSpriteAsset_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSpriteAsset_60), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterial_61() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentMaterial_61)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_currentMaterial_61() const { return ___currentMaterial_61; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_currentMaterial_61() { return &___currentMaterial_61; }
	inline void set_currentMaterial_61(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___currentMaterial_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_61), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_62() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentMaterialIndex_62)); }
	inline int32_t get_currentMaterialIndex_62() const { return ___currentMaterialIndex_62; }
	inline int32_t* get_address_of_currentMaterialIndex_62() { return &___currentMaterialIndex_62; }
	inline void set_currentMaterialIndex_62(int32_t value)
	{
		___currentMaterialIndex_62 = value;
	}

	inline static int32_t get_offset_of_meshExtents_63() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___meshExtents_63)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_meshExtents_63() const { return ___meshExtents_63; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_meshExtents_63() { return &___meshExtents_63; }
	inline void set_meshExtents_63(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___meshExtents_63 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_64() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___tagNoParsing_64)); }
	inline bool get_tagNoParsing_64() const { return ___tagNoParsing_64; }
	inline bool* get_address_of_tagNoParsing_64() { return &___tagNoParsing_64; }
	inline void set_tagNoParsing_64(bool value)
	{
		___tagNoParsing_64 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_65() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___isNonBreakingSpace_65)); }
	inline bool get_isNonBreakingSpace_65() const { return ___isNonBreakingSpace_65; }
	inline bool* get_address_of_isNonBreakingSpace_65() { return &___isNonBreakingSpace_65; }
	inline void set_isNonBreakingSpace_65(bool value)
	{
		___isNonBreakingSpace_65 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScale_27;
	float ___fontScaleMultiplier_28;
	float ___currentFontSize_29;
	float ___baselineOffset_30;
	float ___lineOffset_31;
	int32_t ___isDrivenLineSpacing_32;
	float ___glyphHorizontalAdvanceAdjustment_33;
	float ___cSpace_34;
	float ___mSpace_35;
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_36;
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_37;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_38;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_39;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_40;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_41;
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_42;
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___italicAngleStack_43;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___colorStack_44;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___underlineColorStack_45;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___strikethroughColorStack_46;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___highlightColorStack_47;
	TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  ___highlightStateStack_48;
	TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  ___colorGradientStack_49;
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___sizeStack_50;
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___indentStack_51;
	TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  ___fontWeightStack_52;
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___styleStack_53;
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___baselineStack_54;
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___actionStack_55;
	TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  ___materialReferenceStack_56;
	TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  ___lineJustificationStack_57;
	int32_t ___spriteAnimationID_58;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_59;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_60;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_61;
	int32_t ___currentMaterialIndex_62;
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_63;
	int32_t ___tagNoParsing_64;
	int32_t ___isNonBreakingSpace_65;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScale_27;
	float ___fontScaleMultiplier_28;
	float ___currentFontSize_29;
	float ___baselineOffset_30;
	float ___lineOffset_31;
	int32_t ___isDrivenLineSpacing_32;
	float ___glyphHorizontalAdvanceAdjustment_33;
	float ___cSpace_34;
	float ___mSpace_35;
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_36;
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_37;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_38;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_39;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_40;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_41;
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_42;
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___italicAngleStack_43;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___colorStack_44;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___underlineColorStack_45;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___strikethroughColorStack_46;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___highlightColorStack_47;
	TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  ___highlightStateStack_48;
	TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  ___colorGradientStack_49;
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___sizeStack_50;
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___indentStack_51;
	TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  ___fontWeightStack_52;
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___styleStack_53;
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___baselineStack_54;
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___actionStack_55;
	TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  ___materialReferenceStack_56;
	TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  ___lineJustificationStack_57;
	int32_t ___spriteAnimationID_58;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_59;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_60;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_61;
	int32_t ___currentMaterialIndex_62;
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_63;
	int32_t ___tagNoParsing_64;
	int32_t ___isNonBreakingSpace_65;
};

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct  TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t799E5463E49BC0C14AE127D8821E83BA61F3A000* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___itemStack_0)); }
	inline WordWrapStateU5BU5D_t799E5463E49BC0C14AE127D8821E83BA61F3A000* get_itemStack_0() const { return ___itemStack_0; }
	inline WordWrapStateU5BU5D_t799E5463E49BC0C14AE127D8821E83BA61F3A000** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(WordWrapStateU5BU5D_t799E5463E49BC0C14AE127D8821E83BA61F3A000* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___m_DefaultItem_2)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Photon.Pun.MonoBehaviourPun
struct  MonoBehaviourPun_t41335C3B2B6804088B520155103E3A0EEA4F814A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Photon.Pun.PhotonView Photon.Pun.MonoBehaviourPun::pvCache
	PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * ___pvCache_4;

public:
	inline static int32_t get_offset_of_pvCache_4() { return static_cast<int32_t>(offsetof(MonoBehaviourPun_t41335C3B2B6804088B520155103E3A0EEA4F814A, ___pvCache_4)); }
	inline PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * get_pvCache_4() const { return ___pvCache_4; }
	inline PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B ** get_address_of_pvCache_4() { return &___pvCache_4; }
	inline void set_pvCache_4(PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * value)
	{
		___pvCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pvCache_4), (void*)value);
	}
};


// SerenityGarden.BulletMovement
struct  BulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single SerenityGarden.BulletMovement::speed
	float ___speed_4;
	// UnityEngine.Rigidbody SerenityGarden.BulletMovement::rb
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___rb_5;
	// UnityEngine.GameObject SerenityGarden.BulletMovement::target
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___target_6;
	// System.Single SerenityGarden.BulletMovement::initTime
	float ___initTime_7;
	// System.Boolean SerenityGarden.BulletMovement::hitTarget
	bool ___hitTarget_8;
	// System.Single SerenityGarden.BulletMovement::damage
	float ___damage_9;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(BulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(BulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5, ___rb_5)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get_rb_5() const { return ___rb_5; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_5), (void*)value);
	}

	inline static int32_t get_offset_of_target_6() { return static_cast<int32_t>(offsetof(BulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5, ___target_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_target_6() const { return ___target_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_target_6() { return &___target_6; }
	inline void set_target_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___target_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_6), (void*)value);
	}

	inline static int32_t get_offset_of_initTime_7() { return static_cast<int32_t>(offsetof(BulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5, ___initTime_7)); }
	inline float get_initTime_7() const { return ___initTime_7; }
	inline float* get_address_of_initTime_7() { return &___initTime_7; }
	inline void set_initTime_7(float value)
	{
		___initTime_7 = value;
	}

	inline static int32_t get_offset_of_hitTarget_8() { return static_cast<int32_t>(offsetof(BulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5, ___hitTarget_8)); }
	inline bool get_hitTarget_8() const { return ___hitTarget_8; }
	inline bool* get_address_of_hitTarget_8() { return &___hitTarget_8; }
	inline void set_hitTarget_8(bool value)
	{
		___hitTarget_8 = value;
	}

	inline static int32_t get_offset_of_damage_9() { return static_cast<int32_t>(offsetof(BulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5, ___damage_9)); }
	inline float get_damage_9() const { return ___damage_9; }
	inline float* get_address_of_damage_9() { return &___damage_9; }
	inline void set_damage_9(float value)
	{
		___damage_9 = value;
	}
};


// SerenityGarden.HexagonalBlock
struct  HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Material[] SerenityGarden.HexagonalBlock::materialList
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___materialList_4;
	// System.Int32 SerenityGarden.HexagonalBlock::listId
	int32_t ___listId_5;
	// SerenityGarden.HexagonType SerenityGarden.HexagonalBlock::type
	int32_t ___type_6;
	// SerenityGarden.SpawnPointsID SerenityGarden.HexagonalBlock::spawnPointsID
	int32_t ___spawnPointsID_7;
	// UnityEngine.MeshRenderer SerenityGarden.HexagonalBlock::meshRend
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___meshRend_8;

public:
	inline static int32_t get_offset_of_materialList_4() { return static_cast<int32_t>(offsetof(HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580, ___materialList_4)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_materialList_4() const { return ___materialList_4; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_materialList_4() { return &___materialList_4; }
	inline void set_materialList_4(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___materialList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___materialList_4), (void*)value);
	}

	inline static int32_t get_offset_of_listId_5() { return static_cast<int32_t>(offsetof(HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580, ___listId_5)); }
	inline int32_t get_listId_5() const { return ___listId_5; }
	inline int32_t* get_address_of_listId_5() { return &___listId_5; }
	inline void set_listId_5(int32_t value)
	{
		___listId_5 = value;
	}

	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580, ___type_6)); }
	inline int32_t get_type_6() const { return ___type_6; }
	inline int32_t* get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(int32_t value)
	{
		___type_6 = value;
	}

	inline static int32_t get_offset_of_spawnPointsID_7() { return static_cast<int32_t>(offsetof(HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580, ___spawnPointsID_7)); }
	inline int32_t get_spawnPointsID_7() const { return ___spawnPointsID_7; }
	inline int32_t* get_address_of_spawnPointsID_7() { return &___spawnPointsID_7; }
	inline void set_spawnPointsID_7(int32_t value)
	{
		___spawnPointsID_7 = value;
	}

	inline static int32_t get_offset_of_meshRend_8() { return static_cast<int32_t>(offsetof(HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580, ___meshRend_8)); }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * get_meshRend_8() const { return ___meshRend_8; }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED ** get_address_of_meshRend_8() { return &___meshRend_8; }
	inline void set_meshRend_8(MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * value)
	{
		___meshRend_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshRend_8), (void*)value);
	}
};


// SerenityGarden.InstantiationManager
struct  InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D_StaticFields
{
public:
	// SerenityGarden.InstantiationManager SerenityGarden.InstantiationManager::instance
	InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D_StaticFields, ___instance_4)); }
	inline InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D * get_instance_4() const { return ___instance_4; }
	inline InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// SerenityGarden.LockOnManager
struct  LockOnManager_tC44F3665659845C6B4B74C0044FB68513D1D2CAC  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Material SerenityGarden.LockOnManager::selectedEnemyMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___selectedEnemyMaterial_4;
	// SerenityGarden.SceneClickManager SerenityGarden.LockOnManager::sceneClickManager
	SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * ___sceneClickManager_5;
	// System.Collections.Generic.List`1<UnityEngine.Material> SerenityGarden.LockOnManager::previousEnemyMaterials
	List_1_t6A61046573B0BC4E12950B90305C189DD041D786 * ___previousEnemyMaterials_6;

public:
	inline static int32_t get_offset_of_selectedEnemyMaterial_4() { return static_cast<int32_t>(offsetof(LockOnManager_tC44F3665659845C6B4B74C0044FB68513D1D2CAC, ___selectedEnemyMaterial_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_selectedEnemyMaterial_4() const { return ___selectedEnemyMaterial_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_selectedEnemyMaterial_4() { return &___selectedEnemyMaterial_4; }
	inline void set_selectedEnemyMaterial_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___selectedEnemyMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedEnemyMaterial_4), (void*)value);
	}

	inline static int32_t get_offset_of_sceneClickManager_5() { return static_cast<int32_t>(offsetof(LockOnManager_tC44F3665659845C6B4B74C0044FB68513D1D2CAC, ___sceneClickManager_5)); }
	inline SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * get_sceneClickManager_5() const { return ___sceneClickManager_5; }
	inline SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F ** get_address_of_sceneClickManager_5() { return &___sceneClickManager_5; }
	inline void set_sceneClickManager_5(SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * value)
	{
		___sceneClickManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneClickManager_5), (void*)value);
	}

	inline static int32_t get_offset_of_previousEnemyMaterials_6() { return static_cast<int32_t>(offsetof(LockOnManager_tC44F3665659845C6B4B74C0044FB68513D1D2CAC, ___previousEnemyMaterials_6)); }
	inline List_1_t6A61046573B0BC4E12950B90305C189DD041D786 * get_previousEnemyMaterials_6() const { return ___previousEnemyMaterials_6; }
	inline List_1_t6A61046573B0BC4E12950B90305C189DD041D786 ** get_address_of_previousEnemyMaterials_6() { return &___previousEnemyMaterials_6; }
	inline void set_previousEnemyMaterials_6(List_1_t6A61046573B0BC4E12950B90305C189DD041D786 * value)
	{
		___previousEnemyMaterials_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousEnemyMaterials_6), (void*)value);
	}
};

struct LockOnManager_tC44F3665659845C6B4B74C0044FB68513D1D2CAC_StaticFields
{
public:
	// SerenityGarden.EnemyBase SerenityGarden.LockOnManager::selectedEnemy
	EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * ___selectedEnemy_7;

public:
	inline static int32_t get_offset_of_selectedEnemy_7() { return static_cast<int32_t>(offsetof(LockOnManager_tC44F3665659845C6B4B74C0044FB68513D1D2CAC_StaticFields, ___selectedEnemy_7)); }
	inline EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * get_selectedEnemy_7() const { return ___selectedEnemy_7; }
	inline EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F ** get_address_of_selectedEnemy_7() { return &___selectedEnemy_7; }
	inline void set_selectedEnemy_7(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * value)
	{
		___selectedEnemy_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedEnemy_7), (void*)value);
	}
};


// SerenityGarden.SceneClickManager
struct  SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// SerenityGarden.TurretBase SerenityGarden.SceneClickManager::selectedTurret
	TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * ___selectedTurret_5;
	// SerenityGarden.HexagonalBlock SerenityGarden.SceneClickManager::selectedHexagon
	HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * ___selectedHexagon_6;
	// SerenityGarden.EnemyBase SerenityGarden.SceneClickManager::selectedEnemy
	EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * ___selectedEnemy_7;
	// SerenityGarden.Commander SerenityGarden.SceneClickManager::selectedCommander
	Commander_tB3DCEA8AD7D9DBD008C973FBADB172E0C5663E70 * ___selectedCommander_8;
	// System.Single SerenityGarden.SceneClickManager::powIntensity
	float ___powIntensity_9;
	// UnityEngine.Material SerenityGarden.SceneClickManager::selectedHexagonMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___selectedHexagonMaterial_10;
	// SerenityGarden.InputManager SerenityGarden.SceneClickManager::inputManager
	InputManager_tE289ADE1B6513132E4401B7750E0AA2D31D40DF4 * ___inputManager_11;
	// SerenityGarden.TurretBuildManager SerenityGarden.SceneClickManager::buildManager
	TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * ___buildManager_12;
	// SerenityGarden.LockOnManager SerenityGarden.SceneClickManager::lockOnManager
	LockOnManager_tC44F3665659845C6B4B74C0044FB68513D1D2CAC * ___lockOnManager_13;
	// SerenityGarden.CommanderUI SerenityGarden.SceneClickManager::commanderUI
	CommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706 * ___commanderUI_14;
	// UnityEngine.Material SerenityGarden.SceneClickManager::previousHexagonMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___previousHexagonMaterial_15;

public:
	inline static int32_t get_offset_of_selectedTurret_5() { return static_cast<int32_t>(offsetof(SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F, ___selectedTurret_5)); }
	inline TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * get_selectedTurret_5() const { return ___selectedTurret_5; }
	inline TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 ** get_address_of_selectedTurret_5() { return &___selectedTurret_5; }
	inline void set_selectedTurret_5(TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * value)
	{
		___selectedTurret_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedTurret_5), (void*)value);
	}

	inline static int32_t get_offset_of_selectedHexagon_6() { return static_cast<int32_t>(offsetof(SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F, ___selectedHexagon_6)); }
	inline HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * get_selectedHexagon_6() const { return ___selectedHexagon_6; }
	inline HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 ** get_address_of_selectedHexagon_6() { return &___selectedHexagon_6; }
	inline void set_selectedHexagon_6(HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * value)
	{
		___selectedHexagon_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedHexagon_6), (void*)value);
	}

	inline static int32_t get_offset_of_selectedEnemy_7() { return static_cast<int32_t>(offsetof(SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F, ___selectedEnemy_7)); }
	inline EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * get_selectedEnemy_7() const { return ___selectedEnemy_7; }
	inline EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F ** get_address_of_selectedEnemy_7() { return &___selectedEnemy_7; }
	inline void set_selectedEnemy_7(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * value)
	{
		___selectedEnemy_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedEnemy_7), (void*)value);
	}

	inline static int32_t get_offset_of_selectedCommander_8() { return static_cast<int32_t>(offsetof(SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F, ___selectedCommander_8)); }
	inline Commander_tB3DCEA8AD7D9DBD008C973FBADB172E0C5663E70 * get_selectedCommander_8() const { return ___selectedCommander_8; }
	inline Commander_tB3DCEA8AD7D9DBD008C973FBADB172E0C5663E70 ** get_address_of_selectedCommander_8() { return &___selectedCommander_8; }
	inline void set_selectedCommander_8(Commander_tB3DCEA8AD7D9DBD008C973FBADB172E0C5663E70 * value)
	{
		___selectedCommander_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedCommander_8), (void*)value);
	}

	inline static int32_t get_offset_of_powIntensity_9() { return static_cast<int32_t>(offsetof(SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F, ___powIntensity_9)); }
	inline float get_powIntensity_9() const { return ___powIntensity_9; }
	inline float* get_address_of_powIntensity_9() { return &___powIntensity_9; }
	inline void set_powIntensity_9(float value)
	{
		___powIntensity_9 = value;
	}

	inline static int32_t get_offset_of_selectedHexagonMaterial_10() { return static_cast<int32_t>(offsetof(SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F, ___selectedHexagonMaterial_10)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_selectedHexagonMaterial_10() const { return ___selectedHexagonMaterial_10; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_selectedHexagonMaterial_10() { return &___selectedHexagonMaterial_10; }
	inline void set_selectedHexagonMaterial_10(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___selectedHexagonMaterial_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedHexagonMaterial_10), (void*)value);
	}

	inline static int32_t get_offset_of_inputManager_11() { return static_cast<int32_t>(offsetof(SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F, ___inputManager_11)); }
	inline InputManager_tE289ADE1B6513132E4401B7750E0AA2D31D40DF4 * get_inputManager_11() const { return ___inputManager_11; }
	inline InputManager_tE289ADE1B6513132E4401B7750E0AA2D31D40DF4 ** get_address_of_inputManager_11() { return &___inputManager_11; }
	inline void set_inputManager_11(InputManager_tE289ADE1B6513132E4401B7750E0AA2D31D40DF4 * value)
	{
		___inputManager_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputManager_11), (void*)value);
	}

	inline static int32_t get_offset_of_buildManager_12() { return static_cast<int32_t>(offsetof(SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F, ___buildManager_12)); }
	inline TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * get_buildManager_12() const { return ___buildManager_12; }
	inline TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 ** get_address_of_buildManager_12() { return &___buildManager_12; }
	inline void set_buildManager_12(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * value)
	{
		___buildManager_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buildManager_12), (void*)value);
	}

	inline static int32_t get_offset_of_lockOnManager_13() { return static_cast<int32_t>(offsetof(SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F, ___lockOnManager_13)); }
	inline LockOnManager_tC44F3665659845C6B4B74C0044FB68513D1D2CAC * get_lockOnManager_13() const { return ___lockOnManager_13; }
	inline LockOnManager_tC44F3665659845C6B4B74C0044FB68513D1D2CAC ** get_address_of_lockOnManager_13() { return &___lockOnManager_13; }
	inline void set_lockOnManager_13(LockOnManager_tC44F3665659845C6B4B74C0044FB68513D1D2CAC * value)
	{
		___lockOnManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lockOnManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_commanderUI_14() { return static_cast<int32_t>(offsetof(SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F, ___commanderUI_14)); }
	inline CommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706 * get_commanderUI_14() const { return ___commanderUI_14; }
	inline CommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706 ** get_address_of_commanderUI_14() { return &___commanderUI_14; }
	inline void set_commanderUI_14(CommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706 * value)
	{
		___commanderUI_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___commanderUI_14), (void*)value);
	}

	inline static int32_t get_offset_of_previousHexagonMaterial_15() { return static_cast<int32_t>(offsetof(SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F, ___previousHexagonMaterial_15)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_previousHexagonMaterial_15() const { return ___previousHexagonMaterial_15; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_previousHexagonMaterial_15() { return &___previousHexagonMaterial_15; }
	inline void set_previousHexagonMaterial_15(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___previousHexagonMaterial_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousHexagonMaterial_15), (void*)value);
	}
};

struct SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F_StaticFields
{
public:
	// SerenityGarden.SceneClickManager SerenityGarden.SceneClickManager::instance
	SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F_StaticFields, ___instance_4)); }
	inline SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * get_instance_4() const { return ___instance_4; }
	inline SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// SerenityGarden.SceneDataRetainer
struct  SceneDataRetainer_tDC5BF2B9D42AA0F469B4B9312A2CEA24F1F4A8C2  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// SerenityGarden.StageScriptable SerenityGarden.SceneDataRetainer::selectedStage
	StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 * ___selectedStage_5;
	// SerenityGarden.TurretPermanentUpgrades[] SerenityGarden.SceneDataRetainer::permanentUpgrades
	TurretPermanentUpgradesU5BU5D_t5098164DEE5B9C3C6B00371C8C3103F895AE4BCA* ___permanentUpgrades_6;

public:
	inline static int32_t get_offset_of_selectedStage_5() { return static_cast<int32_t>(offsetof(SceneDataRetainer_tDC5BF2B9D42AA0F469B4B9312A2CEA24F1F4A8C2, ___selectedStage_5)); }
	inline StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 * get_selectedStage_5() const { return ___selectedStage_5; }
	inline StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 ** get_address_of_selectedStage_5() { return &___selectedStage_5; }
	inline void set_selectedStage_5(StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 * value)
	{
		___selectedStage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedStage_5), (void*)value);
	}

	inline static int32_t get_offset_of_permanentUpgrades_6() { return static_cast<int32_t>(offsetof(SceneDataRetainer_tDC5BF2B9D42AA0F469B4B9312A2CEA24F1F4A8C2, ___permanentUpgrades_6)); }
	inline TurretPermanentUpgradesU5BU5D_t5098164DEE5B9C3C6B00371C8C3103F895AE4BCA* get_permanentUpgrades_6() const { return ___permanentUpgrades_6; }
	inline TurretPermanentUpgradesU5BU5D_t5098164DEE5B9C3C6B00371C8C3103F895AE4BCA** get_address_of_permanentUpgrades_6() { return &___permanentUpgrades_6; }
	inline void set_permanentUpgrades_6(TurretPermanentUpgradesU5BU5D_t5098164DEE5B9C3C6B00371C8C3103F895AE4BCA* value)
	{
		___permanentUpgrades_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___permanentUpgrades_6), (void*)value);
	}
};

struct SceneDataRetainer_tDC5BF2B9D42AA0F469B4B9312A2CEA24F1F4A8C2_StaticFields
{
public:
	// SerenityGarden.SceneDataRetainer SerenityGarden.SceneDataRetainer::instance
	SceneDataRetainer_tDC5BF2B9D42AA0F469B4B9312A2CEA24F1F4A8C2 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(SceneDataRetainer_tDC5BF2B9D42AA0F469B4B9312A2CEA24F1F4A8C2_StaticFields, ___instance_4)); }
	inline SceneDataRetainer_tDC5BF2B9D42AA0F469B4B9312A2CEA24F1F4A8C2 * get_instance_4() const { return ___instance_4; }
	inline SceneDataRetainer_tDC5BF2B9D42AA0F469B4B9312A2CEA24F1F4A8C2 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(SceneDataRetainer_tDC5BF2B9D42AA0F469B4B9312A2CEA24F1F4A8C2 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// SerenityGarden.TurretBuildManager
struct  TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 SerenityGarden.TurretBuildManager::startMoney
	int32_t ___startMoney_5;
	// System.Int32 SerenityGarden.TurretBuildManager::money
	int32_t ___money_6;
	// UnityEngine.Material SerenityGarden.TurretBuildManager::recoveryMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___recoveryMaterial_7;
	// UnityEngine.GameObject SerenityGarden.TurretBuildManager::buildMenuUI
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___buildMenuUI_8;
	// UnityEngine.GameObject SerenityGarden.TurretBuildManager::inspectTurretUI
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___inspectTurretUI_9;
	// UnityEngine.GameObject SerenityGarden.TurretBuildManager::buildableTurretsUI
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___buildableTurretsUI_10;
	// UnityEngine.GameObject SerenityGarden.TurretBuildManager::excavatorUI
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___excavatorUI_11;
	// UnityEngine.GameObject SerenityGarden.TurretBuildManager::removeCommanderButton
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___removeCommanderButton_12;
	// TMPro.TextMeshProUGUI SerenityGarden.TurretBuildManager::moneyText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___moneyText_13;
	// TMPro.TextMeshProUGUI SerenityGarden.TurretBuildManager::sellText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___sellText_14;
	// TMPro.TextMeshProUGUI SerenityGarden.TurretBuildManager::repairText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___repairText_15;
	// TMPro.TextMeshProUGUI SerenityGarden.TurretBuildManager::upgradeText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___upgradeText_16;
	// TMPro.TextMeshProUGUI SerenityGarden.TurretBuildManager::debugText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___debugText_17;
	// TMPro.TextMeshProUGUI[] SerenityGarden.TurretBuildManager::turretBuildCostText
	TextMeshProUGUIU5BU5D_t630DB598E90AE8903F6A17F1C02F182796A49130* ___turretBuildCostText_18;
	// UnityEngine.GameObject[] SerenityGarden.TurretBuildManager::turretPrefabs
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___turretPrefabs_19;
	// SerenityGarden.SceneClickManager SerenityGarden.TurretBuildManager::sceneClickManager
	SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * ___sceneClickManager_20;
	// SerenityGarden.CommanderUI SerenityGarden.TurretBuildManager::commanderUI
	CommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706 * ___commanderUI_21;

public:
	inline static int32_t get_offset_of_startMoney_5() { return static_cast<int32_t>(offsetof(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7, ___startMoney_5)); }
	inline int32_t get_startMoney_5() const { return ___startMoney_5; }
	inline int32_t* get_address_of_startMoney_5() { return &___startMoney_5; }
	inline void set_startMoney_5(int32_t value)
	{
		___startMoney_5 = value;
	}

	inline static int32_t get_offset_of_money_6() { return static_cast<int32_t>(offsetof(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7, ___money_6)); }
	inline int32_t get_money_6() const { return ___money_6; }
	inline int32_t* get_address_of_money_6() { return &___money_6; }
	inline void set_money_6(int32_t value)
	{
		___money_6 = value;
	}

	inline static int32_t get_offset_of_recoveryMaterial_7() { return static_cast<int32_t>(offsetof(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7, ___recoveryMaterial_7)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_recoveryMaterial_7() const { return ___recoveryMaterial_7; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_recoveryMaterial_7() { return &___recoveryMaterial_7; }
	inline void set_recoveryMaterial_7(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___recoveryMaterial_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recoveryMaterial_7), (void*)value);
	}

	inline static int32_t get_offset_of_buildMenuUI_8() { return static_cast<int32_t>(offsetof(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7, ___buildMenuUI_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_buildMenuUI_8() const { return ___buildMenuUI_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_buildMenuUI_8() { return &___buildMenuUI_8; }
	inline void set_buildMenuUI_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___buildMenuUI_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buildMenuUI_8), (void*)value);
	}

	inline static int32_t get_offset_of_inspectTurretUI_9() { return static_cast<int32_t>(offsetof(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7, ___inspectTurretUI_9)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_inspectTurretUI_9() const { return ___inspectTurretUI_9; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_inspectTurretUI_9() { return &___inspectTurretUI_9; }
	inline void set_inspectTurretUI_9(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___inspectTurretUI_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inspectTurretUI_9), (void*)value);
	}

	inline static int32_t get_offset_of_buildableTurretsUI_10() { return static_cast<int32_t>(offsetof(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7, ___buildableTurretsUI_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_buildableTurretsUI_10() const { return ___buildableTurretsUI_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_buildableTurretsUI_10() { return &___buildableTurretsUI_10; }
	inline void set_buildableTurretsUI_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___buildableTurretsUI_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buildableTurretsUI_10), (void*)value);
	}

	inline static int32_t get_offset_of_excavatorUI_11() { return static_cast<int32_t>(offsetof(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7, ___excavatorUI_11)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_excavatorUI_11() const { return ___excavatorUI_11; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_excavatorUI_11() { return &___excavatorUI_11; }
	inline void set_excavatorUI_11(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___excavatorUI_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___excavatorUI_11), (void*)value);
	}

	inline static int32_t get_offset_of_removeCommanderButton_12() { return static_cast<int32_t>(offsetof(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7, ___removeCommanderButton_12)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_removeCommanderButton_12() const { return ___removeCommanderButton_12; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_removeCommanderButton_12() { return &___removeCommanderButton_12; }
	inline void set_removeCommanderButton_12(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___removeCommanderButton_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___removeCommanderButton_12), (void*)value);
	}

	inline static int32_t get_offset_of_moneyText_13() { return static_cast<int32_t>(offsetof(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7, ___moneyText_13)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_moneyText_13() const { return ___moneyText_13; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_moneyText_13() { return &___moneyText_13; }
	inline void set_moneyText_13(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___moneyText_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moneyText_13), (void*)value);
	}

	inline static int32_t get_offset_of_sellText_14() { return static_cast<int32_t>(offsetof(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7, ___sellText_14)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_sellText_14() const { return ___sellText_14; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_sellText_14() { return &___sellText_14; }
	inline void set_sellText_14(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___sellText_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sellText_14), (void*)value);
	}

	inline static int32_t get_offset_of_repairText_15() { return static_cast<int32_t>(offsetof(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7, ___repairText_15)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_repairText_15() const { return ___repairText_15; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_repairText_15() { return &___repairText_15; }
	inline void set_repairText_15(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___repairText_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___repairText_15), (void*)value);
	}

	inline static int32_t get_offset_of_upgradeText_16() { return static_cast<int32_t>(offsetof(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7, ___upgradeText_16)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_upgradeText_16() const { return ___upgradeText_16; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_upgradeText_16() { return &___upgradeText_16; }
	inline void set_upgradeText_16(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___upgradeText_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___upgradeText_16), (void*)value);
	}

	inline static int32_t get_offset_of_debugText_17() { return static_cast<int32_t>(offsetof(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7, ___debugText_17)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_debugText_17() const { return ___debugText_17; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_debugText_17() { return &___debugText_17; }
	inline void set_debugText_17(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___debugText_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugText_17), (void*)value);
	}

	inline static int32_t get_offset_of_turretBuildCostText_18() { return static_cast<int32_t>(offsetof(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7, ___turretBuildCostText_18)); }
	inline TextMeshProUGUIU5BU5D_t630DB598E90AE8903F6A17F1C02F182796A49130* get_turretBuildCostText_18() const { return ___turretBuildCostText_18; }
	inline TextMeshProUGUIU5BU5D_t630DB598E90AE8903F6A17F1C02F182796A49130** get_address_of_turretBuildCostText_18() { return &___turretBuildCostText_18; }
	inline void set_turretBuildCostText_18(TextMeshProUGUIU5BU5D_t630DB598E90AE8903F6A17F1C02F182796A49130* value)
	{
		___turretBuildCostText_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___turretBuildCostText_18), (void*)value);
	}

	inline static int32_t get_offset_of_turretPrefabs_19() { return static_cast<int32_t>(offsetof(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7, ___turretPrefabs_19)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_turretPrefabs_19() const { return ___turretPrefabs_19; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_turretPrefabs_19() { return &___turretPrefabs_19; }
	inline void set_turretPrefabs_19(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___turretPrefabs_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___turretPrefabs_19), (void*)value);
	}

	inline static int32_t get_offset_of_sceneClickManager_20() { return static_cast<int32_t>(offsetof(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7, ___sceneClickManager_20)); }
	inline SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * get_sceneClickManager_20() const { return ___sceneClickManager_20; }
	inline SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F ** get_address_of_sceneClickManager_20() { return &___sceneClickManager_20; }
	inline void set_sceneClickManager_20(SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * value)
	{
		___sceneClickManager_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneClickManager_20), (void*)value);
	}

	inline static int32_t get_offset_of_commanderUI_21() { return static_cast<int32_t>(offsetof(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7, ___commanderUI_21)); }
	inline CommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706 * get_commanderUI_21() const { return ___commanderUI_21; }
	inline CommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706 ** get_address_of_commanderUI_21() { return &___commanderUI_21; }
	inline void set_commanderUI_21(CommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706 * value)
	{
		___commanderUI_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___commanderUI_21), (void*)value);
	}
};

struct TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7_StaticFields
{
public:
	// SerenityGarden.TurretBuildManager SerenityGarden.TurretBuildManager::instance
	TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7_StaticFields, ___instance_4)); }
	inline TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * get_instance_4() const { return ___instance_4; }
	inline TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// SerenityGarden.UIUpgradeRow
struct  UIUpgradeRow_t0D7CA0173330442E3CA78B85BFD5AF948D0CF79B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// TMPro.TextMeshProUGUI SerenityGarden.UIUpgradeRow::costText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___costText_4;
	// TMPro.TextMeshProUGUI SerenityGarden.UIUpgradeRow::upgradeText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___upgradeText_5;
	// UnityEngine.UI.Image[] SerenityGarden.UIUpgradeRow::upgradeImages
	ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* ___upgradeImages_6;
	// SerenityGarden.ShopManager SerenityGarden.UIUpgradeRow::shopManager
	ShopManager_t3BC41D78DB91E598887143A4DCF889A63D9D9D86 * ___shopManager_7;
	// UnityEngine.Color SerenityGarden.UIUpgradeRow::costValidColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___costValidColor_8;
	// UnityEngine.Color SerenityGarden.UIUpgradeRow::costInvalidColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___costInvalidColor_9;
	// UnityEngine.Color SerenityGarden.UIUpgradeRow::maxLevelColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___maxLevelColor_10;
	// SerenityGarden.PermanentUpgrade SerenityGarden.UIUpgradeRow::upgrade
	PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * ___upgrade_11;
	// System.Int32 SerenityGarden.UIUpgradeRow::upgradeCost
	int32_t ___upgradeCost_12;

public:
	inline static int32_t get_offset_of_costText_4() { return static_cast<int32_t>(offsetof(UIUpgradeRow_t0D7CA0173330442E3CA78B85BFD5AF948D0CF79B, ___costText_4)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_costText_4() const { return ___costText_4; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_costText_4() { return &___costText_4; }
	inline void set_costText_4(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___costText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___costText_4), (void*)value);
	}

	inline static int32_t get_offset_of_upgradeText_5() { return static_cast<int32_t>(offsetof(UIUpgradeRow_t0D7CA0173330442E3CA78B85BFD5AF948D0CF79B, ___upgradeText_5)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_upgradeText_5() const { return ___upgradeText_5; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_upgradeText_5() { return &___upgradeText_5; }
	inline void set_upgradeText_5(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___upgradeText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___upgradeText_5), (void*)value);
	}

	inline static int32_t get_offset_of_upgradeImages_6() { return static_cast<int32_t>(offsetof(UIUpgradeRow_t0D7CA0173330442E3CA78B85BFD5AF948D0CF79B, ___upgradeImages_6)); }
	inline ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* get_upgradeImages_6() const { return ___upgradeImages_6; }
	inline ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D** get_address_of_upgradeImages_6() { return &___upgradeImages_6; }
	inline void set_upgradeImages_6(ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* value)
	{
		___upgradeImages_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___upgradeImages_6), (void*)value);
	}

	inline static int32_t get_offset_of_shopManager_7() { return static_cast<int32_t>(offsetof(UIUpgradeRow_t0D7CA0173330442E3CA78B85BFD5AF948D0CF79B, ___shopManager_7)); }
	inline ShopManager_t3BC41D78DB91E598887143A4DCF889A63D9D9D86 * get_shopManager_7() const { return ___shopManager_7; }
	inline ShopManager_t3BC41D78DB91E598887143A4DCF889A63D9D9D86 ** get_address_of_shopManager_7() { return &___shopManager_7; }
	inline void set_shopManager_7(ShopManager_t3BC41D78DB91E598887143A4DCF889A63D9D9D86 * value)
	{
		___shopManager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shopManager_7), (void*)value);
	}

	inline static int32_t get_offset_of_costValidColor_8() { return static_cast<int32_t>(offsetof(UIUpgradeRow_t0D7CA0173330442E3CA78B85BFD5AF948D0CF79B, ___costValidColor_8)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_costValidColor_8() const { return ___costValidColor_8; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_costValidColor_8() { return &___costValidColor_8; }
	inline void set_costValidColor_8(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___costValidColor_8 = value;
	}

	inline static int32_t get_offset_of_costInvalidColor_9() { return static_cast<int32_t>(offsetof(UIUpgradeRow_t0D7CA0173330442E3CA78B85BFD5AF948D0CF79B, ___costInvalidColor_9)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_costInvalidColor_9() const { return ___costInvalidColor_9; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_costInvalidColor_9() { return &___costInvalidColor_9; }
	inline void set_costInvalidColor_9(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___costInvalidColor_9 = value;
	}

	inline static int32_t get_offset_of_maxLevelColor_10() { return static_cast<int32_t>(offsetof(UIUpgradeRow_t0D7CA0173330442E3CA78B85BFD5AF948D0CF79B, ___maxLevelColor_10)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_maxLevelColor_10() const { return ___maxLevelColor_10; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_maxLevelColor_10() { return &___maxLevelColor_10; }
	inline void set_maxLevelColor_10(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___maxLevelColor_10 = value;
	}

	inline static int32_t get_offset_of_upgrade_11() { return static_cast<int32_t>(offsetof(UIUpgradeRow_t0D7CA0173330442E3CA78B85BFD5AF948D0CF79B, ___upgrade_11)); }
	inline PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * get_upgrade_11() const { return ___upgrade_11; }
	inline PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 ** get_address_of_upgrade_11() { return &___upgrade_11; }
	inline void set_upgrade_11(PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * value)
	{
		___upgrade_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___upgrade_11), (void*)value);
	}

	inline static int32_t get_offset_of_upgradeCost_12() { return static_cast<int32_t>(offsetof(UIUpgradeRow_t0D7CA0173330442E3CA78B85BFD5AF948D0CF79B, ___upgradeCost_12)); }
	inline int32_t get_upgradeCost_12() const { return ___upgradeCost_12; }
	inline int32_t* get_address_of_upgradeCost_12() { return &___upgradeCost_12; }
	inline void set_upgradeCost_12(int32_t value)
	{
		___upgradeCost_12 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// Photon.Pun.MonoBehaviourPunCallbacks
struct  MonoBehaviourPunCallbacks_t1C6D230D24896A20359CB7016C7AD6E4654B885D  : public MonoBehaviourPun_t41335C3B2B6804088B520155103E3A0EEA4F814A
{
public:

public:
};


// SerenityGarden.LogicProcessBase
struct  LogicProcessBase_t0BA44484532560F6B824BAA719C44898468A1540  : public MonoBehaviourPun_t41335C3B2B6804088B520155103E3A0EEA4F814A
{
public:
	// System.Boolean SerenityGarden.LogicProcessBase::isInitialized
	bool ___isInitialized_5;

public:
	inline static int32_t get_offset_of_isInitialized_5() { return static_cast<int32_t>(offsetof(LogicProcessBase_t0BA44484532560F6B824BAA719C44898468A1540, ___isInitialized_5)); }
	inline bool get_isInitialized_5() const { return ___isInitialized_5; }
	inline bool* get_address_of_isInitialized_5() { return &___isInitialized_5; }
	inline void set_isInitialized_5(bool value)
	{
		___isInitialized_5 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_7)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_9)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_10)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_13)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_19)); }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// SerenityGarden.BattleStageStateManager
struct  BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E  : public MonoBehaviourPunCallbacks_t1C6D230D24896A20359CB7016C7AD6E4654B885D
{
public:
	// UnityEngine.GameObject SerenityGarden.BattleStageStateManager::gameWonCanvas
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameWonCanvas_6;
	// UnityEngine.GameObject SerenityGarden.BattleStageStateManager::gameOverCanvas
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameOverCanvas_7;
	// UnityEngine.GameObject SerenityGarden.BattleStageStateManager::playerDisconnectedPanel
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___playerDisconnectedPanel_8;
	// UnityEngine.GameObject SerenityGarden.BattleStageStateManager::starsPanel
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___starsPanel_9;
	// UnityEngine.GameObject[] SerenityGarden.BattleStageStateManager::starsUI
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___starsUI_10;
	// TMPro.TextMeshProUGUI SerenityGarden.BattleStageStateManager::moneyWonText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___moneyWonText_11;
	// SerenityGarden.InputManager SerenityGarden.BattleStageStateManager::inputManager
	InputManager_tE289ADE1B6513132E4401B7750E0AA2D31D40DF4 * ___inputManager_12;
	// System.Boolean SerenityGarden.BattleStageStateManager::spawnedAllEnemies
	bool ___spawnedAllEnemies_13;
	// System.Boolean SerenityGarden.BattleStageStateManager::gameOver
	bool ___gameOver_14;
	// System.Boolean SerenityGarden.BattleStageStateManager::netReceivedEvent
	bool ___netReceivedEvent_15;
	// System.Single SerenityGarden.BattleStageStateManager::lastCheckTime
	float ___lastCheckTime_16;

public:
	inline static int32_t get_offset_of_gameWonCanvas_6() { return static_cast<int32_t>(offsetof(BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E, ___gameWonCanvas_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_gameWonCanvas_6() const { return ___gameWonCanvas_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_gameWonCanvas_6() { return &___gameWonCanvas_6; }
	inline void set_gameWonCanvas_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___gameWonCanvas_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameWonCanvas_6), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverCanvas_7() { return static_cast<int32_t>(offsetof(BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E, ___gameOverCanvas_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_gameOverCanvas_7() const { return ___gameOverCanvas_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_gameOverCanvas_7() { return &___gameOverCanvas_7; }
	inline void set_gameOverCanvas_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___gameOverCanvas_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverCanvas_7), (void*)value);
	}

	inline static int32_t get_offset_of_playerDisconnectedPanel_8() { return static_cast<int32_t>(offsetof(BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E, ___playerDisconnectedPanel_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_playerDisconnectedPanel_8() const { return ___playerDisconnectedPanel_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_playerDisconnectedPanel_8() { return &___playerDisconnectedPanel_8; }
	inline void set_playerDisconnectedPanel_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___playerDisconnectedPanel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerDisconnectedPanel_8), (void*)value);
	}

	inline static int32_t get_offset_of_starsPanel_9() { return static_cast<int32_t>(offsetof(BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E, ___starsPanel_9)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_starsPanel_9() const { return ___starsPanel_9; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_starsPanel_9() { return &___starsPanel_9; }
	inline void set_starsPanel_9(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___starsPanel_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___starsPanel_9), (void*)value);
	}

	inline static int32_t get_offset_of_starsUI_10() { return static_cast<int32_t>(offsetof(BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E, ___starsUI_10)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_starsUI_10() const { return ___starsUI_10; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_starsUI_10() { return &___starsUI_10; }
	inline void set_starsUI_10(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___starsUI_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___starsUI_10), (void*)value);
	}

	inline static int32_t get_offset_of_moneyWonText_11() { return static_cast<int32_t>(offsetof(BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E, ___moneyWonText_11)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_moneyWonText_11() const { return ___moneyWonText_11; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_moneyWonText_11() { return &___moneyWonText_11; }
	inline void set_moneyWonText_11(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___moneyWonText_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moneyWonText_11), (void*)value);
	}

	inline static int32_t get_offset_of_inputManager_12() { return static_cast<int32_t>(offsetof(BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E, ___inputManager_12)); }
	inline InputManager_tE289ADE1B6513132E4401B7750E0AA2D31D40DF4 * get_inputManager_12() const { return ___inputManager_12; }
	inline InputManager_tE289ADE1B6513132E4401B7750E0AA2D31D40DF4 ** get_address_of_inputManager_12() { return &___inputManager_12; }
	inline void set_inputManager_12(InputManager_tE289ADE1B6513132E4401B7750E0AA2D31D40DF4 * value)
	{
		___inputManager_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputManager_12), (void*)value);
	}

	inline static int32_t get_offset_of_spawnedAllEnemies_13() { return static_cast<int32_t>(offsetof(BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E, ___spawnedAllEnemies_13)); }
	inline bool get_spawnedAllEnemies_13() const { return ___spawnedAllEnemies_13; }
	inline bool* get_address_of_spawnedAllEnemies_13() { return &___spawnedAllEnemies_13; }
	inline void set_spawnedAllEnemies_13(bool value)
	{
		___spawnedAllEnemies_13 = value;
	}

	inline static int32_t get_offset_of_gameOver_14() { return static_cast<int32_t>(offsetof(BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E, ___gameOver_14)); }
	inline bool get_gameOver_14() const { return ___gameOver_14; }
	inline bool* get_address_of_gameOver_14() { return &___gameOver_14; }
	inline void set_gameOver_14(bool value)
	{
		___gameOver_14 = value;
	}

	inline static int32_t get_offset_of_netReceivedEvent_15() { return static_cast<int32_t>(offsetof(BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E, ___netReceivedEvent_15)); }
	inline bool get_netReceivedEvent_15() const { return ___netReceivedEvent_15; }
	inline bool* get_address_of_netReceivedEvent_15() { return &___netReceivedEvent_15; }
	inline void set_netReceivedEvent_15(bool value)
	{
		___netReceivedEvent_15 = value;
	}

	inline static int32_t get_offset_of_lastCheckTime_16() { return static_cast<int32_t>(offsetof(BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E, ___lastCheckTime_16)); }
	inline float get_lastCheckTime_16() const { return ___lastCheckTime_16; }
	inline float* get_address_of_lastCheckTime_16() { return &___lastCheckTime_16; }
	inline void set_lastCheckTime_16(float value)
	{
		___lastCheckTime_16 = value;
	}
};

struct BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E_StaticFields
{
public:
	// SerenityGarden.BattleStageStateManager SerenityGarden.BattleStageStateManager::instance
	BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E_StaticFields, ___instance_5)); }
	inline BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E * get_instance_5() const { return ___instance_5; }
	inline BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_5), (void*)value);
	}
};


// SerenityGarden.CommanderUI
struct  CommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706  : public LogicProcessBase_t0BA44484532560F6B824BAA719C44898468A1540
{
public:
	// System.Boolean SerenityGarden.CommanderUI::selectDestination
	bool ___selectDestination_6;
	// UnityEngine.GameObject SerenityGarden.CommanderUI::commanderUI
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___commanderUI_7;
	// UnityEngine.Material SerenityGarden.CommanderUI::powerupMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___powerupMaterial_8;
	// System.Boolean SerenityGarden.CommanderUI::netReceivedUnpowerupEvent
	bool ___netReceivedUnpowerupEvent_9;
	// SerenityGarden.Commander SerenityGarden.CommanderUI::commander
	Commander_tB3DCEA8AD7D9DBD008C973FBADB172E0C5663E70 * ___commander_10;
	// SerenityGarden.Commander SerenityGarden.CommanderUI::otherPlayerCommander
	Commander_tB3DCEA8AD7D9DBD008C973FBADB172E0C5663E70 * ___otherPlayerCommander_11;
	// SerenityGarden.SceneClickManager SerenityGarden.CommanderUI::clickManager
	SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * ___clickManager_12;
	// System.Collections.Generic.List`1<UnityEngine.Material> SerenityGarden.CommanderUI::powerupPreviousMaterials
	List_1_t6A61046573B0BC4E12950B90305C189DD041D786 * ___powerupPreviousMaterials_13;

public:
	inline static int32_t get_offset_of_selectDestination_6() { return static_cast<int32_t>(offsetof(CommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706, ___selectDestination_6)); }
	inline bool get_selectDestination_6() const { return ___selectDestination_6; }
	inline bool* get_address_of_selectDestination_6() { return &___selectDestination_6; }
	inline void set_selectDestination_6(bool value)
	{
		___selectDestination_6 = value;
	}

	inline static int32_t get_offset_of_commanderUI_7() { return static_cast<int32_t>(offsetof(CommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706, ___commanderUI_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_commanderUI_7() const { return ___commanderUI_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_commanderUI_7() { return &___commanderUI_7; }
	inline void set_commanderUI_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___commanderUI_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___commanderUI_7), (void*)value);
	}

	inline static int32_t get_offset_of_powerupMaterial_8() { return static_cast<int32_t>(offsetof(CommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706, ___powerupMaterial_8)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_powerupMaterial_8() const { return ___powerupMaterial_8; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_powerupMaterial_8() { return &___powerupMaterial_8; }
	inline void set_powerupMaterial_8(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___powerupMaterial_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___powerupMaterial_8), (void*)value);
	}

	inline static int32_t get_offset_of_netReceivedUnpowerupEvent_9() { return static_cast<int32_t>(offsetof(CommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706, ___netReceivedUnpowerupEvent_9)); }
	inline bool get_netReceivedUnpowerupEvent_9() const { return ___netReceivedUnpowerupEvent_9; }
	inline bool* get_address_of_netReceivedUnpowerupEvent_9() { return &___netReceivedUnpowerupEvent_9; }
	inline void set_netReceivedUnpowerupEvent_9(bool value)
	{
		___netReceivedUnpowerupEvent_9 = value;
	}

	inline static int32_t get_offset_of_commander_10() { return static_cast<int32_t>(offsetof(CommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706, ___commander_10)); }
	inline Commander_tB3DCEA8AD7D9DBD008C973FBADB172E0C5663E70 * get_commander_10() const { return ___commander_10; }
	inline Commander_tB3DCEA8AD7D9DBD008C973FBADB172E0C5663E70 ** get_address_of_commander_10() { return &___commander_10; }
	inline void set_commander_10(Commander_tB3DCEA8AD7D9DBD008C973FBADB172E0C5663E70 * value)
	{
		___commander_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___commander_10), (void*)value);
	}

	inline static int32_t get_offset_of_otherPlayerCommander_11() { return static_cast<int32_t>(offsetof(CommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706, ___otherPlayerCommander_11)); }
	inline Commander_tB3DCEA8AD7D9DBD008C973FBADB172E0C5663E70 * get_otherPlayerCommander_11() const { return ___otherPlayerCommander_11; }
	inline Commander_tB3DCEA8AD7D9DBD008C973FBADB172E0C5663E70 ** get_address_of_otherPlayerCommander_11() { return &___otherPlayerCommander_11; }
	inline void set_otherPlayerCommander_11(Commander_tB3DCEA8AD7D9DBD008C973FBADB172E0C5663E70 * value)
	{
		___otherPlayerCommander_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___otherPlayerCommander_11), (void*)value);
	}

	inline static int32_t get_offset_of_clickManager_12() { return static_cast<int32_t>(offsetof(CommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706, ___clickManager_12)); }
	inline SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * get_clickManager_12() const { return ___clickManager_12; }
	inline SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F ** get_address_of_clickManager_12() { return &___clickManager_12; }
	inline void set_clickManager_12(SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * value)
	{
		___clickManager_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clickManager_12), (void*)value);
	}

	inline static int32_t get_offset_of_powerupPreviousMaterials_13() { return static_cast<int32_t>(offsetof(CommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706, ___powerupPreviousMaterials_13)); }
	inline List_1_t6A61046573B0BC4E12950B90305C189DD041D786 * get_powerupPreviousMaterials_13() const { return ___powerupPreviousMaterials_13; }
	inline List_1_t6A61046573B0BC4E12950B90305C189DD041D786 ** get_address_of_powerupPreviousMaterials_13() { return &___powerupPreviousMaterials_13; }
	inline void set_powerupPreviousMaterials_13(List_1_t6A61046573B0BC4E12950B90305C189DD041D786 * value)
	{
		___powerupPreviousMaterials_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___powerupPreviousMaterials_13), (void*)value);
	}
};


// SerenityGarden.EnemyBase
struct  EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F  : public LogicProcessBase_t0BA44484532560F6B824BAA719C44898468A1540
{
public:
	// SerenityGarden.EnemyScriptable SerenityGarden.EnemyBase::enemyScriptable
	EnemyScriptable_t2584BB5F1C028422F65872DD1D319E368515ACD0 * ___enemyScriptable_6;
	// System.Single SerenityGarden.EnemyBase::rotationSpeed
	float ___rotationSpeed_7;
	// UnityEngine.UI.Image SerenityGarden.EnemyBase::healthbarUI
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___healthbarUI_8;
	// SerenityGarden.NavigationManager SerenityGarden.EnemyBase::navigationManager
	NavigationManager_t2BDA4F216BC1C342E12FC4682084C70663B97155 * ___navigationManager_9;
	// SerenityGarden.HexagonalGrid SerenityGarden.EnemyBase::hexagonalGrid
	HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF * ___hexagonalGrid_10;
	// System.Single SerenityGarden.EnemyBase::health
	float ___health_11;
	// System.Single SerenityGarden.EnemyBase::maxHealth
	float ___maxHealth_12;
	// Photon.Pun.PhotonView SerenityGarden.EnemyBase::view
	PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * ___view_13;
	// SerenityGarden.EnemyType SerenityGarden.EnemyBase::<EnemyType>k__BackingField
	int32_t ___U3CEnemyTypeU3Ek__BackingField_14;
	// System.Int32 SerenityGarden.EnemyBase::<DestroyReward>k__BackingField
	int32_t ___U3CDestroyRewardU3Ek__BackingField_15;
	// SerenityGarden.HexagonalBlock SerenityGarden.EnemyBase::<CurrentBlock>k__BackingField
	HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * ___U3CCurrentBlockU3Ek__BackingField_16;
	// SerenityGarden.HexagonalBlock SerenityGarden.EnemyBase::<EndBlock>k__BackingField
	HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * ___U3CEndBlockU3Ek__BackingField_17;
	// SerenityGarden.HexagonalBlock SerenityGarden.EnemyBase::<NextBlock>k__BackingField
	HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * ___U3CNextBlockU3Ek__BackingField_18;
	// System.Single SerenityGarden.EnemyBase::<Speed>k__BackingField
	float ___U3CSpeedU3Ek__BackingField_19;
	// System.Single SerenityGarden.EnemyBase::<ReachedThreshold>k__BackingField
	float ___U3CReachedThresholdU3Ek__BackingField_20;
	// System.Boolean SerenityGarden.EnemyBase::<ReachedDestination>k__BackingField
	bool ___U3CReachedDestinationU3Ek__BackingField_21;
	// SerenityGarden.TurretBase SerenityGarden.EnemyBase::<Target>k__BackingField
	TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * ___U3CTargetU3Ek__BackingField_22;
	// System.Single SerenityGarden.EnemyBase::<Damage>k__BackingField
	float ___U3CDamageU3Ek__BackingField_23;
	// System.Single SerenityGarden.EnemyBase::<Range>k__BackingField
	float ___U3CRangeU3Ek__BackingField_24;
	// System.Single SerenityGarden.EnemyBase::<AttackCooldown>k__BackingField
	float ___U3CAttackCooldownU3Ek__BackingField_25;
	// System.Single SerenityGarden.EnemyBase::<LastAttackTime>k__BackingField
	float ___U3CLastAttackTimeU3Ek__BackingField_26;
	// System.Single SerenityGarden.EnemyBase::<SearchTargetCooldown>k__BackingField
	float ___U3CSearchTargetCooldownU3Ek__BackingField_27;
	// System.Single SerenityGarden.EnemyBase::<LastSearchTargetTime>k__BackingField
	float ___U3CLastSearchTargetTimeU3Ek__BackingField_28;
	// System.Boolean SerenityGarden.EnemyBase::netHealthChanged
	bool ___netHealthChanged_29;
	// System.Boolean SerenityGarden.EnemyBase::netReceiveHealth
	bool ___netReceiveHealth_30;

public:
	inline static int32_t get_offset_of_enemyScriptable_6() { return static_cast<int32_t>(offsetof(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F, ___enemyScriptable_6)); }
	inline EnemyScriptable_t2584BB5F1C028422F65872DD1D319E368515ACD0 * get_enemyScriptable_6() const { return ___enemyScriptable_6; }
	inline EnemyScriptable_t2584BB5F1C028422F65872DD1D319E368515ACD0 ** get_address_of_enemyScriptable_6() { return &___enemyScriptable_6; }
	inline void set_enemyScriptable_6(EnemyScriptable_t2584BB5F1C028422F65872DD1D319E368515ACD0 * value)
	{
		___enemyScriptable_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyScriptable_6), (void*)value);
	}

	inline static int32_t get_offset_of_rotationSpeed_7() { return static_cast<int32_t>(offsetof(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F, ___rotationSpeed_7)); }
	inline float get_rotationSpeed_7() const { return ___rotationSpeed_7; }
	inline float* get_address_of_rotationSpeed_7() { return &___rotationSpeed_7; }
	inline void set_rotationSpeed_7(float value)
	{
		___rotationSpeed_7 = value;
	}

	inline static int32_t get_offset_of_healthbarUI_8() { return static_cast<int32_t>(offsetof(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F, ___healthbarUI_8)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_healthbarUI_8() const { return ___healthbarUI_8; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_healthbarUI_8() { return &___healthbarUI_8; }
	inline void set_healthbarUI_8(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___healthbarUI_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthbarUI_8), (void*)value);
	}

	inline static int32_t get_offset_of_navigationManager_9() { return static_cast<int32_t>(offsetof(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F, ___navigationManager_9)); }
	inline NavigationManager_t2BDA4F216BC1C342E12FC4682084C70663B97155 * get_navigationManager_9() const { return ___navigationManager_9; }
	inline NavigationManager_t2BDA4F216BC1C342E12FC4682084C70663B97155 ** get_address_of_navigationManager_9() { return &___navigationManager_9; }
	inline void set_navigationManager_9(NavigationManager_t2BDA4F216BC1C342E12FC4682084C70663B97155 * value)
	{
		___navigationManager_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___navigationManager_9), (void*)value);
	}

	inline static int32_t get_offset_of_hexagonalGrid_10() { return static_cast<int32_t>(offsetof(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F, ___hexagonalGrid_10)); }
	inline HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF * get_hexagonalGrid_10() const { return ___hexagonalGrid_10; }
	inline HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF ** get_address_of_hexagonalGrid_10() { return &___hexagonalGrid_10; }
	inline void set_hexagonalGrid_10(HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF * value)
	{
		___hexagonalGrid_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hexagonalGrid_10), (void*)value);
	}

	inline static int32_t get_offset_of_health_11() { return static_cast<int32_t>(offsetof(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F, ___health_11)); }
	inline float get_health_11() const { return ___health_11; }
	inline float* get_address_of_health_11() { return &___health_11; }
	inline void set_health_11(float value)
	{
		___health_11 = value;
	}

	inline static int32_t get_offset_of_maxHealth_12() { return static_cast<int32_t>(offsetof(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F, ___maxHealth_12)); }
	inline float get_maxHealth_12() const { return ___maxHealth_12; }
	inline float* get_address_of_maxHealth_12() { return &___maxHealth_12; }
	inline void set_maxHealth_12(float value)
	{
		___maxHealth_12 = value;
	}

	inline static int32_t get_offset_of_view_13() { return static_cast<int32_t>(offsetof(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F, ___view_13)); }
	inline PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * get_view_13() const { return ___view_13; }
	inline PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B ** get_address_of_view_13() { return &___view_13; }
	inline void set_view_13(PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * value)
	{
		___view_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___view_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnemyTypeU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F, ___U3CEnemyTypeU3Ek__BackingField_14)); }
	inline int32_t get_U3CEnemyTypeU3Ek__BackingField_14() const { return ___U3CEnemyTypeU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CEnemyTypeU3Ek__BackingField_14() { return &___U3CEnemyTypeU3Ek__BackingField_14; }
	inline void set_U3CEnemyTypeU3Ek__BackingField_14(int32_t value)
	{
		___U3CEnemyTypeU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CDestroyRewardU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F, ___U3CDestroyRewardU3Ek__BackingField_15)); }
	inline int32_t get_U3CDestroyRewardU3Ek__BackingField_15() const { return ___U3CDestroyRewardU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CDestroyRewardU3Ek__BackingField_15() { return &___U3CDestroyRewardU3Ek__BackingField_15; }
	inline void set_U3CDestroyRewardU3Ek__BackingField_15(int32_t value)
	{
		___U3CDestroyRewardU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentBlockU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F, ___U3CCurrentBlockU3Ek__BackingField_16)); }
	inline HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * get_U3CCurrentBlockU3Ek__BackingField_16() const { return ___U3CCurrentBlockU3Ek__BackingField_16; }
	inline HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 ** get_address_of_U3CCurrentBlockU3Ek__BackingField_16() { return &___U3CCurrentBlockU3Ek__BackingField_16; }
	inline void set_U3CCurrentBlockU3Ek__BackingField_16(HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * value)
	{
		___U3CCurrentBlockU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentBlockU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEndBlockU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F, ___U3CEndBlockU3Ek__BackingField_17)); }
	inline HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * get_U3CEndBlockU3Ek__BackingField_17() const { return ___U3CEndBlockU3Ek__BackingField_17; }
	inline HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 ** get_address_of_U3CEndBlockU3Ek__BackingField_17() { return &___U3CEndBlockU3Ek__BackingField_17; }
	inline void set_U3CEndBlockU3Ek__BackingField_17(HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * value)
	{
		___U3CEndBlockU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEndBlockU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNextBlockU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F, ___U3CNextBlockU3Ek__BackingField_18)); }
	inline HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * get_U3CNextBlockU3Ek__BackingField_18() const { return ___U3CNextBlockU3Ek__BackingField_18; }
	inline HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 ** get_address_of_U3CNextBlockU3Ek__BackingField_18() { return &___U3CNextBlockU3Ek__BackingField_18; }
	inline void set_U3CNextBlockU3Ek__BackingField_18(HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * value)
	{
		___U3CNextBlockU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNextBlockU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSpeedU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F, ___U3CSpeedU3Ek__BackingField_19)); }
	inline float get_U3CSpeedU3Ek__BackingField_19() const { return ___U3CSpeedU3Ek__BackingField_19; }
	inline float* get_address_of_U3CSpeedU3Ek__BackingField_19() { return &___U3CSpeedU3Ek__BackingField_19; }
	inline void set_U3CSpeedU3Ek__BackingField_19(float value)
	{
		___U3CSpeedU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CReachedThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F, ___U3CReachedThresholdU3Ek__BackingField_20)); }
	inline float get_U3CReachedThresholdU3Ek__BackingField_20() const { return ___U3CReachedThresholdU3Ek__BackingField_20; }
	inline float* get_address_of_U3CReachedThresholdU3Ek__BackingField_20() { return &___U3CReachedThresholdU3Ek__BackingField_20; }
	inline void set_U3CReachedThresholdU3Ek__BackingField_20(float value)
	{
		___U3CReachedThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CReachedDestinationU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F, ___U3CReachedDestinationU3Ek__BackingField_21)); }
	inline bool get_U3CReachedDestinationU3Ek__BackingField_21() const { return ___U3CReachedDestinationU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CReachedDestinationU3Ek__BackingField_21() { return &___U3CReachedDestinationU3Ek__BackingField_21; }
	inline void set_U3CReachedDestinationU3Ek__BackingField_21(bool value)
	{
		___U3CReachedDestinationU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CTargetU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F, ___U3CTargetU3Ek__BackingField_22)); }
	inline TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * get_U3CTargetU3Ek__BackingField_22() const { return ___U3CTargetU3Ek__BackingField_22; }
	inline TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 ** get_address_of_U3CTargetU3Ek__BackingField_22() { return &___U3CTargetU3Ek__BackingField_22; }
	inline void set_U3CTargetU3Ek__BackingField_22(TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * value)
	{
		___U3CTargetU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTargetU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDamageU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F, ___U3CDamageU3Ek__BackingField_23)); }
	inline float get_U3CDamageU3Ek__BackingField_23() const { return ___U3CDamageU3Ek__BackingField_23; }
	inline float* get_address_of_U3CDamageU3Ek__BackingField_23() { return &___U3CDamageU3Ek__BackingField_23; }
	inline void set_U3CDamageU3Ek__BackingField_23(float value)
	{
		___U3CDamageU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CRangeU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F, ___U3CRangeU3Ek__BackingField_24)); }
	inline float get_U3CRangeU3Ek__BackingField_24() const { return ___U3CRangeU3Ek__BackingField_24; }
	inline float* get_address_of_U3CRangeU3Ek__BackingField_24() { return &___U3CRangeU3Ek__BackingField_24; }
	inline void set_U3CRangeU3Ek__BackingField_24(float value)
	{
		___U3CRangeU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CAttackCooldownU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F, ___U3CAttackCooldownU3Ek__BackingField_25)); }
	inline float get_U3CAttackCooldownU3Ek__BackingField_25() const { return ___U3CAttackCooldownU3Ek__BackingField_25; }
	inline float* get_address_of_U3CAttackCooldownU3Ek__BackingField_25() { return &___U3CAttackCooldownU3Ek__BackingField_25; }
	inline void set_U3CAttackCooldownU3Ek__BackingField_25(float value)
	{
		___U3CAttackCooldownU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CLastAttackTimeU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F, ___U3CLastAttackTimeU3Ek__BackingField_26)); }
	inline float get_U3CLastAttackTimeU3Ek__BackingField_26() const { return ___U3CLastAttackTimeU3Ek__BackingField_26; }
	inline float* get_address_of_U3CLastAttackTimeU3Ek__BackingField_26() { return &___U3CLastAttackTimeU3Ek__BackingField_26; }
	inline void set_U3CLastAttackTimeU3Ek__BackingField_26(float value)
	{
		___U3CLastAttackTimeU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CSearchTargetCooldownU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F, ___U3CSearchTargetCooldownU3Ek__BackingField_27)); }
	inline float get_U3CSearchTargetCooldownU3Ek__BackingField_27() const { return ___U3CSearchTargetCooldownU3Ek__BackingField_27; }
	inline float* get_address_of_U3CSearchTargetCooldownU3Ek__BackingField_27() { return &___U3CSearchTargetCooldownU3Ek__BackingField_27; }
	inline void set_U3CSearchTargetCooldownU3Ek__BackingField_27(float value)
	{
		___U3CSearchTargetCooldownU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CLastSearchTargetTimeU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F, ___U3CLastSearchTargetTimeU3Ek__BackingField_28)); }
	inline float get_U3CLastSearchTargetTimeU3Ek__BackingField_28() const { return ___U3CLastSearchTargetTimeU3Ek__BackingField_28; }
	inline float* get_address_of_U3CLastSearchTargetTimeU3Ek__BackingField_28() { return &___U3CLastSearchTargetTimeU3Ek__BackingField_28; }
	inline void set_U3CLastSearchTargetTimeU3Ek__BackingField_28(float value)
	{
		___U3CLastSearchTargetTimeU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_netHealthChanged_29() { return static_cast<int32_t>(offsetof(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F, ___netHealthChanged_29)); }
	inline bool get_netHealthChanged_29() const { return ___netHealthChanged_29; }
	inline bool* get_address_of_netHealthChanged_29() { return &___netHealthChanged_29; }
	inline void set_netHealthChanged_29(bool value)
	{
		___netHealthChanged_29 = value;
	}

	inline static int32_t get_offset_of_netReceiveHealth_30() { return static_cast<int32_t>(offsetof(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F, ___netReceiveHealth_30)); }
	inline bool get_netReceiveHealth_30() const { return ___netReceiveHealth_30; }
	inline bool* get_address_of_netReceiveHealth_30() { return &___netReceiveHealth_30; }
	inline void set_netReceiveHealth_30(bool value)
	{
		___netReceiveHealth_30 = value;
	}
};


// SerenityGarden.GamePauseManager
struct  GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284  : public MonoBehaviourPunCallbacks_t1C6D230D24896A20359CB7016C7AD6E4654B885D
{
public:
	// UnityEngine.GameObject SerenityGarden.GamePauseManager::pauseMenu
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___pauseMenu_6;
	// UnityEngine.GameObject SerenityGarden.GamePauseManager::confirmationMenu
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___confirmationMenu_7;
	// TMPro.TextMeshProUGUI SerenityGarden.GamePauseManager::confirmationText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___confirmationText_8;
	// System.Boolean SerenityGarden.GamePauseManager::gamePaused
	bool ___gamePaused_9;
	// System.Single SerenityGarden.GamePauseManager::pausedTime
	float ___pausedTime_10;
	// SerenityGarden.GamePauseManager/UnpauseGameEvent SerenityGarden.GamePauseManager::Event_UnpauseGame
	UnpauseGameEvent_tF8B3717899C31909A04021E3B7B30BC2CD7C1406 * ___Event_UnpauseGame_11;
	// System.Single SerenityGarden.GamePauseManager::pauseStartTime
	float ___pauseStartTime_12;
	// System.Boolean SerenityGarden.GamePauseManager::netReceivedEvent
	bool ___netReceivedEvent_13;
	// System.Boolean SerenityGarden.GamePauseManager::exitLevel
	bool ___exitLevel_14;
	// System.Boolean SerenityGarden.GamePauseManager::quit
	bool ___quit_15;

public:
	inline static int32_t get_offset_of_pauseMenu_6() { return static_cast<int32_t>(offsetof(GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284, ___pauseMenu_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_pauseMenu_6() const { return ___pauseMenu_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_pauseMenu_6() { return &___pauseMenu_6; }
	inline void set_pauseMenu_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___pauseMenu_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseMenu_6), (void*)value);
	}

	inline static int32_t get_offset_of_confirmationMenu_7() { return static_cast<int32_t>(offsetof(GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284, ___confirmationMenu_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_confirmationMenu_7() const { return ___confirmationMenu_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_confirmationMenu_7() { return &___confirmationMenu_7; }
	inline void set_confirmationMenu_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___confirmationMenu_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___confirmationMenu_7), (void*)value);
	}

	inline static int32_t get_offset_of_confirmationText_8() { return static_cast<int32_t>(offsetof(GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284, ___confirmationText_8)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_confirmationText_8() const { return ___confirmationText_8; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_confirmationText_8() { return &___confirmationText_8; }
	inline void set_confirmationText_8(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___confirmationText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___confirmationText_8), (void*)value);
	}

	inline static int32_t get_offset_of_gamePaused_9() { return static_cast<int32_t>(offsetof(GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284, ___gamePaused_9)); }
	inline bool get_gamePaused_9() const { return ___gamePaused_9; }
	inline bool* get_address_of_gamePaused_9() { return &___gamePaused_9; }
	inline void set_gamePaused_9(bool value)
	{
		___gamePaused_9 = value;
	}

	inline static int32_t get_offset_of_pausedTime_10() { return static_cast<int32_t>(offsetof(GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284, ___pausedTime_10)); }
	inline float get_pausedTime_10() const { return ___pausedTime_10; }
	inline float* get_address_of_pausedTime_10() { return &___pausedTime_10; }
	inline void set_pausedTime_10(float value)
	{
		___pausedTime_10 = value;
	}

	inline static int32_t get_offset_of_Event_UnpauseGame_11() { return static_cast<int32_t>(offsetof(GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284, ___Event_UnpauseGame_11)); }
	inline UnpauseGameEvent_tF8B3717899C31909A04021E3B7B30BC2CD7C1406 * get_Event_UnpauseGame_11() const { return ___Event_UnpauseGame_11; }
	inline UnpauseGameEvent_tF8B3717899C31909A04021E3B7B30BC2CD7C1406 ** get_address_of_Event_UnpauseGame_11() { return &___Event_UnpauseGame_11; }
	inline void set_Event_UnpauseGame_11(UnpauseGameEvent_tF8B3717899C31909A04021E3B7B30BC2CD7C1406 * value)
	{
		___Event_UnpauseGame_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Event_UnpauseGame_11), (void*)value);
	}

	inline static int32_t get_offset_of_pauseStartTime_12() { return static_cast<int32_t>(offsetof(GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284, ___pauseStartTime_12)); }
	inline float get_pauseStartTime_12() const { return ___pauseStartTime_12; }
	inline float* get_address_of_pauseStartTime_12() { return &___pauseStartTime_12; }
	inline void set_pauseStartTime_12(float value)
	{
		___pauseStartTime_12 = value;
	}

	inline static int32_t get_offset_of_netReceivedEvent_13() { return static_cast<int32_t>(offsetof(GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284, ___netReceivedEvent_13)); }
	inline bool get_netReceivedEvent_13() const { return ___netReceivedEvent_13; }
	inline bool* get_address_of_netReceivedEvent_13() { return &___netReceivedEvent_13; }
	inline void set_netReceivedEvent_13(bool value)
	{
		___netReceivedEvent_13 = value;
	}

	inline static int32_t get_offset_of_exitLevel_14() { return static_cast<int32_t>(offsetof(GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284, ___exitLevel_14)); }
	inline bool get_exitLevel_14() const { return ___exitLevel_14; }
	inline bool* get_address_of_exitLevel_14() { return &___exitLevel_14; }
	inline void set_exitLevel_14(bool value)
	{
		___exitLevel_14 = value;
	}

	inline static int32_t get_offset_of_quit_15() { return static_cast<int32_t>(offsetof(GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284, ___quit_15)); }
	inline bool get_quit_15() const { return ___quit_15; }
	inline bool* get_address_of_quit_15() { return &___quit_15; }
	inline void set_quit_15(bool value)
	{
		___quit_15 = value;
	}
};

struct GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_StaticFields
{
public:
	// SerenityGarden.GamePauseManager SerenityGarden.GamePauseManager::instance
	GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284 * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_StaticFields, ___instance_5)); }
	inline GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284 * get_instance_5() const { return ___instance_5; }
	inline GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_5), (void*)value);
	}
};


// SerenityGarden.HexagonalGrid
struct  HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF  : public LogicProcessBase_t0BA44484532560F6B824BAA719C44898468A1540
{
public:
	// UnityEngine.GameObject SerenityGarden.HexagonalGrid::playerBasePrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___playerBasePrefab_7;
	// UnityEngine.GameObject SerenityGarden.HexagonalGrid::commanderPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___commanderPrefab_8;
	// UnityEngine.GameObject SerenityGarden.HexagonalGrid::hexagonPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___hexagonPrefab_9;
	// System.Single SerenityGarden.HexagonalGrid::diameter
	float ___diameter_10;
	// System.Single SerenityGarden.HexagonalGrid::offset
	float ___offset_11;
	// System.Single SerenityGarden.HexagonalGrid::mapScaleOffset
	float ___mapScaleOffset_12;
	// System.String SerenityGarden.HexagonalGrid::mapPresetFile
	String_t* ___mapPresetFile_13;
	// SerenityGarden.StageScriptable SerenityGarden.HexagonalGrid::selectedStage
	StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 * ___selectedStage_14;
	// System.Collections.Generic.List`1<SerenityGarden.HexagonalBlock> SerenityGarden.HexagonalGrid::gridCells
	List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * ___gridCells_15;
	// System.Single SerenityGarden.HexagonalGrid::scaleFact
	float ___scaleFact_17;
	// UnityEngine.GameObject SerenityGarden.HexagonalGrid::walkableArea
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___walkableArea_18;

public:
	inline static int32_t get_offset_of_playerBasePrefab_7() { return static_cast<int32_t>(offsetof(HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF, ___playerBasePrefab_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_playerBasePrefab_7() const { return ___playerBasePrefab_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_playerBasePrefab_7() { return &___playerBasePrefab_7; }
	inline void set_playerBasePrefab_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___playerBasePrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerBasePrefab_7), (void*)value);
	}

	inline static int32_t get_offset_of_commanderPrefab_8() { return static_cast<int32_t>(offsetof(HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF, ___commanderPrefab_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_commanderPrefab_8() const { return ___commanderPrefab_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_commanderPrefab_8() { return &___commanderPrefab_8; }
	inline void set_commanderPrefab_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___commanderPrefab_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___commanderPrefab_8), (void*)value);
	}

	inline static int32_t get_offset_of_hexagonPrefab_9() { return static_cast<int32_t>(offsetof(HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF, ___hexagonPrefab_9)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_hexagonPrefab_9() const { return ___hexagonPrefab_9; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_hexagonPrefab_9() { return &___hexagonPrefab_9; }
	inline void set_hexagonPrefab_9(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___hexagonPrefab_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hexagonPrefab_9), (void*)value);
	}

	inline static int32_t get_offset_of_diameter_10() { return static_cast<int32_t>(offsetof(HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF, ___diameter_10)); }
	inline float get_diameter_10() const { return ___diameter_10; }
	inline float* get_address_of_diameter_10() { return &___diameter_10; }
	inline void set_diameter_10(float value)
	{
		___diameter_10 = value;
	}

	inline static int32_t get_offset_of_offset_11() { return static_cast<int32_t>(offsetof(HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF, ___offset_11)); }
	inline float get_offset_11() const { return ___offset_11; }
	inline float* get_address_of_offset_11() { return &___offset_11; }
	inline void set_offset_11(float value)
	{
		___offset_11 = value;
	}

	inline static int32_t get_offset_of_mapScaleOffset_12() { return static_cast<int32_t>(offsetof(HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF, ___mapScaleOffset_12)); }
	inline float get_mapScaleOffset_12() const { return ___mapScaleOffset_12; }
	inline float* get_address_of_mapScaleOffset_12() { return &___mapScaleOffset_12; }
	inline void set_mapScaleOffset_12(float value)
	{
		___mapScaleOffset_12 = value;
	}

	inline static int32_t get_offset_of_mapPresetFile_13() { return static_cast<int32_t>(offsetof(HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF, ___mapPresetFile_13)); }
	inline String_t* get_mapPresetFile_13() const { return ___mapPresetFile_13; }
	inline String_t** get_address_of_mapPresetFile_13() { return &___mapPresetFile_13; }
	inline void set_mapPresetFile_13(String_t* value)
	{
		___mapPresetFile_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mapPresetFile_13), (void*)value);
	}

	inline static int32_t get_offset_of_selectedStage_14() { return static_cast<int32_t>(offsetof(HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF, ___selectedStage_14)); }
	inline StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 * get_selectedStage_14() const { return ___selectedStage_14; }
	inline StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 ** get_address_of_selectedStage_14() { return &___selectedStage_14; }
	inline void set_selectedStage_14(StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 * value)
	{
		___selectedStage_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedStage_14), (void*)value);
	}

	inline static int32_t get_offset_of_gridCells_15() { return static_cast<int32_t>(offsetof(HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF, ___gridCells_15)); }
	inline List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * get_gridCells_15() const { return ___gridCells_15; }
	inline List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 ** get_address_of_gridCells_15() { return &___gridCells_15; }
	inline void set_gridCells_15(List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * value)
	{
		___gridCells_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridCells_15), (void*)value);
	}

	inline static int32_t get_offset_of_scaleFact_17() { return static_cast<int32_t>(offsetof(HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF, ___scaleFact_17)); }
	inline float get_scaleFact_17() const { return ___scaleFact_17; }
	inline float* get_address_of_scaleFact_17() { return &___scaleFact_17; }
	inline void set_scaleFact_17(float value)
	{
		___scaleFact_17 = value;
	}

	inline static int32_t get_offset_of_walkableArea_18() { return static_cast<int32_t>(offsetof(HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF, ___walkableArea_18)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_walkableArea_18() const { return ___walkableArea_18; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_walkableArea_18() { return &___walkableArea_18; }
	inline void set_walkableArea_18(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___walkableArea_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___walkableArea_18), (void*)value);
	}
};

struct HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF_StaticFields
{
public:
	// SerenityGarden.HexagonalGrid SerenityGarden.HexagonalGrid::instance
	HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF * ___instance_6;
	// System.Collections.Generic.List`1<SerenityGarden.HexagonalBlock> SerenityGarden.HexagonalGrid::enemyGoal
	List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * ___enemyGoal_16;

public:
	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF_StaticFields, ___instance_6)); }
	inline HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF * get_instance_6() const { return ___instance_6; }
	inline HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_6), (void*)value);
	}

	inline static int32_t get_offset_of_enemyGoal_16() { return static_cast<int32_t>(offsetof(HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF_StaticFields, ___enemyGoal_16)); }
	inline List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * get_enemyGoal_16() const { return ___enemyGoal_16; }
	inline List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 ** get_address_of_enemyGoal_16() { return &___enemyGoal_16; }
	inline void set_enemyGoal_16(List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * value)
	{
		___enemyGoal_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyGoal_16), (void*)value);
	}
};


// SerenityGarden.ShopManager
struct  ShopManager_t3BC41D78DB91E598887143A4DCF889A63D9D9D86  : public LogicProcessBase_t0BA44484532560F6B824BAA719C44898468A1540
{
public:
	// UnityEngine.GameObject SerenityGarden.ShopManager::headerObj
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___headerObj_6;
	// UnityEngine.GameObject SerenityGarden.ShopManager::headerBtnPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___headerBtnPrefab_7;
	// SerenityGarden.UIUpgradeRow[] SerenityGarden.ShopManager::upgradeRows
	UIUpgradeRowU5BU5D_t98FA91485B91ADAFFC2AF9548A16970411E6882C* ___upgradeRows_8;
	// TMPro.TextMeshProUGUI SerenityGarden.ShopManager::moneyText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___moneyText_9;
	// System.Int32 SerenityGarden.ShopManager::selectedTurretIndex
	int32_t ___selectedTurretIndex_10;
	// SerenityGarden.SceneDataRetainer SerenityGarden.ShopManager::dataRetainer
	SceneDataRetainer_tDC5BF2B9D42AA0F469B4B9312A2CEA24F1F4A8C2 * ___dataRetainer_11;
	// SerenityGarden.PlayerDataSaver SerenityGarden.ShopManager::dataSaver
	PlayerDataSaver_t0DF77BE78C4E557888DF1F9F9AD801FAF46B22CA * ___dataSaver_12;

public:
	inline static int32_t get_offset_of_headerObj_6() { return static_cast<int32_t>(offsetof(ShopManager_t3BC41D78DB91E598887143A4DCF889A63D9D9D86, ___headerObj_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_headerObj_6() const { return ___headerObj_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_headerObj_6() { return &___headerObj_6; }
	inline void set_headerObj_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___headerObj_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headerObj_6), (void*)value);
	}

	inline static int32_t get_offset_of_headerBtnPrefab_7() { return static_cast<int32_t>(offsetof(ShopManager_t3BC41D78DB91E598887143A4DCF889A63D9D9D86, ___headerBtnPrefab_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_headerBtnPrefab_7() const { return ___headerBtnPrefab_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_headerBtnPrefab_7() { return &___headerBtnPrefab_7; }
	inline void set_headerBtnPrefab_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___headerBtnPrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headerBtnPrefab_7), (void*)value);
	}

	inline static int32_t get_offset_of_upgradeRows_8() { return static_cast<int32_t>(offsetof(ShopManager_t3BC41D78DB91E598887143A4DCF889A63D9D9D86, ___upgradeRows_8)); }
	inline UIUpgradeRowU5BU5D_t98FA91485B91ADAFFC2AF9548A16970411E6882C* get_upgradeRows_8() const { return ___upgradeRows_8; }
	inline UIUpgradeRowU5BU5D_t98FA91485B91ADAFFC2AF9548A16970411E6882C** get_address_of_upgradeRows_8() { return &___upgradeRows_8; }
	inline void set_upgradeRows_8(UIUpgradeRowU5BU5D_t98FA91485B91ADAFFC2AF9548A16970411E6882C* value)
	{
		___upgradeRows_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___upgradeRows_8), (void*)value);
	}

	inline static int32_t get_offset_of_moneyText_9() { return static_cast<int32_t>(offsetof(ShopManager_t3BC41D78DB91E598887143A4DCF889A63D9D9D86, ___moneyText_9)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_moneyText_9() const { return ___moneyText_9; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_moneyText_9() { return &___moneyText_9; }
	inline void set_moneyText_9(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___moneyText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moneyText_9), (void*)value);
	}

	inline static int32_t get_offset_of_selectedTurretIndex_10() { return static_cast<int32_t>(offsetof(ShopManager_t3BC41D78DB91E598887143A4DCF889A63D9D9D86, ___selectedTurretIndex_10)); }
	inline int32_t get_selectedTurretIndex_10() const { return ___selectedTurretIndex_10; }
	inline int32_t* get_address_of_selectedTurretIndex_10() { return &___selectedTurretIndex_10; }
	inline void set_selectedTurretIndex_10(int32_t value)
	{
		___selectedTurretIndex_10 = value;
	}

	inline static int32_t get_offset_of_dataRetainer_11() { return static_cast<int32_t>(offsetof(ShopManager_t3BC41D78DB91E598887143A4DCF889A63D9D9D86, ___dataRetainer_11)); }
	inline SceneDataRetainer_tDC5BF2B9D42AA0F469B4B9312A2CEA24F1F4A8C2 * get_dataRetainer_11() const { return ___dataRetainer_11; }
	inline SceneDataRetainer_tDC5BF2B9D42AA0F469B4B9312A2CEA24F1F4A8C2 ** get_address_of_dataRetainer_11() { return &___dataRetainer_11; }
	inline void set_dataRetainer_11(SceneDataRetainer_tDC5BF2B9D42AA0F469B4B9312A2CEA24F1F4A8C2 * value)
	{
		___dataRetainer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataRetainer_11), (void*)value);
	}

	inline static int32_t get_offset_of_dataSaver_12() { return static_cast<int32_t>(offsetof(ShopManager_t3BC41D78DB91E598887143A4DCF889A63D9D9D86, ___dataSaver_12)); }
	inline PlayerDataSaver_t0DF77BE78C4E557888DF1F9F9AD801FAF46B22CA * get_dataSaver_12() const { return ___dataSaver_12; }
	inline PlayerDataSaver_t0DF77BE78C4E557888DF1F9F9AD801FAF46B22CA ** get_address_of_dataSaver_12() { return &___dataSaver_12; }
	inline void set_dataSaver_12(PlayerDataSaver_t0DF77BE78C4E557888DF1F9F9AD801FAF46B22CA * value)
	{
		___dataSaver_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataSaver_12), (void*)value);
	}
};


// SerenityGarden.TurretBase
struct  TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441  : public LogicProcessBase_t0BA44484532560F6B824BAA719C44898468A1540
{
public:
	// UnityEngine.GameObject SerenityGarden.TurretBase::rangePrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___rangePrefab_6;
	// SerenityGarden.TurretType SerenityGarden.TurretBase::turretType
	int32_t ___turretType_7;
	// UnityEngine.UI.Image SerenityGarden.TurretBase::healthbarUI
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___healthbarUI_8;
	// SerenityGarden.TurretStatusScriptable SerenityGarden.TurretBase::turretUpgradePattern
	TurretStatusScriptable_tC2CA1463FF3352C59A01B5547EB7A385CD97F9A0 * ___turretUpgradePattern_9;
	// UnityEngine.GameObject SerenityGarden.TurretBase::partToRotate
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___partToRotate_10;
	// UnityEngine.GameObject SerenityGarden.TurretBase::firePoint
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___firePoint_11;
	// TMPro.TextMeshProUGUI SerenityGarden.TurretBase::networkNameText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___networkNameText_12;
	// UnityEngine.GameObject SerenityGarden.TurretBase::levelGfx
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___levelGfx_13;
	// System.Single SerenityGarden.TurretBase::searchTargetDelay
	float ___searchTargetDelay_14;
	// System.Single SerenityGarden.TurretBase::lastSearchTargetTime
	float ___lastSearchTargetTime_15;
	// SerenityGarden.EnemyBase SerenityGarden.TurretBase::foundTarget
	EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * ___foundTarget_16;
	// System.Single SerenityGarden.TurretBase::attackCooldown
	float ___attackCooldown_17;
	// System.Single SerenityGarden.TurretBase::lastAttackTime
	float ___lastAttackTime_18;
	// System.Single SerenityGarden.TurretBase::maxHealth
	float ___maxHealth_19;
	// System.Single SerenityGarden.TurretBase::health
	float ___health_20;
	// System.Single SerenityGarden.TurretBase::damage
	float ___damage_21;
	// System.Single SerenityGarden.TurretBase::range
	float ___range_22;
	// UnityEngine.GameObject SerenityGarden.TurretBase::rangeObj
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___rangeObj_23;
	// Photon.Pun.PhotonView SerenityGarden.TurretBase::view
	PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * ___view_24;
	// System.Int32 SerenityGarden.TurretBase::<DestroyReward>k__BackingField
	int32_t ___U3CDestroyRewardU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_rangePrefab_6() { return static_cast<int32_t>(offsetof(TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441, ___rangePrefab_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_rangePrefab_6() const { return ___rangePrefab_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_rangePrefab_6() { return &___rangePrefab_6; }
	inline void set_rangePrefab_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___rangePrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rangePrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_turretType_7() { return static_cast<int32_t>(offsetof(TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441, ___turretType_7)); }
	inline int32_t get_turretType_7() const { return ___turretType_7; }
	inline int32_t* get_address_of_turretType_7() { return &___turretType_7; }
	inline void set_turretType_7(int32_t value)
	{
		___turretType_7 = value;
	}

	inline static int32_t get_offset_of_healthbarUI_8() { return static_cast<int32_t>(offsetof(TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441, ___healthbarUI_8)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_healthbarUI_8() const { return ___healthbarUI_8; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_healthbarUI_8() { return &___healthbarUI_8; }
	inline void set_healthbarUI_8(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___healthbarUI_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthbarUI_8), (void*)value);
	}

	inline static int32_t get_offset_of_turretUpgradePattern_9() { return static_cast<int32_t>(offsetof(TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441, ___turretUpgradePattern_9)); }
	inline TurretStatusScriptable_tC2CA1463FF3352C59A01B5547EB7A385CD97F9A0 * get_turretUpgradePattern_9() const { return ___turretUpgradePattern_9; }
	inline TurretStatusScriptable_tC2CA1463FF3352C59A01B5547EB7A385CD97F9A0 ** get_address_of_turretUpgradePattern_9() { return &___turretUpgradePattern_9; }
	inline void set_turretUpgradePattern_9(TurretStatusScriptable_tC2CA1463FF3352C59A01B5547EB7A385CD97F9A0 * value)
	{
		___turretUpgradePattern_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___turretUpgradePattern_9), (void*)value);
	}

	inline static int32_t get_offset_of_partToRotate_10() { return static_cast<int32_t>(offsetof(TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441, ___partToRotate_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_partToRotate_10() const { return ___partToRotate_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_partToRotate_10() { return &___partToRotate_10; }
	inline void set_partToRotate_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___partToRotate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___partToRotate_10), (void*)value);
	}

	inline static int32_t get_offset_of_firePoint_11() { return static_cast<int32_t>(offsetof(TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441, ___firePoint_11)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_firePoint_11() const { return ___firePoint_11; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_firePoint_11() { return &___firePoint_11; }
	inline void set_firePoint_11(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___firePoint_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firePoint_11), (void*)value);
	}

	inline static int32_t get_offset_of_networkNameText_12() { return static_cast<int32_t>(offsetof(TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441, ___networkNameText_12)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_networkNameText_12() const { return ___networkNameText_12; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_networkNameText_12() { return &___networkNameText_12; }
	inline void set_networkNameText_12(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___networkNameText_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkNameText_12), (void*)value);
	}

	inline static int32_t get_offset_of_levelGfx_13() { return static_cast<int32_t>(offsetof(TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441, ___levelGfx_13)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_levelGfx_13() const { return ___levelGfx_13; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_levelGfx_13() { return &___levelGfx_13; }
	inline void set_levelGfx_13(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___levelGfx_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelGfx_13), (void*)value);
	}

	inline static int32_t get_offset_of_searchTargetDelay_14() { return static_cast<int32_t>(offsetof(TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441, ___searchTargetDelay_14)); }
	inline float get_searchTargetDelay_14() const { return ___searchTargetDelay_14; }
	inline float* get_address_of_searchTargetDelay_14() { return &___searchTargetDelay_14; }
	inline void set_searchTargetDelay_14(float value)
	{
		___searchTargetDelay_14 = value;
	}

	inline static int32_t get_offset_of_lastSearchTargetTime_15() { return static_cast<int32_t>(offsetof(TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441, ___lastSearchTargetTime_15)); }
	inline float get_lastSearchTargetTime_15() const { return ___lastSearchTargetTime_15; }
	inline float* get_address_of_lastSearchTargetTime_15() { return &___lastSearchTargetTime_15; }
	inline void set_lastSearchTargetTime_15(float value)
	{
		___lastSearchTargetTime_15 = value;
	}

	inline static int32_t get_offset_of_foundTarget_16() { return static_cast<int32_t>(offsetof(TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441, ___foundTarget_16)); }
	inline EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * get_foundTarget_16() const { return ___foundTarget_16; }
	inline EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F ** get_address_of_foundTarget_16() { return &___foundTarget_16; }
	inline void set_foundTarget_16(EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * value)
	{
		___foundTarget_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foundTarget_16), (void*)value);
	}

	inline static int32_t get_offset_of_attackCooldown_17() { return static_cast<int32_t>(offsetof(TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441, ___attackCooldown_17)); }
	inline float get_attackCooldown_17() const { return ___attackCooldown_17; }
	inline float* get_address_of_attackCooldown_17() { return &___attackCooldown_17; }
	inline void set_attackCooldown_17(float value)
	{
		___attackCooldown_17 = value;
	}

	inline static int32_t get_offset_of_lastAttackTime_18() { return static_cast<int32_t>(offsetof(TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441, ___lastAttackTime_18)); }
	inline float get_lastAttackTime_18() const { return ___lastAttackTime_18; }
	inline float* get_address_of_lastAttackTime_18() { return &___lastAttackTime_18; }
	inline void set_lastAttackTime_18(float value)
	{
		___lastAttackTime_18 = value;
	}

	inline static int32_t get_offset_of_maxHealth_19() { return static_cast<int32_t>(offsetof(TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441, ___maxHealth_19)); }
	inline float get_maxHealth_19() const { return ___maxHealth_19; }
	inline float* get_address_of_maxHealth_19() { return &___maxHealth_19; }
	inline void set_maxHealth_19(float value)
	{
		___maxHealth_19 = value;
	}

	inline static int32_t get_offset_of_health_20() { return static_cast<int32_t>(offsetof(TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441, ___health_20)); }
	inline float get_health_20() const { return ___health_20; }
	inline float* get_address_of_health_20() { return &___health_20; }
	inline void set_health_20(float value)
	{
		___health_20 = value;
	}

	inline static int32_t get_offset_of_damage_21() { return static_cast<int32_t>(offsetof(TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441, ___damage_21)); }
	inline float get_damage_21() const { return ___damage_21; }
	inline float* get_address_of_damage_21() { return &___damage_21; }
	inline void set_damage_21(float value)
	{
		___damage_21 = value;
	}

	inline static int32_t get_offset_of_range_22() { return static_cast<int32_t>(offsetof(TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441, ___range_22)); }
	inline float get_range_22() const { return ___range_22; }
	inline float* get_address_of_range_22() { return &___range_22; }
	inline void set_range_22(float value)
	{
		___range_22 = value;
	}

	inline static int32_t get_offset_of_rangeObj_23() { return static_cast<int32_t>(offsetof(TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441, ___rangeObj_23)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_rangeObj_23() const { return ___rangeObj_23; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_rangeObj_23() { return &___rangeObj_23; }
	inline void set_rangeObj_23(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___rangeObj_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rangeObj_23), (void*)value);
	}

	inline static int32_t get_offset_of_view_24() { return static_cast<int32_t>(offsetof(TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441, ___view_24)); }
	inline PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * get_view_24() const { return ___view_24; }
	inline PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B ** get_address_of_view_24() { return &___view_24; }
	inline void set_view_24(PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * value)
	{
		___view_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___view_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDestroyRewardU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441, ___U3CDestroyRewardU3Ek__BackingField_25)); }
	inline int32_t get_U3CDestroyRewardU3Ek__BackingField_25() const { return ___U3CDestroyRewardU3Ek__BackingField_25; }
	inline int32_t* get_address_of_U3CDestroyRewardU3Ek__BackingField_25() { return &___U3CDestroyRewardU3Ek__BackingField_25; }
	inline void set_U3CDestroyRewardU3Ek__BackingField_25(int32_t value)
	{
		___U3CDestroyRewardU3Ek__BackingField_25 = value;
	}
};


// SerenityGarden.WaveManager
struct  WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6  : public LogicProcessBase_t0BA44484532560F6B824BAA719C44898468A1540
{
public:
	// UnityEngine.GameObject SerenityGarden.WaveManager::waveSkipButton
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___waveSkipButton_7;
	// UnityEngine.GameObject SerenityGarden.WaveManager::stageStartButton
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___stageStartButton_8;
	// System.Single SerenityGarden.WaveManager::moneyPerSecondSkip
	float ___moneyPerSecondSkip_9;
	// System.Single SerenityGarden.WaveManager::enemySpawnDelay
	float ___enemySpawnDelay_10;
	// System.Single SerenityGarden.WaveManager::waveDelay
	float ___waveDelay_11;
	// System.Single SerenityGarden.WaveManager::lastWaveEndTime
	float ___lastWaveEndTime_12;
	// System.Boolean SerenityGarden.WaveManager::startedWave
	bool ___startedWave_13;
	// SerenityGarden.StageScriptable SerenityGarden.WaveManager::selectedStage
	StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 * ___selectedStage_14;
	// System.Collections.Generic.List`1<SerenityGarden.HexagonalBlock> SerenityGarden.WaveManager::spawnPoints
	List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * ___spawnPoints_15;
	// SerenityGarden.HexagonalGrid SerenityGarden.WaveManager::gridManager
	HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF * ___gridManager_16;
	// SerenityGarden.TurretBuildManager SerenityGarden.WaveManager::buildManager
	TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * ___buildManager_17;
	// SerenityGarden.BattleStageStateManager SerenityGarden.WaveManager::stageManager
	BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E * ___stageManager_18;
	// TMPro.TextMeshProUGUI SerenityGarden.WaveManager::waveSkipText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___waveSkipText_19;
	// System.Int32 SerenityGarden.WaveManager::currentWaveIndex
	int32_t ___currentWaveIndex_20;
	// System.Boolean SerenityGarden.WaveManager::spawnWaves
	bool ___spawnWaves_21;
	// System.Int32 SerenityGarden.WaveManager::enemyIndex
	int32_t ___enemyIndex_22;

public:
	inline static int32_t get_offset_of_waveSkipButton_7() { return static_cast<int32_t>(offsetof(WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6, ___waveSkipButton_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_waveSkipButton_7() const { return ___waveSkipButton_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_waveSkipButton_7() { return &___waveSkipButton_7; }
	inline void set_waveSkipButton_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___waveSkipButton_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waveSkipButton_7), (void*)value);
	}

	inline static int32_t get_offset_of_stageStartButton_8() { return static_cast<int32_t>(offsetof(WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6, ___stageStartButton_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_stageStartButton_8() const { return ___stageStartButton_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_stageStartButton_8() { return &___stageStartButton_8; }
	inline void set_stageStartButton_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___stageStartButton_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stageStartButton_8), (void*)value);
	}

	inline static int32_t get_offset_of_moneyPerSecondSkip_9() { return static_cast<int32_t>(offsetof(WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6, ___moneyPerSecondSkip_9)); }
	inline float get_moneyPerSecondSkip_9() const { return ___moneyPerSecondSkip_9; }
	inline float* get_address_of_moneyPerSecondSkip_9() { return &___moneyPerSecondSkip_9; }
	inline void set_moneyPerSecondSkip_9(float value)
	{
		___moneyPerSecondSkip_9 = value;
	}

	inline static int32_t get_offset_of_enemySpawnDelay_10() { return static_cast<int32_t>(offsetof(WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6, ___enemySpawnDelay_10)); }
	inline float get_enemySpawnDelay_10() const { return ___enemySpawnDelay_10; }
	inline float* get_address_of_enemySpawnDelay_10() { return &___enemySpawnDelay_10; }
	inline void set_enemySpawnDelay_10(float value)
	{
		___enemySpawnDelay_10 = value;
	}

	inline static int32_t get_offset_of_waveDelay_11() { return static_cast<int32_t>(offsetof(WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6, ___waveDelay_11)); }
	inline float get_waveDelay_11() const { return ___waveDelay_11; }
	inline float* get_address_of_waveDelay_11() { return &___waveDelay_11; }
	inline void set_waveDelay_11(float value)
	{
		___waveDelay_11 = value;
	}

	inline static int32_t get_offset_of_lastWaveEndTime_12() { return static_cast<int32_t>(offsetof(WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6, ___lastWaveEndTime_12)); }
	inline float get_lastWaveEndTime_12() const { return ___lastWaveEndTime_12; }
	inline float* get_address_of_lastWaveEndTime_12() { return &___lastWaveEndTime_12; }
	inline void set_lastWaveEndTime_12(float value)
	{
		___lastWaveEndTime_12 = value;
	}

	inline static int32_t get_offset_of_startedWave_13() { return static_cast<int32_t>(offsetof(WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6, ___startedWave_13)); }
	inline bool get_startedWave_13() const { return ___startedWave_13; }
	inline bool* get_address_of_startedWave_13() { return &___startedWave_13; }
	inline void set_startedWave_13(bool value)
	{
		___startedWave_13 = value;
	}

	inline static int32_t get_offset_of_selectedStage_14() { return static_cast<int32_t>(offsetof(WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6, ___selectedStage_14)); }
	inline StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 * get_selectedStage_14() const { return ___selectedStage_14; }
	inline StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 ** get_address_of_selectedStage_14() { return &___selectedStage_14; }
	inline void set_selectedStage_14(StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 * value)
	{
		___selectedStage_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedStage_14), (void*)value);
	}

	inline static int32_t get_offset_of_spawnPoints_15() { return static_cast<int32_t>(offsetof(WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6, ___spawnPoints_15)); }
	inline List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * get_spawnPoints_15() const { return ___spawnPoints_15; }
	inline List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 ** get_address_of_spawnPoints_15() { return &___spawnPoints_15; }
	inline void set_spawnPoints_15(List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * value)
	{
		___spawnPoints_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnPoints_15), (void*)value);
	}

	inline static int32_t get_offset_of_gridManager_16() { return static_cast<int32_t>(offsetof(WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6, ___gridManager_16)); }
	inline HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF * get_gridManager_16() const { return ___gridManager_16; }
	inline HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF ** get_address_of_gridManager_16() { return &___gridManager_16; }
	inline void set_gridManager_16(HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF * value)
	{
		___gridManager_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridManager_16), (void*)value);
	}

	inline static int32_t get_offset_of_buildManager_17() { return static_cast<int32_t>(offsetof(WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6, ___buildManager_17)); }
	inline TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * get_buildManager_17() const { return ___buildManager_17; }
	inline TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 ** get_address_of_buildManager_17() { return &___buildManager_17; }
	inline void set_buildManager_17(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * value)
	{
		___buildManager_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buildManager_17), (void*)value);
	}

	inline static int32_t get_offset_of_stageManager_18() { return static_cast<int32_t>(offsetof(WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6, ___stageManager_18)); }
	inline BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E * get_stageManager_18() const { return ___stageManager_18; }
	inline BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E ** get_address_of_stageManager_18() { return &___stageManager_18; }
	inline void set_stageManager_18(BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E * value)
	{
		___stageManager_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stageManager_18), (void*)value);
	}

	inline static int32_t get_offset_of_waveSkipText_19() { return static_cast<int32_t>(offsetof(WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6, ___waveSkipText_19)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_waveSkipText_19() const { return ___waveSkipText_19; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_waveSkipText_19() { return &___waveSkipText_19; }
	inline void set_waveSkipText_19(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___waveSkipText_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waveSkipText_19), (void*)value);
	}

	inline static int32_t get_offset_of_currentWaveIndex_20() { return static_cast<int32_t>(offsetof(WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6, ___currentWaveIndex_20)); }
	inline int32_t get_currentWaveIndex_20() const { return ___currentWaveIndex_20; }
	inline int32_t* get_address_of_currentWaveIndex_20() { return &___currentWaveIndex_20; }
	inline void set_currentWaveIndex_20(int32_t value)
	{
		___currentWaveIndex_20 = value;
	}

	inline static int32_t get_offset_of_spawnWaves_21() { return static_cast<int32_t>(offsetof(WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6, ___spawnWaves_21)); }
	inline bool get_spawnWaves_21() const { return ___spawnWaves_21; }
	inline bool* get_address_of_spawnWaves_21() { return &___spawnWaves_21; }
	inline void set_spawnWaves_21(bool value)
	{
		___spawnWaves_21 = value;
	}

	inline static int32_t get_offset_of_enemyIndex_22() { return static_cast<int32_t>(offsetof(WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6, ___enemyIndex_22)); }
	inline int32_t get_enemyIndex_22() const { return ___enemyIndex_22; }
	inline int32_t* get_address_of_enemyIndex_22() { return &___enemyIndex_22; }
	inline void set_enemyIndex_22(int32_t value)
	{
		___enemyIndex_22 = value;
	}
};

struct WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6_StaticFields
{
public:
	// SerenityGarden.WaveManager SerenityGarden.WaveManager::instance
	WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * ___instance_6;

public:
	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6_StaticFields, ___instance_6)); }
	inline WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * get_instance_6() const { return ___instance_6; }
	inline WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_6), (void*)value);
	}
};


// UnityEngine.UI.Button
struct  Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B, ___m_OnClick_20)); }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IsMaskingGraphic_29)); }
	inline bool get_m_IsMaskingGraphic_29() const { return ___m_IsMaskingGraphic_29; }
	inline bool* get_address_of_m_IsMaskingGraphic_29() { return &___m_IsMaskingGraphic_29; }
	inline void set_m_IsMaskingGraphic_29(bool value)
	{
		___m_IsMaskingGraphic_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_34)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// SerenityGarden.BuildableTurret
struct  BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98  : public TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441
{
public:
	// SerenityGarden.HexagonalBlock SerenityGarden.BuildableTurret::hexagonBlock
	HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * ___hexagonBlock_26;
	// System.Collections.Generic.List`1<UnityEngine.Material> SerenityGarden.BuildableTurret::beforeRecoveryMaterial
	List_1_t6A61046573B0BC4E12950B90305C189DD041D786 * ___beforeRecoveryMaterial_27;
	// System.Int32 SerenityGarden.BuildableTurret::currentLevel
	int32_t ___currentLevel_28;
	// System.Boolean SerenityGarden.BuildableTurret::<IsRecovering>k__BackingField
	bool ___U3CIsRecoveringU3Ek__BackingField_29;
	// System.Single SerenityGarden.BuildableTurret::<RecoveryCostPer1Hp>k__BackingField
	float ___U3CRecoveryCostPer1HpU3Ek__BackingField_30;
	// System.Single SerenityGarden.BuildableTurret::<RecoveryPerSecond>k__BackingField
	float ___U3CRecoveryPerSecondU3Ek__BackingField_31;
	// System.Boolean SerenityGarden.BuildableTurret::hasCommander
	bool ___hasCommander_32;
	// System.Single SerenityGarden.BuildableTurret::currentRecovery
	float ___currentRecovery_33;
	// System.Single SerenityGarden.BuildableTurret::recoveryAmmount
	float ___recoveryAmmount_34;
	// System.Boolean SerenityGarden.BuildableTurret::netSendTurretSell
	bool ___netSendTurretSell_35;
	// System.Boolean SerenityGarden.BuildableTurret::netSendTurretUpgrade
	bool ___netSendTurretUpgrade_36;
	// System.Boolean SerenityGarden.BuildableTurret::netSendTurretRepair
	bool ___netSendTurretRepair_37;
	// System.Boolean SerenityGarden.BuildableTurret::netReceivedEventData
	bool ___netReceivedEventData_38;

public:
	inline static int32_t get_offset_of_hexagonBlock_26() { return static_cast<int32_t>(offsetof(BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98, ___hexagonBlock_26)); }
	inline HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * get_hexagonBlock_26() const { return ___hexagonBlock_26; }
	inline HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 ** get_address_of_hexagonBlock_26() { return &___hexagonBlock_26; }
	inline void set_hexagonBlock_26(HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * value)
	{
		___hexagonBlock_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hexagonBlock_26), (void*)value);
	}

	inline static int32_t get_offset_of_beforeRecoveryMaterial_27() { return static_cast<int32_t>(offsetof(BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98, ___beforeRecoveryMaterial_27)); }
	inline List_1_t6A61046573B0BC4E12950B90305C189DD041D786 * get_beforeRecoveryMaterial_27() const { return ___beforeRecoveryMaterial_27; }
	inline List_1_t6A61046573B0BC4E12950B90305C189DD041D786 ** get_address_of_beforeRecoveryMaterial_27() { return &___beforeRecoveryMaterial_27; }
	inline void set_beforeRecoveryMaterial_27(List_1_t6A61046573B0BC4E12950B90305C189DD041D786 * value)
	{
		___beforeRecoveryMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___beforeRecoveryMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_currentLevel_28() { return static_cast<int32_t>(offsetof(BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98, ___currentLevel_28)); }
	inline int32_t get_currentLevel_28() const { return ___currentLevel_28; }
	inline int32_t* get_address_of_currentLevel_28() { return &___currentLevel_28; }
	inline void set_currentLevel_28(int32_t value)
	{
		___currentLevel_28 = value;
	}

	inline static int32_t get_offset_of_U3CIsRecoveringU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98, ___U3CIsRecoveringU3Ek__BackingField_29)); }
	inline bool get_U3CIsRecoveringU3Ek__BackingField_29() const { return ___U3CIsRecoveringU3Ek__BackingField_29; }
	inline bool* get_address_of_U3CIsRecoveringU3Ek__BackingField_29() { return &___U3CIsRecoveringU3Ek__BackingField_29; }
	inline void set_U3CIsRecoveringU3Ek__BackingField_29(bool value)
	{
		___U3CIsRecoveringU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CRecoveryCostPer1HpU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98, ___U3CRecoveryCostPer1HpU3Ek__BackingField_30)); }
	inline float get_U3CRecoveryCostPer1HpU3Ek__BackingField_30() const { return ___U3CRecoveryCostPer1HpU3Ek__BackingField_30; }
	inline float* get_address_of_U3CRecoveryCostPer1HpU3Ek__BackingField_30() { return &___U3CRecoveryCostPer1HpU3Ek__BackingField_30; }
	inline void set_U3CRecoveryCostPer1HpU3Ek__BackingField_30(float value)
	{
		___U3CRecoveryCostPer1HpU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CRecoveryPerSecondU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98, ___U3CRecoveryPerSecondU3Ek__BackingField_31)); }
	inline float get_U3CRecoveryPerSecondU3Ek__BackingField_31() const { return ___U3CRecoveryPerSecondU3Ek__BackingField_31; }
	inline float* get_address_of_U3CRecoveryPerSecondU3Ek__BackingField_31() { return &___U3CRecoveryPerSecondU3Ek__BackingField_31; }
	inline void set_U3CRecoveryPerSecondU3Ek__BackingField_31(float value)
	{
		___U3CRecoveryPerSecondU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_hasCommander_32() { return static_cast<int32_t>(offsetof(BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98, ___hasCommander_32)); }
	inline bool get_hasCommander_32() const { return ___hasCommander_32; }
	inline bool* get_address_of_hasCommander_32() { return &___hasCommander_32; }
	inline void set_hasCommander_32(bool value)
	{
		___hasCommander_32 = value;
	}

	inline static int32_t get_offset_of_currentRecovery_33() { return static_cast<int32_t>(offsetof(BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98, ___currentRecovery_33)); }
	inline float get_currentRecovery_33() const { return ___currentRecovery_33; }
	inline float* get_address_of_currentRecovery_33() { return &___currentRecovery_33; }
	inline void set_currentRecovery_33(float value)
	{
		___currentRecovery_33 = value;
	}

	inline static int32_t get_offset_of_recoveryAmmount_34() { return static_cast<int32_t>(offsetof(BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98, ___recoveryAmmount_34)); }
	inline float get_recoveryAmmount_34() const { return ___recoveryAmmount_34; }
	inline float* get_address_of_recoveryAmmount_34() { return &___recoveryAmmount_34; }
	inline void set_recoveryAmmount_34(float value)
	{
		___recoveryAmmount_34 = value;
	}

	inline static int32_t get_offset_of_netSendTurretSell_35() { return static_cast<int32_t>(offsetof(BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98, ___netSendTurretSell_35)); }
	inline bool get_netSendTurretSell_35() const { return ___netSendTurretSell_35; }
	inline bool* get_address_of_netSendTurretSell_35() { return &___netSendTurretSell_35; }
	inline void set_netSendTurretSell_35(bool value)
	{
		___netSendTurretSell_35 = value;
	}

	inline static int32_t get_offset_of_netSendTurretUpgrade_36() { return static_cast<int32_t>(offsetof(BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98, ___netSendTurretUpgrade_36)); }
	inline bool get_netSendTurretUpgrade_36() const { return ___netSendTurretUpgrade_36; }
	inline bool* get_address_of_netSendTurretUpgrade_36() { return &___netSendTurretUpgrade_36; }
	inline void set_netSendTurretUpgrade_36(bool value)
	{
		___netSendTurretUpgrade_36 = value;
	}

	inline static int32_t get_offset_of_netSendTurretRepair_37() { return static_cast<int32_t>(offsetof(BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98, ___netSendTurretRepair_37)); }
	inline bool get_netSendTurretRepair_37() const { return ___netSendTurretRepair_37; }
	inline bool* get_address_of_netSendTurretRepair_37() { return &___netSendTurretRepair_37; }
	inline void set_netSendTurretRepair_37(bool value)
	{
		___netSendTurretRepair_37 = value;
	}

	inline static int32_t get_offset_of_netReceivedEventData_38() { return static_cast<int32_t>(offsetof(BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98, ___netReceivedEventData_38)); }
	inline bool get_netReceivedEventData_38() const { return ___netReceivedEventData_38; }
	inline bool* get_address_of_netReceivedEventData_38() { return &___netReceivedEventData_38; }
	inline void set_netReceivedEventData_38(bool value)
	{
		___netReceivedEventData_38 = value;
	}
};


// SerenityGarden.EnemyAmbusher
struct  EnemyAmbusher_t9182D45D5CED1FC31D7BE1FDC49E6A42D37E9567  : public EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F
{
public:
	// UnityEngine.Transform SerenityGarden.EnemyAmbusher::firePoint
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___firePoint_31;
	// UnityEngine.GameObject SerenityGarden.EnemyAmbusher::bulletPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___bulletPrefab_32;

public:
	inline static int32_t get_offset_of_firePoint_31() { return static_cast<int32_t>(offsetof(EnemyAmbusher_t9182D45D5CED1FC31D7BE1FDC49E6A42D37E9567, ___firePoint_31)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_firePoint_31() const { return ___firePoint_31; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_firePoint_31() { return &___firePoint_31; }
	inline void set_firePoint_31(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___firePoint_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firePoint_31), (void*)value);
	}

	inline static int32_t get_offset_of_bulletPrefab_32() { return static_cast<int32_t>(offsetof(EnemyAmbusher_t9182D45D5CED1FC31D7BE1FDC49E6A42D37E9567, ___bulletPrefab_32)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_bulletPrefab_32() const { return ___bulletPrefab_32; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_bulletPrefab_32() { return &___bulletPrefab_32; }
	inline void set_bulletPrefab_32(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___bulletPrefab_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPrefab_32), (void*)value);
	}
};


// SerenityGarden.EnemyFlying
struct  EnemyFlying_tAA8D6943B40B4DDD10EDE48626EAC94BF965463C  : public EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F
{
public:
	// UnityEngine.Transform SerenityGarden.EnemyFlying::firePoint
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___firePoint_31;
	// UnityEngine.GameObject SerenityGarden.EnemyFlying::bulletPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___bulletPrefab_32;

public:
	inline static int32_t get_offset_of_firePoint_31() { return static_cast<int32_t>(offsetof(EnemyFlying_tAA8D6943B40B4DDD10EDE48626EAC94BF965463C, ___firePoint_31)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_firePoint_31() const { return ___firePoint_31; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_firePoint_31() { return &___firePoint_31; }
	inline void set_firePoint_31(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___firePoint_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firePoint_31), (void*)value);
	}

	inline static int32_t get_offset_of_bulletPrefab_32() { return static_cast<int32_t>(offsetof(EnemyFlying_tAA8D6943B40B4DDD10EDE48626EAC94BF965463C, ___bulletPrefab_32)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_bulletPrefab_32() const { return ___bulletPrefab_32; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_bulletPrefab_32() { return &___bulletPrefab_32; }
	inline void set_bulletPrefab_32(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___bulletPrefab_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPrefab_32), (void*)value);
	}
};


// SerenityGarden.EnemyMelee
struct  EnemyMelee_t2481A9E094840C4F79E9A7FD0F7FCD493A2DA012  : public EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F
{
public:

public:
};


// SerenityGarden.EnemyRanged
struct  EnemyRanged_t55401E0A01EBBDF001EFAC55C30255FD83E810ED  : public EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F
{
public:
	// UnityEngine.Transform SerenityGarden.EnemyRanged::firePoint
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___firePoint_31;
	// UnityEngine.GameObject SerenityGarden.EnemyRanged::bulletPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___bulletPrefab_32;

public:
	inline static int32_t get_offset_of_firePoint_31() { return static_cast<int32_t>(offsetof(EnemyRanged_t55401E0A01EBBDF001EFAC55C30255FD83E810ED, ___firePoint_31)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_firePoint_31() const { return ___firePoint_31; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_firePoint_31() { return &___firePoint_31; }
	inline void set_firePoint_31(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___firePoint_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firePoint_31), (void*)value);
	}

	inline static int32_t get_offset_of_bulletPrefab_32() { return static_cast<int32_t>(offsetof(EnemyRanged_t55401E0A01EBBDF001EFAC55C30255FD83E810ED, ___bulletPrefab_32)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_bulletPrefab_32() const { return ___bulletPrefab_32; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_bulletPrefab_32() { return &___bulletPrefab_32; }
	inline void set_bulletPrefab_32(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___bulletPrefab_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPrefab_32), (void*)value);
	}
};


// SerenityGarden.PlayerBase
struct  PlayerBase_t78C7F5333ACAFFE352C61B60F683F32363A70B4E  : public TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441
{
public:
	// UnityEngine.GameObject SerenityGarden.PlayerBase::bulletPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___bulletPrefab_26;

public:
	inline static int32_t get_offset_of_bulletPrefab_26() { return static_cast<int32_t>(offsetof(PlayerBase_t78C7F5333ACAFFE352C61B60F683F32363A70B4E, ___bulletPrefab_26)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_bulletPrefab_26() const { return ___bulletPrefab_26; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_bulletPrefab_26() { return &___bulletPrefab_26; }
	inline void set_bulletPrefab_26(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___bulletPrefab_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPrefab_26), (void*)value);
	}
};


// TMPro.TMP_Text
struct  TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_35;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_36;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_37;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___m_fontAsset_38;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___m_currentFontAsset_39;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_40;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_sharedMaterial_41;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_currentMaterial_42;
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* ___m_materialReferences_43;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F * ___m_materialReferenceIndexLookup_44;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  ___m_materialReferenceStack_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_46;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___m_fontSharedMaterials_47;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_fontMaterial_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___m_fontMaterials_49;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_50;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_fontColor32_51;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_fontColor_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_underlineColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_strikethroughColor_55;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_56;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_57;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  ___m_fontColorGradient_58;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_fontColorGradientPreset_59;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_spriteAsset_60;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_61;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_62;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_spriteColor_63;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_tC6C45E5B0EC8EF4BA7BB147712516656B0D26C04 * ___m_StyleSheet_64;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_t9FD01084B9E3F1D4B92E87114C454C98BA20FBAD * ___m_TextStyle_65;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_66;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_67;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_faceColor_68;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_outlineColor_69;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_70;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_71;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_72;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_73;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___m_sizeStack_74;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_75;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_76;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  ___m_FontWeightStack_77;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_78;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_79;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_80;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_81;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_82;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_83;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_84;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_85;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_86;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_87;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___m_fontStyleStack_88;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_89;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_90;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_91;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_93;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  ___m_lineJustificationStack_94;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_textContainerLocalCorners_95;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_96;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_97;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_98;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_99;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_100;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_101;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_102;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_104;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_105;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_106;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_107;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_108;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_109;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_110;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_111;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_112;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_113;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_114;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___m_linkedTextComponent_115;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___parentLinkedComponent_116;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_117;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_118;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_119;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_120;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_121;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_122;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_123;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_124;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_125;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_126;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_127;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_128;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_129;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_130;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_131;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_132;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_133;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_134;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_135;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_136;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_137;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_138;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_140;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_141;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_142;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_143;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_margin_144;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_145;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_146;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_147;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_148;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_149;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___m_textInfo_150;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_151;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_152;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_transform_153;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_rectTransform_154;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PreviousRectTransformSize_155;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PreviousPivotPosition_156;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_157;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_158;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_mesh_159;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_160;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * ___OnPreRenderText_163;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * ___m_spriteAnimator_164;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_165;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_166;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_167;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_168;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_169;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_170;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * ___m_LayoutElement_171;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_172;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_173;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_174;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_175;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_177;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_178;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_179;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_181;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_182;
	// System.Boolean TMPro.TMP_Text::m_isInputParsingRequired
	bool ___m_isInputParsingRequired_183;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_184;
	// System.Single TMPro.TMP_Text::m_fontScale
	float ___m_fontScale_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___m_attributeParameterValues_189;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_InternalParsingBuffer
	UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* ___m_InternalParsingBuffer_197;
	// System.Int32 TMPro.TMP_Text::m_InternalParsingBufferSize
	int32_t ___m_InternalParsingBufferSize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* ___m_internalCharacterInfo_199;
	// System.Char[] TMPro.TMP_Text::m_input_CharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_input_CharArray_200;
	// System.Int32 TMPro.TMP_Text::m_charArray_Length
	int32_t ___m_charArray_Length_201;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedWordWrapState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedLineState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedEllipsisState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedLastValidState_206;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedSoftLineBreakState_207;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E  ___m_EllipsisInsertionCandidateStack_208;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_209;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_213;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_214;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_215;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_216;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_217;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_218;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_219;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_220;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_221;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_222;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_224;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_225;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_226;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___m_meshExtents_227;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_htmlColor_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___m_colorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___m_underlineColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___m_strikethroughColorStack_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  ___m_HighlightStateStack_232;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_colorGradientPreset_233;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  ___m_colorGradientStack_234;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_235;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_236;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_tD40BE2C9C48281D1F72B04DDB85CBF15B89FCA29* ___m_TextStyleStacks_238;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___m_ItalicAngleStack_240;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_241;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___m_actionStack_242;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_243;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_244;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___m_baselineOffsetStack_245;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_246;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_247;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * ___m_cached_TextElement_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  ___m_Ellipsis_249;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  ___m_Underline_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_defaultSpriteAsset_251;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_currentSpriteAsset_252;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_253;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_254;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_255;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* ___k_Power_257;

public:
	inline static int32_t get_offset_of_m_text_35() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_text_35)); }
	inline String_t* get_m_text_35() const { return ___m_text_35; }
	inline String_t** get_address_of_m_text_35() { return &___m_text_35; }
	inline void set_m_text_35(String_t* value)
	{
		___m_text_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_text_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextPreprocessor_36() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextPreprocessor_36)); }
	inline RuntimeObject* get_m_TextPreprocessor_36() const { return ___m_TextPreprocessor_36; }
	inline RuntimeObject** get_address_of_m_TextPreprocessor_36() { return &___m_TextPreprocessor_36; }
	inline void set_m_TextPreprocessor_36(RuntimeObject* value)
	{
		___m_TextPreprocessor_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextPreprocessor_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_37() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isRightToLeft_37)); }
	inline bool get_m_isRightToLeft_37() const { return ___m_isRightToLeft_37; }
	inline bool* get_address_of_m_isRightToLeft_37() { return &___m_isRightToLeft_37; }
	inline void set_m_isRightToLeft_37(bool value)
	{
		___m_isRightToLeft_37 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_38() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontAsset_38)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_m_fontAsset_38() const { return ___m_fontAsset_38; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_m_fontAsset_38() { return &___m_fontAsset_38; }
	inline void set_m_fontAsset_38(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___m_fontAsset_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontAsset_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_39() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentFontAsset_39)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_m_currentFontAsset_39() const { return ___m_currentFontAsset_39; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_m_currentFontAsset_39() { return &___m_currentFontAsset_39; }
	inline void set_m_currentFontAsset_39(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___m_currentFontAsset_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentFontAsset_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_40() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isSDFShader_40)); }
	inline bool get_m_isSDFShader_40() const { return ___m_isSDFShader_40; }
	inline bool* get_address_of_m_isSDFShader_40() { return &___m_isSDFShader_40; }
	inline void set_m_isSDFShader_40(bool value)
	{
		___m_isSDFShader_40 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_41() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_sharedMaterial_41)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_sharedMaterial_41() const { return ___m_sharedMaterial_41; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_sharedMaterial_41() { return &___m_sharedMaterial_41; }
	inline void set_m_sharedMaterial_41(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_sharedMaterial_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sharedMaterial_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_42() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentMaterial_42)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_currentMaterial_42() const { return ___m_currentMaterial_42; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_currentMaterial_42() { return &___m_currentMaterial_42; }
	inline void set_m_currentMaterial_42(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_currentMaterial_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentMaterial_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferences_43() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferences_43)); }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* get_m_materialReferences_43() const { return ___m_materialReferences_43; }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B** get_address_of_m_materialReferences_43() { return &___m_materialReferences_43; }
	inline void set_m_materialReferences_43(MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* value)
	{
		___m_materialReferences_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferences_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_44() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferenceIndexLookup_44)); }
	inline Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F * get_m_materialReferenceIndexLookup_44() const { return ___m_materialReferenceIndexLookup_44; }
	inline Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F ** get_address_of_m_materialReferenceIndexLookup_44() { return &___m_materialReferenceIndexLookup_44; }
	inline void set_m_materialReferenceIndexLookup_44(Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F * value)
	{
		___m_materialReferenceIndexLookup_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferenceIndexLookup_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_45() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferenceStack_45)); }
	inline TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  get_m_materialReferenceStack_45() const { return ___m_materialReferenceStack_45; }
	inline TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A * get_address_of_m_materialReferenceStack_45() { return &___m_materialReferenceStack_45; }
	inline void set_m_materialReferenceStack_45(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  value)
	{
		___m_materialReferenceStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_materialReferenceStack_45))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_45))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_45))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_45))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_45))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_46() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentMaterialIndex_46)); }
	inline int32_t get_m_currentMaterialIndex_46() const { return ___m_currentMaterialIndex_46; }
	inline int32_t* get_address_of_m_currentMaterialIndex_46() { return &___m_currentMaterialIndex_46; }
	inline void set_m_currentMaterialIndex_46(int32_t value)
	{
		___m_currentMaterialIndex_46 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_47() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSharedMaterials_47)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_m_fontSharedMaterials_47() const { return ___m_fontSharedMaterials_47; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_m_fontSharedMaterials_47() { return &___m_fontSharedMaterials_47; }
	inline void set_m_fontSharedMaterials_47(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___m_fontSharedMaterials_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontSharedMaterials_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_48() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontMaterial_48)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_fontMaterial_48() const { return ___m_fontMaterial_48; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_fontMaterial_48() { return &___m_fontMaterial_48; }
	inline void set_m_fontMaterial_48(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_fontMaterial_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterial_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_49() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontMaterials_49)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_m_fontMaterials_49() const { return ___m_fontMaterials_49; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_m_fontMaterials_49() { return &___m_fontMaterials_49; }
	inline void set_m_fontMaterials_49(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___m_fontMaterials_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterials_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_50() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isMaterialDirty_50)); }
	inline bool get_m_isMaterialDirty_50() const { return ___m_isMaterialDirty_50; }
	inline bool* get_address_of_m_isMaterialDirty_50() { return &___m_isMaterialDirty_50; }
	inline void set_m_isMaterialDirty_50(bool value)
	{
		___m_isMaterialDirty_50 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_51() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColor32_51)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_fontColor32_51() const { return ___m_fontColor32_51; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_fontColor32_51() { return &___m_fontColor32_51; }
	inline void set_m_fontColor32_51(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_fontColor32_51 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_52() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColor_52)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_fontColor_52() const { return ___m_fontColor_52; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_fontColor_52() { return &___m_fontColor_52; }
	inline void set_m_fontColor_52(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_fontColor_52 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_54() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_underlineColor_54)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_underlineColor_54() const { return ___m_underlineColor_54; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_underlineColor_54() { return &___m_underlineColor_54; }
	inline void set_m_underlineColor_54(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_underlineColor_54 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_55() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_strikethroughColor_55)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_strikethroughColor_55() const { return ___m_strikethroughColor_55; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_strikethroughColor_55() { return &___m_strikethroughColor_55; }
	inline void set_m_strikethroughColor_55(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_strikethroughColor_55 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_56() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableVertexGradient_56)); }
	inline bool get_m_enableVertexGradient_56() const { return ___m_enableVertexGradient_56; }
	inline bool* get_address_of_m_enableVertexGradient_56() { return &___m_enableVertexGradient_56; }
	inline void set_m_enableVertexGradient_56(bool value)
	{
		___m_enableVertexGradient_56 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_57() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorMode_57)); }
	inline int32_t get_m_colorMode_57() const { return ___m_colorMode_57; }
	inline int32_t* get_address_of_m_colorMode_57() { return &___m_colorMode_57; }
	inline void set_m_colorMode_57(int32_t value)
	{
		___m_colorMode_57 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_58() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColorGradient_58)); }
	inline VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  get_m_fontColorGradient_58() const { return ___m_fontColorGradient_58; }
	inline VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A * get_address_of_m_fontColorGradient_58() { return &___m_fontColorGradient_58; }
	inline void set_m_fontColorGradient_58(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  value)
	{
		___m_fontColorGradient_58 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_59() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColorGradientPreset_59)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_fontColorGradientPreset_59() const { return ___m_fontColorGradientPreset_59; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_fontColorGradientPreset_59() { return &___m_fontColorGradientPreset_59; }
	inline void set_m_fontColorGradientPreset_59(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_fontColorGradientPreset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontColorGradientPreset_59), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_60() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAsset_60)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_spriteAsset_60() const { return ___m_spriteAsset_60; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_spriteAsset_60() { return &___m_spriteAsset_60; }
	inline void set_m_spriteAsset_60(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_spriteAsset_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAsset_60), (void*)value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_61() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tintAllSprites_61)); }
	inline bool get_m_tintAllSprites_61() const { return ___m_tintAllSprites_61; }
	inline bool* get_address_of_m_tintAllSprites_61() { return &___m_tintAllSprites_61; }
	inline void set_m_tintAllSprites_61(bool value)
	{
		___m_tintAllSprites_61 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_62() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tintSprite_62)); }
	inline bool get_m_tintSprite_62() const { return ___m_tintSprite_62; }
	inline bool* get_address_of_m_tintSprite_62() { return &___m_tintSprite_62; }
	inline void set_m_tintSprite_62(bool value)
	{
		___m_tintSprite_62 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_63() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteColor_63)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_spriteColor_63() const { return ___m_spriteColor_63; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_spriteColor_63() { return &___m_spriteColor_63; }
	inline void set_m_spriteColor_63(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_spriteColor_63 = value;
	}

	inline static int32_t get_offset_of_m_StyleSheet_64() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_StyleSheet_64)); }
	inline TMP_StyleSheet_tC6C45E5B0EC8EF4BA7BB147712516656B0D26C04 * get_m_StyleSheet_64() const { return ___m_StyleSheet_64; }
	inline TMP_StyleSheet_tC6C45E5B0EC8EF4BA7BB147712516656B0D26C04 ** get_address_of_m_StyleSheet_64() { return &___m_StyleSheet_64; }
	inline void set_m_StyleSheet_64(TMP_StyleSheet_tC6C45E5B0EC8EF4BA7BB147712516656B0D26C04 * value)
	{
		___m_StyleSheet_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StyleSheet_64), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyle_65() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextStyle_65)); }
	inline TMP_Style_t9FD01084B9E3F1D4B92E87114C454C98BA20FBAD * get_m_TextStyle_65() const { return ___m_TextStyle_65; }
	inline TMP_Style_t9FD01084B9E3F1D4B92E87114C454C98BA20FBAD ** get_address_of_m_TextStyle_65() { return &___m_TextStyle_65; }
	inline void set_m_TextStyle_65(TMP_Style_t9FD01084B9E3F1D4B92E87114C454C98BA20FBAD * value)
	{
		___m_TextStyle_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyle_65), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleHashCode_66() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextStyleHashCode_66)); }
	inline int32_t get_m_TextStyleHashCode_66() const { return ___m_TextStyleHashCode_66; }
	inline int32_t* get_address_of_m_TextStyleHashCode_66() { return &___m_TextStyleHashCode_66; }
	inline void set_m_TextStyleHashCode_66(int32_t value)
	{
		___m_TextStyleHashCode_66 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_67() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_overrideHtmlColors_67)); }
	inline bool get_m_overrideHtmlColors_67() const { return ___m_overrideHtmlColors_67; }
	inline bool* get_address_of_m_overrideHtmlColors_67() { return &___m_overrideHtmlColors_67; }
	inline void set_m_overrideHtmlColors_67(bool value)
	{
		___m_overrideHtmlColors_67 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_68() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_faceColor_68)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_faceColor_68() const { return ___m_faceColor_68; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_faceColor_68() { return &___m_faceColor_68; }
	inline void set_m_faceColor_68(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_faceColor_68 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_69() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_outlineColor_69)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_outlineColor_69() const { return ___m_outlineColor_69; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_outlineColor_69() { return &___m_outlineColor_69; }
	inline void set_m_outlineColor_69(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_outlineColor_69 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_70() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_outlineWidth_70)); }
	inline float get_m_outlineWidth_70() const { return ___m_outlineWidth_70; }
	inline float* get_address_of_m_outlineWidth_70() { return &___m_outlineWidth_70; }
	inline void set_m_outlineWidth_70(float value)
	{
		___m_outlineWidth_70 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_71() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSize_71)); }
	inline float get_m_fontSize_71() const { return ___m_fontSize_71; }
	inline float* get_address_of_m_fontSize_71() { return &___m_fontSize_71; }
	inline void set_m_fontSize_71(float value)
	{
		___m_fontSize_71 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_72() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentFontSize_72)); }
	inline float get_m_currentFontSize_72() const { return ___m_currentFontSize_72; }
	inline float* get_address_of_m_currentFontSize_72() { return &___m_currentFontSize_72; }
	inline void set_m_currentFontSize_72(float value)
	{
		___m_currentFontSize_72 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_73() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeBase_73)); }
	inline float get_m_fontSizeBase_73() const { return ___m_fontSizeBase_73; }
	inline float* get_address_of_m_fontSizeBase_73() { return &___m_fontSizeBase_73; }
	inline void set_m_fontSizeBase_73(float value)
	{
		___m_fontSizeBase_73 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_74() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_sizeStack_74)); }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  get_m_sizeStack_74() const { return ___m_sizeStack_74; }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA * get_address_of_m_sizeStack_74() { return &___m_sizeStack_74; }
	inline void set_m_sizeStack_74(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  value)
	{
		___m_sizeStack_74 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_sizeStack_74))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_fontWeight_75() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontWeight_75)); }
	inline int32_t get_m_fontWeight_75() const { return ___m_fontWeight_75; }
	inline int32_t* get_address_of_m_fontWeight_75() { return &___m_fontWeight_75; }
	inline void set_m_fontWeight_75(int32_t value)
	{
		___m_fontWeight_75 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_76() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontWeightInternal_76)); }
	inline int32_t get_m_FontWeightInternal_76() const { return ___m_FontWeightInternal_76; }
	inline int32_t* get_address_of_m_FontWeightInternal_76() { return &___m_FontWeightInternal_76; }
	inline void set_m_FontWeightInternal_76(int32_t value)
	{
		___m_FontWeightInternal_76 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_77() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontWeightStack_77)); }
	inline TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  get_m_FontWeightStack_77() const { return ___m_FontWeightStack_77; }
	inline TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285 * get_address_of_m_FontWeightStack_77() { return &___m_FontWeightStack_77; }
	inline void set_m_FontWeightStack_77(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  value)
	{
		___m_FontWeightStack_77 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FontWeightStack_77))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_78() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableAutoSizing_78)); }
	inline bool get_m_enableAutoSizing_78() const { return ___m_enableAutoSizing_78; }
	inline bool* get_address_of_m_enableAutoSizing_78() { return &___m_enableAutoSizing_78; }
	inline void set_m_enableAutoSizing_78(bool value)
	{
		___m_enableAutoSizing_78 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_79() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxFontSize_79)); }
	inline float get_m_maxFontSize_79() const { return ___m_maxFontSize_79; }
	inline float* get_address_of_m_maxFontSize_79() { return &___m_maxFontSize_79; }
	inline void set_m_maxFontSize_79(float value)
	{
		___m_maxFontSize_79 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_80() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minFontSize_80)); }
	inline float get_m_minFontSize_80() const { return ___m_minFontSize_80; }
	inline float* get_address_of_m_minFontSize_80() { return &___m_minFontSize_80; }
	inline void set_m_minFontSize_80(float value)
	{
		___m_minFontSize_80 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeIterationCount_81() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_AutoSizeIterationCount_81)); }
	inline int32_t get_m_AutoSizeIterationCount_81() const { return ___m_AutoSizeIterationCount_81; }
	inline int32_t* get_address_of_m_AutoSizeIterationCount_81() { return &___m_AutoSizeIterationCount_81; }
	inline void set_m_AutoSizeIterationCount_81(int32_t value)
	{
		___m_AutoSizeIterationCount_81 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeMaxIterationCount_82() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_AutoSizeMaxIterationCount_82)); }
	inline int32_t get_m_AutoSizeMaxIterationCount_82() const { return ___m_AutoSizeMaxIterationCount_82; }
	inline int32_t* get_address_of_m_AutoSizeMaxIterationCount_82() { return &___m_AutoSizeMaxIterationCount_82; }
	inline void set_m_AutoSizeMaxIterationCount_82(int32_t value)
	{
		___m_AutoSizeMaxIterationCount_82 = value;
	}

	inline static int32_t get_offset_of_m_IsAutoSizePointSizeSet_83() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_IsAutoSizePointSizeSet_83)); }
	inline bool get_m_IsAutoSizePointSizeSet_83() const { return ___m_IsAutoSizePointSizeSet_83; }
	inline bool* get_address_of_m_IsAutoSizePointSizeSet_83() { return &___m_IsAutoSizePointSizeSet_83; }
	inline void set_m_IsAutoSizePointSizeSet_83(bool value)
	{
		___m_IsAutoSizePointSizeSet_83 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_84() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeMin_84)); }
	inline float get_m_fontSizeMin_84() const { return ___m_fontSizeMin_84; }
	inline float* get_address_of_m_fontSizeMin_84() { return &___m_fontSizeMin_84; }
	inline void set_m_fontSizeMin_84(float value)
	{
		___m_fontSizeMin_84 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_85() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeMax_85)); }
	inline float get_m_fontSizeMax_85() const { return ___m_fontSizeMax_85; }
	inline float* get_address_of_m_fontSizeMax_85() { return &___m_fontSizeMax_85; }
	inline void set_m_fontSizeMax_85(float value)
	{
		___m_fontSizeMax_85 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_86() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontStyle_86)); }
	inline int32_t get_m_fontStyle_86() const { return ___m_fontStyle_86; }
	inline int32_t* get_address_of_m_fontStyle_86() { return &___m_fontStyle_86; }
	inline void set_m_fontStyle_86(int32_t value)
	{
		___m_fontStyle_86 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_87() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontStyleInternal_87)); }
	inline int32_t get_m_FontStyleInternal_87() const { return ___m_FontStyleInternal_87; }
	inline int32_t* get_address_of_m_FontStyleInternal_87() { return &___m_FontStyleInternal_87; }
	inline void set_m_FontStyleInternal_87(int32_t value)
	{
		___m_FontStyleInternal_87 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_88() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontStyleStack_88)); }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  get_m_fontStyleStack_88() const { return ___m_fontStyleStack_88; }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 * get_address_of_m_fontStyleStack_88() { return &___m_fontStyleStack_88; }
	inline void set_m_fontStyleStack_88(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  value)
	{
		___m_fontStyleStack_88 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_89() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isUsingBold_89)); }
	inline bool get_m_isUsingBold_89() const { return ___m_isUsingBold_89; }
	inline bool* get_address_of_m_isUsingBold_89() { return &___m_isUsingBold_89; }
	inline void set_m_isUsingBold_89(bool value)
	{
		___m_isUsingBold_89 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAlignment_90() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_HorizontalAlignment_90)); }
	inline int32_t get_m_HorizontalAlignment_90() const { return ___m_HorizontalAlignment_90; }
	inline int32_t* get_address_of_m_HorizontalAlignment_90() { return &___m_HorizontalAlignment_90; }
	inline void set_m_HorizontalAlignment_90(int32_t value)
	{
		___m_HorizontalAlignment_90 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAlignment_91() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_VerticalAlignment_91)); }
	inline int32_t get_m_VerticalAlignment_91() const { return ___m_VerticalAlignment_91; }
	inline int32_t* get_address_of_m_VerticalAlignment_91() { return &___m_VerticalAlignment_91; }
	inline void set_m_VerticalAlignment_91(int32_t value)
	{
		___m_VerticalAlignment_91 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_92() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textAlignment_92)); }
	inline int32_t get_m_textAlignment_92() const { return ___m_textAlignment_92; }
	inline int32_t* get_address_of_m_textAlignment_92() { return &___m_textAlignment_92; }
	inline void set_m_textAlignment_92(int32_t value)
	{
		___m_textAlignment_92 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_93() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineJustification_93)); }
	inline int32_t get_m_lineJustification_93() const { return ___m_lineJustification_93; }
	inline int32_t* get_address_of_m_lineJustification_93() { return &___m_lineJustification_93; }
	inline void set_m_lineJustification_93(int32_t value)
	{
		___m_lineJustification_93 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_94() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineJustificationStack_94)); }
	inline TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  get_m_lineJustificationStack_94() const { return ___m_lineJustificationStack_94; }
	inline TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7 * get_address_of_m_lineJustificationStack_94() { return &___m_lineJustificationStack_94; }
	inline void set_m_lineJustificationStack_94(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  value)
	{
		___m_lineJustificationStack_94 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_lineJustificationStack_94))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_95() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textContainerLocalCorners_95)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_textContainerLocalCorners_95() const { return ___m_textContainerLocalCorners_95; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_textContainerLocalCorners_95() { return &___m_textContainerLocalCorners_95; }
	inline void set_m_textContainerLocalCorners_95(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_textContainerLocalCorners_95 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textContainerLocalCorners_95), (void*)value);
	}

	inline static int32_t get_offset_of_m_characterSpacing_96() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_characterSpacing_96)); }
	inline float get_m_characterSpacing_96() const { return ___m_characterSpacing_96; }
	inline float* get_address_of_m_characterSpacing_96() { return &___m_characterSpacing_96; }
	inline void set_m_characterSpacing_96(float value)
	{
		___m_characterSpacing_96 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_97() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cSpacing_97)); }
	inline float get_m_cSpacing_97() const { return ___m_cSpacing_97; }
	inline float* get_address_of_m_cSpacing_97() { return &___m_cSpacing_97; }
	inline void set_m_cSpacing_97(float value)
	{
		___m_cSpacing_97 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_98() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_monoSpacing_98)); }
	inline float get_m_monoSpacing_98() const { return ___m_monoSpacing_98; }
	inline float* get_address_of_m_monoSpacing_98() { return &___m_monoSpacing_98; }
	inline void set_m_monoSpacing_98(float value)
	{
		___m_monoSpacing_98 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_99() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_wordSpacing_99)); }
	inline float get_m_wordSpacing_99() const { return ___m_wordSpacing_99; }
	inline float* get_address_of_m_wordSpacing_99() { return &___m_wordSpacing_99; }
	inline void set_m_wordSpacing_99(float value)
	{
		___m_wordSpacing_99 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_100() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacing_100)); }
	inline float get_m_lineSpacing_100() const { return ___m_lineSpacing_100; }
	inline float* get_address_of_m_lineSpacing_100() { return &___m_lineSpacing_100; }
	inline void set_m_lineSpacing_100(float value)
	{
		___m_lineSpacing_100 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_101() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacingDelta_101)); }
	inline float get_m_lineSpacingDelta_101() const { return ___m_lineSpacingDelta_101; }
	inline float* get_address_of_m_lineSpacingDelta_101() { return &___m_lineSpacingDelta_101; }
	inline void set_m_lineSpacingDelta_101(float value)
	{
		___m_lineSpacingDelta_101 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_102() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineHeight_102)); }
	inline float get_m_lineHeight_102() const { return ___m_lineHeight_102; }
	inline float* get_address_of_m_lineHeight_102() { return &___m_lineHeight_102; }
	inline void set_m_lineHeight_102(float value)
	{
		___m_lineHeight_102 = value;
	}

	inline static int32_t get_offset_of_m_IsDrivenLineSpacing_103() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_IsDrivenLineSpacing_103)); }
	inline bool get_m_IsDrivenLineSpacing_103() const { return ___m_IsDrivenLineSpacing_103; }
	inline bool* get_address_of_m_IsDrivenLineSpacing_103() { return &___m_IsDrivenLineSpacing_103; }
	inline void set_m_IsDrivenLineSpacing_103(bool value)
	{
		___m_IsDrivenLineSpacing_103 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_104() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacingMax_104)); }
	inline float get_m_lineSpacingMax_104() const { return ___m_lineSpacingMax_104; }
	inline float* get_address_of_m_lineSpacingMax_104() { return &___m_lineSpacingMax_104; }
	inline void set_m_lineSpacingMax_104(float value)
	{
		___m_lineSpacingMax_104 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_105() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_paragraphSpacing_105)); }
	inline float get_m_paragraphSpacing_105() const { return ___m_paragraphSpacing_105; }
	inline float* get_address_of_m_paragraphSpacing_105() { return &___m_paragraphSpacing_105; }
	inline void set_m_paragraphSpacing_105(float value)
	{
		___m_paragraphSpacing_105 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_106() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charWidthMaxAdj_106)); }
	inline float get_m_charWidthMaxAdj_106() const { return ___m_charWidthMaxAdj_106; }
	inline float* get_address_of_m_charWidthMaxAdj_106() { return &___m_charWidthMaxAdj_106; }
	inline void set_m_charWidthMaxAdj_106(float value)
	{
		___m_charWidthMaxAdj_106 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_107() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charWidthAdjDelta_107)); }
	inline float get_m_charWidthAdjDelta_107() const { return ___m_charWidthAdjDelta_107; }
	inline float* get_address_of_m_charWidthAdjDelta_107() { return &___m_charWidthAdjDelta_107; }
	inline void set_m_charWidthAdjDelta_107(float value)
	{
		___m_charWidthAdjDelta_107 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_108() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableWordWrapping_108)); }
	inline bool get_m_enableWordWrapping_108() const { return ___m_enableWordWrapping_108; }
	inline bool* get_address_of_m_enableWordWrapping_108() { return &___m_enableWordWrapping_108; }
	inline void set_m_enableWordWrapping_108(bool value)
	{
		___m_enableWordWrapping_108 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_109() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCharacterWrappingEnabled_109)); }
	inline bool get_m_isCharacterWrappingEnabled_109() const { return ___m_isCharacterWrappingEnabled_109; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_109() { return &___m_isCharacterWrappingEnabled_109; }
	inline void set_m_isCharacterWrappingEnabled_109(bool value)
	{
		___m_isCharacterWrappingEnabled_109 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_110() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isNonBreakingSpace_110)); }
	inline bool get_m_isNonBreakingSpace_110() const { return ___m_isNonBreakingSpace_110; }
	inline bool* get_address_of_m_isNonBreakingSpace_110() { return &___m_isNonBreakingSpace_110; }
	inline void set_m_isNonBreakingSpace_110(bool value)
	{
		___m_isNonBreakingSpace_110 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_111() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isIgnoringAlignment_111)); }
	inline bool get_m_isIgnoringAlignment_111() const { return ___m_isIgnoringAlignment_111; }
	inline bool* get_address_of_m_isIgnoringAlignment_111() { return &___m_isIgnoringAlignment_111; }
	inline void set_m_isIgnoringAlignment_111(bool value)
	{
		___m_isIgnoringAlignment_111 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_112() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_wordWrappingRatios_112)); }
	inline float get_m_wordWrappingRatios_112() const { return ___m_wordWrappingRatios_112; }
	inline float* get_address_of_m_wordWrappingRatios_112() { return &___m_wordWrappingRatios_112; }
	inline void set_m_wordWrappingRatios_112(float value)
	{
		___m_wordWrappingRatios_112 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_113() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_overflowMode_113)); }
	inline int32_t get_m_overflowMode_113() const { return ___m_overflowMode_113; }
	inline int32_t* get_address_of_m_overflowMode_113() { return &___m_overflowMode_113; }
	inline void set_m_overflowMode_113(int32_t value)
	{
		___m_overflowMode_113 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_114() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstOverflowCharacterIndex_114)); }
	inline int32_t get_m_firstOverflowCharacterIndex_114() const { return ___m_firstOverflowCharacterIndex_114; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_114() { return &___m_firstOverflowCharacterIndex_114; }
	inline void set_m_firstOverflowCharacterIndex_114(int32_t value)
	{
		___m_firstOverflowCharacterIndex_114 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_115() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_linkedTextComponent_115)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_m_linkedTextComponent_115() const { return ___m_linkedTextComponent_115; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_m_linkedTextComponent_115() { return &___m_linkedTextComponent_115; }
	inline void set_m_linkedTextComponent_115(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___m_linkedTextComponent_115 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkedTextComponent_115), (void*)value);
	}

	inline static int32_t get_offset_of_parentLinkedComponent_116() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___parentLinkedComponent_116)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_parentLinkedComponent_116() const { return ___parentLinkedComponent_116; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_parentLinkedComponent_116() { return &___parentLinkedComponent_116; }
	inline void set_parentLinkedComponent_116(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___parentLinkedComponent_116 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentLinkedComponent_116), (void*)value);
	}

	inline static int32_t get_offset_of_m_isTextTruncated_117() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isTextTruncated_117)); }
	inline bool get_m_isTextTruncated_117() const { return ___m_isTextTruncated_117; }
	inline bool* get_address_of_m_isTextTruncated_117() { return &___m_isTextTruncated_117; }
	inline void set_m_isTextTruncated_117(bool value)
	{
		___m_isTextTruncated_117 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_118() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableKerning_118)); }
	inline bool get_m_enableKerning_118() const { return ___m_enableKerning_118; }
	inline bool* get_address_of_m_enableKerning_118() { return &___m_enableKerning_118; }
	inline void set_m_enableKerning_118(bool value)
	{
		___m_enableKerning_118 = value;
	}

	inline static int32_t get_offset_of_m_GlyphHorizontalAdvanceAdjustment_119() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_GlyphHorizontalAdvanceAdjustment_119)); }
	inline float get_m_GlyphHorizontalAdvanceAdjustment_119() const { return ___m_GlyphHorizontalAdvanceAdjustment_119; }
	inline float* get_address_of_m_GlyphHorizontalAdvanceAdjustment_119() { return &___m_GlyphHorizontalAdvanceAdjustment_119; }
	inline void set_m_GlyphHorizontalAdvanceAdjustment_119(float value)
	{
		___m_GlyphHorizontalAdvanceAdjustment_119 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_120() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableExtraPadding_120)); }
	inline bool get_m_enableExtraPadding_120() const { return ___m_enableExtraPadding_120; }
	inline bool* get_address_of_m_enableExtraPadding_120() { return &___m_enableExtraPadding_120; }
	inline void set_m_enableExtraPadding_120(bool value)
	{
		___m_enableExtraPadding_120 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_121() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___checkPaddingRequired_121)); }
	inline bool get_checkPaddingRequired_121() const { return ___checkPaddingRequired_121; }
	inline bool* get_address_of_checkPaddingRequired_121() { return &___checkPaddingRequired_121; }
	inline void set_checkPaddingRequired_121(bool value)
	{
		___checkPaddingRequired_121 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_122() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isRichText_122)); }
	inline bool get_m_isRichText_122() const { return ___m_isRichText_122; }
	inline bool* get_address_of_m_isRichText_122() { return &___m_isRichText_122; }
	inline void set_m_isRichText_122(bool value)
	{
		___m_isRichText_122 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_123() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_parseCtrlCharacters_123)); }
	inline bool get_m_parseCtrlCharacters_123() const { return ___m_parseCtrlCharacters_123; }
	inline bool* get_address_of_m_parseCtrlCharacters_123() { return &___m_parseCtrlCharacters_123; }
	inline void set_m_parseCtrlCharacters_123(bool value)
	{
		___m_parseCtrlCharacters_123 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_124() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isOverlay_124)); }
	inline bool get_m_isOverlay_124() const { return ___m_isOverlay_124; }
	inline bool* get_address_of_m_isOverlay_124() { return &___m_isOverlay_124; }
	inline void set_m_isOverlay_124(bool value)
	{
		___m_isOverlay_124 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_125() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isOrthographic_125)); }
	inline bool get_m_isOrthographic_125() const { return ___m_isOrthographic_125; }
	inline bool* get_address_of_m_isOrthographic_125() { return &___m_isOrthographic_125; }
	inline void set_m_isOrthographic_125(bool value)
	{
		___m_isOrthographic_125 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_126() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCullingEnabled_126)); }
	inline bool get_m_isCullingEnabled_126() const { return ___m_isCullingEnabled_126; }
	inline bool* get_address_of_m_isCullingEnabled_126() { return &___m_isCullingEnabled_126; }
	inline void set_m_isCullingEnabled_126(bool value)
	{
		___m_isCullingEnabled_126 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_127() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isMaskingEnabled_127)); }
	inline bool get_m_isMaskingEnabled_127() const { return ___m_isMaskingEnabled_127; }
	inline bool* get_address_of_m_isMaskingEnabled_127() { return &___m_isMaskingEnabled_127; }
	inline void set_m_isMaskingEnabled_127(bool value)
	{
		___m_isMaskingEnabled_127 = value;
	}

	inline static int32_t get_offset_of_isMaskUpdateRequired_128() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___isMaskUpdateRequired_128)); }
	inline bool get_isMaskUpdateRequired_128() const { return ___isMaskUpdateRequired_128; }
	inline bool* get_address_of_isMaskUpdateRequired_128() { return &___isMaskUpdateRequired_128; }
	inline void set_isMaskUpdateRequired_128(bool value)
	{
		___isMaskUpdateRequired_128 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_129() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreCulling_129)); }
	inline bool get_m_ignoreCulling_129() const { return ___m_ignoreCulling_129; }
	inline bool* get_address_of_m_ignoreCulling_129() { return &___m_ignoreCulling_129; }
	inline void set_m_ignoreCulling_129(bool value)
	{
		___m_ignoreCulling_129 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_130() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_horizontalMapping_130)); }
	inline int32_t get_m_horizontalMapping_130() const { return ___m_horizontalMapping_130; }
	inline int32_t* get_address_of_m_horizontalMapping_130() { return &___m_horizontalMapping_130; }
	inline void set_m_horizontalMapping_130(int32_t value)
	{
		___m_horizontalMapping_130 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_131() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_verticalMapping_131)); }
	inline int32_t get_m_verticalMapping_131() const { return ___m_verticalMapping_131; }
	inline int32_t* get_address_of_m_verticalMapping_131() { return &___m_verticalMapping_131; }
	inline void set_m_verticalMapping_131(int32_t value)
	{
		___m_verticalMapping_131 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_132() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_uvLineOffset_132)); }
	inline float get_m_uvLineOffset_132() const { return ___m_uvLineOffset_132; }
	inline float* get_address_of_m_uvLineOffset_132() { return &___m_uvLineOffset_132; }
	inline void set_m_uvLineOffset_132(float value)
	{
		___m_uvLineOffset_132 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_133() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderMode_133)); }
	inline int32_t get_m_renderMode_133() const { return ___m_renderMode_133; }
	inline int32_t* get_address_of_m_renderMode_133() { return &___m_renderMode_133; }
	inline void set_m_renderMode_133(int32_t value)
	{
		___m_renderMode_133 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_134() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_geometrySortingOrder_134)); }
	inline int32_t get_m_geometrySortingOrder_134() const { return ___m_geometrySortingOrder_134; }
	inline int32_t* get_address_of_m_geometrySortingOrder_134() { return &___m_geometrySortingOrder_134; }
	inline void set_m_geometrySortingOrder_134(int32_t value)
	{
		___m_geometrySortingOrder_134 = value;
	}

	inline static int32_t get_offset_of_m_IsTextObjectScaleStatic_135() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_IsTextObjectScaleStatic_135)); }
	inline bool get_m_IsTextObjectScaleStatic_135() const { return ___m_IsTextObjectScaleStatic_135; }
	inline bool* get_address_of_m_IsTextObjectScaleStatic_135() { return &___m_IsTextObjectScaleStatic_135; }
	inline void set_m_IsTextObjectScaleStatic_135(bool value)
	{
		___m_IsTextObjectScaleStatic_135 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_136() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_VertexBufferAutoSizeReduction_136)); }
	inline bool get_m_VertexBufferAutoSizeReduction_136() const { return ___m_VertexBufferAutoSizeReduction_136; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_136() { return &___m_VertexBufferAutoSizeReduction_136; }
	inline void set_m_VertexBufferAutoSizeReduction_136(bool value)
	{
		___m_VertexBufferAutoSizeReduction_136 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_137() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstVisibleCharacter_137)); }
	inline int32_t get_m_firstVisibleCharacter_137() const { return ___m_firstVisibleCharacter_137; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_137() { return &___m_firstVisibleCharacter_137; }
	inline void set_m_firstVisibleCharacter_137(int32_t value)
	{
		___m_firstVisibleCharacter_137 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_138() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleCharacters_138)); }
	inline int32_t get_m_maxVisibleCharacters_138() const { return ___m_maxVisibleCharacters_138; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_138() { return &___m_maxVisibleCharacters_138; }
	inline void set_m_maxVisibleCharacters_138(int32_t value)
	{
		___m_maxVisibleCharacters_138 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_139() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleWords_139)); }
	inline int32_t get_m_maxVisibleWords_139() const { return ___m_maxVisibleWords_139; }
	inline int32_t* get_address_of_m_maxVisibleWords_139() { return &___m_maxVisibleWords_139; }
	inline void set_m_maxVisibleWords_139(int32_t value)
	{
		___m_maxVisibleWords_139 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_140() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleLines_140)); }
	inline int32_t get_m_maxVisibleLines_140() const { return ___m_maxVisibleLines_140; }
	inline int32_t* get_address_of_m_maxVisibleLines_140() { return &___m_maxVisibleLines_140; }
	inline void set_m_maxVisibleLines_140(int32_t value)
	{
		___m_maxVisibleLines_140 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_141() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_useMaxVisibleDescender_141)); }
	inline bool get_m_useMaxVisibleDescender_141() const { return ___m_useMaxVisibleDescender_141; }
	inline bool* get_address_of_m_useMaxVisibleDescender_141() { return &___m_useMaxVisibleDescender_141; }
	inline void set_m_useMaxVisibleDescender_141(bool value)
	{
		___m_useMaxVisibleDescender_141 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_142() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_pageToDisplay_142)); }
	inline int32_t get_m_pageToDisplay_142() const { return ___m_pageToDisplay_142; }
	inline int32_t* get_address_of_m_pageToDisplay_142() { return &___m_pageToDisplay_142; }
	inline void set_m_pageToDisplay_142(int32_t value)
	{
		___m_pageToDisplay_142 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_143() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isNewPage_143)); }
	inline bool get_m_isNewPage_143() const { return ___m_isNewPage_143; }
	inline bool* get_address_of_m_isNewPage_143() { return &___m_isNewPage_143; }
	inline void set_m_isNewPage_143(bool value)
	{
		___m_isNewPage_143 = value;
	}

	inline static int32_t get_offset_of_m_margin_144() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_margin_144)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_margin_144() const { return ___m_margin_144; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_margin_144() { return &___m_margin_144; }
	inline void set_m_margin_144(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_margin_144 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_145() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginLeft_145)); }
	inline float get_m_marginLeft_145() const { return ___m_marginLeft_145; }
	inline float* get_address_of_m_marginLeft_145() { return &___m_marginLeft_145; }
	inline void set_m_marginLeft_145(float value)
	{
		___m_marginLeft_145 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_146() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginRight_146)); }
	inline float get_m_marginRight_146() const { return ___m_marginRight_146; }
	inline float* get_address_of_m_marginRight_146() { return &___m_marginRight_146; }
	inline void set_m_marginRight_146(float value)
	{
		___m_marginRight_146 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_147() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginWidth_147)); }
	inline float get_m_marginWidth_147() const { return ___m_marginWidth_147; }
	inline float* get_address_of_m_marginWidth_147() { return &___m_marginWidth_147; }
	inline void set_m_marginWidth_147(float value)
	{
		___m_marginWidth_147 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_148() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginHeight_148)); }
	inline float get_m_marginHeight_148() const { return ___m_marginHeight_148; }
	inline float* get_address_of_m_marginHeight_148() { return &___m_marginHeight_148; }
	inline void set_m_marginHeight_148(float value)
	{
		___m_marginHeight_148 = value;
	}

	inline static int32_t get_offset_of_m_width_149() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_width_149)); }
	inline float get_m_width_149() const { return ___m_width_149; }
	inline float* get_address_of_m_width_149() { return &___m_width_149; }
	inline void set_m_width_149(float value)
	{
		___m_width_149 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_150() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textInfo_150)); }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * get_m_textInfo_150() const { return ___m_textInfo_150; }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 ** get_address_of_m_textInfo_150() { return &___m_textInfo_150; }
	inline void set_m_textInfo_150(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * value)
	{
		___m_textInfo_150 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textInfo_150), (void*)value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_151() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_havePropertiesChanged_151)); }
	inline bool get_m_havePropertiesChanged_151() const { return ___m_havePropertiesChanged_151; }
	inline bool* get_address_of_m_havePropertiesChanged_151() { return &___m_havePropertiesChanged_151; }
	inline void set_m_havePropertiesChanged_151(bool value)
	{
		___m_havePropertiesChanged_151 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_152() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isUsingLegacyAnimationComponent_152)); }
	inline bool get_m_isUsingLegacyAnimationComponent_152() const { return ___m_isUsingLegacyAnimationComponent_152; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_152() { return &___m_isUsingLegacyAnimationComponent_152; }
	inline void set_m_isUsingLegacyAnimationComponent_152(bool value)
	{
		___m_isUsingLegacyAnimationComponent_152 = value;
	}

	inline static int32_t get_offset_of_m_transform_153() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_transform_153)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_transform_153() const { return ___m_transform_153; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_transform_153() { return &___m_transform_153; }
	inline void set_m_transform_153(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_transform_153 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_transform_153), (void*)value);
	}

	inline static int32_t get_offset_of_m_rectTransform_154() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_rectTransform_154)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_rectTransform_154() const { return ___m_rectTransform_154; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_rectTransform_154() { return &___m_rectTransform_154; }
	inline void set_m_rectTransform_154(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_rectTransform_154 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rectTransform_154), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousRectTransformSize_155() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_PreviousRectTransformSize_155)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PreviousRectTransformSize_155() const { return ___m_PreviousRectTransformSize_155; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PreviousRectTransformSize_155() { return &___m_PreviousRectTransformSize_155; }
	inline void set_m_PreviousRectTransformSize_155(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PreviousRectTransformSize_155 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPivotPosition_156() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_PreviousPivotPosition_156)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PreviousPivotPosition_156() const { return ___m_PreviousPivotPosition_156; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PreviousPivotPosition_156() { return &___m_PreviousPivotPosition_156; }
	inline void set_m_PreviousPivotPosition_156(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PreviousPivotPosition_156 = value;
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_157() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___U3CautoSizeTextContainerU3Ek__BackingField_157)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_157() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_157; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_157() { return &___U3CautoSizeTextContainerU3Ek__BackingField_157; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_157(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_157 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_158() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_autoSizeTextContainer_158)); }
	inline bool get_m_autoSizeTextContainer_158() const { return ___m_autoSizeTextContainer_158; }
	inline bool* get_address_of_m_autoSizeTextContainer_158() { return &___m_autoSizeTextContainer_158; }
	inline void set_m_autoSizeTextContainer_158(bool value)
	{
		___m_autoSizeTextContainer_158 = value;
	}

	inline static int32_t get_offset_of_m_mesh_159() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_mesh_159)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_mesh_159() const { return ___m_mesh_159; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_mesh_159() { return &___m_mesh_159; }
	inline void set_m_mesh_159(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_mesh_159 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mesh_159), (void*)value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_160() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isVolumetricText_160)); }
	inline bool get_m_isVolumetricText_160() const { return ___m_isVolumetricText_160; }
	inline bool* get_address_of_m_isVolumetricText_160() { return &___m_isVolumetricText_160; }
	inline void set_m_isVolumetricText_160(bool value)
	{
		___m_isVolumetricText_160 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_163() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___OnPreRenderText_163)); }
	inline Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * get_OnPreRenderText_163() const { return ___OnPreRenderText_163; }
	inline Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD ** get_address_of_OnPreRenderText_163() { return &___OnPreRenderText_163; }
	inline void set_OnPreRenderText_163(Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * value)
	{
		___OnPreRenderText_163 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_163), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAnimator_164() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAnimator_164)); }
	inline TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * get_m_spriteAnimator_164() const { return ___m_spriteAnimator_164; }
	inline TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 ** get_address_of_m_spriteAnimator_164() { return &___m_spriteAnimator_164; }
	inline void set_m_spriteAnimator_164(TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * value)
	{
		___m_spriteAnimator_164 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAnimator_164), (void*)value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_165() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_flexibleHeight_165)); }
	inline float get_m_flexibleHeight_165() const { return ___m_flexibleHeight_165; }
	inline float* get_address_of_m_flexibleHeight_165() { return &___m_flexibleHeight_165; }
	inline void set_m_flexibleHeight_165(float value)
	{
		___m_flexibleHeight_165 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_166() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_flexibleWidth_166)); }
	inline float get_m_flexibleWidth_166() const { return ___m_flexibleWidth_166; }
	inline float* get_address_of_m_flexibleWidth_166() { return &___m_flexibleWidth_166; }
	inline void set_m_flexibleWidth_166(float value)
	{
		___m_flexibleWidth_166 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_167() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minWidth_167)); }
	inline float get_m_minWidth_167() const { return ___m_minWidth_167; }
	inline float* get_address_of_m_minWidth_167() { return &___m_minWidth_167; }
	inline void set_m_minWidth_167(float value)
	{
		___m_minWidth_167 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_168() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minHeight_168)); }
	inline float get_m_minHeight_168() const { return ___m_minHeight_168; }
	inline float* get_address_of_m_minHeight_168() { return &___m_minHeight_168; }
	inline void set_m_minHeight_168(float value)
	{
		___m_minHeight_168 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_169() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxWidth_169)); }
	inline float get_m_maxWidth_169() const { return ___m_maxWidth_169; }
	inline float* get_address_of_m_maxWidth_169() { return &___m_maxWidth_169; }
	inline void set_m_maxWidth_169(float value)
	{
		___m_maxWidth_169 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_170() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxHeight_170)); }
	inline float get_m_maxHeight_170() const { return ___m_maxHeight_170; }
	inline float* get_address_of_m_maxHeight_170() { return &___m_maxHeight_170; }
	inline void set_m_maxHeight_170(float value)
	{
		___m_maxHeight_170 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_171() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_LayoutElement_171)); }
	inline LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * get_m_LayoutElement_171() const { return ___m_LayoutElement_171; }
	inline LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B ** get_address_of_m_LayoutElement_171() { return &___m_LayoutElement_171; }
	inline void set_m_LayoutElement_171(LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * value)
	{
		___m_LayoutElement_171 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutElement_171), (void*)value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_172() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_preferredWidth_172)); }
	inline float get_m_preferredWidth_172() const { return ___m_preferredWidth_172; }
	inline float* get_address_of_m_preferredWidth_172() { return &___m_preferredWidth_172; }
	inline void set_m_preferredWidth_172(float value)
	{
		___m_preferredWidth_172 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_173() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderedWidth_173)); }
	inline float get_m_renderedWidth_173() const { return ___m_renderedWidth_173; }
	inline float* get_address_of_m_renderedWidth_173() { return &___m_renderedWidth_173; }
	inline void set_m_renderedWidth_173(float value)
	{
		___m_renderedWidth_173 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_174() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isPreferredWidthDirty_174)); }
	inline bool get_m_isPreferredWidthDirty_174() const { return ___m_isPreferredWidthDirty_174; }
	inline bool* get_address_of_m_isPreferredWidthDirty_174() { return &___m_isPreferredWidthDirty_174; }
	inline void set_m_isPreferredWidthDirty_174(bool value)
	{
		___m_isPreferredWidthDirty_174 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_175() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_preferredHeight_175)); }
	inline float get_m_preferredHeight_175() const { return ___m_preferredHeight_175; }
	inline float* get_address_of_m_preferredHeight_175() { return &___m_preferredHeight_175; }
	inline void set_m_preferredHeight_175(float value)
	{
		___m_preferredHeight_175 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_176() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderedHeight_176)); }
	inline float get_m_renderedHeight_176() const { return ___m_renderedHeight_176; }
	inline float* get_address_of_m_renderedHeight_176() { return &___m_renderedHeight_176; }
	inline void set_m_renderedHeight_176(float value)
	{
		___m_renderedHeight_176 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_177() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isPreferredHeightDirty_177)); }
	inline bool get_m_isPreferredHeightDirty_177() const { return ___m_isPreferredHeightDirty_177; }
	inline bool* get_address_of_m_isPreferredHeightDirty_177() { return &___m_isPreferredHeightDirty_177; }
	inline void set_m_isPreferredHeightDirty_177(bool value)
	{
		___m_isPreferredHeightDirty_177 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_178() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCalculatingPreferredValues_178)); }
	inline bool get_m_isCalculatingPreferredValues_178() const { return ___m_isCalculatingPreferredValues_178; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_178() { return &___m_isCalculatingPreferredValues_178; }
	inline void set_m_isCalculatingPreferredValues_178(bool value)
	{
		___m_isCalculatingPreferredValues_178 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_179() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_layoutPriority_179)); }
	inline int32_t get_m_layoutPriority_179() const { return ___m_layoutPriority_179; }
	inline int32_t* get_address_of_m_layoutPriority_179() { return &___m_layoutPriority_179; }
	inline void set_m_layoutPriority_179(int32_t value)
	{
		___m_layoutPriority_179 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_180() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isLayoutDirty_180)); }
	inline bool get_m_isLayoutDirty_180() const { return ___m_isLayoutDirty_180; }
	inline bool* get_address_of_m_isLayoutDirty_180() { return &___m_isLayoutDirty_180; }
	inline void set_m_isLayoutDirty_180(bool value)
	{
		___m_isLayoutDirty_180 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_181() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isAwake_181)); }
	inline bool get_m_isAwake_181() const { return ___m_isAwake_181; }
	inline bool* get_address_of_m_isAwake_181() { return &___m_isAwake_181; }
	inline void set_m_isAwake_181(bool value)
	{
		___m_isAwake_181 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_182() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isWaitingOnResourceLoad_182)); }
	inline bool get_m_isWaitingOnResourceLoad_182() const { return ___m_isWaitingOnResourceLoad_182; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_182() { return &___m_isWaitingOnResourceLoad_182; }
	inline void set_m_isWaitingOnResourceLoad_182(bool value)
	{
		___m_isWaitingOnResourceLoad_182 = value;
	}

	inline static int32_t get_offset_of_m_isInputParsingRequired_183() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isInputParsingRequired_183)); }
	inline bool get_m_isInputParsingRequired_183() const { return ___m_isInputParsingRequired_183; }
	inline bool* get_address_of_m_isInputParsingRequired_183() { return &___m_isInputParsingRequired_183; }
	inline void set_m_isInputParsingRequired_183(bool value)
	{
		___m_isInputParsingRequired_183 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_184() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_inputSource_184)); }
	inline int32_t get_m_inputSource_184() const { return ___m_inputSource_184; }
	inline int32_t* get_address_of_m_inputSource_184() { return &___m_inputSource_184; }
	inline void set_m_inputSource_184(int32_t value)
	{
		___m_inputSource_184 = value;
	}

	inline static int32_t get_offset_of_m_fontScale_185() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontScale_185)); }
	inline float get_m_fontScale_185() const { return ___m_fontScale_185; }
	inline float* get_address_of_m_fontScale_185() { return &___m_fontScale_185; }
	inline void set_m_fontScale_185(float value)
	{
		___m_fontScale_185 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_186() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontScaleMultiplier_186)); }
	inline float get_m_fontScaleMultiplier_186() const { return ___m_fontScaleMultiplier_186; }
	inline float* get_address_of_m_fontScaleMultiplier_186() { return &___m_fontScaleMultiplier_186; }
	inline void set_m_fontScaleMultiplier_186(float value)
	{
		___m_fontScaleMultiplier_186 = value;
	}

	inline static int32_t get_offset_of_m_htmlTag_187() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_htmlTag_187)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_htmlTag_187() const { return ___m_htmlTag_187; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_htmlTag_187() { return &___m_htmlTag_187; }
	inline void set_m_htmlTag_187(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_htmlTag_187 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_htmlTag_187), (void*)value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_188() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_xmlAttribute_188)); }
	inline RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* get_m_xmlAttribute_188() const { return ___m_xmlAttribute_188; }
	inline RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652** get_address_of_m_xmlAttribute_188() { return &___m_xmlAttribute_188; }
	inline void set_m_xmlAttribute_188(RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* value)
	{
		___m_xmlAttribute_188 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_xmlAttribute_188), (void*)value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_189() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_attributeParameterValues_189)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_m_attributeParameterValues_189() const { return ___m_attributeParameterValues_189; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_m_attributeParameterValues_189() { return &___m_attributeParameterValues_189; }
	inline void set_m_attributeParameterValues_189(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___m_attributeParameterValues_189 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_attributeParameterValues_189), (void*)value);
	}

	inline static int32_t get_offset_of_tag_LineIndent_190() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_LineIndent_190)); }
	inline float get_tag_LineIndent_190() const { return ___tag_LineIndent_190; }
	inline float* get_address_of_tag_LineIndent_190() { return &___tag_LineIndent_190; }
	inline void set_tag_LineIndent_190(float value)
	{
		___tag_LineIndent_190 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_191() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_Indent_191)); }
	inline float get_tag_Indent_191() const { return ___tag_Indent_191; }
	inline float* get_address_of_tag_Indent_191() { return &___tag_Indent_191; }
	inline void set_tag_Indent_191(float value)
	{
		___tag_Indent_191 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_192() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_indentStack_192)); }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  get_m_indentStack_192() const { return ___m_indentStack_192; }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA * get_address_of_m_indentStack_192() { return &___m_indentStack_192; }
	inline void set_m_indentStack_192(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  value)
	{
		___m_indentStack_192 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_indentStack_192))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_tag_NoParsing_193() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_NoParsing_193)); }
	inline bool get_tag_NoParsing_193() const { return ___tag_NoParsing_193; }
	inline bool* get_address_of_tag_NoParsing_193() { return &___tag_NoParsing_193; }
	inline void set_tag_NoParsing_193(bool value)
	{
		___tag_NoParsing_193 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_194() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isParsingText_194)); }
	inline bool get_m_isParsingText_194() const { return ___m_isParsingText_194; }
	inline bool* get_address_of_m_isParsingText_194() { return &___m_isParsingText_194; }
	inline void set_m_isParsingText_194(bool value)
	{
		___m_isParsingText_194 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_195() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FXMatrix_195)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_FXMatrix_195() const { return ___m_FXMatrix_195; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_FXMatrix_195() { return &___m_FXMatrix_195; }
	inline void set_m_FXMatrix_195(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_FXMatrix_195 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_196() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isFXMatrixSet_196)); }
	inline bool get_m_isFXMatrixSet_196() const { return ___m_isFXMatrixSet_196; }
	inline bool* get_address_of_m_isFXMatrixSet_196() { return &___m_isFXMatrixSet_196; }
	inline void set_m_isFXMatrixSet_196(bool value)
	{
		___m_isFXMatrixSet_196 = value;
	}

	inline static int32_t get_offset_of_m_InternalParsingBuffer_197() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_InternalParsingBuffer_197)); }
	inline UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* get_m_InternalParsingBuffer_197() const { return ___m_InternalParsingBuffer_197; }
	inline UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505** get_address_of_m_InternalParsingBuffer_197() { return &___m_InternalParsingBuffer_197; }
	inline void set_m_InternalParsingBuffer_197(UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* value)
	{
		___m_InternalParsingBuffer_197 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalParsingBuffer_197), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalParsingBufferSize_198() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_InternalParsingBufferSize_198)); }
	inline int32_t get_m_InternalParsingBufferSize_198() const { return ___m_InternalParsingBufferSize_198; }
	inline int32_t* get_address_of_m_InternalParsingBufferSize_198() { return &___m_InternalParsingBufferSize_198; }
	inline void set_m_InternalParsingBufferSize_198(int32_t value)
	{
		___m_InternalParsingBufferSize_198 = value;
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_199() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_internalCharacterInfo_199)); }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* get_m_internalCharacterInfo_199() const { return ___m_internalCharacterInfo_199; }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604** get_address_of_m_internalCharacterInfo_199() { return &___m_internalCharacterInfo_199; }
	inline void set_m_internalCharacterInfo_199(TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* value)
	{
		___m_internalCharacterInfo_199 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_internalCharacterInfo_199), (void*)value);
	}

	inline static int32_t get_offset_of_m_input_CharArray_200() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_input_CharArray_200)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_input_CharArray_200() const { return ___m_input_CharArray_200; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_input_CharArray_200() { return &___m_input_CharArray_200; }
	inline void set_m_input_CharArray_200(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_input_CharArray_200 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_input_CharArray_200), (void*)value);
	}

	inline static int32_t get_offset_of_m_charArray_Length_201() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charArray_Length_201)); }
	inline int32_t get_m_charArray_Length_201() const { return ___m_charArray_Length_201; }
	inline int32_t* get_address_of_m_charArray_Length_201() { return &___m_charArray_Length_201; }
	inline void set_m_charArray_Length_201(int32_t value)
	{
		___m_charArray_Length_201 = value;
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_202() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_totalCharacterCount_202)); }
	inline int32_t get_m_totalCharacterCount_202() const { return ___m_totalCharacterCount_202; }
	inline int32_t* get_address_of_m_totalCharacterCount_202() { return &___m_totalCharacterCount_202; }
	inline void set_m_totalCharacterCount_202(int32_t value)
	{
		___m_totalCharacterCount_202 = value;
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_203() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedWordWrapState_203)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedWordWrapState_203() const { return ___m_SavedWordWrapState_203; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedWordWrapState_203() { return &___m_SavedWordWrapState_203; }
	inline void set_m_SavedWordWrapState_203(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedWordWrapState_203 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_203))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_203))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_203))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_203))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_203))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_203))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_203))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_203))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_203))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLineState_204() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedLineState_204)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedLineState_204() const { return ___m_SavedLineState_204; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedLineState_204() { return &___m_SavedLineState_204; }
	inline void set_m_SavedLineState_204(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedLineState_204 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_204))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_204))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_204))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_204))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_204))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedEllipsisState_205() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedEllipsisState_205)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedEllipsisState_205() const { return ___m_SavedEllipsisState_205; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedEllipsisState_205() { return &___m_SavedEllipsisState_205; }
	inline void set_m_SavedEllipsisState_205(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedEllipsisState_205 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_205))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_205))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_205))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_205))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_205))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLastValidState_206() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedLastValidState_206)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedLastValidState_206() const { return ___m_SavedLastValidState_206; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedLastValidState_206() { return &___m_SavedLastValidState_206; }
	inline void set_m_SavedLastValidState_206(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedLastValidState_206 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_206))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_206))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_206))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_206))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_206))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedSoftLineBreakState_207() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedSoftLineBreakState_207)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedSoftLineBreakState_207() const { return ___m_SavedSoftLineBreakState_207; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedSoftLineBreakState_207() { return &___m_SavedSoftLineBreakState_207; }
	inline void set_m_SavedSoftLineBreakState_207(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedSoftLineBreakState_207 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_207))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_207))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_207))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_207))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_207))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_EllipsisInsertionCandidateStack_208() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_EllipsisInsertionCandidateStack_208)); }
	inline TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E  get_m_EllipsisInsertionCandidateStack_208() const { return ___m_EllipsisInsertionCandidateStack_208; }
	inline TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E * get_address_of_m_EllipsisInsertionCandidateStack_208() { return &___m_EllipsisInsertionCandidateStack_208; }
	inline void set_m_EllipsisInsertionCandidateStack_208(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E  value)
	{
		___m_EllipsisInsertionCandidateStack_208 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_EllipsisInsertionCandidateStack_208))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___textInfo_36), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_208))->___m_DefaultItem_2))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_characterCount_209() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_characterCount_209)); }
	inline int32_t get_m_characterCount_209() const { return ___m_characterCount_209; }
	inline int32_t* get_address_of_m_characterCount_209() { return &___m_characterCount_209; }
	inline void set_m_characterCount_209(int32_t value)
	{
		___m_characterCount_209 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_210() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstCharacterOfLine_210)); }
	inline int32_t get_m_firstCharacterOfLine_210() const { return ___m_firstCharacterOfLine_210; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_210() { return &___m_firstCharacterOfLine_210; }
	inline void set_m_firstCharacterOfLine_210(int32_t value)
	{
		___m_firstCharacterOfLine_210 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_211() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstVisibleCharacterOfLine_211)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_211() const { return ___m_firstVisibleCharacterOfLine_211; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_211() { return &___m_firstVisibleCharacterOfLine_211; }
	inline void set_m_firstVisibleCharacterOfLine_211(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_211 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_212() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lastCharacterOfLine_212)); }
	inline int32_t get_m_lastCharacterOfLine_212() const { return ___m_lastCharacterOfLine_212; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_212() { return &___m_lastCharacterOfLine_212; }
	inline void set_m_lastCharacterOfLine_212(int32_t value)
	{
		___m_lastCharacterOfLine_212 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_213() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lastVisibleCharacterOfLine_213)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_213() const { return ___m_lastVisibleCharacterOfLine_213; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_213() { return &___m_lastVisibleCharacterOfLine_213; }
	inline void set_m_lastVisibleCharacterOfLine_213(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_213 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_214() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineNumber_214)); }
	inline int32_t get_m_lineNumber_214() const { return ___m_lineNumber_214; }
	inline int32_t* get_address_of_m_lineNumber_214() { return &___m_lineNumber_214; }
	inline void set_m_lineNumber_214(int32_t value)
	{
		___m_lineNumber_214 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_215() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineVisibleCharacterCount_215)); }
	inline int32_t get_m_lineVisibleCharacterCount_215() const { return ___m_lineVisibleCharacterCount_215; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_215() { return &___m_lineVisibleCharacterCount_215; }
	inline void set_m_lineVisibleCharacterCount_215(int32_t value)
	{
		___m_lineVisibleCharacterCount_215 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_216() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_pageNumber_216)); }
	inline int32_t get_m_pageNumber_216() const { return ___m_pageNumber_216; }
	inline int32_t* get_address_of_m_pageNumber_216() { return &___m_pageNumber_216; }
	inline void set_m_pageNumber_216(int32_t value)
	{
		___m_pageNumber_216 = value;
	}

	inline static int32_t get_offset_of_m_PageAscender_217() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_PageAscender_217)); }
	inline float get_m_PageAscender_217() const { return ___m_PageAscender_217; }
	inline float* get_address_of_m_PageAscender_217() { return &___m_PageAscender_217; }
	inline void set_m_PageAscender_217(float value)
	{
		___m_PageAscender_217 = value;
	}

	inline static int32_t get_offset_of_m_maxTextAscender_218() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxTextAscender_218)); }
	inline float get_m_maxTextAscender_218() const { return ___m_maxTextAscender_218; }
	inline float* get_address_of_m_maxTextAscender_218() { return &___m_maxTextAscender_218; }
	inline void set_m_maxTextAscender_218(float value)
	{
		___m_maxTextAscender_218 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_219() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxCapHeight_219)); }
	inline float get_m_maxCapHeight_219() const { return ___m_maxCapHeight_219; }
	inline float* get_address_of_m_maxCapHeight_219() { return &___m_maxCapHeight_219; }
	inline void set_m_maxCapHeight_219(float value)
	{
		___m_maxCapHeight_219 = value;
	}

	inline static int32_t get_offset_of_m_ElementAscender_220() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ElementAscender_220)); }
	inline float get_m_ElementAscender_220() const { return ___m_ElementAscender_220; }
	inline float* get_address_of_m_ElementAscender_220() { return &___m_ElementAscender_220; }
	inline void set_m_ElementAscender_220(float value)
	{
		___m_ElementAscender_220 = value;
	}

	inline static int32_t get_offset_of_m_ElementDescender_221() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ElementDescender_221)); }
	inline float get_m_ElementDescender_221() const { return ___m_ElementDescender_221; }
	inline float* get_address_of_m_ElementDescender_221() { return &___m_ElementDescender_221; }
	inline void set_m_ElementDescender_221(float value)
	{
		___m_ElementDescender_221 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_222() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxLineAscender_222)); }
	inline float get_m_maxLineAscender_222() const { return ___m_maxLineAscender_222; }
	inline float* get_address_of_m_maxLineAscender_222() { return &___m_maxLineAscender_222; }
	inline void set_m_maxLineAscender_222(float value)
	{
		___m_maxLineAscender_222 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_223() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxLineDescender_223)); }
	inline float get_m_maxLineDescender_223() const { return ___m_maxLineDescender_223; }
	inline float* get_address_of_m_maxLineDescender_223() { return &___m_maxLineDescender_223; }
	inline void set_m_maxLineDescender_223(float value)
	{
		___m_maxLineDescender_223 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_224() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_startOfLineAscender_224)); }
	inline float get_m_startOfLineAscender_224() const { return ___m_startOfLineAscender_224; }
	inline float* get_address_of_m_startOfLineAscender_224() { return &___m_startOfLineAscender_224; }
	inline void set_m_startOfLineAscender_224(float value)
	{
		___m_startOfLineAscender_224 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineDescender_225() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_startOfLineDescender_225)); }
	inline float get_m_startOfLineDescender_225() const { return ___m_startOfLineDescender_225; }
	inline float* get_address_of_m_startOfLineDescender_225() { return &___m_startOfLineDescender_225; }
	inline void set_m_startOfLineDescender_225(float value)
	{
		___m_startOfLineDescender_225 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_226() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineOffset_226)); }
	inline float get_m_lineOffset_226() const { return ___m_lineOffset_226; }
	inline float* get_address_of_m_lineOffset_226() { return &___m_lineOffset_226; }
	inline void set_m_lineOffset_226(float value)
	{
		___m_lineOffset_226 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_227() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_meshExtents_227)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_m_meshExtents_227() const { return ___m_meshExtents_227; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_m_meshExtents_227() { return &___m_meshExtents_227; }
	inline void set_m_meshExtents_227(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___m_meshExtents_227 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_228() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_htmlColor_228)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_htmlColor_228() const { return ___m_htmlColor_228; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_htmlColor_228() { return &___m_htmlColor_228; }
	inline void set_m_htmlColor_228(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_htmlColor_228 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_229() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorStack_229)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_m_colorStack_229() const { return ___m_colorStack_229; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_m_colorStack_229() { return &___m_colorStack_229; }
	inline void set_m_colorStack_229(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___m_colorStack_229 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorStack_229))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_underlineColorStack_230() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_underlineColorStack_230)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_m_underlineColorStack_230() const { return ___m_underlineColorStack_230; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_m_underlineColorStack_230() { return &___m_underlineColorStack_230; }
	inline void set_m_underlineColorStack_230(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___m_underlineColorStack_230 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_underlineColorStack_230))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_231() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_strikethroughColorStack_231)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_m_strikethroughColorStack_231() const { return ___m_strikethroughColorStack_231; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_m_strikethroughColorStack_231() { return &___m_strikethroughColorStack_231; }
	inline void set_m_strikethroughColorStack_231(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___m_strikethroughColorStack_231 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_strikethroughColorStack_231))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_HighlightStateStack_232() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_HighlightStateStack_232)); }
	inline TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  get_m_HighlightStateStack_232() const { return ___m_HighlightStateStack_232; }
	inline TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2 * get_address_of_m_HighlightStateStack_232() { return &___m_HighlightStateStack_232; }
	inline void set_m_HighlightStateStack_232(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  value)
	{
		___m_HighlightStateStack_232 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_HighlightStateStack_232))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_233() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientPreset_233)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_colorGradientPreset_233() const { return ___m_colorGradientPreset_233; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_colorGradientPreset_233() { return &___m_colorGradientPreset_233; }
	inline void set_m_colorGradientPreset_233(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_colorGradientPreset_233 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colorGradientPreset_233), (void*)value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_234() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientStack_234)); }
	inline TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  get_m_colorGradientStack_234() const { return ___m_colorGradientStack_234; }
	inline TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C * get_address_of_m_colorGradientStack_234() { return &___m_colorGradientStack_234; }
	inline void set_m_colorGradientStack_234(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  value)
	{
		___m_colorGradientStack_234 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_234))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_234))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_colorGradientPresetIsTinted_235() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientPresetIsTinted_235)); }
	inline bool get_m_colorGradientPresetIsTinted_235() const { return ___m_colorGradientPresetIsTinted_235; }
	inline bool* get_address_of_m_colorGradientPresetIsTinted_235() { return &___m_colorGradientPresetIsTinted_235; }
	inline void set_m_colorGradientPresetIsTinted_235(bool value)
	{
		___m_colorGradientPresetIsTinted_235 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_236() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tabSpacing_236)); }
	inline float get_m_tabSpacing_236() const { return ___m_tabSpacing_236; }
	inline float* get_address_of_m_tabSpacing_236() { return &___m_tabSpacing_236; }
	inline void set_m_tabSpacing_236(float value)
	{
		___m_tabSpacing_236 = value;
	}

	inline static int32_t get_offset_of_m_spacing_237() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spacing_237)); }
	inline float get_m_spacing_237() const { return ___m_spacing_237; }
	inline float* get_address_of_m_spacing_237() { return &___m_spacing_237; }
	inline void set_m_spacing_237(float value)
	{
		___m_spacing_237 = value;
	}

	inline static int32_t get_offset_of_m_TextStyleStacks_238() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextStyleStacks_238)); }
	inline TMP_TextProcessingStack_1U5BU5D_tD40BE2C9C48281D1F72B04DDB85CBF15B89FCA29* get_m_TextStyleStacks_238() const { return ___m_TextStyleStacks_238; }
	inline TMP_TextProcessingStack_1U5BU5D_tD40BE2C9C48281D1F72B04DDB85CBF15B89FCA29** get_address_of_m_TextStyleStacks_238() { return &___m_TextStyleStacks_238; }
	inline void set_m_TextStyleStacks_238(TMP_TextProcessingStack_1U5BU5D_tD40BE2C9C48281D1F72B04DDB85CBF15B89FCA29* value)
	{
		___m_TextStyleStacks_238 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyleStacks_238), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleStackDepth_239() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextStyleStackDepth_239)); }
	inline int32_t get_m_TextStyleStackDepth_239() const { return ___m_TextStyleStackDepth_239; }
	inline int32_t* get_address_of_m_TextStyleStackDepth_239() { return &___m_TextStyleStackDepth_239; }
	inline void set_m_TextStyleStackDepth_239(int32_t value)
	{
		___m_TextStyleStackDepth_239 = value;
	}

	inline static int32_t get_offset_of_m_ItalicAngleStack_240() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ItalicAngleStack_240)); }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  get_m_ItalicAngleStack_240() const { return ___m_ItalicAngleStack_240; }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06 * get_address_of_m_ItalicAngleStack_240() { return &___m_ItalicAngleStack_240; }
	inline void set_m_ItalicAngleStack_240(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  value)
	{
		___m_ItalicAngleStack_240 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ItalicAngleStack_240))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_ItalicAngle_241() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ItalicAngle_241)); }
	inline int32_t get_m_ItalicAngle_241() const { return ___m_ItalicAngle_241; }
	inline int32_t* get_address_of_m_ItalicAngle_241() { return &___m_ItalicAngle_241; }
	inline void set_m_ItalicAngle_241(int32_t value)
	{
		___m_ItalicAngle_241 = value;
	}

	inline static int32_t get_offset_of_m_actionStack_242() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_actionStack_242)); }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  get_m_actionStack_242() const { return ___m_actionStack_242; }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06 * get_address_of_m_actionStack_242() { return &___m_actionStack_242; }
	inline void set_m_actionStack_242(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  value)
	{
		___m_actionStack_242 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_actionStack_242))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_padding_243() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_padding_243)); }
	inline float get_m_padding_243() const { return ___m_padding_243; }
	inline float* get_address_of_m_padding_243() { return &___m_padding_243; }
	inline void set_m_padding_243(float value)
	{
		___m_padding_243 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_244() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_baselineOffset_244)); }
	inline float get_m_baselineOffset_244() const { return ___m_baselineOffset_244; }
	inline float* get_address_of_m_baselineOffset_244() { return &___m_baselineOffset_244; }
	inline void set_m_baselineOffset_244(float value)
	{
		___m_baselineOffset_244 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_245() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_baselineOffsetStack_245)); }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  get_m_baselineOffsetStack_245() const { return ___m_baselineOffsetStack_245; }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA * get_address_of_m_baselineOffsetStack_245() { return &___m_baselineOffsetStack_245; }
	inline void set_m_baselineOffsetStack_245(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  value)
	{
		___m_baselineOffsetStack_245 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_baselineOffsetStack_245))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_xAdvance_246() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_xAdvance_246)); }
	inline float get_m_xAdvance_246() const { return ___m_xAdvance_246; }
	inline float* get_address_of_m_xAdvance_246() { return &___m_xAdvance_246; }
	inline void set_m_xAdvance_246(float value)
	{
		___m_xAdvance_246 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_247() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textElementType_247)); }
	inline int32_t get_m_textElementType_247() const { return ___m_textElementType_247; }
	inline int32_t* get_address_of_m_textElementType_247() { return &___m_textElementType_247; }
	inline void set_m_textElementType_247(int32_t value)
	{
		___m_textElementType_247 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_248() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cached_TextElement_248)); }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * get_m_cached_TextElement_248() const { return ___m_cached_TextElement_248; }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 ** get_address_of_m_cached_TextElement_248() { return &___m_cached_TextElement_248; }
	inline void set_m_cached_TextElement_248(TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * value)
	{
		___m_cached_TextElement_248 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_TextElement_248), (void*)value);
	}

	inline static int32_t get_offset_of_m_Ellipsis_249() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_Ellipsis_249)); }
	inline SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  get_m_Ellipsis_249() const { return ___m_Ellipsis_249; }
	inline SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF * get_address_of_m_Ellipsis_249() { return &___m_Ellipsis_249; }
	inline void set_m_Ellipsis_249(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  value)
	{
		___m_Ellipsis_249 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_249))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_249))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_249))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Underline_250() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_Underline_250)); }
	inline SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  get_m_Underline_250() const { return ___m_Underline_250; }
	inline SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF * get_address_of_m_Underline_250() { return &___m_Underline_250; }
	inline void set_m_Underline_250(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  value)
	{
		___m_Underline_250 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_250))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_250))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_250))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_251() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_defaultSpriteAsset_251)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_defaultSpriteAsset_251() const { return ___m_defaultSpriteAsset_251; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_defaultSpriteAsset_251() { return &___m_defaultSpriteAsset_251; }
	inline void set_m_defaultSpriteAsset_251(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_defaultSpriteAsset_251 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSpriteAsset_251), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_252() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentSpriteAsset_252)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_currentSpriteAsset_252() const { return ___m_currentSpriteAsset_252; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_currentSpriteAsset_252() { return &___m_currentSpriteAsset_252; }
	inline void set_m_currentSpriteAsset_252(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_currentSpriteAsset_252 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentSpriteAsset_252), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteCount_253() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteCount_253)); }
	inline int32_t get_m_spriteCount_253() const { return ___m_spriteCount_253; }
	inline int32_t* get_address_of_m_spriteCount_253() { return &___m_spriteCount_253; }
	inline void set_m_spriteCount_253(int32_t value)
	{
		___m_spriteCount_253 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_254() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteIndex_254)); }
	inline int32_t get_m_spriteIndex_254() const { return ___m_spriteIndex_254; }
	inline int32_t* get_address_of_m_spriteIndex_254() { return &___m_spriteIndex_254; }
	inline void set_m_spriteIndex_254(int32_t value)
	{
		___m_spriteIndex_254 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_255() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAnimationID_255)); }
	inline int32_t get_m_spriteAnimationID_255() const { return ___m_spriteAnimationID_255; }
	inline int32_t* get_address_of_m_spriteAnimationID_255() { return &___m_spriteAnimationID_255; }
	inline void set_m_spriteAnimationID_255(int32_t value)
	{
		___m_spriteAnimationID_255 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_256() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreActiveState_256)); }
	inline bool get_m_ignoreActiveState_256() const { return ___m_ignoreActiveState_256; }
	inline bool* get_address_of_m_ignoreActiveState_256() { return &___m_ignoreActiveState_256; }
	inline void set_m_ignoreActiveState_256(bool value)
	{
		___m_ignoreActiveState_256 = value;
	}

	inline static int32_t get_offset_of_k_Power_257() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___k_Power_257)); }
	inline DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* get_k_Power_257() const { return ___k_Power_257; }
	inline DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F** get_address_of_k_Power_257() { return &___k_Power_257; }
	inline void set_k_Power_257(DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* value)
	{
		___k_Power_257 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Power_257), (void*)value);
	}
};

struct TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___s_colorWhite_53;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_t041AB6BBA06AC552F17A2D2F97B1728A58D16029 * ___OnFontAssetRequest_161;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t974D5AB2327337E73FB2126366C9513F1C075512 * ___OnSpriteAssetRequest_162;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_LargePositiveVector2_258;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_LargeNegativeVector2_259;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_260;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_261;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_262;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_263;

public:
	inline static int32_t get_offset_of_s_colorWhite_53() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___s_colorWhite_53)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_s_colorWhite_53() const { return ___s_colorWhite_53; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_s_colorWhite_53() { return &___s_colorWhite_53; }
	inline void set_s_colorWhite_53(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___s_colorWhite_53 = value;
	}

	inline static int32_t get_offset_of_OnFontAssetRequest_161() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___OnFontAssetRequest_161)); }
	inline Func_3_t041AB6BBA06AC552F17A2D2F97B1728A58D16029 * get_OnFontAssetRequest_161() const { return ___OnFontAssetRequest_161; }
	inline Func_3_t041AB6BBA06AC552F17A2D2F97B1728A58D16029 ** get_address_of_OnFontAssetRequest_161() { return &___OnFontAssetRequest_161; }
	inline void set_OnFontAssetRequest_161(Func_3_t041AB6BBA06AC552F17A2D2F97B1728A58D16029 * value)
	{
		___OnFontAssetRequest_161 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFontAssetRequest_161), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpriteAssetRequest_162() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___OnSpriteAssetRequest_162)); }
	inline Func_3_t974D5AB2327337E73FB2126366C9513F1C075512 * get_OnSpriteAssetRequest_162() const { return ___OnSpriteAssetRequest_162; }
	inline Func_3_t974D5AB2327337E73FB2126366C9513F1C075512 ** get_address_of_OnSpriteAssetRequest_162() { return &___OnSpriteAssetRequest_162; }
	inline void set_OnSpriteAssetRequest_162(Func_3_t974D5AB2327337E73FB2126366C9513F1C075512 * value)
	{
		___OnSpriteAssetRequest_162 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpriteAssetRequest_162), (void*)value);
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_258() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveVector2_258)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_LargePositiveVector2_258() const { return ___k_LargePositiveVector2_258; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_LargePositiveVector2_258() { return &___k_LargePositiveVector2_258; }
	inline void set_k_LargePositiveVector2_258(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_LargePositiveVector2_258 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_259() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeVector2_259)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_LargeNegativeVector2_259() const { return ___k_LargeNegativeVector2_259; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_LargeNegativeVector2_259() { return &___k_LargeNegativeVector2_259; }
	inline void set_k_LargeNegativeVector2_259(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_LargeNegativeVector2_259 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_260() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveFloat_260)); }
	inline float get_k_LargePositiveFloat_260() const { return ___k_LargePositiveFloat_260; }
	inline float* get_address_of_k_LargePositiveFloat_260() { return &___k_LargePositiveFloat_260; }
	inline void set_k_LargePositiveFloat_260(float value)
	{
		___k_LargePositiveFloat_260 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_261() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeFloat_261)); }
	inline float get_k_LargeNegativeFloat_261() const { return ___k_LargeNegativeFloat_261; }
	inline float* get_address_of_k_LargeNegativeFloat_261() { return &___k_LargeNegativeFloat_261; }
	inline void set_k_LargeNegativeFloat_261(float value)
	{
		___k_LargeNegativeFloat_261 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_262() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveInt_262)); }
	inline int32_t get_k_LargePositiveInt_262() const { return ___k_LargePositiveInt_262; }
	inline int32_t* get_address_of_k_LargePositiveInt_262() { return &___k_LargePositiveInt_262; }
	inline void set_k_LargePositiveInt_262(int32_t value)
	{
		___k_LargePositiveInt_262 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_263() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeInt_263)); }
	inline int32_t get_k_LargeNegativeInt_263() const { return ___k_LargeNegativeInt_263; }
	inline int32_t* get_address_of_k_LargeNegativeInt_263() { return &___k_LargeNegativeInt_263; }
	inline void set_k_LargeNegativeInt_263(int32_t value)
	{
		___k_LargeNegativeInt_263 = value;
	}
};


// UnityEngine.UI.Image
struct  Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_Sprite_36;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_OverrideSprite_37;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_38;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_39;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_40;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_41;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_42;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_43;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_44;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_45;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_46;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_47;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_48;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_49;

public:
	inline static int32_t get_offset_of_m_Sprite_36() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Sprite_36)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_Sprite_36() const { return ___m_Sprite_36; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_Sprite_36() { return &___m_Sprite_36; }
	inline void set_m_Sprite_36(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_Sprite_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_37() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_OverrideSprite_37)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_OverrideSprite_37() const { return ___m_OverrideSprite_37; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_OverrideSprite_37() { return &___m_OverrideSprite_37; }
	inline void set_m_OverrideSprite_37(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_OverrideSprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_38() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Type_38)); }
	inline int32_t get_m_Type_38() const { return ___m_Type_38; }
	inline int32_t* get_address_of_m_Type_38() { return &___m_Type_38; }
	inline void set_m_Type_38(int32_t value)
	{
		___m_Type_38 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_39() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_PreserveAspect_39)); }
	inline bool get_m_PreserveAspect_39() const { return ___m_PreserveAspect_39; }
	inline bool* get_address_of_m_PreserveAspect_39() { return &___m_PreserveAspect_39; }
	inline void set_m_PreserveAspect_39(bool value)
	{
		___m_PreserveAspect_39 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_40() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillCenter_40)); }
	inline bool get_m_FillCenter_40() const { return ___m_FillCenter_40; }
	inline bool* get_address_of_m_FillCenter_40() { return &___m_FillCenter_40; }
	inline void set_m_FillCenter_40(bool value)
	{
		___m_FillCenter_40 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_41() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillMethod_41)); }
	inline int32_t get_m_FillMethod_41() const { return ___m_FillMethod_41; }
	inline int32_t* get_address_of_m_FillMethod_41() { return &___m_FillMethod_41; }
	inline void set_m_FillMethod_41(int32_t value)
	{
		___m_FillMethod_41 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_42() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillAmount_42)); }
	inline float get_m_FillAmount_42() const { return ___m_FillAmount_42; }
	inline float* get_address_of_m_FillAmount_42() { return &___m_FillAmount_42; }
	inline void set_m_FillAmount_42(float value)
	{
		___m_FillAmount_42 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_43() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillClockwise_43)); }
	inline bool get_m_FillClockwise_43() const { return ___m_FillClockwise_43; }
	inline bool* get_address_of_m_FillClockwise_43() { return &___m_FillClockwise_43; }
	inline void set_m_FillClockwise_43(bool value)
	{
		___m_FillClockwise_43 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_44() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillOrigin_44)); }
	inline int32_t get_m_FillOrigin_44() const { return ___m_FillOrigin_44; }
	inline int32_t* get_address_of_m_FillOrigin_44() { return &___m_FillOrigin_44; }
	inline void set_m_FillOrigin_44(int32_t value)
	{
		___m_FillOrigin_44 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_45() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_AlphaHitTestMinimumThreshold_45)); }
	inline float get_m_AlphaHitTestMinimumThreshold_45() const { return ___m_AlphaHitTestMinimumThreshold_45; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_45() { return &___m_AlphaHitTestMinimumThreshold_45; }
	inline void set_m_AlphaHitTestMinimumThreshold_45(float value)
	{
		___m_AlphaHitTestMinimumThreshold_45 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_46() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Tracked_46)); }
	inline bool get_m_Tracked_46() const { return ___m_Tracked_46; }
	inline bool* get_address_of_m_Tracked_46() { return &___m_Tracked_46; }
	inline void set_m_Tracked_46(bool value)
	{
		___m_Tracked_46 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_47() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_UseSpriteMesh_47)); }
	inline bool get_m_UseSpriteMesh_47() const { return ___m_UseSpriteMesh_47; }
	inline bool* get_address_of_m_UseSpriteMesh_47() { return &___m_UseSpriteMesh_47; }
	inline void set_m_UseSpriteMesh_47(bool value)
	{
		___m_UseSpriteMesh_47 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_48() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_PixelsPerUnitMultiplier_48)); }
	inline float get_m_PixelsPerUnitMultiplier_48() const { return ___m_PixelsPerUnitMultiplier_48; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_48() { return &___m_PixelsPerUnitMultiplier_48; }
	inline void set_m_PixelsPerUnitMultiplier_48(float value)
	{
		___m_PixelsPerUnitMultiplier_48 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_49() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_CachedReferencePixelsPerUnit_49)); }
	inline float get_m_CachedReferencePixelsPerUnit_49() const { return ___m_CachedReferencePixelsPerUnit_49; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_49() { return &___m_CachedReferencePixelsPerUnit_49; }
	inline void set_m_CachedReferencePixelsPerUnit_49(float value)
	{
		___m_CachedReferencePixelsPerUnit_49 = value;
	}
};

struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_ETC1DefaultUI_35;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_VertScratch_50;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_UVScratch_51;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Xy_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Uv_53;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tA9C10612DACE8F188F3B35F6173354C7225A0883 * ___m_TrackedTexturelessImages_54;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_55;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_35() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_ETC1DefaultUI_35)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_ETC1DefaultUI_35() const { return ___s_ETC1DefaultUI_35; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_ETC1DefaultUI_35() { return &___s_ETC1DefaultUI_35; }
	inline void set_s_ETC1DefaultUI_35(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_ETC1DefaultUI_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_50() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_VertScratch_50)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_VertScratch_50() const { return ___s_VertScratch_50; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_VertScratch_50() { return &___s_VertScratch_50; }
	inline void set_s_VertScratch_50(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_VertScratch_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_50), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_51() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_UVScratch_51)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_UVScratch_51() const { return ___s_UVScratch_51; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_UVScratch_51() { return &___s_UVScratch_51; }
	inline void set_s_UVScratch_51(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_UVScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_52() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Xy_52)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Xy_52() const { return ___s_Xy_52; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Xy_52() { return &___s_Xy_52; }
	inline void set_s_Xy_52(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Xy_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_53() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Uv_53)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Uv_53() const { return ___s_Uv_53; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Uv_53() { return &___s_Uv_53; }
	inline void set_s_Uv_53(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Uv_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_53), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_54() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___m_TrackedTexturelessImages_54)); }
	inline List_1_tA9C10612DACE8F188F3B35F6173354C7225A0883 * get_m_TrackedTexturelessImages_54() const { return ___m_TrackedTexturelessImages_54; }
	inline List_1_tA9C10612DACE8F188F3B35F6173354C7225A0883 ** get_address_of_m_TrackedTexturelessImages_54() { return &___m_TrackedTexturelessImages_54; }
	inline void set_m_TrackedTexturelessImages_54(List_1_tA9C10612DACE8F188F3B35F6173354C7225A0883 * value)
	{
		___m_TrackedTexturelessImages_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_54), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_55() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Initialized_55)); }
	inline bool get_s_Initialized_55() const { return ___s_Initialized_55; }
	inline bool* get_address_of_s_Initialized_55() { return &___s_Initialized_55; }
	inline void set_s_Initialized_55(bool value)
	{
		___s_Initialized_55 = value;
	}
};


// SerenityGarden.TurretElectricFence
struct  TurretElectricFence_t8802834981F4B4FBE7E88F186516E8EE690B29BB  : public BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98
{
public:

public:
};


// SerenityGarden.TurretExcavator
struct  TurretExcavator_t001FFF47594E9C24A7F31DD9E9C86C7CA923331D  : public BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98
{
public:
	// SerenityGarden.TurretBuildManager SerenityGarden.TurretExcavator::turretBuildManager
	TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * ___turretBuildManager_39;
	// SerenityGarden.WaveManager SerenityGarden.TurretExcavator::waveManager
	WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * ___waveManager_40;

public:
	inline static int32_t get_offset_of_turretBuildManager_39() { return static_cast<int32_t>(offsetof(TurretExcavator_t001FFF47594E9C24A7F31DD9E9C86C7CA923331D, ___turretBuildManager_39)); }
	inline TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * get_turretBuildManager_39() const { return ___turretBuildManager_39; }
	inline TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 ** get_address_of_turretBuildManager_39() { return &___turretBuildManager_39; }
	inline void set_turretBuildManager_39(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * value)
	{
		___turretBuildManager_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___turretBuildManager_39), (void*)value);
	}

	inline static int32_t get_offset_of_waveManager_40() { return static_cast<int32_t>(offsetof(TurretExcavator_t001FFF47594E9C24A7F31DD9E9C86C7CA923331D, ___waveManager_40)); }
	inline WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * get_waveManager_40() const { return ___waveManager_40; }
	inline WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 ** get_address_of_waveManager_40() { return &___waveManager_40; }
	inline void set_waveManager_40(WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * value)
	{
		___waveManager_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waveManager_40), (void*)value);
	}
};


// SerenityGarden.TurretMachineCannon
struct  TurretMachineCannon_t2C32689BFD88BBFB3381B49C932C9DEA0158259D  : public BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98
{
public:
	// UnityEngine.GameObject SerenityGarden.TurretMachineCannon::bulletPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___bulletPrefab_39;

public:
	inline static int32_t get_offset_of_bulletPrefab_39() { return static_cast<int32_t>(offsetof(TurretMachineCannon_t2C32689BFD88BBFB3381B49C932C9DEA0158259D, ___bulletPrefab_39)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_bulletPrefab_39() const { return ___bulletPrefab_39; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_bulletPrefab_39() { return &___bulletPrefab_39; }
	inline void set_bulletPrefab_39(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___bulletPrefab_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPrefab_39), (void*)value);
	}
};


// SerenityGarden.TurretMachineGun
struct  TurretMachineGun_t8A92F40FBBDC488B54284FFF5FEEC92CEA48818C  : public BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98
{
public:
	// UnityEngine.GameObject SerenityGarden.TurretMachineGun::bulletPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___bulletPrefab_39;

public:
	inline static int32_t get_offset_of_bulletPrefab_39() { return static_cast<int32_t>(offsetof(TurretMachineGun_t8A92F40FBBDC488B54284FFF5FEEC92CEA48818C, ___bulletPrefab_39)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_bulletPrefab_39() const { return ___bulletPrefab_39; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_bulletPrefab_39() { return &___bulletPrefab_39; }
	inline void set_bulletPrefab_39(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___bulletPrefab_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPrefab_39), (void*)value);
	}
};


// SerenityGarden.TurretRailgun
struct  TurretRailgun_t71400EE018F6A7159144942B33599565CE4F05FD  : public BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98
{
public:
	// UnityEngine.GameObject SerenityGarden.TurretRailgun::bulletPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___bulletPrefab_39;

public:
	inline static int32_t get_offset_of_bulletPrefab_39() { return static_cast<int32_t>(offsetof(TurretRailgun_t71400EE018F6A7159144942B33599565CE4F05FD, ___bulletPrefab_39)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_bulletPrefab_39() const { return ___bulletPrefab_39; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_bulletPrefab_39() { return &___bulletPrefab_39; }
	inline void set_bulletPrefab_39(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___bulletPrefab_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPrefab_39), (void*)value);
	}
};


// SerenityGarden.TurretVulkan
struct  TurretVulkan_tE60C25A88F22EA33484804BED57F7ED0B8614665  : public BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98
{
public:
	// UnityEngine.GameObject SerenityGarden.TurretVulkan::bulletPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___bulletPrefab_39;

public:
	inline static int32_t get_offset_of_bulletPrefab_39() { return static_cast<int32_t>(offsetof(TurretVulkan_tE60C25A88F22EA33484804BED57F7ED0B8614665, ___bulletPrefab_39)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_bulletPrefab_39() const { return ___bulletPrefab_39; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_bulletPrefab_39() { return &___bulletPrefab_39; }
	inline void set_bulletPrefab_39(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___bulletPrefab_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPrefab_39), (void*)value);
	}
};


// TMPro.TextMeshProUGUI
struct  TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438  : public TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7
{
public:
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_264;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* ___m_subTextObjects_265;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_266;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_RectTransformCorners_267;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_canvasRenderer_268;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_canvas_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_270;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_271;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_baseMaterial_272;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_273;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_maskOffset_274;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_EnvMapMatrix_275;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_276;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_277;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___m_DelayedGraphicRebuild_278;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___m_DelayedMaterialRebuild_279;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_ClipRect_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_281;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * ___OnPreRenderText_282;

public:
	inline static int32_t get_offset_of_m_hasFontAssetChanged_264() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_hasFontAssetChanged_264)); }
	inline bool get_m_hasFontAssetChanged_264() const { return ___m_hasFontAssetChanged_264; }
	inline bool* get_address_of_m_hasFontAssetChanged_264() { return &___m_hasFontAssetChanged_264; }
	inline void set_m_hasFontAssetChanged_264(bool value)
	{
		___m_hasFontAssetChanged_264 = value;
	}

	inline static int32_t get_offset_of_m_subTextObjects_265() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_subTextObjects_265)); }
	inline TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* get_m_subTextObjects_265() const { return ___m_subTextObjects_265; }
	inline TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E** get_address_of_m_subTextObjects_265() { return &___m_subTextObjects_265; }
	inline void set_m_subTextObjects_265(TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* value)
	{
		___m_subTextObjects_265 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subTextObjects_265), (void*)value);
	}

	inline static int32_t get_offset_of_m_previousLossyScaleY_266() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_previousLossyScaleY_266)); }
	inline float get_m_previousLossyScaleY_266() const { return ___m_previousLossyScaleY_266; }
	inline float* get_address_of_m_previousLossyScaleY_266() { return &___m_previousLossyScaleY_266; }
	inline void set_m_previousLossyScaleY_266(float value)
	{
		___m_previousLossyScaleY_266 = value;
	}

	inline static int32_t get_offset_of_m_RectTransformCorners_267() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_RectTransformCorners_267)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_RectTransformCorners_267() const { return ___m_RectTransformCorners_267; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_RectTransformCorners_267() { return &___m_RectTransformCorners_267; }
	inline void set_m_RectTransformCorners_267(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_RectTransformCorners_267 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransformCorners_267), (void*)value);
	}

	inline static int32_t get_offset_of_m_canvasRenderer_268() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_canvasRenderer_268)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_canvasRenderer_268() const { return ___m_canvasRenderer_268; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_canvasRenderer_268() { return &___m_canvasRenderer_268; }
	inline void set_m_canvasRenderer_268(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_canvasRenderer_268 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_canvasRenderer_268), (void*)value);
	}

	inline static int32_t get_offset_of_m_canvas_269() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_canvas_269)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_canvas_269() const { return ___m_canvas_269; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_canvas_269() { return &___m_canvas_269; }
	inline void set_m_canvas_269(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_canvas_269 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_canvas_269), (void*)value);
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_270() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isFirstAllocation_270)); }
	inline bool get_m_isFirstAllocation_270() const { return ___m_isFirstAllocation_270; }
	inline bool* get_address_of_m_isFirstAllocation_270() { return &___m_isFirstAllocation_270; }
	inline void set_m_isFirstAllocation_270(bool value)
	{
		___m_isFirstAllocation_270 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_271() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_max_characters_271)); }
	inline int32_t get_m_max_characters_271() const { return ___m_max_characters_271; }
	inline int32_t* get_address_of_m_max_characters_271() { return &___m_max_characters_271; }
	inline void set_m_max_characters_271(int32_t value)
	{
		___m_max_characters_271 = value;
	}

	inline static int32_t get_offset_of_m_baseMaterial_272() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_baseMaterial_272)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_baseMaterial_272() const { return ___m_baseMaterial_272; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_baseMaterial_272() { return &___m_baseMaterial_272; }
	inline void set_m_baseMaterial_272(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_baseMaterial_272 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_baseMaterial_272), (void*)value);
	}

	inline static int32_t get_offset_of_m_isScrollRegionSet_273() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isScrollRegionSet_273)); }
	inline bool get_m_isScrollRegionSet_273() const { return ___m_isScrollRegionSet_273; }
	inline bool* get_address_of_m_isScrollRegionSet_273() { return &___m_isScrollRegionSet_273; }
	inline void set_m_isScrollRegionSet_273(bool value)
	{
		___m_isScrollRegionSet_273 = value;
	}

	inline static int32_t get_offset_of_m_maskOffset_274() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_maskOffset_274)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_maskOffset_274() const { return ___m_maskOffset_274; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_maskOffset_274() { return &___m_maskOffset_274; }
	inline void set_m_maskOffset_274(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_maskOffset_274 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_275() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_EnvMapMatrix_275)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_EnvMapMatrix_275() const { return ___m_EnvMapMatrix_275; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_EnvMapMatrix_275() { return &___m_EnvMapMatrix_275; }
	inline void set_m_EnvMapMatrix_275(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_EnvMapMatrix_275 = value;
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_276() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isRegisteredForEvents_276)); }
	inline bool get_m_isRegisteredForEvents_276() const { return ___m_isRegisteredForEvents_276; }
	inline bool* get_address_of_m_isRegisteredForEvents_276() { return &___m_isRegisteredForEvents_276; }
	inline void set_m_isRegisteredForEvents_276(bool value)
	{
		___m_isRegisteredForEvents_276 = value;
	}

	inline static int32_t get_offset_of_m_isRebuildingLayout_277() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isRebuildingLayout_277)); }
	inline bool get_m_isRebuildingLayout_277() const { return ___m_isRebuildingLayout_277; }
	inline bool* get_address_of_m_isRebuildingLayout_277() { return &___m_isRebuildingLayout_277; }
	inline void set_m_isRebuildingLayout_277(bool value)
	{
		___m_isRebuildingLayout_277 = value;
	}

	inline static int32_t get_offset_of_m_DelayedGraphicRebuild_278() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_DelayedGraphicRebuild_278)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_m_DelayedGraphicRebuild_278() const { return ___m_DelayedGraphicRebuild_278; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_m_DelayedGraphicRebuild_278() { return &___m_DelayedGraphicRebuild_278; }
	inline void set_m_DelayedGraphicRebuild_278(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___m_DelayedGraphicRebuild_278 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelayedGraphicRebuild_278), (void*)value);
	}

	inline static int32_t get_offset_of_m_DelayedMaterialRebuild_279() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_DelayedMaterialRebuild_279)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_m_DelayedMaterialRebuild_279() const { return ___m_DelayedMaterialRebuild_279; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_m_DelayedMaterialRebuild_279() { return &___m_DelayedMaterialRebuild_279; }
	inline void set_m_DelayedMaterialRebuild_279(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___m_DelayedMaterialRebuild_279 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelayedMaterialRebuild_279), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClipRect_280() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_ClipRect_280)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_ClipRect_280() const { return ___m_ClipRect_280; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_ClipRect_280() { return &___m_ClipRect_280; }
	inline void set_m_ClipRect_280(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_ClipRect_280 = value;
	}

	inline static int32_t get_offset_of_m_ValidRect_281() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_ValidRect_281)); }
	inline bool get_m_ValidRect_281() const { return ___m_ValidRect_281; }
	inline bool* get_address_of_m_ValidRect_281() { return &___m_ValidRect_281; }
	inline void set_m_ValidRect_281(bool value)
	{
		___m_ValidRect_281 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_282() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___OnPreRenderText_282)); }
	inline Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * get_OnPreRenderText_282() const { return ___OnPreRenderText_282; }
	inline Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD ** get_address_of_OnPreRenderText_282() { return &___OnPreRenderText_282; }
	inline void set_OnPreRenderText_282(Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * value)
	{
		___OnPreRenderText_282 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_282), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// TMPro.TextMeshProUGUI[]
struct TextMeshProUGUIU5BU5D_t630DB598E90AE8903F6A17F1C02F182796A49130  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * m_Items[1];

public:
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * m_Items[1];

public:
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * m_Items[1];

public:
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// SerenityGarden.PermanentUpgrade[]
struct PermanentUpgradeU5BU5D_t6C13DE4C6C8D4B652FA96134A7A9BF4D3E48F6DC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * m_Items[1];

public:
	inline PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * m_Items[1];

public:
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// SerenityGarden.WaveScriptable[]
struct WaveScriptableU5BU5D_t6A3A20CA18EE7F4286348D3DEF3FBC3358EE3D83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC * m_Items[1];

public:
	inline WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// SerenityGarden.EnemySpawn[]
struct EnemySpawnU5BU5D_t8B90BAE714E41597260C23FFE5A27D99876D982E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) EnemySpawn_tAD5AE60DDE30CB98B3287B4BA0AAA09873B53251 * m_Items[1];

public:
	inline EnemySpawn_tAD5AE60DDE30CB98B3287B4BA0AAA09873B53251 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EnemySpawn_tAD5AE60DDE30CB98B3287B4BA0AAA09873B53251 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EnemySpawn_tAD5AE60DDE30CB98B3287B4BA0AAA09873B53251 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EnemySpawn_tAD5AE60DDE30CB98B3287B4BA0AAA09873B53251 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EnemySpawn_tAD5AE60DDE30CB98B3287B4BA0AAA09873B53251 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EnemySpawn_tAD5AE60DDE30CB98B3287B4BA0AAA09873B53251 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m251F203B12669585A5E663F529F6DF09F931B5DA_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_m29A18F5AEC1DD0A23BB53D51D813EA0ACE9AE27C_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void SerenityGarden.HelperMethods::Shuffle<System.Object>(System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelperMethods_Shuffle_TisRuntimeObject_mFC6B9ED8B1569DC26E668A457243257DE86021FF_gshared (RuntimeObject* ___list0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m1EC5117AD814B97460F8F95D49A428032FE37CBF_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);

// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<SerenityGarden.SceneClickManager>()
inline SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * Object_FindObjectOfType_TisSceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F_mF24DC407E9881D70916EE28BC837E8208A1BE707 (const RuntimeMethod* method)
{
	return ((  SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m251F203B12669585A5E663F529F6DF09F931B5DA_gshared)(method);
}
// !!0 UnityEngine.Object::FindObjectOfType<SerenityGarden.CommanderUI>()
inline CommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706 * Object_FindObjectOfType_TisCommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706_m774E098A79CDABD816AC5917A7DC1217E142B8A6 (const RuntimeMethod* method)
{
	return ((  CommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m251F203B12669585A5E663F529F6DF09F931B5DA_gshared)(method);
}
// !!0 UnityEngine.GameObject::GetComponent<SerenityGarden.BuildableTurret>()
inline BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * GameObject_GetComponent_TisBuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98_mEBF0A5AB64E72A07FCC9DE2051D8085AA34F39D4 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Int32 SerenityGarden.BuildableTurret::GetBuildCost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BuildableTurret_GetBuildCost_mDB394650B184F6EEFFD6C60E54124C3113858C80 (BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * __this, const RuntimeMethod* method);
// System.Void SerenityGarden.TurretBuildManager::set_Money(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretBuildManager_set_Money_mCE514B684D28E883848FA914C34F2501AEC5FAEA (TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean SerenityGarden.GamePauseManager::get_GamePaused()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool GamePauseManager_get_GamePaused_m7B1A9569EA4C87E4B9762AE427894DD8C58C9372_inline (GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Int32 SerenityGarden.BuildableTurret::GetRecoveryCost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BuildableTurret_GetRecoveryCost_m4D163BB8818670F8C692F87284B5A59AE4667401 (BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void SerenityGarden.TurretBase::DrawRange(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretBase_DrawRange_m29835CFDDA78F6AF9008AA3A35CE388F0FA83D38 (TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * __this, bool ___draw0, const RuntimeMethod* method);
// System.Int32 SerenityGarden.BuildableTurret::GetUpgradeCost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BuildableTurret_GetUpgradeCost_mD826D4C4EA8A76E4B22A9D679D892939B534FE23 (BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * __this, const RuntimeMethod* method);
// System.Int32 SerenityGarden.TurretBase::get_DestroyReward()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TurretBase_get_DestroyReward_mD4E91EE5E147BF7A39CB6369682A671444101E30_inline (TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * __this, const RuntimeMethod* method);
// System.Boolean SerenityGarden.BuildableTurret::get_HasCommander()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BuildableTurret_get_HasCommander_m5E2ED31DB76EE61A58CEA5A660DD6A9F9686938E_inline (BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * __this, const RuntimeMethod* method);
// SerenityGarden.HexagonType SerenityGarden.HexagonalBlock::get_Type()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t HexagonalBlock_get_Type_m713A78597C82D3CDD1087965AAADD7310AB17B17_inline (HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * __this, const RuntimeMethod* method);
// System.Int32 SerenityGarden.TurretBuildManager::get_Money()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TurretBuildManager_get_Money_mBA08EAACDFA345614CACDE3CC8B1EFEA02BE2EA9_inline (TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * __this, const RuntimeMethod* method);
// System.Void SerenityGarden.HexagonalBlock::set_Type(SerenityGarden.HexagonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexagonalBlock_set_Type_m37518F08C900C4CD999C64E8D403B4DA003AFF6E (HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<SerenityGarden.PlayerBase>()
inline PlayerBase_t78C7F5333ACAFFE352C61B60F683F32363A70B4E * GameObject_GetComponent_TisPlayerBase_t78C7F5333ACAFFE352C61B60F683F32363A70B4E_m989D72DB73AC781B8F6BC2C5A15743974886F7D2 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  PlayerBase_t78C7F5333ACAFFE352C61B60F683F32363A70B4E * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<SerenityGarden.TurretMachineGun>()
inline TurretMachineGun_t8A92F40FBBDC488B54284FFF5FEEC92CEA48818C * GameObject_GetComponent_TisTurretMachineGun_t8A92F40FBBDC488B54284FFF5FEEC92CEA48818C_mE1C0FA8FC105E13B8A4CB02144494633C4FB77FC (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  TurretMachineGun_t8A92F40FBBDC488B54284FFF5FEEC92CEA48818C * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<SerenityGarden.TurretElectricFence>()
inline TurretElectricFence_t8802834981F4B4FBE7E88F186516E8EE690B29BB * GameObject_GetComponent_TisTurretElectricFence_t8802834981F4B4FBE7E88F186516E8EE690B29BB_mF5A9A54FB25C91FFA035C2D95103AE58A8616D39 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  TurretElectricFence_t8802834981F4B4FBE7E88F186516E8EE690B29BB * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<SerenityGarden.TurretVulkan>()
inline TurretVulkan_tE60C25A88F22EA33484804BED57F7ED0B8614665 * GameObject_GetComponent_TisTurretVulkan_tE60C25A88F22EA33484804BED57F7ED0B8614665_m56A577C4DFB52CF96A1CAF5623E0205336538075 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  TurretVulkan_tE60C25A88F22EA33484804BED57F7ED0B8614665 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<SerenityGarden.TurretMachineCannon>()
inline TurretMachineCannon_t2C32689BFD88BBFB3381B49C932C9DEA0158259D * GameObject_GetComponent_TisTurretMachineCannon_t2C32689BFD88BBFB3381B49C932C9DEA0158259D_mA337480AEABB367DDE874085414037F618C330B9 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  TurretMachineCannon_t2C32689BFD88BBFB3381B49C932C9DEA0158259D * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<SerenityGarden.TurretRailgun>()
inline TurretRailgun_t71400EE018F6A7159144942B33599565CE4F05FD * GameObject_GetComponent_TisTurretRailgun_t71400EE018F6A7159144942B33599565CE4F05FD_mABF3104A822CBA2B6890F2FD0215DEFDC481753A (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  TurretRailgun_t71400EE018F6A7159144942B33599565CE4F05FD * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<SerenityGarden.TurretExcavator>()
inline TurretExcavator_t001FFF47594E9C24A7F31DD9E9C86C7CA923331D * GameObject_GetComponent_TisTurretExcavator_t001FFF47594E9C24A7F31DD9E9C86C7CA923331D_mEA084C222DE53EAB428B995C0ED5E4634BA1CA63 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  TurretExcavator_t001FFF47594E9C24A7F31DD9E9C86C7CA923331D * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// UnityEngine.GameObject SerenityGarden.InstantiationManager::InstantiateWithCheck(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion,SerenityGarden.PhotonObj,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * InstantiationManager_InstantiateWithCheck_mDE2A12B9A41A47A3EFD58C01BE8477F4E7AFC426 (InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___obj0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rot2, int32_t ___objType3, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___initData4, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<SerenityGarden.BuildableTurret>()
inline BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * Component_GetComponent_TisBuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98_mDDED64410FBCD4345197F977C4C636ED8D9E1862 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// System.Void SerenityGarden.CommanderUI::_UnpowerupTurret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommanderUI__UnpowerupTurret_m0A4CC1ACA80EF0CF0B1996A2E7CFD6DEB6607D53 (CommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706 * __this, const RuntimeMethod* method);
// System.Void SerenityGarden.BuildableTurret::SellTurret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildableTurret_SellTurret_mEEF06127255A910571100AC02C821314B4C81049 (BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * __this, const RuntimeMethod* method);
// System.Boolean SerenityGarden.BuildableTurret::StartRecovery(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuildableTurret_StartRecovery_m2D71F964493425169ED660CBF3DCFB3F09598F9F (BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___recoveryMaterial0, const RuntimeMethod* method);
// System.Boolean SerenityGarden.BuildableTurret::Upgrade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuildableTurret_Upgrade_mDDFB2E66B066FB3191C46F21B3BDE9C882CC0182 (BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// SerenityGarden.EnemyBase SerenityGarden.TurretBase::get_Target()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * TurretBase_get_Target_m79F6FB8FB7A4BC5386110C436A950317E0C466D3_inline (TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * __this, const RuntimeMethod* method);
// System.Void SerenityGarden.HelperMethods::RotateObjTowardsTarget(UnityEngine.Transform,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelperMethods_RotateObjTowardsTarget_mB278065F49C57CC536D0B89E2B4846D1C788863A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transfToRotate0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___targetPos1, bool ___yAxisLock2, const RuntimeMethod* method);
// System.Single SerenityGarden.EnemyBase::get_Health()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float EnemyBase_get_Health_m8CF1A98319D063DB68265C7D717501430F53C219_inline (EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * __this, const RuntimeMethod* method);
// System.Single SerenityGarden.TurretBase::get_Damage()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TurretBase_get_Damage_mEE7B3381C758C77C36D007C86AE25B75F761BAAF_inline (TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * __this, const RuntimeMethod* method);
// System.Void SerenityGarden.EnemyBase::set_Health(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBase_set_Health_mA9E74FBF81811206AA3798846E01C2F099D5BAC1 (EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// System.Void SerenityGarden.TurretBase::set_LastAttackTime(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TurretBase_set_LastAttackTime_m77B277C99B3D6B4986C14A903E27A9AC245DDFF3_inline (TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * __this, float ___value0, const RuntimeMethod* method);
// System.Single SerenityGarden.TurretBase::get_Range()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TurretBase_get_Range_m04A266B69890546C41E5AE5BCDEB761CA7CA93E4_inline (TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * __this, const RuntimeMethod* method);
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* Physics_OverlapSphere_m354A92672F7A6DE59EF1285D02D62247F46A5D84 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, float ___radius1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_root_m101A8B5C2CC6D868B6B66EEDBD5336FC1EB5DDD6 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<SerenityGarden.EnemyBase>()
inline EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * GameObject_GetComponent_TisEnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F_m185C70C01C6A98844C6DA396B9FF9205EC35C205 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Single SerenityGarden.HelperMethods::SquaredDistance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HelperMethods_SquaredDistance_m8FF4B6506494CB66B13643F6A4CE4BDC6433CCC6 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// SerenityGarden.EnemyType SerenityGarden.EnemyBase::get_EnemyType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t EnemyBase_get_EnemyType_m9E6660DF9416C496D4EFE0AB71423B617EE33062_inline (EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * __this, const RuntimeMethod* method);
// SerenityGarden.EnemyBase SerenityGarden.LockOnManager::get_SelectedEnemy()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * LockOnManager_get_SelectedEnemy_m7369E961F04C315C52362153FE0651F323BA2E0B_inline (const RuntimeMethod* method);
// System.Void SerenityGarden.BuildableTurret::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildableTurret__ctor_mBE86258842D47DE706BD2140C6E613C46865E833 (BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<SerenityGarden.BulletMovement>()
inline BulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5 * GameObject_GetComponent_TisBulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5_mD121EF1455C0C0F9868B4E75912627E0D6582ACB (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  BulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void SerenityGarden.BulletMovement::SetTarget(UnityEngine.GameObject)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BulletMovement_SetTarget_mAFC14CB0B4BC5B7AB2B25207E78FF3FA71E9C0E1_inline (BulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ____target0, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B (ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * __this, const RuntimeMethod* method);
// System.Void SerenityGarden.UIUpgradeRow::UpdateUIImages(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIUpgradeRow_UpdateUIImages_mF81519094C8D4E8ADA2B48FADBBE0190630C64A7 (UIUpgradeRow_t0D7CA0173330442E3CA78B85BFD5AF948D0CF79B * __this, bool ___deactivateAll0, const RuntimeMethod* method);
// System.Void SerenityGarden.UIUpgradeRow::CalculateCost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIUpgradeRow_CalculateCost_m1127E6158750E1C92DC5C3316B2389A686B22572 (UIUpgradeRow_t0D7CA0173330442E3CA78B85BFD5AF948D0CF79B * __this, const RuntimeMethod* method);
// System.Void SerenityGarden.UIUpgradeRow::ColorCostText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIUpgradeRow_ColorCostText_mFFFE64CEDDB962FE4FC0F680EE4F6B51E2566296 (UIUpgradeRow_t0D7CA0173330442E3CA78B85BFD5AF948D0CF79B * __this, const RuntimeMethod* method);
// System.Boolean SerenityGarden.ShopManager::CheckUpgradeCost(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShopManager_CheckUpgradeCost_m452E0E0ADD9D323FCAD6C21A9F3DDFC883F0622E (ShopManager_t3BC41D78DB91E598887143A4DCF889A63D9D9D86 * __this, int32_t ___upgradeCost0, const RuntimeMethod* method);
// System.Void SerenityGarden.ShopManager::UpgradeProperty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopManager_UpgradeProperty_m464C07C8B74D5CC6710BEED8114091597E62D36A (ShopManager_t3BC41D78DB91E598887143A4DCF889A63D9D9D86 * __this, int32_t ___upgradeCost0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<SerenityGarden.HexagonalGrid>()
inline HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF * Object_FindObjectOfType_TisHexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF_m1C3ABA20749165939594D5BF593EBD4679D577AC (const RuntimeMethod* method)
{
	return ((  HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m251F203B12669585A5E663F529F6DF09F931B5DA_gshared)(method);
}
// System.Void SerenityGarden.LogicProcessBase::BaseAwakeCalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogicProcessBase_BaseAwakeCalls_mA6B4B0CD8388DD77AB655D774D81359AFFBE30B1 (LogicProcessBase_t0BA44484532560F6B824BAA719C44898468A1540 * __this, const RuntimeMethod* method);
// System.Void SerenityGarden.LogicProcessBase::BaseStartCalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogicProcessBase_BaseStartCalls_m59E8A35B3AD451CD80D0BEBF96051A8FD010D266 (LogicProcessBase_t0BA44484532560F6B824BAA719C44898468A1540 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * GameObject_GetComponentInChildren_TisTextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_m4CE477F96983D518A70384D2D73CA1540C4CDE62 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_m29A18F5AEC1DD0A23BB53D51D813EA0ACE9AE27C_gshared)(__this, method);
}
// System.Boolean Photon.Pun.PhotonNetwork::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_get_IsConnected_m7F52EFE2E055CF8CA5A2CA8E62BA62E0D8760B7D (const RuntimeMethod* method);
// System.Boolean Photon.Pun.PhotonNetwork::get_IsMasterClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_get_IsMasterClient_m73F928D3329A213C33AEF0ABC56D1940024363C6 (const RuntimeMethod* method);
// System.Void SerenityGarden.GamePauseManager/UnpauseGameEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnpauseGameEvent__ctor_m87A66FA7E32793777798F25B20F1F6E32166CA1E (UnpauseGameEvent_tF8B3717899C31909A04021E3B7B30BC2CD7C1406 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void SerenityGarden.GamePauseManager::AddUnpauseEvent(SerenityGarden.GamePauseManager/UnpauseGameEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePauseManager_AddUnpauseEvent_m6790ECE7C7D62681D378B783F8909C81162F183D (GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284 * __this, UnpauseGameEvent_tF8B3717899C31909A04021E3B7B30BC2CD7C1406 * ___subscriber0, const RuntimeMethod* method);
// SerenityGarden.StageScriptable SerenityGarden.SceneDataRetainer::GetStage()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 * SceneDataRetainer_GetStage_mCAF4598A6F617211C5C2A798C8BCFD48605C6FDA_inline (SceneDataRetainer_tDC5BF2B9D42AA0F469B4B9312A2CEA24F1F4A8C2 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator SerenityGarden.WaveManager::WaveSpawner(SerenityGarden.WaveScriptable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaveManager_WaveSpawner_m555E275C062BA1B5C2835386259EDBD316E105B5 (WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * __this, WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC * ___wave0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Single SerenityGarden.GamePauseManager::get_PausedTime()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float GamePauseManager_get_PausedTime_mA7FCB365F4BC7E23C3A8D72CB862647B33E5BB97_inline (GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284 * __this, const RuntimeMethod* method);
// System.Void SerenityGarden.WaveManager/<WaveSpawner>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaveSpawnerU3Ed__21__ctor_mB0737FC49189F9C6B569A4927C114038AE1D5542 (U3CWaveSpawnerU3Ed__21_t2CE338B394097B889D892CB0C000CC35E9AB5A25 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<SerenityGarden.HexagonalBlock>::.ctor()
inline void List_1__ctor_m26EC8457AE25886A5FBF1408B6BD0125004330F5 (List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void SerenityGarden.WaveManager::FindSpawnPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveManager_FindSpawnPoints_mFC3B3E57F871A7706C3ECCF775BDA036D5ADF0F6 (WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<SerenityGarden.HexagonalBlock>::GetEnumerator()
inline Enumerator_t46B753E212405AEC64A15AC021C802D63445A3BB  List_1_GetEnumerator_m6A7E6B48CFEF309A2F13AC78FFEA7EEE92908FEA (List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t46B753E212405AEC64A15AC021C802D63445A3BB  (*) (List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<SerenityGarden.HexagonalBlock>::get_Current()
inline HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * Enumerator_get_Current_mB2BD36D116535B3FD78BD644C1A9D64B77D78908_inline (Enumerator_t46B753E212405AEC64A15AC021C802D63445A3BB * __this, const RuntimeMethod* method)
{
	return ((  HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * (*) (Enumerator_t46B753E212405AEC64A15AC021C802D63445A3BB *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<SerenityGarden.HexagonalBlock>::Add(!0)
inline void List_1_Add_mEF74AAEA759F8E3425CF1B087CC096D016CC2C10 (List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * __this, HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 *, HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<SerenityGarden.HexagonalBlock>::MoveNext()
inline bool Enumerator_MoveNext_m2F098739DB5189DB8882D85812DDC945FDC4381E (Enumerator_t46B753E212405AEC64A15AC021C802D63445A3BB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t46B753E212405AEC64A15AC021C802D63445A3BB *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<SerenityGarden.HexagonalBlock>::Dispose()
inline void Enumerator_Dispose_m2813644ACEECB35DAC617DA72E03AA151ADEBC1C (Enumerator_t46B753E212405AEC64A15AC021C802D63445A3BB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t46B753E212405AEC64A15AC021C802D63445A3BB *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<SerenityGarden.EnemyMelee>()
inline EnemyMelee_t2481A9E094840C4F79E9A7FD0F7FCD493A2DA012 * GameObject_GetComponent_TisEnemyMelee_t2481A9E094840C4F79E9A7FD0F7FCD493A2DA012_m8B35CC903DDC9BF51F9B736FAB552D3AFA6F1AFB (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  EnemyMelee_t2481A9E094840C4F79E9A7FD0F7FCD493A2DA012 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<SerenityGarden.EnemyRanged>()
inline EnemyRanged_t55401E0A01EBBDF001EFAC55C30255FD83E810ED * GameObject_GetComponent_TisEnemyRanged_t55401E0A01EBBDF001EFAC55C30255FD83E810ED_m5DDC5082CBBB1C8B001FCBF65C21F5361E93A63C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  EnemyRanged_t55401E0A01EBBDF001EFAC55C30255FD83E810ED * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<SerenityGarden.EnemyAmbusher>()
inline EnemyAmbusher_t9182D45D5CED1FC31D7BE1FDC49E6A42D37E9567 * GameObject_GetComponent_TisEnemyAmbusher_t9182D45D5CED1FC31D7BE1FDC49E6A42D37E9567_mADE479D57DB58A56D036850B5BDCBFDD85F28D1C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  EnemyAmbusher_t9182D45D5CED1FC31D7BE1FDC49E6A42D37E9567 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<SerenityGarden.EnemyFlying>()
inline EnemyFlying_tAA8D6943B40B4DDD10EDE48626EAC94BF965463C * GameObject_GetComponent_TisEnemyFlying_tAA8D6943B40B4DDD10EDE48626EAC94BF965463C_mA8E7F91CD72C927CC9429CDD5B00B67E584E12BE (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  EnemyFlying_tAA8D6943B40B4DDD10EDE48626EAC94BF965463C * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void SerenityGarden.EnemyBase::SetStartBlock(SerenityGarden.HexagonalBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBase_SetStartBlock_m8BDC709B6BA370077FF945E79072868A7C96F8E2 (EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * __this, HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * ___startBlock0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void SerenityGarden.LogicProcessBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogicProcessBase__ctor_m2942607900A82E69BB4B689A7C1480A4800BE8B1 (LogicProcessBase_t0BA44484532560F6B824BAA719C44898468A1540 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<SerenityGarden.HexagonalBlock>::get_Item(System.Int32)
inline HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * List_1_get_Item_m6F172C4530A046588461DFCDEC1BF0BBD463F5C1_inline (List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * (*) (List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<SerenityGarden.HexagonalBlock>::get_Count()
inline int32_t List_1_get_Count_m7145EDAA2AF16164459A6546A42805AD13260A9F_inline (List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void SerenityGarden.HelperMethods::Shuffle<SerenityGarden.HexagonalBlock>(System.Collections.Generic.IList`1<T>)
inline void HelperMethods_Shuffle_TisHexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580_m181E9906675504BC65C9D2A8E0B671EADD01B66C (RuntimeObject* ___list0, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))HelperMethods_Shuffle_TisRuntimeObject_mFC6B9ED8B1569DC26E668A457243257DE86021FF_gshared)(___list0, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780 (int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// System.Void SerenityGarden.WaveManager::SpawnEnemy(UnityEngine.GameObject,SerenityGarden.HexagonalBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveManager_SpawnEnemy_mDF86640AA87C3672926F0A8975D08F5A70F36706 (WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___enemyPrefab0, HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * ___spawnBlock1, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m23BDA1112566B2E9149D885E4061EA3063EEDA60 (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687 (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void SerenityGarden.HelperMethods::Shuffle<UnityEngine.GameObject>(System.Collections.Generic.IList`1<T>)
inline void HelperMethods_Shuffle_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mAD11E41C30D5AED71DF7F7BB7340CC7C163EB01F (RuntimeObject* ___list0, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))HelperMethods_Shuffle_TisRuntimeObject_mFC6B9ED8B1569DC26E668A457243257DE86021FF_gshared)(___list0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * List_1_get_Item_mB59D528B0017953D5CB28B8B9BE96CD8EB324FB7_inline (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m5CC4AD52FC4DFB350A9097AAF59BDE15076E035D (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m1EC5117AD814B97460F8F95D49A428032FE37CBF_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m9C1B1A3A565196DE22D197A9BC1F33552B7348EE_inline (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m91B2707F7B4F46F851C3100A65BEFAA557DCDFDE (Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void SerenityGarden.BattleStageStateManager::SpawnedAllEnemies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleStageStateManager_SpawnedAllEnemies_mFB8CDCBDB00143C55848C0FAEE3C93C1C5379535 (BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SerenityGarden.TurretBuildManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretBuildManager_Awake_m579C5678976EB15D56AC529B5C9B6C21BFC83A5C (TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretBuildManager_Awake_m579C5678976EB15D56AC529B5C9B6C21BFC83A5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * L_0 = ((TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7_StaticFields*)il2cpp_codegen_static_fields_for(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		// Debug.LogWarning("Warning! There are multiple instances of TurretBuildManager in the scene. Deleting from: " + gameObject.name);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_2, /*hidden argument*/NULL);
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralBED51C02D4697D4220C3FE6C1492ADC79364BBF8, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_4, /*hidden argument*/NULL);
		// Destroy(this.gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0033:
	{
		// instance = this;
		((TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7_StaticFields*)il2cpp_codegen_static_fields_for(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// }
		return;
	}
}
// System.Int32 SerenityGarden.TurretBuildManager::get_Money()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TurretBuildManager_get_Money_mBA08EAACDFA345614CACDE3CC8B1EFEA02BE2EA9 (TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * __this, const RuntimeMethod* method)
{
	{
		// get { return money; }
		int32_t L_0 = __this->get_money_6();
		return L_0;
	}
}
// System.Void SerenityGarden.TurretBuildManager::set_Money(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretBuildManager_set_Money_mCE514B684D28E883848FA914C34F2501AEC5FAEA (TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretBuildManager_set_Money_mCE514B684D28E883848FA914C34F2501AEC5FAEA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// money = value;
		int32_t L_0 = ___value0;
		__this->set_money_6(L_0);
		// moneyText.text = "$" + money;
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_1 = __this->get_moneyText_13();
		int32_t L_2 = __this->get_money_6();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral3CDF2936DA2FC556BFA533AB1EB59CE710AC80E5, L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_5);
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretBuildManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretBuildManager_Start_m1A77D99F2EB495DE9AF3E62A92ECCA1EB26610E0 (TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretBuildManager_Start_m1A77D99F2EB495DE9AF3E62A92ECCA1EB26610E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// sceneClickManager = FindObjectOfType<SceneClickManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * L_0 = Object_FindObjectOfType_TisSceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F_mF24DC407E9881D70916EE28BC837E8208A1BE707(/*hidden argument*/Object_FindObjectOfType_TisSceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F_mF24DC407E9881D70916EE28BC837E8208A1BE707_RuntimeMethod_var);
		__this->set_sceneClickManager_20(L_0);
		// commanderUI = FindObjectOfType<CommanderUI>();
		CommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706 * L_1 = Object_FindObjectOfType_TisCommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706_m774E098A79CDABD816AC5917A7DC1217E142B8A6(/*hidden argument*/Object_FindObjectOfType_TisCommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706_m774E098A79CDABD816AC5917A7DC1217E142B8A6_RuntimeMethod_var);
		__this->set_commanderUI_21(L_1);
		// for (int index = 0; index < turretPrefabs.Length; index++)
		V_0 = 0;
		goto IL_004c;
	}

IL_001a:
	{
		// turretBuildCostText[index].text = "$" + turretPrefabs[index].GetComponent<BuildableTurret>().GetBuildCost();
		TextMeshProUGUIU5BU5D_t630DB598E90AE8903F6A17F1C02F182796A49130* L_2 = __this->get_turretBuildCostText_18();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_6 = __this->get_turretPrefabs_19();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_10 = GameObject_GetComponent_TisBuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98_mEBF0A5AB64E72A07FCC9DE2051D8085AA34F39D4(L_9, /*hidden argument*/GameObject_GetComponent_TisBuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98_mEBF0A5AB64E72A07FCC9DE2051D8085AA34F39D4_RuntimeMethod_var);
		NullCheck(L_10);
		int32_t L_11 = BuildableTurret_GetBuildCost_mDB394650B184F6EEFFD6C60E54124C3113858C80(L_10, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral3CDF2936DA2FC556BFA533AB1EB59CE710AC80E5, L_13, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_14);
		// for (int index = 0; index < turretPrefabs.Length; index++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_004c:
	{
		// for (int index = 0; index < turretPrefabs.Length; index++)
		int32_t L_16 = V_0;
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_17 = __this->get_turretPrefabs_19();
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		// Money = startMoney;
		int32_t L_18 = __this->get_startMoney_5();
		TurretBuildManager_set_Money_mCE514B684D28E883848FA914C34F2501AEC5FAEA(__this, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretBuildManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretBuildManager_Update_m7A2CC0F35A87C00513790061CE7A01BDB2D3790D (TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretBuildManager_Update_m7A2CC0F35A87C00513790061CE7A01BDB2D3790D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * V_0 = NULL;
	{
		// if (!GamePauseManager.instance.GamePaused)
		GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284 * L_0 = ((GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_StaticFields*)il2cpp_codegen_static_fields_for(GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_il2cpp_TypeInfo_var))->get_instance_5();
		NullCheck(L_0);
		bool L_1 = GamePauseManager_get_GamePaused_m7B1A9569EA4C87E4B9762AE427894DD8C58C9372_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_006b;
		}
	}
	{
		// if (inspectTurretUI.activeInHierarchy && sceneClickManager.selectedTurret != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_inspectTurretUI_9();
		NullCheck(L_2);
		bool L_3 = GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_006b;
		}
	}
	{
		SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * L_4 = __this->get_sceneClickManager_20();
		NullCheck(L_4);
		TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * L_5 = L_4->get_selectedTurret_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		// BuildableTurret buildable = sceneClickManager.selectedTurret.gameObject.GetComponent<BuildableTurret>();
		SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * L_7 = __this->get_sceneClickManager_20();
		NullCheck(L_7);
		TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * L_8 = L_7->get_selectedTurret_5();
		NullCheck(L_8);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_10 = GameObject_GetComponent_TisBuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98_mEBF0A5AB64E72A07FCC9DE2051D8085AA34F39D4(L_9, /*hidden argument*/GameObject_GetComponent_TisBuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98_mEBF0A5AB64E72A07FCC9DE2051D8085AA34F39D4_RuntimeMethod_var);
		V_0 = L_10;
		// if (buildable != null)
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		// repairText.text = "$" + buildable.GetRecoveryCost();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_13 = __this->get_repairText_15();
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = BuildableTurret_GetRecoveryCost_m4D163BB8818670F8C692F87284B5A59AE4667401(L_14, /*hidden argument*/NULL);
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral3CDF2936DA2FC556BFA533AB1EB59CE710AC80E5, L_17, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_13, L_18);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretBuildManager::SelectTurret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretBuildManager_SelectTurret_mE54124F5BFCCF68138E00FFA960033B9E83DDE8E (TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretBuildManager_SelectTurret_mE54124F5BFCCF68138E00FFA960033B9E83DDE8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * V_0 = NULL;
	{
		// if (sceneClickManager.selectedTurret == null)
		SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * L_0 = __this->get_sceneClickManager_20();
		NullCheck(L_0);
		TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * L_1 = L_0->get_selectedTurret_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// inspectTurretUI.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_inspectTurretUI_9();
		NullCheck(L_3);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_3, (bool)0, /*hidden argument*/NULL);
		return;
	}

IL_0020:
	{
		// inspectTurretUI.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_inspectTurretUI_9();
		NullCheck(L_4);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_4, (bool)1, /*hidden argument*/NULL);
		// sceneClickManager.selectedTurret.DrawRange(true);
		SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * L_5 = __this->get_sceneClickManager_20();
		NullCheck(L_5);
		TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * L_6 = L_5->get_selectedTurret_5();
		NullCheck(L_6);
		TurretBase_DrawRange_m29835CFDDA78F6AF9008AA3A35CE388F0FA83D38(L_6, (bool)1, /*hidden argument*/NULL);
		// BuildableTurret buildable = sceneClickManager.selectedTurret.gameObject.GetComponent<BuildableTurret>();
		SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * L_7 = __this->get_sceneClickManager_20();
		NullCheck(L_7);
		TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * L_8 = L_7->get_selectedTurret_5();
		NullCheck(L_8);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_10 = GameObject_GetComponent_TisBuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98_mEBF0A5AB64E72A07FCC9DE2051D8085AA34F39D4(L_9, /*hidden argument*/GameObject_GetComponent_TisBuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98_mEBF0A5AB64E72A07FCC9DE2051D8085AA34F39D4_RuntimeMethod_var);
		V_0 = L_10;
		// if (buildable != null)
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00d8;
		}
	}
	{
		// if (buildable.GetUpgradeCost() == 0)
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = BuildableTurret_GetUpgradeCost_mD826D4C4EA8A76E4B22A9D679D892939B534FE23(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0076;
		}
	}
	{
		// upgradeText.text = "MAX";
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_15 = __this->get_upgradeText_16();
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_15, _stringLiteral7B186E235F284107DF6B4DBE6060D2B6A5D9F1E5);
		goto IL_0096;
	}

IL_0076:
	{
		// upgradeText.text = "$" + buildable.GetUpgradeCost();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_16 = __this->get_upgradeText_16();
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = BuildableTurret_GetUpgradeCost_mD826D4C4EA8A76E4B22A9D679D892939B534FE23(L_17, /*hidden argument*/NULL);
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral3CDF2936DA2FC556BFA533AB1EB59CE710AC80E5, L_20, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_16, L_21);
	}

IL_0096:
	{
		// sellText.text = "$" + buildable.DestroyReward;
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_22 = __this->get_sellText_14();
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_23 = V_0;
		NullCheck(L_23);
		int32_t L_24 = TurretBase_get_DestroyReward_mD4E91EE5E147BF7A39CB6369682A671444101E30_inline(L_23, /*hidden argument*/NULL);
		int32_t L_25 = L_24;
		RuntimeObject * L_26 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_25);
		String_t* L_27 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral3CDF2936DA2FC556BFA533AB1EB59CE710AC80E5, L_26, /*hidden argument*/NULL);
		NullCheck(L_22);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_22, L_27);
		// if (buildable.HasCommander)
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_28 = V_0;
		NullCheck(L_28);
		bool L_29 = BuildableTurret_get_HasCommander_m5E2ED31DB76EE61A58CEA5A660DD6A9F9686938E_inline(L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00cb;
		}
	}
	{
		// removeCommanderButton.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_30 = __this->get_removeCommanderButton_12();
		NullCheck(L_30);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_30, (bool)1, /*hidden argument*/NULL);
		return;
	}

IL_00cb:
	{
		// removeCommanderButton.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_31 = __this->get_removeCommanderButton_12();
		NullCheck(L_31);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_31, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00d8:
	{
		// inspectTurretUI.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_32 = __this->get_inspectTurretUI_9();
		NullCheck(L_32);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_32, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretBuildManager::SelectHexagon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretBuildManager_SelectHexagon_mE236D0CCC140FA4421B78E6F17C9425975E0E803 (TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretBuildManager_SelectHexagon_mE236D0CCC140FA4421B78E6F17C9425975E0E803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sceneClickManager.selectedHexagon == null || (sceneClickManager.selectedHexagon.Type != HexagonType.ResourceExtraction && sceneClickManager.selectedHexagon.Type != HexagonType.TurretBuildable))
		SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * L_0 = __this->get_sceneClickManager_20();
		NullCheck(L_0);
		HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * L_1 = L_0->get_selectedHexagon_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0039;
		}
	}
	{
		SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * L_3 = __this->get_sceneClickManager_20();
		NullCheck(L_3);
		HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * L_4 = L_3->get_selectedHexagon_6();
		NullCheck(L_4);
		int32_t L_5 = HexagonalBlock_get_Type_m713A78597C82D3CDD1087965AAADD7310AB17B17_inline(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)3)))
		{
			goto IL_005e;
		}
	}
	{
		SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * L_6 = __this->get_sceneClickManager_20();
		NullCheck(L_6);
		HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * L_7 = L_6->get_selectedHexagon_6();
		NullCheck(L_7);
		int32_t L_8 = HexagonalBlock_get_Type_m713A78597C82D3CDD1087965AAADD7310AB17B17_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_005e;
		}
	}

IL_0039:
	{
		// buildMenuUI.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_buildMenuUI_8();
		NullCheck(L_9);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_9, (bool)0, /*hidden argument*/NULL);
		// excavatorUI.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = __this->get_excavatorUI_11();
		NullCheck(L_10);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_10, (bool)0, /*hidden argument*/NULL);
		// buildableTurretsUI.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = __this->get_buildableTurretsUI_10();
		NullCheck(L_11);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_11, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_005e:
	{
		// buildMenuUI.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = __this->get_buildMenuUI_8();
		NullCheck(L_12);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_12, (bool)1, /*hidden argument*/NULL);
		// if(sceneClickManager.selectedHexagon.Type == HexagonType.ResourceExtraction)
		SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * L_13 = __this->get_sceneClickManager_20();
		NullCheck(L_13);
		HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * L_14 = L_13->get_selectedHexagon_6();
		NullCheck(L_14);
		int32_t L_15 = HexagonalBlock_get_Type_m713A78597C82D3CDD1087965AAADD7310AB17B17_inline(L_14, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)3))))
		{
			goto IL_0096;
		}
	}
	{
		// excavatorUI.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = __this->get_excavatorUI_11();
		NullCheck(L_16);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_16, (bool)1, /*hidden argument*/NULL);
		// buildableTurretsUI.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = __this->get_buildableTurretsUI_10();
		NullCheck(L_17);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_17, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0096:
	{
		// excavatorUI.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = __this->get_excavatorUI_11();
		NullCheck(L_18);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_18, (bool)0, /*hidden argument*/NULL);
		// buildableTurretsUI.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = __this->get_buildableTurretsUI_10();
		NullCheck(L_19);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_19, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretBuildManager::_BuildTurret(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretBuildManager__BuildTurret_mD59EBC2A33968AEFA9901A4AD1C6AB28F2A397B6 (TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretBuildManager__BuildTurret_mD59EBC2A33968AEFA9901A4AD1C6AB28F2A397B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * V_2 = NULL;
	{
		// if (sceneClickManager.selectedHexagon.Type != HexagonType.TurretBuildable && sceneClickManager.selectedHexagon.Type != HexagonType.ResourceExtraction)
		SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * L_0 = __this->get_sceneClickManager_20();
		NullCheck(L_0);
		HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * L_1 = L_0->get_selectedHexagon_6();
		NullCheck(L_1);
		int32_t L_2 = HexagonalBlock_get_Type_m713A78597C82D3CDD1087965AAADD7310AB17B17_inline(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * L_3 = __this->get_sceneClickManager_20();
		NullCheck(L_3);
		HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * L_4 = L_3->get_selectedHexagon_6();
		NullCheck(L_4);
		int32_t L_5 = HexagonalBlock_get_Type_m713A78597C82D3CDD1087965AAADD7310AB17B17_inline(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)3)))
		{
			goto IL_0027;
		}
	}
	{
		// return;
		return;
	}

IL_0027:
	{
		// if (turretPrefabs[index].GetComponent<BuildableTurret>().GetBuildCost() > Money)
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_6 = __this->get_turretPrefabs_19();
		int32_t L_7 = ___index0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_10 = GameObject_GetComponent_TisBuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98_mEBF0A5AB64E72A07FCC9DE2051D8085AA34F39D4(L_9, /*hidden argument*/GameObject_GetComponent_TisBuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98_mEBF0A5AB64E72A07FCC9DE2051D8085AA34F39D4_RuntimeMethod_var);
		NullCheck(L_10);
		int32_t L_11 = BuildableTurret_GetBuildCost_mDB394650B184F6EEFFD6C60E54124C3113858C80(L_10, /*hidden argument*/NULL);
		int32_t L_12 = TurretBuildManager_get_Money_mBA08EAACDFA345614CACDE3CC8B1EFEA02BE2EA9_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0042;
		}
	}
	{
		// return;
		return;
	}

IL_0042:
	{
		// sceneClickManager.selectedHexagon.Type = HexagonType.Occupied;
		SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * L_13 = __this->get_sceneClickManager_20();
		NullCheck(L_13);
		HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * L_14 = L_13->get_selectedHexagon_6();
		NullCheck(L_14);
		HexagonalBlock_set_Type_m37518F08C900C4CD999C64E8D403B4DA003AFF6E(L_14, 4, /*hidden argument*/NULL);
		// PhotonObj photonObj = PhotonObj.Bullet;
		V_0 = 3;
		// TurretBase turretBase = turretPrefabs[index].GetComponent<PlayerBase>();
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_15 = __this->get_turretPrefabs_19();
		int32_t L_16 = ___index0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		PlayerBase_t78C7F5333ACAFFE352C61B60F683F32363A70B4E * L_19 = GameObject_GetComponent_TisPlayerBase_t78C7F5333ACAFFE352C61B60F683F32363A70B4E_m989D72DB73AC781B8F6BC2C5A15743974886F7D2(L_18, /*hidden argument*/GameObject_GetComponent_TisPlayerBase_t78C7F5333ACAFFE352C61B60F683F32363A70B4E_m989D72DB73AC781B8F6BC2C5A15743974886F7D2_RuntimeMethod_var);
		// if(turretBase != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_19, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_006c;
		}
	}
	{
		// photonObj = PhotonObj.PlayerBase;
		V_0 = 1;
	}

IL_006c:
	{
		// turretBase = turretPrefabs[index].GetComponent<TurretMachineGun>();
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_21 = __this->get_turretPrefabs_19();
		int32_t L_22 = ___index0;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		TurretMachineGun_t8A92F40FBBDC488B54284FFF5FEEC92CEA48818C * L_25 = GameObject_GetComponent_TisTurretMachineGun_t8A92F40FBBDC488B54284FFF5FEEC92CEA48818C_mE1C0FA8FC105E13B8A4CB02144494633C4FB77FC(L_24, /*hidden argument*/GameObject_GetComponent_TisTurretMachineGun_t8A92F40FBBDC488B54284FFF5FEEC92CEA48818C_mE1C0FA8FC105E13B8A4CB02144494633C4FB77FC_RuntimeMethod_var);
		// if (turretBase != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_26 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_25, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0083;
		}
	}
	{
		// photonObj = PhotonObj.TurretMachineGun;
		V_0 = 7;
	}

IL_0083:
	{
		// turretBase = turretPrefabs[index].GetComponent<TurretElectricFence>();
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_27 = __this->get_turretPrefabs_19();
		int32_t L_28 = ___index0;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		TurretElectricFence_t8802834981F4B4FBE7E88F186516E8EE690B29BB * L_31 = GameObject_GetComponent_TisTurretElectricFence_t8802834981F4B4FBE7E88F186516E8EE690B29BB_mF5A9A54FB25C91FFA035C2D95103AE58A8616D39(L_30, /*hidden argument*/GameObject_GetComponent_TisTurretElectricFence_t8802834981F4B4FBE7E88F186516E8EE690B29BB_mF5A9A54FB25C91FFA035C2D95103AE58A8616D39_RuntimeMethod_var);
		// if (turretBase != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_32 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_31, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_009a;
		}
	}
	{
		// photonObj = PhotonObj.TurretElectricFence;
		V_0 = 4;
	}

IL_009a:
	{
		// turretBase = turretPrefabs[index].GetComponent<TurretVulkan>();
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_33 = __this->get_turretPrefabs_19();
		int32_t L_34 = ___index0;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_36);
		TurretVulkan_tE60C25A88F22EA33484804BED57F7ED0B8614665 * L_37 = GameObject_GetComponent_TisTurretVulkan_tE60C25A88F22EA33484804BED57F7ED0B8614665_m56A577C4DFB52CF96A1CAF5623E0205336538075(L_36, /*hidden argument*/GameObject_GetComponent_TisTurretVulkan_tE60C25A88F22EA33484804BED57F7ED0B8614665_m56A577C4DFB52CF96A1CAF5623E0205336538075_RuntimeMethod_var);
		// if (turretBase != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_38 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_37, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_00b2;
		}
	}
	{
		// photonObj = PhotonObj.TurretVulkan;
		V_0 = ((int32_t)9);
	}

IL_00b2:
	{
		// turretBase = turretPrefabs[index].GetComponent<TurretMachineCannon>();
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_39 = __this->get_turretPrefabs_19();
		int32_t L_40 = ___index0;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		TurretMachineCannon_t2C32689BFD88BBFB3381B49C932C9DEA0158259D * L_43 = GameObject_GetComponent_TisTurretMachineCannon_t2C32689BFD88BBFB3381B49C932C9DEA0158259D_mA337480AEABB367DDE874085414037F618C330B9(L_42, /*hidden argument*/GameObject_GetComponent_TisTurretMachineCannon_t2C32689BFD88BBFB3381B49C932C9DEA0158259D_mA337480AEABB367DDE874085414037F618C330B9_RuntimeMethod_var);
		// if (turretBase != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_44 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_43, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_00c9;
		}
	}
	{
		// photonObj = PhotonObj.TurretMachineCannon;
		V_0 = 6;
	}

IL_00c9:
	{
		// turretBase = turretPrefabs[index].GetComponent<TurretRailgun>();
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_45 = __this->get_turretPrefabs_19();
		int32_t L_46 = ___index0;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_48);
		TurretRailgun_t71400EE018F6A7159144942B33599565CE4F05FD * L_49 = GameObject_GetComponent_TisTurretRailgun_t71400EE018F6A7159144942B33599565CE4F05FD_mABF3104A822CBA2B6890F2FD0215DEFDC481753A(L_48, /*hidden argument*/GameObject_GetComponent_TisTurretRailgun_t71400EE018F6A7159144942B33599565CE4F05FD_mABF3104A822CBA2B6890F2FD0215DEFDC481753A_RuntimeMethod_var);
		// if (turretBase != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_50 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_49, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_00e0;
		}
	}
	{
		// photonObj = PhotonObj.TurretRailgun;
		V_0 = 8;
	}

IL_00e0:
	{
		// turretBase = turretPrefabs[index].GetComponent<TurretExcavator>();
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_51 = __this->get_turretPrefabs_19();
		int32_t L_52 = ___index0;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_54);
		TurretExcavator_t001FFF47594E9C24A7F31DD9E9C86C7CA923331D * L_55 = GameObject_GetComponent_TisTurretExcavator_t001FFF47594E9C24A7F31DD9E9C86C7CA923331D_mEA084C222DE53EAB428B995C0ED5E4634BA1CA63(L_54, /*hidden argument*/GameObject_GetComponent_TisTurretExcavator_t001FFF47594E9C24A7F31DD9E9C86C7CA923331D_mEA084C222DE53EAB428B995C0ED5E4634BA1CA63_RuntimeMethod_var);
		// if (turretBase != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_56 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_55, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_00f7;
		}
	}
	{
		// photonObj = PhotonObj.TurretExcavator;
		V_0 = 5;
	}

IL_00f7:
	{
		// object[] turretData = new object[1];
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_57 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		V_1 = L_57;
		// turretData[0] = sceneClickManager.selectedHexagon.name;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_58 = V_1;
		SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * L_59 = __this->get_sceneClickManager_20();
		NullCheck(L_59);
		HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * L_60 = L_59->get_selectedHexagon_6();
		NullCheck(L_60);
		String_t* L_61 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_60, /*hidden argument*/NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_61);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_61);
		// Transform clone = InstantiationManager.instance.InstantiateWithCheck(turretPrefabs[index], sceneClickManager.selectedHexagon.transform.position, Quaternion.identity, photonObj, turretData).transform;
		InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D * L_62 = ((InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D_StaticFields*)il2cpp_codegen_static_fields_for(InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D_il2cpp_TypeInfo_var))->get_instance_4();
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_63 = __this->get_turretPrefabs_19();
		int32_t L_64 = ___index0;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * L_67 = __this->get_sceneClickManager_20();
		NullCheck(L_67);
		HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * L_68 = L_67->get_selectedHexagon_6();
		NullCheck(L_68);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_69 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_68, /*hidden argument*/NULL);
		NullCheck(L_69);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_70 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_69, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_71 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		int32_t L_72 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_73 = V_1;
		NullCheck(L_62);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_74 = InstantiationManager_InstantiateWithCheck_mDE2A12B9A41A47A3EFD58C01BE8477F4E7AFC426(L_62, L_66, L_70, L_71, L_72, L_73, /*hidden argument*/NULL);
		NullCheck(L_74);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_75 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_74, /*hidden argument*/NULL);
		// BuildableTurret script = clone.GetComponent<BuildableTurret>();
		NullCheck(L_75);
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_76 = Component_GetComponent_TisBuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98_mDDED64410FBCD4345197F977C4C636ED8D9E1862(L_75, /*hidden argument*/Component_GetComponent_TisBuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98_mDDED64410FBCD4345197F977C4C636ED8D9E1862_RuntimeMethod_var);
		V_2 = L_76;
		// script.hexagonBlock = sceneClickManager.selectedHexagon;
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_77 = V_2;
		SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * L_78 = __this->get_sceneClickManager_20();
		NullCheck(L_78);
		HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * L_79 = L_78->get_selectedHexagon_6();
		NullCheck(L_77);
		L_77->set_hexagonBlock_26(L_79);
		// Money -= script.GetBuildCost();
		int32_t L_80 = TurretBuildManager_get_Money_mBA08EAACDFA345614CACDE3CC8B1EFEA02BE2EA9_inline(__this, /*hidden argument*/NULL);
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_81 = V_2;
		NullCheck(L_81);
		int32_t L_82 = BuildableTurret_GetBuildCost_mDB394650B184F6EEFFD6C60E54124C3113858C80(L_81, /*hidden argument*/NULL);
		TurretBuildManager_set_Money_mCE514B684D28E883848FA914C34F2501AEC5FAEA(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_80, (int32_t)L_82)), /*hidden argument*/NULL);
		// sceneClickManager.selectedHexagon = null;
		SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * L_83 = __this->get_sceneClickManager_20();
		NullCheck(L_83);
		L_83->set_selectedHexagon_6((HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 *)NULL);
		// buildMenuUI.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_84 = __this->get_buildMenuUI_8();
		NullCheck(L_84);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_84, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretBuildManager::_SellTurret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretBuildManager__SellTurret_mCEE2CCF2FE21267521958526F58B3EE83DEEA9F3 (TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretBuildManager__SellTurret_mCEE2CCF2FE21267521958526F58B3EE83DEEA9F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * V_0 = NULL;
	{
		// BuildableTurret buildable = sceneClickManager.selectedTurret.gameObject.GetComponent<BuildableTurret>();
		SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * L_0 = __this->get_sceneClickManager_20();
		NullCheck(L_0);
		TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * L_1 = L_0->get_selectedTurret_5();
		NullCheck(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_3 = GameObject_GetComponent_TisBuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98_mEBF0A5AB64E72A07FCC9DE2051D8085AA34F39D4(L_2, /*hidden argument*/GameObject_GetComponent_TisBuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98_mEBF0A5AB64E72A07FCC9DE2051D8085AA34F39D4_RuntimeMethod_var);
		V_0 = L_3;
		// if (buildable != null)
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		// Money += buildable.DestroyReward;
		int32_t L_6 = TurretBuildManager_get_Money_mBA08EAACDFA345614CACDE3CC8B1EFEA02BE2EA9_inline(__this, /*hidden argument*/NULL);
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = TurretBase_get_DestroyReward_mD4E91EE5E147BF7A39CB6369682A671444101E30_inline(L_7, /*hidden argument*/NULL);
		TurretBuildManager_set_Money_mCE514B684D28E883848FA914C34F2501AEC5FAEA(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_8)), /*hidden argument*/NULL);
		// if (buildable.HasCommander)
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = BuildableTurret_get_HasCommander_m5E2ED31DB76EE61A58CEA5A660DD6A9F9686938E_inline(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		// commanderUI._UnpowerupTurret();
		CommanderUI_t9874B1798F48B588E14FC92A100E9F3EF3D9B706 * L_11 = __this->get_commanderUI_21();
		NullCheck(L_11);
		CommanderUI__UnpowerupTurret_m0A4CC1ACA80EF0CF0B1996A2E7CFD6DEB6607D53(L_11, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// buildable.SellTurret();
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_12 = V_0;
		NullCheck(L_12);
		BuildableTurret_SellTurret_mEEF06127255A910571100AC02C821314B4C81049(L_12, /*hidden argument*/NULL);
		// sceneClickManager.selectedTurret = null;
		SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * L_13 = __this->get_sceneClickManager_20();
		NullCheck(L_13);
		L_13->set_selectedTurret_5((TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 *)NULL);
		// inspectTurretUI.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = __this->get_inspectTurretUI_9();
		NullCheck(L_14);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_14, (bool)0, /*hidden argument*/NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretBuildManager::_RepairTurret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretBuildManager__RepairTurret_mE400560B3F4A48867345D26DB0BA2C5633BFA310 (TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretBuildManager__RepairTurret_mE400560B3F4A48867345D26DB0BA2C5633BFA310_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if(sceneClickManager.selectedTurret != null)
		SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * L_0 = __this->get_sceneClickManager_20();
		NullCheck(L_0);
		TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * L_1 = L_0->get_selectedTurret_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005e;
		}
	}
	{
		// BuildableTurret buildable = sceneClickManager.selectedTurret.gameObject.GetComponent<BuildableTurret>();
		SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * L_3 = __this->get_sceneClickManager_20();
		NullCheck(L_3);
		TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * L_4 = L_3->get_selectedTurret_5();
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_6 = GameObject_GetComponent_TisBuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98_mEBF0A5AB64E72A07FCC9DE2051D8085AA34F39D4(L_5, /*hidden argument*/GameObject_GetComponent_TisBuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98_mEBF0A5AB64E72A07FCC9DE2051D8085AA34F39D4_RuntimeMethod_var);
		V_0 = L_6;
		// if(buildable != null)
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		// int recoveryCost = buildable.GetRecoveryCost();
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = BuildableTurret_GetRecoveryCost_m4D163BB8818670F8C692F87284B5A59AE4667401(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// if (recoveryCost <= Money && buildable.StartRecovery(recoveryMaterial))
		int32_t L_11 = V_1;
		int32_t L_12 = TurretBuildManager_get_Money_mBA08EAACDFA345614CACDE3CC8B1EFEA02BE2EA9_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_11) > ((int32_t)L_12)))
		{
			goto IL_005e;
		}
	}
	{
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_13 = V_0;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_14 = __this->get_recoveryMaterial_7();
		NullCheck(L_13);
		bool L_15 = BuildableTurret_StartRecovery_m2D71F964493425169ED660CBF3DCFB3F09598F9F(L_13, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_005e;
		}
	}
	{
		// Money -= recoveryCost;
		int32_t L_16 = TurretBuildManager_get_Money_mBA08EAACDFA345614CACDE3CC8B1EFEA02BE2EA9_inline(__this, /*hidden argument*/NULL);
		int32_t L_17 = V_1;
		TurretBuildManager_set_Money_mCE514B684D28E883848FA914C34F2501AEC5FAEA(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17)), /*hidden argument*/NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretBuildManager::_UpgradeTurret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretBuildManager__UpgradeTurret_m09B6412CCF064BD3146391D2552FF7E88CA59001 (TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretBuildManager__UpgradeTurret_m09B6412CCF064BD3146391D2552FF7E88CA59001_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (sceneClickManager.selectedTurret != null)
		SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * L_0 = __this->get_sceneClickManager_20();
		NullCheck(L_0);
		TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * L_1 = L_0->get_selectedTurret_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0070;
		}
	}
	{
		// BuildableTurret buildable = sceneClickManager.selectedTurret.gameObject.GetComponent<BuildableTurret>();
		SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * L_3 = __this->get_sceneClickManager_20();
		NullCheck(L_3);
		TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * L_4 = L_3->get_selectedTurret_5();
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_6 = GameObject_GetComponent_TisBuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98_mEBF0A5AB64E72A07FCC9DE2051D8085AA34F39D4(L_5, /*hidden argument*/GameObject_GetComponent_TisBuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98_mEBF0A5AB64E72A07FCC9DE2051D8085AA34F39D4_RuntimeMethod_var);
		V_0 = L_6;
		// if (buildable != null)
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0070;
		}
	}
	{
		// int upgradeCost = buildable.GetUpgradeCost();
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = BuildableTurret_GetUpgradeCost_mD826D4C4EA8A76E4B22A9D679D892939B534FE23(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// if (upgradeCost <= Money && buildable.Upgrade())
		int32_t L_11 = V_1;
		int32_t L_12 = TurretBuildManager_get_Money_mBA08EAACDFA345614CACDE3CC8B1EFEA02BE2EA9_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_11) > ((int32_t)L_12)))
		{
			goto IL_0070;
		}
	}
	{
		BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * L_13 = V_0;
		NullCheck(L_13);
		bool L_14 = BuildableTurret_Upgrade_mDDFB2E66B066FB3191C46F21B3BDE9C882CC0182(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0070;
		}
	}
	{
		// Money -= upgradeCost;
		int32_t L_15 = TurretBuildManager_get_Money_mBA08EAACDFA345614CACDE3CC8B1EFEA02BE2EA9_inline(__this, /*hidden argument*/NULL);
		int32_t L_16 = V_1;
		TurretBuildManager_set_Money_mCE514B684D28E883848FA914C34F2501AEC5FAEA(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16)), /*hidden argument*/NULL);
		// sceneClickManager.selectedTurret = null;
		SceneClickManager_t722FE8695B85C25301266D969C2C41EDCAF2327F * L_17 = __this->get_sceneClickManager_20();
		NullCheck(L_17);
		L_17->set_selectedTurret_5((TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 *)NULL);
		// inspectTurretUI.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = __this->get_inspectTurretUI_9();
		NullCheck(L_18);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_18, (bool)0, /*hidden argument*/NULL);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretBuildManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretBuildManager__ctor_mBD12F307B774729754AE4825B6AE4EE126BCF9F0 (TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SerenityGarden.TurretElectricFence::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretElectricFence_Awake_m43BDB0D1822A09CC2D8401E96BDCB3D358BECC20 (TurretElectricFence_t8802834981F4B4FBE7E88F186516E8EE690B29BB * __this, const RuntimeMethod* method)
{
	{
		// BaseAwakeCalls();
		VirtActionInvoker0::Invoke(6 /* System.Void SerenityGarden.LogicProcessBase::BaseAwakeCalls() */, __this);
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretElectricFence::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretElectricFence_Start_m1FB2A444AB48BC6B5343B6ECA29D0DC7DE05E1DF (TurretElectricFence_t8802834981F4B4FBE7E88F186516E8EE690B29BB * __this, const RuntimeMethod* method)
{
	{
		// BaseStartCalls();
		VirtActionInvoker0::Invoke(7 /* System.Void SerenityGarden.LogicProcessBase::BaseStartCalls() */, __this);
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretElectricFence::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretElectricFence_Update_mF5CB5CF546A9388678D97816DA0F94BD80EDE2D3 (TurretElectricFence_t8802834981F4B4FBE7E88F186516E8EE690B29BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretElectricFence_Update_mF5CB5CF546A9388678D97816DA0F94BD80EDE2D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GamePauseManager.instance.GamePaused)
		GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284 * L_0 = ((GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_StaticFields*)il2cpp_codegen_static_fields_for(GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_il2cpp_TypeInfo_var))->get_instance_5();
		NullCheck(L_0);
		bool L_1 = GamePauseManager_get_GamePaused_m7B1A9569EA4C87E4B9762AE427894DD8C58C9372_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// BaseUpdateCalls();
		VirtActionInvoker0::Invoke(8 /* System.Void SerenityGarden.LogicProcessBase::BaseUpdateCalls() */, __this);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretElectricFence::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretElectricFence_Attack_m6AFDC3C9CE6002CA58FA117AFA20E565DC98579A (TurretElectricFence_t8802834981F4B4FBE7E88F186516E8EE690B29BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretElectricFence_Attack_m6AFDC3C9CE6002CA58FA117AFA20E565DC98579A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Target != null)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_0 = TurretBase_get_Target_m79F6FB8FB7A4BC5386110C436A950317E0C466D3_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		// HelperMethods.RotateObjTowardsTarget(partToRotate.transform, Target.transform.position, true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ((TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 *)__this)->get_partToRotate_10();
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_4 = TurretBase_get_Target_m79F6FB8FB7A4BC5386110C436A950317E0C466D3_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HelperMethods_tF794A64CE21A4C293EF6848144CEA37A7D926AE4_il2cpp_TypeInfo_var);
		HelperMethods_RotateObjTowardsTarget_mB278065F49C57CC536D0B89E2B4846D1C788863A(L_3, L_6, (bool)1, /*hidden argument*/NULL);
		// Target.Health -= Damage;
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_7 = TurretBase_get_Target_m79F6FB8FB7A4BC5386110C436A950317E0C466D3_inline(__this, /*hidden argument*/NULL);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_8 = L_7;
		NullCheck(L_8);
		float L_9 = EnemyBase_get_Health_m8CF1A98319D063DB68265C7D717501430F53C219_inline(L_8, /*hidden argument*/NULL);
		float L_10 = TurretBase_get_Damage_mEE7B3381C758C77C36D007C86AE25B75F761BAAF_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		EnemyBase_set_Health_mA9E74FBF81811206AA3798846E01C2F099D5BAC1(L_8, ((float)il2cpp_codegen_subtract((float)L_9, (float)L_10)), /*hidden argument*/NULL);
		// LastAttackTime = Time.time;
		float L_11 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		TurretBase_set_LastAttackTime_m77B277C99B3D6B4986C14A903E27A9AC245DDFF3_inline(__this, L_11, /*hidden argument*/NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretElectricFence::FindTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretElectricFence_FindTarget_m239528AD86662BE771D5D8E5A787FDA4D41A3922 (TurretElectricFence_t8802834981F4B4FBE7E88F186516E8EE690B29BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretElectricFence_FindTarget_m239528AD86662BE771D5D8E5A787FDA4D41A3922_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * V_0 = NULL;
	EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * V_1 = NULL;
	float V_2 = 0.0f;
	ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// Collider[] hits = Physics.OverlapSphere(transform.position, Range / 2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = TurretBase_get_Range_m04A266B69890546C41E5AE5BCDEB761CA7CA93E4_inline(__this, /*hidden argument*/NULL);
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_3 = Physics_OverlapSphere_m354A92672F7A6DE59EF1285D02D62247F46A5D84(L_1, ((float)((float)L_2/(float)(2.0f))), /*hidden argument*/NULL);
		// EnemyBase _target = null;
		V_0 = (EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F *)NULL;
		// float minDist = float.MaxValue;
		V_2 = ((std::numeric_limits<float>::max)());
		// foreach (Collider item in hits)
		V_3 = L_3;
		V_4 = 0;
		goto IL_00af;
	}

IL_002d:
	{
		// foreach (Collider item in hits)
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_4 = V_3;
		int32_t L_5 = V_4;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		// aux = item.transform.root.gameObject.GetComponent<EnemyBase>();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Transform_get_root_m101A8B5C2CC6D868B6B66EEDBD5336FC1EB5DDD6(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_11 = GameObject_GetComponent_TisEnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F_m185C70C01C6A98844C6DA396B9FF9205EC35C205(L_10, /*hidden argument*/GameObject_GetComponent_TisEnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F_m185C70C01C6A98844C6DA396B9FF9205EC35C205_RuntimeMethod_var);
		V_1 = L_11;
		// if (aux != null && HelperMethods.SquaredDistance(transform.position, aux.transform.position) < minDist)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_12, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00a9;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_14, /*hidden argument*/NULL);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_16 = V_1;
		NullCheck(L_16);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HelperMethods_tF794A64CE21A4C293EF6848144CEA37A7D926AE4_il2cpp_TypeInfo_var);
		float L_19 = HelperMethods_SquaredDistance_m8FF4B6506494CB66B13643F6A4CE4BDC6433CCC6(L_15, L_18, /*hidden argument*/NULL);
		float L_20 = V_2;
		if ((!(((float)L_19) < ((float)L_20))))
		{
			goto IL_00a9;
		}
	}
	{
		// if (aux.EnemyType == EnemyType.Melee || aux.EnemyType == EnemyType.Ranged)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22 = EnemyBase_get_EnemyType_m9E6660DF9416C496D4EFE0AB71423B617EE33062_inline(L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_007e;
		}
	}
	{
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_23 = V_1;
		NullCheck(L_23);
		int32_t L_24 = EnemyBase_get_EnemyType_m9E6660DF9416C496D4EFE0AB71423B617EE33062_inline(L_23, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_24) == ((uint32_t)1))))
		{
			goto IL_009c;
		}
	}

IL_007e:
	{
		// _target = aux;
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_25 = V_1;
		V_0 = L_25;
		// minDist = HelperMethods.SquaredDistance(transform.position, aux.transform.position);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_26, /*hidden argument*/NULL);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_28 = V_1;
		NullCheck(L_28);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HelperMethods_tF794A64CE21A4C293EF6848144CEA37A7D926AE4_il2cpp_TypeInfo_var);
		float L_31 = HelperMethods_SquaredDistance_m8FF4B6506494CB66B13643F6A4CE4BDC6433CCC6(L_27, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
	}

IL_009c:
	{
		// if (aux == LockOnManager.SelectedEnemy)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_32 = V_1;
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_33 = LockOnManager_get_SelectedEnemy_m7369E961F04C315C52362153FE0651F323BA2E0B_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_34 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_32, L_33, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_00b9;
		}
	}

IL_00a9:
	{
		int32_t L_35 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00af:
	{
		// foreach (Collider item in hits)
		int32_t L_36 = V_4;
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_37 = V_3;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))))
		{
			goto IL_002d;
		}
	}

IL_00b9:
	{
		// foundTarget = _target;
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_38 = V_0;
		((TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 *)__this)->set_foundTarget_16(L_38);
		// lastSearchTargetTime = Time.time;
		float L_39 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		((TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 *)__this)->set_lastSearchTargetTime_15(L_39);
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretElectricFence::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretElectricFence__ctor_m2B7EE1A5B2A2FE6399EEE76AA43EEF3E330E9964 (TurretElectricFence_t8802834981F4B4FBE7E88F186516E8EE690B29BB * __this, const RuntimeMethod* method)
{
	{
		BuildableTurret__ctor_mBE86258842D47DE706BD2140C6E613C46865E833(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SerenityGarden.TurretExcavator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretExcavator_Awake_m3AF7AA9D9DE8D1A1909B2F332B3A038AB67FAF88 (TurretExcavator_t001FFF47594E9C24A7F31DD9E9C86C7CA923331D * __this, const RuntimeMethod* method)
{
	{
		// BaseAwakeCalls();
		VirtActionInvoker0::Invoke(6 /* System.Void SerenityGarden.LogicProcessBase::BaseAwakeCalls() */, __this);
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretExcavator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretExcavator_Start_m46EF037B1E6FE436F43D064FCD0C74775BDE4F75 (TurretExcavator_t001FFF47594E9C24A7F31DD9E9C86C7CA923331D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretExcavator_Start_m46EF037B1E6FE436F43D064FCD0C74775BDE4F75_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseStartCalls();
		VirtActionInvoker0::Invoke(7 /* System.Void SerenityGarden.LogicProcessBase::BaseStartCalls() */, __this);
		// turretBuildManager = TurretBuildManager.instance;
		TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * L_0 = ((TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7_StaticFields*)il2cpp_codegen_static_fields_for(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7_il2cpp_TypeInfo_var))->get_instance_4();
		__this->set_turretBuildManager_39(L_0);
		// waveManager = WaveManager.instance;
		WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * L_1 = ((WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6_StaticFields*)il2cpp_codegen_static_fields_for(WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6_il2cpp_TypeInfo_var))->get_instance_6();
		__this->set_waveManager_40(L_1);
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretExcavator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretExcavator_Update_m9DE35E427902EF0A160C49844A4C7D7DE02D2E83 (TurretExcavator_t001FFF47594E9C24A7F31DD9E9C86C7CA923331D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretExcavator_Update_m9DE35E427902EF0A160C49844A4C7D7DE02D2E83_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GamePauseManager.instance.GamePaused && waveManager.spawnWaves == true)
		GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284 * L_0 = ((GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_StaticFields*)il2cpp_codegen_static_fields_for(GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_il2cpp_TypeInfo_var))->get_instance_5();
		NullCheck(L_0);
		bool L_1 = GamePauseManager_get_GamePaused_m7B1A9569EA4C87E4B9762AE427894DD8C58C9372_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * L_2 = __this->get_waveManager_40();
		NullCheck(L_2);
		bool L_3 = L_2->get_spawnWaves_21();
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// BaseUpdateCalls();
		VirtActionInvoker0::Invoke(8 /* System.Void SerenityGarden.LogicProcessBase::BaseUpdateCalls() */, __this);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretExcavator::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretExcavator_Attack_m2F507E4B7DF63B8CF6473FFDB5EF8DE610D1C3FA (TurretExcavator_t001FFF47594E9C24A7F31DD9E9C86C7CA923331D * __this, const RuntimeMethod* method)
{
	{
		// turretBuildManager.Money += (int)Damage;
		TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * L_0 = __this->get_turretBuildManager_39();
		TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = TurretBuildManager_get_Money_mBA08EAACDFA345614CACDE3CC8B1EFEA02BE2EA9_inline(L_1, /*hidden argument*/NULL);
		float L_3 = TurretBase_get_Damage_mEE7B3381C758C77C36D007C86AE25B75F761BAAF_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		TurretBuildManager_set_Money_mCE514B684D28E883848FA914C34F2501AEC5FAEA(L_1, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)(((int32_t)((int32_t)L_3))))), /*hidden argument*/NULL);
		// LastAttackTime = Time.time;
		float L_4 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		TurretBase_set_LastAttackTime_m77B277C99B3D6B4986C14A903E27A9AC245DDFF3_inline(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretExcavator::FindTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretExcavator_FindTarget_m4ABB5ED2D50216E51137140D8D9173AE9D8E25E4 (TurretExcavator_t001FFF47594E9C24A7F31DD9E9C86C7CA923331D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretExcavator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretExcavator__ctor_m14CCC48425450B7DE9977F08015246F097C3F323 (TurretExcavator_t001FFF47594E9C24A7F31DD9E9C86C7CA923331D * __this, const RuntimeMethod* method)
{
	{
		BuildableTurret__ctor_mBE86258842D47DE706BD2140C6E613C46865E833(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SerenityGarden.TurretLevel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretLevel__ctor_m0F3B2A45B04E8FB397C985AA768B7CA44608B747 (TurretLevel_t84FC9A4C36E5DD3A1FDA61745215D4AE17F09645 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SerenityGarden.TurretMachineCannon::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretMachineCannon_Awake_m02741409AD76EA7E92C6DD7E664820B72F45DBA3 (TurretMachineCannon_t2C32689BFD88BBFB3381B49C932C9DEA0158259D * __this, const RuntimeMethod* method)
{
	{
		// BaseAwakeCalls();
		VirtActionInvoker0::Invoke(6 /* System.Void SerenityGarden.LogicProcessBase::BaseAwakeCalls() */, __this);
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretMachineCannon::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretMachineCannon_Start_m48EDABB7A96AD38D49B2164219D6FB2B429A12D0 (TurretMachineCannon_t2C32689BFD88BBFB3381B49C932C9DEA0158259D * __this, const RuntimeMethod* method)
{
	{
		// BaseStartCalls();
		VirtActionInvoker0::Invoke(7 /* System.Void SerenityGarden.LogicProcessBase::BaseStartCalls() */, __this);
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretMachineCannon::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretMachineCannon_Update_mF317F0CAECC185E899BC2B1520B8FFEDE94C671A (TurretMachineCannon_t2C32689BFD88BBFB3381B49C932C9DEA0158259D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretMachineCannon_Update_mF317F0CAECC185E899BC2B1520B8FFEDE94C671A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GamePauseManager.instance.GamePaused)
		GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284 * L_0 = ((GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_StaticFields*)il2cpp_codegen_static_fields_for(GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_il2cpp_TypeInfo_var))->get_instance_5();
		NullCheck(L_0);
		bool L_1 = GamePauseManager_get_GamePaused_m7B1A9569EA4C87E4B9762AE427894DD8C58C9372_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// BaseUpdateCalls();
		VirtActionInvoker0::Invoke(8 /* System.Void SerenityGarden.LogicProcessBase::BaseUpdateCalls() */, __this);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretMachineCannon::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretMachineCannon_Attack_m45F30EB7A574FE2D748428A0561FB4C9E83F4A59 (TurretMachineCannon_t2C32689BFD88BBFB3381B49C932C9DEA0158259D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretMachineCannon_Attack_m45F30EB7A574FE2D748428A0561FB4C9E83F4A59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Target != null)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_0 = TurretBase_get_Target_m79F6FB8FB7A4BC5386110C436A950317E0C466D3_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_008d;
		}
	}
	{
		// HelperMethods.RotateObjTowardsTarget(partToRotate.transform, Target.transform.position, true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ((TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 *)__this)->get_partToRotate_10();
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_4 = TurretBase_get_Target_m79F6FB8FB7A4BC5386110C436A950317E0C466D3_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HelperMethods_tF794A64CE21A4C293EF6848144CEA37A7D926AE4_il2cpp_TypeInfo_var);
		HelperMethods_RotateObjTowardsTarget_mB278065F49C57CC536D0B89E2B4846D1C788863A(L_3, L_6, (bool)1, /*hidden argument*/NULL);
		// BulletMovement bulletScript = InstantiationManager.instance.InstantiateWithCheck(bulletPrefab, firePoint.transform.position, firePoint.transform.rotation, PhotonObj.Bullet).GetComponent<BulletMovement>();
		InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D * L_7 = ((InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D_StaticFields*)il2cpp_codegen_static_fields_for(InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_bulletPrefab_39();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = ((TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 *)__this)->get_firePoint_11();
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_10, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = ((TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 *)__this)->get_firePoint_11();
		NullCheck(L_12);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_13, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = InstantiationManager_InstantiateWithCheck_mDE2A12B9A41A47A3EFD58C01BE8477F4E7AFC426(L_7, L_8, L_11, L_14, 3, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL, /*hidden argument*/NULL);
		NullCheck(L_15);
		BulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5 * L_16 = GameObject_GetComponent_TisBulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5_mD121EF1455C0C0F9868B4E75912627E0D6582ACB(L_15, /*hidden argument*/GameObject_GetComponent_TisBulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5_mD121EF1455C0C0F9868B4E75912627E0D6582ACB_RuntimeMethod_var);
		// bulletScript.damage = Damage;
		BulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5 * L_17 = L_16;
		float L_18 = TurretBase_get_Damage_mEE7B3381C758C77C36D007C86AE25B75F761BAAF_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		L_17->set_damage_9(L_18);
		// bulletScript.SetTarget(Target.gameObject);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_19 = TurretBase_get_Target_m79F6FB8FB7A4BC5386110C436A950317E0C466D3_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		BulletMovement_SetTarget_mAFC14CB0B4BC5B7AB2B25207E78FF3FA71E9C0E1_inline(L_17, L_20, /*hidden argument*/NULL);
		// LastAttackTime = Time.time;
		float L_21 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		TurretBase_set_LastAttackTime_m77B277C99B3D6B4986C14A903E27A9AC245DDFF3_inline(__this, L_21, /*hidden argument*/NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretMachineCannon::FindTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretMachineCannon_FindTarget_mBDB7FEA2BDEBF99E18D84D717297A66C5DDD08D2 (TurretMachineCannon_t2C32689BFD88BBFB3381B49C932C9DEA0158259D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretMachineCannon_FindTarget_mBDB7FEA2BDEBF99E18D84D717297A66C5DDD08D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* V_0 = NULL;
	EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * V_1 = NULL;
	EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * V_2 = NULL;
	float V_3 = 0.0f;
	ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// Collider[] hits = Physics.OverlapSphere(transform.position, Range / 2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = TurretBase_get_Range_m04A266B69890546C41E5AE5BCDEB761CA7CA93E4_inline(__this, /*hidden argument*/NULL);
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_3 = Physics_OverlapSphere_m354A92672F7A6DE59EF1285D02D62247F46A5D84(L_1, ((float)((float)L_2/(float)(2.0f))), /*hidden argument*/NULL);
		V_0 = L_3;
		// EnemyBase _target = null;
		V_1 = (EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F *)NULL;
		// float minDist = float.MaxValue;
		V_3 = ((std::numeric_limits<float>::max)());
		// foreach (Collider item in hits)
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_4 = V_0;
		V_4 = L_4;
		V_5 = 0;
		goto IL_00a7;
	}

IL_002d:
	{
		// foreach (Collider item in hits)
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_5 = V_4;
		int32_t L_6 = V_5;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// aux = item.transform.root.gameObject.GetComponent<EnemyBase>();
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Transform_get_root_m101A8B5C2CC6D868B6B66EEDBD5336FC1EB5DDD6(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_12 = GameObject_GetComponent_TisEnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F_m185C70C01C6A98844C6DA396B9FF9205EC35C205(L_11, /*hidden argument*/GameObject_GetComponent_TisEnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F_m185C70C01C6A98844C6DA396B9FF9205EC35C205_RuntimeMethod_var);
		V_2 = L_12;
		// if (aux != null && HelperMethods.SquaredDistance(transform.position, aux.transform.position) < minDist)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_13, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00a1;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_15, /*hidden argument*/NULL);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_17 = V_2;
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HelperMethods_tF794A64CE21A4C293EF6848144CEA37A7D926AE4_il2cpp_TypeInfo_var);
		float L_20 = HelperMethods_SquaredDistance_m8FF4B6506494CB66B13643F6A4CE4BDC6433CCC6(L_16, L_19, /*hidden argument*/NULL);
		float L_21 = V_3;
		if ((!(((float)L_20) < ((float)L_21))))
		{
			goto IL_00a1;
		}
	}
	{
		// if (aux.EnemyType == EnemyType.Melee)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = EnemyBase_get_EnemyType_m9E6660DF9416C496D4EFE0AB71423B617EE33062_inline(L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_0094;
		}
	}
	{
		// _target = aux;
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_24 = V_2;
		V_1 = L_24;
		// minDist = HelperMethods.SquaredDistance(transform.position, aux.transform.position);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_25, /*hidden argument*/NULL);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_27 = V_2;
		NullCheck(L_27);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HelperMethods_tF794A64CE21A4C293EF6848144CEA37A7D926AE4_il2cpp_TypeInfo_var);
		float L_30 = HelperMethods_SquaredDistance_m8FF4B6506494CB66B13643F6A4CE4BDC6433CCC6(L_26, L_29, /*hidden argument*/NULL);
		V_3 = L_30;
	}

IL_0094:
	{
		// if (aux == LockOnManager.SelectedEnemy)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_31 = V_2;
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_32 = LockOnManager_get_SelectedEnemy_m7369E961F04C315C52362153FE0651F323BA2E0B_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_33 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_31, L_32, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_00b2;
		}
	}

IL_00a1:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00a7:
	{
		// foreach (Collider item in hits)
		int32_t L_35 = V_5;
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_36 = V_4;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))))
		{
			goto IL_002d;
		}
	}

IL_00b2:
	{
		// if(_target == null)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_37 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_38 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_37, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_013f;
		}
	}
	{
		// foreach (Collider item in hits)
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_39 = V_0;
		V_4 = L_39;
		V_5 = 0;
		goto IL_0137;
	}

IL_00c6:
	{
		// foreach (Collider item in hits)
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_40 = V_4;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		// aux = item.gameObject.GetComponent<EnemyBase>();
		NullCheck(L_43);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_44 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_45 = GameObject_GetComponent_TisEnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F_m185C70C01C6A98844C6DA396B9FF9205EC35C205(L_44, /*hidden argument*/GameObject_GetComponent_TisEnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F_m185C70C01C6A98844C6DA396B9FF9205EC35C205_RuntimeMethod_var);
		V_2 = L_45;
		// if (aux != null && HelperMethods.SquaredDistance(transform.position, aux.transform.position) < minDist)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_46 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_47 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_46, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_0131;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_48 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_48);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_48, /*hidden argument*/NULL);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_50 = V_2;
		NullCheck(L_50);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_51 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HelperMethods_tF794A64CE21A4C293EF6848144CEA37A7D926AE4_il2cpp_TypeInfo_var);
		float L_53 = HelperMethods_SquaredDistance_m8FF4B6506494CB66B13643F6A4CE4BDC6433CCC6(L_49, L_52, /*hidden argument*/NULL);
		float L_54 = V_3;
		if ((!(((float)L_53) < ((float)L_54))))
		{
			goto IL_0131;
		}
	}
	{
		// if (aux.EnemyType == EnemyType.Ranged)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_55 = V_2;
		NullCheck(L_55);
		int32_t L_56 = EnemyBase_get_EnemyType_m9E6660DF9416C496D4EFE0AB71423B617EE33062_inline(L_55, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_0124;
		}
	}
	{
		// _target = aux;
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_57 = V_2;
		V_1 = L_57;
		// minDist = HelperMethods.SquaredDistance(transform.position, aux.transform.position);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_58 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_58);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_59 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_58, /*hidden argument*/NULL);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_60 = V_2;
		NullCheck(L_60);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_61 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_60, /*hidden argument*/NULL);
		NullCheck(L_61);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_61, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HelperMethods_tF794A64CE21A4C293EF6848144CEA37A7D926AE4_il2cpp_TypeInfo_var);
		float L_63 = HelperMethods_SquaredDistance_m8FF4B6506494CB66B13643F6A4CE4BDC6433CCC6(L_59, L_62, /*hidden argument*/NULL);
		V_3 = L_63;
	}

IL_0124:
	{
		// if (aux == LockOnManager.SelectedEnemy)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_64 = V_2;
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_65 = LockOnManager_get_SelectedEnemy_m7369E961F04C315C52362153FE0651F323BA2E0B_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_66 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_64, L_65, /*hidden argument*/NULL);
		if (L_66)
		{
			goto IL_013f;
		}
	}

IL_0131:
	{
		int32_t L_67 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
	}

IL_0137:
	{
		// foreach (Collider item in hits)
		int32_t L_68 = V_5;
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_69 = V_4;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))))
		{
			goto IL_00c6;
		}
	}

IL_013f:
	{
		// foundTarget = _target;
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_70 = V_1;
		((TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 *)__this)->set_foundTarget_16(L_70);
		// lastSearchTargetTime = Time.time;
		float L_71 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		((TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 *)__this)->set_lastSearchTargetTime_15(L_71);
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretMachineCannon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretMachineCannon__ctor_m694EE3464A03D5ACA4E74F890FA3A769FEB81097 (TurretMachineCannon_t2C32689BFD88BBFB3381B49C932C9DEA0158259D * __this, const RuntimeMethod* method)
{
	{
		BuildableTurret__ctor_mBE86258842D47DE706BD2140C6E613C46865E833(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SerenityGarden.TurretMachineGun::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretMachineGun_Awake_m472A81164DB215472099073614821EE39C819B1E (TurretMachineGun_t8A92F40FBBDC488B54284FFF5FEEC92CEA48818C * __this, const RuntimeMethod* method)
{
	{
		// BaseAwakeCalls();
		VirtActionInvoker0::Invoke(6 /* System.Void SerenityGarden.LogicProcessBase::BaseAwakeCalls() */, __this);
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretMachineGun::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretMachineGun_Start_m341FADA9564EE09151F6C44D759A56D1A01F3D4F (TurretMachineGun_t8A92F40FBBDC488B54284FFF5FEEC92CEA48818C * __this, const RuntimeMethod* method)
{
	{
		// BaseStartCalls();
		VirtActionInvoker0::Invoke(7 /* System.Void SerenityGarden.LogicProcessBase::BaseStartCalls() */, __this);
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretMachineGun::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretMachineGun_Update_m5B90E21E5A181AB6F6F06E109FCDC550C2EEC00B (TurretMachineGun_t8A92F40FBBDC488B54284FFF5FEEC92CEA48818C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretMachineGun_Update_m5B90E21E5A181AB6F6F06E109FCDC550C2EEC00B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GamePauseManager.instance.GamePaused)
		GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284 * L_0 = ((GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_StaticFields*)il2cpp_codegen_static_fields_for(GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_il2cpp_TypeInfo_var))->get_instance_5();
		NullCheck(L_0);
		bool L_1 = GamePauseManager_get_GamePaused_m7B1A9569EA4C87E4B9762AE427894DD8C58C9372_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// BaseUpdateCalls();
		VirtActionInvoker0::Invoke(8 /* System.Void SerenityGarden.LogicProcessBase::BaseUpdateCalls() */, __this);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretMachineGun::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretMachineGun_Attack_m4643157D53C01D5758494D7E416735BB55D01D68 (TurretMachineGun_t8A92F40FBBDC488B54284FFF5FEEC92CEA48818C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretMachineGun_Attack_m4643157D53C01D5758494D7E416735BB55D01D68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Target != null)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_0 = TurretBase_get_Target_m79F6FB8FB7A4BC5386110C436A950317E0C466D3_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_008d;
		}
	}
	{
		// HelperMethods.RotateObjTowardsTarget(partToRotate.transform, Target.transform.position, true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ((TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 *)__this)->get_partToRotate_10();
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_4 = TurretBase_get_Target_m79F6FB8FB7A4BC5386110C436A950317E0C466D3_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HelperMethods_tF794A64CE21A4C293EF6848144CEA37A7D926AE4_il2cpp_TypeInfo_var);
		HelperMethods_RotateObjTowardsTarget_mB278065F49C57CC536D0B89E2B4846D1C788863A(L_3, L_6, (bool)1, /*hidden argument*/NULL);
		// BulletMovement bulletScript = InstantiationManager.instance.InstantiateWithCheck(bulletPrefab, firePoint.transform.position, firePoint.transform.rotation, PhotonObj.Bullet).GetComponent<BulletMovement>();
		InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D * L_7 = ((InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D_StaticFields*)il2cpp_codegen_static_fields_for(InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_bulletPrefab_39();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = ((TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 *)__this)->get_firePoint_11();
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_10, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = ((TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 *)__this)->get_firePoint_11();
		NullCheck(L_12);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_13, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = InstantiationManager_InstantiateWithCheck_mDE2A12B9A41A47A3EFD58C01BE8477F4E7AFC426(L_7, L_8, L_11, L_14, 3, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL, /*hidden argument*/NULL);
		NullCheck(L_15);
		BulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5 * L_16 = GameObject_GetComponent_TisBulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5_mD121EF1455C0C0F9868B4E75912627E0D6582ACB(L_15, /*hidden argument*/GameObject_GetComponent_TisBulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5_mD121EF1455C0C0F9868B4E75912627E0D6582ACB_RuntimeMethod_var);
		// bulletScript.damage = Damage;
		BulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5 * L_17 = L_16;
		float L_18 = TurretBase_get_Damage_mEE7B3381C758C77C36D007C86AE25B75F761BAAF_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		L_17->set_damage_9(L_18);
		// bulletScript.SetTarget(Target.gameObject);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_19 = TurretBase_get_Target_m79F6FB8FB7A4BC5386110C436A950317E0C466D3_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		BulletMovement_SetTarget_mAFC14CB0B4BC5B7AB2B25207E78FF3FA71E9C0E1_inline(L_17, L_20, /*hidden argument*/NULL);
		// LastAttackTime = Time.time;
		float L_21 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		TurretBase_set_LastAttackTime_m77B277C99B3D6B4986C14A903E27A9AC245DDFF3_inline(__this, L_21, /*hidden argument*/NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretMachineGun::FindTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretMachineGun_FindTarget_m229269333553572AC9004332D3DF99641B637E4B (TurretMachineGun_t8A92F40FBBDC488B54284FFF5FEEC92CEA48818C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretMachineGun_FindTarget_m229269333553572AC9004332D3DF99641B637E4B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * V_0 = NULL;
	EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * V_1 = NULL;
	float V_2 = 0.0f;
	ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// Collider[] hits = Physics.OverlapSphere(transform.position, Range / 2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = TurretBase_get_Range_m04A266B69890546C41E5AE5BCDEB761CA7CA93E4_inline(__this, /*hidden argument*/NULL);
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_3 = Physics_OverlapSphere_m354A92672F7A6DE59EF1285D02D62247F46A5D84(L_1, ((float)((float)L_2/(float)(2.0f))), /*hidden argument*/NULL);
		// EnemyBase _target = null;
		V_0 = (EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F *)NULL;
		// float minDist = float.MaxValue;
		V_2 = ((std::numeric_limits<float>::max)());
		// foreach (Collider item in hits)
		V_3 = L_3;
		V_4 = 0;
		goto IL_009b;
	}

IL_002a:
	{
		// foreach (Collider item in hits)
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_4 = V_3;
		int32_t L_5 = V_4;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		// aux = item.transform.root.gameObject.GetComponent<EnemyBase>();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Transform_get_root_m101A8B5C2CC6D868B6B66EEDBD5336FC1EB5DDD6(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_11 = GameObject_GetComponent_TisEnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F_m185C70C01C6A98844C6DA396B9FF9205EC35C205(L_10, /*hidden argument*/GameObject_GetComponent_TisEnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F_m185C70C01C6A98844C6DA396B9FF9205EC35C205_RuntimeMethod_var);
		V_1 = L_11;
		// if (aux != null && HelperMethods.SquaredDistance(transform.position, aux.transform.position) < minDist)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_12, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0095;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_14, /*hidden argument*/NULL);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_16 = V_1;
		NullCheck(L_16);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HelperMethods_tF794A64CE21A4C293EF6848144CEA37A7D926AE4_il2cpp_TypeInfo_var);
		float L_19 = HelperMethods_SquaredDistance_m8FF4B6506494CB66B13643F6A4CE4BDC6433CCC6(L_15, L_18, /*hidden argument*/NULL);
		float L_20 = V_2;
		if ((!(((float)L_19) < ((float)L_20))))
		{
			goto IL_0095;
		}
	}
	{
		// _target = aux;
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_21 = V_1;
		V_0 = L_21;
		// minDist = HelperMethods.SquaredDistance(transform.position, aux.transform.position);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_22, /*hidden argument*/NULL);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_24 = V_1;
		NullCheck(L_24);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HelperMethods_tF794A64CE21A4C293EF6848144CEA37A7D926AE4_il2cpp_TypeInfo_var);
		float L_27 = HelperMethods_SquaredDistance_m8FF4B6506494CB66B13643F6A4CE4BDC6433CCC6(L_23, L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		// if (aux == LockOnManager.SelectedEnemy)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_28 = V_1;
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_29 = LockOnManager_get_SelectedEnemy_m7369E961F04C315C52362153FE0651F323BA2E0B_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_30 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_28, L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_00a2;
		}
	}

IL_0095:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_009b:
	{
		// foreach (Collider item in hits)
		int32_t L_32 = V_4;
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_33 = V_3;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))))
		{
			goto IL_002a;
		}
	}

IL_00a2:
	{
		// foundTarget = _target;
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_34 = V_0;
		((TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 *)__this)->set_foundTarget_16(L_34);
		// lastSearchTargetTime = Time.time;
		float L_35 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		((TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 *)__this)->set_lastSearchTargetTime_15(L_35);
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretMachineGun::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretMachineGun__ctor_mDC190BDC6D3914812F4041A8A6D11B1169A3DDFD (TurretMachineGun_t8A92F40FBBDC488B54284FFF5FEEC92CEA48818C * __this, const RuntimeMethod* method)
{
	{
		BuildableTurret__ctor_mBE86258842D47DE706BD2140C6E613C46865E833(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single SerenityGarden.TurretPermanentUpgrades::GetMultiplier(SerenityGarden.UpgradeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TurretPermanentUpgrades_GetMultiplier_mCFADEEFB82542B1197F1617B039AA96C2767D3F9 (TurretPermanentUpgrades_t3961F1EB370D4D942BACB195FBF68BD75CEEBA7D * __this, int32_t ___type0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * V_1 = NULL;
	{
		// for(int index = 0; index < upgrades.Length; index++)
		V_0 = 0;
		goto IL_0046;
	}

IL_0004:
	{
		// if (upgrades[index].type == type)
		PermanentUpgradeU5BU5D_t6C13DE4C6C8D4B652FA96134A7A9BF4D3E48F6DC* L_0 = __this->get_upgrades_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		int32_t L_4 = L_3->get_type_0();
		int32_t L_5 = ___type0;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0042;
		}
	}
	{
		// PermanentUpgrade item = upgrades[index];
		PermanentUpgradeU5BU5D_t6C13DE4C6C8D4B652FA96134A7A9BF4D3E48F6DC* L_6 = __this->get_upgrades_5();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		// return item.minMultiplier + (item.maxMultiplier - item.minMultiplier) * item.currentLevel / item.maxLevel;
		PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * L_10 = V_1;
		NullCheck(L_10);
		float L_11 = L_10->get_minMultiplier_1();
		PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * L_12 = V_1;
		NullCheck(L_12);
		float L_13 = L_12->get_maxMultiplier_2();
		PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * L_14 = V_1;
		NullCheck(L_14);
		float L_15 = L_14->get_minMultiplier_1();
		PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_currentLevel_5();
		PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_maxLevel_6();
		return ((float)il2cpp_codegen_add((float)L_11, (float)((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_13, (float)L_15)), (float)(((float)((float)L_17)))))/(float)(((float)((float)L_19)))))));
	}

IL_0042:
	{
		// for(int index = 0; index < upgrades.Length; index++)
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0046:
	{
		// for(int index = 0; index < upgrades.Length; index++)
		int32_t L_21 = V_0;
		PermanentUpgradeU5BU5D_t6C13DE4C6C8D4B652FA96134A7A9BF4D3E48F6DC* L_22 = __this->get_upgrades_5();
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))))
		{
			goto IL_0004;
		}
	}
	{
		// return 1;
		return (1.0f);
	}
}
// System.Void SerenityGarden.TurretPermanentUpgrades::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretPermanentUpgrades__ctor_mE7B34767BE850429765E2982B96D25D501DD55C6 (TurretPermanentUpgrades_t3961F1EB370D4D942BACB195FBF68BD75CEEBA7D * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SerenityGarden.TurretRailgun::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretRailgun_Awake_m2A095E117B00F99637866600F62AE2FB48B48EFC (TurretRailgun_t71400EE018F6A7159144942B33599565CE4F05FD * __this, const RuntimeMethod* method)
{
	{
		// BaseAwakeCalls();
		VirtActionInvoker0::Invoke(6 /* System.Void SerenityGarden.LogicProcessBase::BaseAwakeCalls() */, __this);
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretRailgun::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretRailgun_Start_m92FE39AC378A9EFCF3E3CB892ACAA8895057D2FA (TurretRailgun_t71400EE018F6A7159144942B33599565CE4F05FD * __this, const RuntimeMethod* method)
{
	{
		// BaseStartCalls();
		VirtActionInvoker0::Invoke(7 /* System.Void SerenityGarden.LogicProcessBase::BaseStartCalls() */, __this);
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretRailgun::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretRailgun_Update_mECF16A35F9C7D99CD98E046E0A530D528D9E341A (TurretRailgun_t71400EE018F6A7159144942B33599565CE4F05FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretRailgun_Update_mECF16A35F9C7D99CD98E046E0A530D528D9E341A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GamePauseManager.instance.GamePaused)
		GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284 * L_0 = ((GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_StaticFields*)il2cpp_codegen_static_fields_for(GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_il2cpp_TypeInfo_var))->get_instance_5();
		NullCheck(L_0);
		bool L_1 = GamePauseManager_get_GamePaused_m7B1A9569EA4C87E4B9762AE427894DD8C58C9372_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// BaseUpdateCalls();
		VirtActionInvoker0::Invoke(8 /* System.Void SerenityGarden.LogicProcessBase::BaseUpdateCalls() */, __this);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretRailgun::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretRailgun_Attack_mCE726329142D06552ABDED8E1738E004B7BABA09 (TurretRailgun_t71400EE018F6A7159144942B33599565CE4F05FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretRailgun_Attack_mCE726329142D06552ABDED8E1738E004B7BABA09_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Target != null)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_0 = TurretBase_get_Target_m79F6FB8FB7A4BC5386110C436A950317E0C466D3_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_008d;
		}
	}
	{
		// HelperMethods.RotateObjTowardsTarget(partToRotate.transform, Target.transform.position, true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ((TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 *)__this)->get_partToRotate_10();
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_4 = TurretBase_get_Target_m79F6FB8FB7A4BC5386110C436A950317E0C466D3_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HelperMethods_tF794A64CE21A4C293EF6848144CEA37A7D926AE4_il2cpp_TypeInfo_var);
		HelperMethods_RotateObjTowardsTarget_mB278065F49C57CC536D0B89E2B4846D1C788863A(L_3, L_6, (bool)1, /*hidden argument*/NULL);
		// BulletMovement bulletScript = InstantiationManager.instance.InstantiateWithCheck(bulletPrefab, firePoint.transform.position, firePoint.transform.rotation, PhotonObj.Bullet).GetComponent<BulletMovement>();
		InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D * L_7 = ((InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D_StaticFields*)il2cpp_codegen_static_fields_for(InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_bulletPrefab_39();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = ((TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 *)__this)->get_firePoint_11();
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_10, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = ((TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 *)__this)->get_firePoint_11();
		NullCheck(L_12);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_13, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = InstantiationManager_InstantiateWithCheck_mDE2A12B9A41A47A3EFD58C01BE8477F4E7AFC426(L_7, L_8, L_11, L_14, 3, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL, /*hidden argument*/NULL);
		NullCheck(L_15);
		BulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5 * L_16 = GameObject_GetComponent_TisBulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5_mD121EF1455C0C0F9868B4E75912627E0D6582ACB(L_15, /*hidden argument*/GameObject_GetComponent_TisBulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5_mD121EF1455C0C0F9868B4E75912627E0D6582ACB_RuntimeMethod_var);
		// bulletScript.damage = Damage;
		BulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5 * L_17 = L_16;
		float L_18 = TurretBase_get_Damage_mEE7B3381C758C77C36D007C86AE25B75F761BAAF_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		L_17->set_damage_9(L_18);
		// bulletScript.SetTarget(Target.gameObject);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_19 = TurretBase_get_Target_m79F6FB8FB7A4BC5386110C436A950317E0C466D3_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		BulletMovement_SetTarget_mAFC14CB0B4BC5B7AB2B25207E78FF3FA71E9C0E1_inline(L_17, L_20, /*hidden argument*/NULL);
		// LastAttackTime = Time.time;
		float L_21 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		TurretBase_set_LastAttackTime_m77B277C99B3D6B4986C14A903E27A9AC245DDFF3_inline(__this, L_21, /*hidden argument*/NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretRailgun::FindTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretRailgun_FindTarget_mD2396735100B35E602E6A5E6D9F23DCAA44AE946 (TurretRailgun_t71400EE018F6A7159144942B33599565CE4F05FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretRailgun_FindTarget_mD2396735100B35E602E6A5E6D9F23DCAA44AE946_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* V_0 = NULL;
	EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * V_1 = NULL;
	EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * V_2 = NULL;
	float V_3 = 0.0f;
	ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// Collider[] hits = Physics.OverlapSphere(transform.position, Range / 2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = TurretBase_get_Range_m04A266B69890546C41E5AE5BCDEB761CA7CA93E4_inline(__this, /*hidden argument*/NULL);
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_3 = Physics_OverlapSphere_m354A92672F7A6DE59EF1285D02D62247F46A5D84(L_1, ((float)((float)L_2/(float)(2.0f))), /*hidden argument*/NULL);
		V_0 = L_3;
		// EnemyBase _target = null;
		V_1 = (EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F *)NULL;
		// float minDist = float.MaxValue;
		V_3 = ((std::numeric_limits<float>::max)());
		// foreach (Collider item in hits)
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_4 = V_0;
		V_4 = L_4;
		V_5 = 0;
		goto IL_00a8;
	}

IL_002d:
	{
		// foreach (Collider item in hits)
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_5 = V_4;
		int32_t L_6 = V_5;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// aux = item.transform.root.gameObject.GetComponent<EnemyBase>();
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Transform_get_root_m101A8B5C2CC6D868B6B66EEDBD5336FC1EB5DDD6(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_12 = GameObject_GetComponent_TisEnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F_m185C70C01C6A98844C6DA396B9FF9205EC35C205(L_11, /*hidden argument*/GameObject_GetComponent_TisEnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F_m185C70C01C6A98844C6DA396B9FF9205EC35C205_RuntimeMethod_var);
		V_2 = L_12;
		// if (aux != null && HelperMethods.SquaredDistance(transform.position, aux.transform.position) < minDist)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_13, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00a2;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_15, /*hidden argument*/NULL);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_17 = V_2;
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HelperMethods_tF794A64CE21A4C293EF6848144CEA37A7D926AE4_il2cpp_TypeInfo_var);
		float L_20 = HelperMethods_SquaredDistance_m8FF4B6506494CB66B13643F6A4CE4BDC6433CCC6(L_16, L_19, /*hidden argument*/NULL);
		float L_21 = V_3;
		if ((!(((float)L_20) < ((float)L_21))))
		{
			goto IL_00a2;
		}
	}
	{
		// if (aux.EnemyType == EnemyType.Ranged)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = EnemyBase_get_EnemyType_m9E6660DF9416C496D4EFE0AB71423B617EE33062_inline(L_22, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)1))))
		{
			goto IL_0095;
		}
	}
	{
		// _target = aux;
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_24 = V_2;
		V_1 = L_24;
		// minDist = HelperMethods.SquaredDistance(transform.position, aux.transform.position);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_25, /*hidden argument*/NULL);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_27 = V_2;
		NullCheck(L_27);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HelperMethods_tF794A64CE21A4C293EF6848144CEA37A7D926AE4_il2cpp_TypeInfo_var);
		float L_30 = HelperMethods_SquaredDistance_m8FF4B6506494CB66B13643F6A4CE4BDC6433CCC6(L_26, L_29, /*hidden argument*/NULL);
		V_3 = L_30;
	}

IL_0095:
	{
		// if (aux == LockOnManager.SelectedEnemy)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_31 = V_2;
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_32 = LockOnManager_get_SelectedEnemy_m7369E961F04C315C52362153FE0651F323BA2E0B_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_33 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_31, L_32, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_00b3;
		}
	}

IL_00a2:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00a8:
	{
		// foreach (Collider item in hits)
		int32_t L_35 = V_5;
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_36 = V_4;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))))
		{
			goto IL_002d;
		}
	}

IL_00b3:
	{
		// if (_target == null)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_37 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_38 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_37, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_013f;
		}
	}
	{
		// foreach (Collider item in hits)
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_39 = V_0;
		V_4 = L_39;
		V_5 = 0;
		goto IL_0137;
	}

IL_00c7:
	{
		// foreach (Collider item in hits)
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_40 = V_4;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		// aux = item.gameObject.GetComponent<EnemyBase>();
		NullCheck(L_43);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_44 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_45 = GameObject_GetComponent_TisEnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F_m185C70C01C6A98844C6DA396B9FF9205EC35C205(L_44, /*hidden argument*/GameObject_GetComponent_TisEnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F_m185C70C01C6A98844C6DA396B9FF9205EC35C205_RuntimeMethod_var);
		V_2 = L_45;
		// if (aux != null && HelperMethods.SquaredDistance(transform.position, aux.transform.position) < minDist)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_46 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_47 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_46, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_0131;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_48 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_48);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_48, /*hidden argument*/NULL);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_50 = V_2;
		NullCheck(L_50);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_51 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HelperMethods_tF794A64CE21A4C293EF6848144CEA37A7D926AE4_il2cpp_TypeInfo_var);
		float L_53 = HelperMethods_SquaredDistance_m8FF4B6506494CB66B13643F6A4CE4BDC6433CCC6(L_49, L_52, /*hidden argument*/NULL);
		float L_54 = V_3;
		if ((!(((float)L_53) < ((float)L_54))))
		{
			goto IL_0131;
		}
	}
	{
		// if (aux.EnemyType == EnemyType.Melee)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_55 = V_2;
		NullCheck(L_55);
		int32_t L_56 = EnemyBase_get_EnemyType_m9E6660DF9416C496D4EFE0AB71423B617EE33062_inline(L_55, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_0124;
		}
	}
	{
		// _target = aux;
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_57 = V_2;
		V_1 = L_57;
		// minDist = HelperMethods.SquaredDistance(transform.position, aux.transform.position);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_58 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_58);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_59 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_58, /*hidden argument*/NULL);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_60 = V_2;
		NullCheck(L_60);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_61 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_60, /*hidden argument*/NULL);
		NullCheck(L_61);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_61, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HelperMethods_tF794A64CE21A4C293EF6848144CEA37A7D926AE4_il2cpp_TypeInfo_var);
		float L_63 = HelperMethods_SquaredDistance_m8FF4B6506494CB66B13643F6A4CE4BDC6433CCC6(L_59, L_62, /*hidden argument*/NULL);
		V_3 = L_63;
	}

IL_0124:
	{
		// if (aux == LockOnManager.SelectedEnemy)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_64 = V_2;
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_65 = LockOnManager_get_SelectedEnemy_m7369E961F04C315C52362153FE0651F323BA2E0B_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_66 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_64, L_65, /*hidden argument*/NULL);
		if (L_66)
		{
			goto IL_013f;
		}
	}

IL_0131:
	{
		int32_t L_67 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
	}

IL_0137:
	{
		// foreach (Collider item in hits)
		int32_t L_68 = V_5;
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_69 = V_4;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))))
		{
			goto IL_00c7;
		}
	}

IL_013f:
	{
		// foundTarget = _target;
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_70 = V_1;
		((TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 *)__this)->set_foundTarget_16(L_70);
		// lastSearchTargetTime = Time.time;
		float L_71 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		((TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 *)__this)->set_lastSearchTargetTime_15(L_71);
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretRailgun::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretRailgun__ctor_mF42FB9368DDEDF3CDBAF5C7FF9851039FE239E01 (TurretRailgun_t71400EE018F6A7159144942B33599565CE4F05FD * __this, const RuntimeMethod* method)
{
	{
		BuildableTurret__ctor_mBE86258842D47DE706BD2140C6E613C46865E833(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SerenityGarden.TurretStatusScriptable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretStatusScriptable__ctor_m63DBAA9E0BB399C3332E05EFD76DD79DBF1D1B00 (TurretStatusScriptable_tC2CA1463FF3352C59A01B5547EB7A385CD97F9A0 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SerenityGarden.TurretVulkan::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretVulkan_Awake_m19ADE5AC1A4EC3443DE0B5D3577A8B57BCD458A0 (TurretVulkan_tE60C25A88F22EA33484804BED57F7ED0B8614665 * __this, const RuntimeMethod* method)
{
	{
		// BaseAwakeCalls();
		VirtActionInvoker0::Invoke(6 /* System.Void SerenityGarden.LogicProcessBase::BaseAwakeCalls() */, __this);
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretVulkan::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretVulkan_Start_m30F526F435773587B866F42B1F744670B15DE58E (TurretVulkan_tE60C25A88F22EA33484804BED57F7ED0B8614665 * __this, const RuntimeMethod* method)
{
	{
		// BaseStartCalls();
		VirtActionInvoker0::Invoke(7 /* System.Void SerenityGarden.LogicProcessBase::BaseStartCalls() */, __this);
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretVulkan::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretVulkan_Update_m842BBADD1AF6510FE7D0EF79044B7FA15A7C510F (TurretVulkan_tE60C25A88F22EA33484804BED57F7ED0B8614665 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretVulkan_Update_m842BBADD1AF6510FE7D0EF79044B7FA15A7C510F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GamePauseManager.instance.GamePaused)
		GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284 * L_0 = ((GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_StaticFields*)il2cpp_codegen_static_fields_for(GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_il2cpp_TypeInfo_var))->get_instance_5();
		NullCheck(L_0);
		bool L_1 = GamePauseManager_get_GamePaused_m7B1A9569EA4C87E4B9762AE427894DD8C58C9372_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// BaseUpdateCalls();
		VirtActionInvoker0::Invoke(8 /* System.Void SerenityGarden.LogicProcessBase::BaseUpdateCalls() */, __this);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretVulkan::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretVulkan_Attack_mEBFB342E28C3C85ABAB3565299E574C094B1D5CA (TurretVulkan_tE60C25A88F22EA33484804BED57F7ED0B8614665 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretVulkan_Attack_mEBFB342E28C3C85ABAB3565299E574C094B1D5CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Target != null)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_0 = TurretBase_get_Target_m79F6FB8FB7A4BC5386110C436A950317E0C466D3_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_008d;
		}
	}
	{
		// HelperMethods.RotateObjTowardsTarget(partToRotate.transform, Target.transform.position, true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ((TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 *)__this)->get_partToRotate_10();
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_4 = TurretBase_get_Target_m79F6FB8FB7A4BC5386110C436A950317E0C466D3_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HelperMethods_tF794A64CE21A4C293EF6848144CEA37A7D926AE4_il2cpp_TypeInfo_var);
		HelperMethods_RotateObjTowardsTarget_mB278065F49C57CC536D0B89E2B4846D1C788863A(L_3, L_6, (bool)1, /*hidden argument*/NULL);
		// BulletMovement bulletScript = InstantiationManager.instance.InstantiateWithCheck(bulletPrefab, firePoint.transform.position, firePoint.transform.rotation, PhotonObj.Bullet).GetComponent<BulletMovement>();
		InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D * L_7 = ((InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D_StaticFields*)il2cpp_codegen_static_fields_for(InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_bulletPrefab_39();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = ((TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 *)__this)->get_firePoint_11();
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_10, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = ((TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 *)__this)->get_firePoint_11();
		NullCheck(L_12);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_13, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = InstantiationManager_InstantiateWithCheck_mDE2A12B9A41A47A3EFD58C01BE8477F4E7AFC426(L_7, L_8, L_11, L_14, 3, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL, /*hidden argument*/NULL);
		NullCheck(L_15);
		BulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5 * L_16 = GameObject_GetComponent_TisBulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5_mD121EF1455C0C0F9868B4E75912627E0D6582ACB(L_15, /*hidden argument*/GameObject_GetComponent_TisBulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5_mD121EF1455C0C0F9868B4E75912627E0D6582ACB_RuntimeMethod_var);
		// bulletScript.damage = Damage;
		BulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5 * L_17 = L_16;
		float L_18 = TurretBase_get_Damage_mEE7B3381C758C77C36D007C86AE25B75F761BAAF_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		L_17->set_damage_9(L_18);
		// bulletScript.SetTarget(Target.gameObject);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_19 = TurretBase_get_Target_m79F6FB8FB7A4BC5386110C436A950317E0C466D3_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		BulletMovement_SetTarget_mAFC14CB0B4BC5B7AB2B25207E78FF3FA71E9C0E1_inline(L_17, L_20, /*hidden argument*/NULL);
		// LastAttackTime = Time.time;
		float L_21 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		TurretBase_set_LastAttackTime_m77B277C99B3D6B4986C14A903E27A9AC245DDFF3_inline(__this, L_21, /*hidden argument*/NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretVulkan::FindTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretVulkan_FindTarget_m6D754723D75BDEFAACAF0EF825007293E68513CB (TurretVulkan_tE60C25A88F22EA33484804BED57F7ED0B8614665 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TurretVulkan_FindTarget_m6D754723D75BDEFAACAF0EF825007293E68513CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * V_0 = NULL;
	EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * V_1 = NULL;
	float V_2 = 0.0f;
	ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// Collider[] hits = Physics.OverlapSphere(transform.position, Range / 2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = TurretBase_get_Range_m04A266B69890546C41E5AE5BCDEB761CA7CA93E4_inline(__this, /*hidden argument*/NULL);
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_3 = Physics_OverlapSphere_m354A92672F7A6DE59EF1285D02D62247F46A5D84(L_1, ((float)((float)L_2/(float)(2.0f))), /*hidden argument*/NULL);
		// EnemyBase _target = null;
		V_0 = (EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F *)NULL;
		// float minDist = float.MaxValue;
		V_2 = ((std::numeric_limits<float>::max)());
		// foreach (Collider item in hits)
		V_3 = L_3;
		V_4 = 0;
		goto IL_00b0;
	}

IL_002d:
	{
		// foreach (Collider item in hits)
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_4 = V_3;
		int32_t L_5 = V_4;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		// aux = item.transform.root.gameObject.GetComponent<EnemyBase>();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Transform_get_root_m101A8B5C2CC6D868B6B66EEDBD5336FC1EB5DDD6(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_11 = GameObject_GetComponent_TisEnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F_m185C70C01C6A98844C6DA396B9FF9205EC35C205(L_10, /*hidden argument*/GameObject_GetComponent_TisEnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F_m185C70C01C6A98844C6DA396B9FF9205EC35C205_RuntimeMethod_var);
		V_1 = L_11;
		// if (aux != null && HelperMethods.SquaredDistance(transform.position, aux.transform.position) < minDist)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_12, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00aa;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_14, /*hidden argument*/NULL);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_16 = V_1;
		NullCheck(L_16);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HelperMethods_tF794A64CE21A4C293EF6848144CEA37A7D926AE4_il2cpp_TypeInfo_var);
		float L_19 = HelperMethods_SquaredDistance_m8FF4B6506494CB66B13643F6A4CE4BDC6433CCC6(L_15, L_18, /*hidden argument*/NULL);
		float L_20 = V_2;
		if ((!(((float)L_19) < ((float)L_20))))
		{
			goto IL_00aa;
		}
	}
	{
		// if (aux.EnemyType == EnemyType.Flying || aux.EnemyType == EnemyType.Ambusher)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22 = EnemyBase_get_EnemyType_m9E6660DF9416C496D4EFE0AB71423B617EE33062_inline(L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_22) == ((int32_t)2)))
		{
			goto IL_007f;
		}
	}
	{
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_23 = V_1;
		NullCheck(L_23);
		int32_t L_24 = EnemyBase_get_EnemyType_m9E6660DF9416C496D4EFE0AB71423B617EE33062_inline(L_23, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_24) == ((uint32_t)3))))
		{
			goto IL_009d;
		}
	}

IL_007f:
	{
		// _target = aux;
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_25 = V_1;
		V_0 = L_25;
		// minDist = HelperMethods.SquaredDistance(transform.position, aux.transform.position);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_26, /*hidden argument*/NULL);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_28 = V_1;
		NullCheck(L_28);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HelperMethods_tF794A64CE21A4C293EF6848144CEA37A7D926AE4_il2cpp_TypeInfo_var);
		float L_31 = HelperMethods_SquaredDistance_m8FF4B6506494CB66B13643F6A4CE4BDC6433CCC6(L_27, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
	}

IL_009d:
	{
		// if (aux == LockOnManager.SelectedEnemy)
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_32 = V_1;
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_33 = LockOnManager_get_SelectedEnemy_m7369E961F04C315C52362153FE0651F323BA2E0B_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_34 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_32, L_33, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_00ba;
		}
	}

IL_00aa:
	{
		int32_t L_35 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00b0:
	{
		// foreach (Collider item in hits)
		int32_t L_36 = V_4;
		ColliderU5BU5D_t70D1FDAE17E4359298B2BAA828048D1B7CFFE252* L_37 = V_3;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))))
		{
			goto IL_002d;
		}
	}

IL_00ba:
	{
		// foundTarget = _target;
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_38 = V_0;
		((TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 *)__this)->set_foundTarget_16(L_38);
		// lastSearchTargetTime = Time.time;
		float L_39 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		((TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 *)__this)->set_lastSearchTargetTime_15(L_39);
		// }
		return;
	}
}
// System.Void SerenityGarden.TurretVulkan::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretVulkan__ctor_m6782E42D84BBF0C354B4AC4C9D43DACB15CA1CF7 (TurretVulkan_tE60C25A88F22EA33484804BED57F7ED0B8614665 * __this, const RuntimeMethod* method)
{
	{
		BuildableTurret__ctor_mBE86258842D47DE706BD2140C6E613C46865E833(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SerenityGarden.UIUpgradeRow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIUpgradeRow_Start_mB020C8D7C7F53B9DC86A5ACDEF07D7ED1C919C55 (UIUpgradeRow_t0D7CA0173330442E3CA78B85BFD5AF948D0CF79B * __this, const RuntimeMethod* method)
{
	{
		// UpdateUIImages(true);
		UIUpgradeRow_UpdateUIImages_mF81519094C8D4E8ADA2B48FADBBE0190630C64A7(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SerenityGarden.UIUpgradeRow::Init(SerenityGarden.PermanentUpgrade)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIUpgradeRow_Init_m85A188046E2D1D1255C68F33B9558C99480E4BCA (UIUpgradeRow_t0D7CA0173330442E3CA78B85BFD5AF948D0CF79B * __this, PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * ____permanentUpgrade0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIUpgradeRow_Init_m85A188046E2D1D1255C68F33B9558C99480E4BCA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// upgrade = _permanentUpgrade;
		PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * L_0 = ____permanentUpgrade0;
		__this->set_upgrade_11(L_0);
		// upgradeText.text = _permanentUpgrade.type.ToString();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_1 = __this->get_upgradeText_5();
		PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * L_2 = ____permanentUpgrade0;
		NullCheck(L_2);
		int32_t* L_3 = L_2->get_address_of_type_0();
		RuntimeObject * L_4 = Box(UpgradeType_tD83A19CDA609103A6CA3E9CB57471EB9834E9763_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		*L_3 = *(int32_t*)UnBox(L_4);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_5);
		// CalculateCost();
		UIUpgradeRow_CalculateCost_m1127E6158750E1C92DC5C3316B2389A686B22572(__this, /*hidden argument*/NULL);
		// UpdateUIImages(false);
		UIUpgradeRow_UpdateUIImages_mF81519094C8D4E8ADA2B48FADBBE0190630C64A7(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SerenityGarden.UIUpgradeRow::CalculateCost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIUpgradeRow_CalculateCost_m1127E6158750E1C92DC5C3316B2389A686B22572 (UIUpgradeRow_t0D7CA0173330442E3CA78B85BFD5AF948D0CF79B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIUpgradeRow_CalculateCost_m1127E6158750E1C92DC5C3316B2389A686B22572_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// if (upgrade.currentLevel == upgrade.maxLevel)
		PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * L_0 = __this->get_upgrade_11();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_currentLevel_5();
		PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * L_2 = __this->get_upgrade_11();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_maxLevel_6();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_003a;
		}
	}
	{
		// costText.text = "MAX";
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_4 = __this->get_costText_4();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, _stringLiteral7B186E235F284107DF6B4DBE6060D2B6A5D9F1E5);
		// costText.color = maxLevelColor;
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_5 = __this->get_costText_4();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_6 = __this->get_maxLevelColor_10();
		NullCheck(L_5);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// }
		return;
	}

IL_003a:
	{
		// float cost = upgrade.startCost;
		PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * L_7 = __this->get_upgrade_11();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_startCost_3();
		V_0 = (((float)((float)L_8)));
		// for (int index = 0; index < upgrade.currentLevel; index++)
		V_1 = 0;
		goto IL_005d;
	}

IL_004b:
	{
		// cost *= upgrade.costMultiplierPerLevel;
		float L_9 = V_0;
		PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * L_10 = __this->get_upgrade_11();
		NullCheck(L_10);
		float L_11 = L_10->get_costMultiplierPerLevel_4();
		V_0 = ((float)il2cpp_codegen_multiply((float)L_9, (float)L_11));
		// for (int index = 0; index < upgrade.currentLevel; index++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_005d:
	{
		// for (int index = 0; index < upgrade.currentLevel; index++)
		int32_t L_13 = V_1;
		PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * L_14 = __this->get_upgrade_11();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_currentLevel_5();
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_004b;
		}
	}
	{
		// upgradeCost = (int)cost;
		float L_16 = V_0;
		__this->set_upgradeCost_12((((int32_t)((int32_t)L_16))));
		// costText.text = "$ " + upgradeCost;
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_17 = __this->get_costText_4();
		int32_t L_18 = __this->get_upgradeCost_12();
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral48BB4CCC1851FDF5A40944978528D0D811AAA079, L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_17, L_21);
		// ColorCostText();
		UIUpgradeRow_ColorCostText_mFFFE64CEDDB962FE4FC0F680EE4F6B51E2566296(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SerenityGarden.UIUpgradeRow::UpdateUIImages(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIUpgradeRow_UpdateUIImages_mF81519094C8D4E8ADA2B48FADBBE0190630C64A7 (UIUpgradeRow_t0D7CA0173330442E3CA78B85BFD5AF948D0CF79B * __this, bool ___deactivateAll0, const RuntimeMethod* method)
{
	ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if(deactivateAll)
		bool L_0 = ___deactivateAll0;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// foreach (Image img in upgradeImages)
		ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* L_1 = __this->get_upgradeImages_6();
		V_0 = L_1;
		V_1 = 0;
		goto IL_0020;
	}

IL_000e:
	{
		// foreach (Image img in upgradeImages)
		ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// img.gameObject.SetActive(false);
		NullCheck(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_6, (bool)0, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0020:
	{
		// foreach (Image img in upgradeImages)
		int32_t L_8 = V_1;
		ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}

IL_0027:
	{
		// for(int index = 0; index < upgrade.currentLevel; index++)
		V_2 = 0;
		goto IL_0042;
	}

IL_002b:
	{
		// upgradeImages[index].gameObject.SetActive(true);
		ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* L_10 = __this->get_upgradeImages_6();
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_14, (bool)1, /*hidden argument*/NULL);
		// for(int index = 0; index < upgrade.currentLevel; index++)
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0042:
	{
		// for(int index = 0; index < upgrade.currentLevel; index++)
		int32_t L_16 = V_2;
		PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * L_17 = __this->get_upgrade_11();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_currentLevel_5();
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_002b;
		}
	}
	{
		// for(int index = upgrade.currentLevel; index < upgradeImages.Length; index++)
		PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * L_19 = __this->get_upgrade_11();
		NullCheck(L_19);
		int32_t L_20 = L_19->get_currentLevel_5();
		V_3 = L_20;
		goto IL_0075;
	}

IL_005e:
	{
		// upgradeImages[index].gameObject.SetActive(false);
		ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* L_21 = __this->get_upgradeImages_6();
		int32_t L_22 = V_3;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_25, (bool)0, /*hidden argument*/NULL);
		// for(int index = upgrade.currentLevel; index < upgradeImages.Length; index++)
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0075:
	{
		// for(int index = upgrade.currentLevel; index < upgradeImages.Length; index++)
		int32_t L_27 = V_3;
		ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* L_28 = __this->get_upgradeImages_6();
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))))
		{
			goto IL_005e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SerenityGarden.UIUpgradeRow::ColorCostText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIUpgradeRow_ColorCostText_mFFFE64CEDDB962FE4FC0F680EE4F6B51E2566296 (UIUpgradeRow_t0D7CA0173330442E3CA78B85BFD5AF948D0CF79B * __this, const RuntimeMethod* method)
{
	{
		// if (shopManager.CheckUpgradeCost(upgradeCost))
		ShopManager_t3BC41D78DB91E598887143A4DCF889A63D9D9D86 * L_0 = __this->get_shopManager_7();
		int32_t L_1 = __this->get_upgradeCost_12();
		NullCheck(L_0);
		bool L_2 = ShopManager_CheckUpgradeCost_m452E0E0ADD9D323FCAD6C21A9F3DDFC883F0622E(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// costText.color = costValidColor;
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_3 = __this->get_costText_4();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_4 = __this->get_costValidColor_8();
		NullCheck(L_3);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		return;
	}

IL_0025:
	{
		// costText.color = costInvalidColor;
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_5 = __this->get_costText_4();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_6 = __this->get_costInvalidColor_9();
		NullCheck(L_5);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// }
		return;
	}
}
// System.Void SerenityGarden.UIUpgradeRow::OnClick_Upgrade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIUpgradeRow_OnClick_Upgrade_m44C565CBFE94B0DF621569616EB0FDBA91DE4D0C (UIUpgradeRow_t0D7CA0173330442E3CA78B85BFD5AF948D0CF79B * __this, const RuntimeMethod* method)
{
	{
		// if(upgrade.currentLevel < upgrade.maxLevel && shopManager.CheckUpgradeCost(upgradeCost))
		PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * L_0 = __this->get_upgrade_11();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_currentLevel_5();
		PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * L_2 = __this->get_upgrade_11();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_maxLevel_6();
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_005c;
		}
	}
	{
		ShopManager_t3BC41D78DB91E598887143A4DCF889A63D9D9D86 * L_4 = __this->get_shopManager_7();
		int32_t L_5 = __this->get_upgradeCost_12();
		NullCheck(L_4);
		bool L_6 = ShopManager_CheckUpgradeCost_m452E0E0ADD9D323FCAD6C21A9F3DDFC883F0622E(L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		// upgrade.currentLevel++;
		PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * L_7 = __this->get_upgrade_11();
		PermanentUpgrade_tA8400FCEBF9BEB4C5F405201FFBAE32B6E0F0160 * L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_currentLevel_5();
		NullCheck(L_8);
		L_8->set_currentLevel_5(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		// shopManager.UpgradeProperty(upgradeCost);
		ShopManager_t3BC41D78DB91E598887143A4DCF889A63D9D9D86 * L_10 = __this->get_shopManager_7();
		int32_t L_11 = __this->get_upgradeCost_12();
		NullCheck(L_10);
		ShopManager_UpgradeProperty_m464C07C8B74D5CC6710BEED8114091597E62D36A(L_10, L_11, /*hidden argument*/NULL);
		// CalculateCost();
		UIUpgradeRow_CalculateCost_m1127E6158750E1C92DC5C3316B2389A686B22572(__this, /*hidden argument*/NULL);
		// UpdateUIImages(false);
		UIUpgradeRow_UpdateUIImages_mF81519094C8D4E8ADA2B48FADBBE0190630C64A7(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void SerenityGarden.UIUpgradeRow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIUpgradeRow__ctor_m6261C763FF23C07317BA7542490D78EA66E9C9CC (UIUpgradeRow_t0D7CA0173330442E3CA78B85BFD5AF948D0CF79B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SerenityGarden.WaveManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveManager_Awake_mA0ED3904596DBF0DD862FE555C4D35FD7B7C5533 (WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveManager_Awake_mA0ED3904596DBF0DD862FE555C4D35FD7B7C5533_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * L_0 = ((WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6_StaticFields*)il2cpp_codegen_static_fields_for(WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// Debug.LogWarning("Warning! There are multiple instances of WaveManager in the scene. Deleting from: " + gameObject.name);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_2, /*hidden argument*/NULL);
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralC7F90D3E2CFE0AD65BDE6BA16574268311B02D07, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_4, /*hidden argument*/NULL);
		// Destroy(this.gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_5, /*hidden argument*/NULL);
		// }
		goto IL_003a;
	}

IL_0034:
	{
		// instance = this;
		((WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6_StaticFields*)il2cpp_codegen_static_fields_for(WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6_il2cpp_TypeInfo_var))->set_instance_6(__this);
	}

IL_003a:
	{
		// gridManager = FindObjectOfType<HexagonalGrid>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF * L_6 = Object_FindObjectOfType_TisHexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF_m1C3ABA20749165939594D5BF593EBD4679D577AC(/*hidden argument*/Object_FindObjectOfType_TisHexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF_m1C3ABA20749165939594D5BF593EBD4679D577AC_RuntimeMethod_var);
		__this->set_gridManager_16(L_6);
		// base.BaseAwakeCalls();
		LogicProcessBase_BaseAwakeCalls_mA6B4B0CD8388DD77AB655D774D81359AFFBE30B1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SerenityGarden.WaveManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveManager_Start_m333BCF2BC0B91B1A6437E8752B87DE8439776F05 (WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveManager_Start_m333BCF2BC0B91B1A6437E8752B87DE8439776F05_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.BaseStartCalls();
		LogicProcessBase_BaseStartCalls_m59E8A35B3AD451CD80D0BEBF96051A8FD010D266(__this, /*hidden argument*/NULL);
		// buildManager = TurretBuildManager.instance;
		TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * L_0 = ((TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7_StaticFields*)il2cpp_codegen_static_fields_for(TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7_il2cpp_TypeInfo_var))->get_instance_4();
		__this->set_buildManager_17(L_0);
		// stageManager = BattleStageStateManager.instance;
		BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E * L_1 = ((BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E_StaticFields*)il2cpp_codegen_static_fields_for(BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E_il2cpp_TypeInfo_var))->get_instance_5();
		__this->set_stageManager_18(L_1);
		// stageStartButton.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_stageStartButton_8();
		NullCheck(L_2);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_2, (bool)1, /*hidden argument*/NULL);
		// waveSkipButton.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_waveSkipButton_7();
		NullCheck(L_3);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_3, (bool)0, /*hidden argument*/NULL);
		// waveSkipText = waveSkipButton.GetComponentInChildren<TextMeshProUGUI>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_waveSkipButton_7();
		NullCheck(L_4);
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_5 = GameObject_GetComponentInChildren_TisTextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_m4CE477F96983D518A70384D2D73CA1540C4CDE62(L_4, /*hidden argument*/GameObject_GetComponentInChildren_TisTextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_m4CE477F96983D518A70384D2D73CA1540C4CDE62_RuntimeMethod_var);
		__this->set_waveSkipText_19(L_5);
		// if(PhotonNetwork.IsConnected && !PhotonNetwork.IsMasterClient)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		bool L_6 = PhotonNetwork_get_IsConnected_m7F52EFE2E055CF8CA5A2CA8E62BA62E0D8760B7D(/*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		bool L_7 = PhotonNetwork_get_IsMasterClient_m73F928D3329A213C33AEF0ABC56D1940024363C6(/*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_005f;
		}
	}
	{
		// stageStartButton.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_stageStartButton_8();
		NullCheck(L_8);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_8, (bool)0, /*hidden argument*/NULL);
	}

IL_005f:
	{
		// GamePauseManager.instance.AddUnpauseEvent(OnResumeGame);
		GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284 * L_9 = ((GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_StaticFields*)il2cpp_codegen_static_fields_for(GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_il2cpp_TypeInfo_var))->get_instance_5();
		UnpauseGameEvent_tF8B3717899C31909A04021E3B7B30BC2CD7C1406 * L_10 = (UnpauseGameEvent_tF8B3717899C31909A04021E3B7B30BC2CD7C1406 *)il2cpp_codegen_object_new(UnpauseGameEvent_tF8B3717899C31909A04021E3B7B30BC2CD7C1406_il2cpp_TypeInfo_var);
		UnpauseGameEvent__ctor_m87A66FA7E32793777798F25B20F1F6E32166CA1E(L_10, __this, (intptr_t)((intptr_t)WaveManager_OnResumeGame_mF648BC96990129AFFF2E0B97CCB3F445ED799F90_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		GamePauseManager_AddUnpauseEvent_m6790ECE7C7D62681D378B783F8909C81162F183D(L_9, L_10, /*hidden argument*/NULL);
		// selectedStage = SceneDataRetainer.instance.GetStage();
		SceneDataRetainer_tDC5BF2B9D42AA0F469B4B9312A2CEA24F1F4A8C2 * L_11 = ((SceneDataRetainer_tDC5BF2B9D42AA0F469B4B9312A2CEA24F1F4A8C2_StaticFields*)il2cpp_codegen_static_fields_for(SceneDataRetainer_tDC5BF2B9D42AA0F469B4B9312A2CEA24F1F4A8C2_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_11);
		StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 * L_12 = SceneDataRetainer_GetStage_mCAF4598A6F617211C5C2A798C8BCFD48605C6FDA_inline(L_11, /*hidden argument*/NULL);
		__this->set_selectedStage_14(L_12);
		// }
		return;
	}
}
// System.Void SerenityGarden.WaveManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveManager_Update_m2DC0DCD16EA71D939C92040D5043AFAD62BDD947 (WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveManager_Update_m2DC0DCD16EA71D939C92040D5043AFAD62BDD947_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GamePauseManager.instance.GamePaused)
		GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284 * L_0 = ((GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_StaticFields*)il2cpp_codegen_static_fields_for(GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_il2cpp_TypeInfo_var))->get_instance_5();
		NullCheck(L_0);
		bool L_1 = GamePauseManager_get_GamePaused_m7B1A9569EA4C87E4B9762AE427894DD8C58C9372_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_00b2;
		}
	}
	{
		// if (spawnWaves && startedWave == false && currentWaveIndex < selectedStage.waves.Length - 1)
		bool L_2 = __this->get_spawnWaves_21();
		if (!L_2)
		{
			goto IL_00b2;
		}
	}
	{
		bool L_3 = __this->get_startedWave_13();
		if (L_3)
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_4 = __this->get_currentWaveIndex_20();
		StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 * L_5 = __this->get_selectedStage_14();
		NullCheck(L_5);
		WaveScriptableU5BU5D_t6A3A20CA18EE7F4286348D3DEF3FBC3358EE3D83* L_6 = L_5->get_waves_7();
		NullCheck(L_6);
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))), (int32_t)1)))))
		{
			goto IL_00b2;
		}
	}
	{
		// if (Time.time - lastWaveEndTime >= waveDelay)
		float L_7 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_8 = __this->get_lastWaveEndTime_12();
		float L_9 = __this->get_waveDelay_11();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8))) >= ((float)L_9))))
		{
			goto IL_0085;
		}
	}
	{
		// startedWave = true;
		__this->set_startedWave_13((bool)1);
		// currentWaveIndex++;
		int32_t L_10 = __this->get_currentWaveIndex_20();
		__this->set_currentWaveIndex_20(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		// StartCoroutine(WaveSpawner(selectedStage.waves[currentWaveIndex]));
		StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 * L_11 = __this->get_selectedStage_14();
		NullCheck(L_11);
		WaveScriptableU5BU5D_t6A3A20CA18EE7F4286348D3DEF3FBC3358EE3D83* L_12 = L_11->get_waves_7();
		int32_t L_13 = __this->get_currentWaveIndex_20();
		NullCheck(L_12);
		int32_t L_14 = L_13;
		WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		RuntimeObject* L_16 = WaveManager_WaveSpawner_m555E275C062BA1B5C2835386259EDBD316E105B5(__this, L_15, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_16, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0085:
	{
		// waveSkipText.text = string.Format("{0:00.00}", waveDelay - (Time.time - lastWaveEndTime));
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_17 = __this->get_waveSkipText_19();
		float L_18 = __this->get_waveDelay_11();
		float L_19 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_20 = __this->get_lastWaveEndTime_12();
		float L_21 = ((float)il2cpp_codegen_subtract((float)L_18, (float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_20))));
		RuntimeObject * L_22 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral8C93DD1F29227CB702A2949C2AAFD2109BDA692B, L_22, /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_17, L_23);
	}

IL_00b2:
	{
		// }
		return;
	}
}
// System.Void SerenityGarden.WaveManager::OnResumeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveManager_OnResumeGame_mF648BC96990129AFFF2E0B97CCB3F445ED799F90 (WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveManager_OnResumeGame_mF648BC96990129AFFF2E0B97CCB3F445ED799F90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lastWaveEndTime += GamePauseManager.instance.PausedTime;
		float L_0 = __this->get_lastWaveEndTime_12();
		GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284 * L_1 = ((GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_StaticFields*)il2cpp_codegen_static_fields_for(GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_il2cpp_TypeInfo_var))->get_instance_5();
		NullCheck(L_1);
		float L_2 = GamePauseManager_get_PausedTime_mA7FCB365F4BC7E23C3A8D72CB862647B33E5BB97_inline(L_1, /*hidden argument*/NULL);
		__this->set_lastWaveEndTime_12(((float)il2cpp_codegen_add((float)L_0, (float)L_2)));
		// }
		return;
	}
}
// System.Collections.IEnumerator SerenityGarden.WaveManager::WaveSpawner(SerenityGarden.WaveScriptable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaveManager_WaveSpawner_m555E275C062BA1B5C2835386259EDBD316E105B5 (WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * __this, WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC * ___wave0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveManager_WaveSpawner_m555E275C062BA1B5C2835386259EDBD316E105B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaveSpawnerU3Ed__21_t2CE338B394097B889D892CB0C000CC35E9AB5A25 * L_0 = (U3CWaveSpawnerU3Ed__21_t2CE338B394097B889D892CB0C000CC35E9AB5A25 *)il2cpp_codegen_object_new(U3CWaveSpawnerU3Ed__21_t2CE338B394097B889D892CB0C000CC35E9AB5A25_il2cpp_TypeInfo_var);
		U3CWaveSpawnerU3Ed__21__ctor_mB0737FC49189F9C6B569A4927C114038AE1D5542(L_0, 0, /*hidden argument*/NULL);
		U3CWaveSpawnerU3Ed__21_t2CE338B394097B889D892CB0C000CC35E9AB5A25 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CWaveSpawnerU3Ed__21_t2CE338B394097B889D892CB0C000CC35E9AB5A25 * L_2 = L_1;
		WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC * L_3 = ___wave0;
		NullCheck(L_2);
		L_2->set_wave_3(L_3);
		return L_2;
	}
}
// System.Void SerenityGarden.WaveManager::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveManager_Init_m5C7967C0C41FF4AC629A251963EEA7F384062D3C (WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveManager_Init_m5C7967C0C41FF4AC629A251963EEA7F384062D3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spawnPoints = new List<HexagonalBlock>();
		List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * L_0 = (List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 *)il2cpp_codegen_object_new(List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644_il2cpp_TypeInfo_var);
		List_1__ctor_m26EC8457AE25886A5FBF1408B6BD0125004330F5(L_0, /*hidden argument*/List_1__ctor_m26EC8457AE25886A5FBF1408B6BD0125004330F5_RuntimeMethod_var);
		__this->set_spawnPoints_15(L_0);
		// FindSpawnPoints();
		WaveManager_FindSpawnPoints_mFC3B3E57F871A7706C3ECCF775BDA036D5ADF0F6(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SerenityGarden.WaveManager::FindSpawnPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveManager_FindSpawnPoints_mFC3B3E57F871A7706C3ECCF775BDA036D5ADF0F6 (WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveManager_FindSpawnPoints_mFC3B3E57F871A7706C3ECCF775BDA036D5ADF0F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t46B753E212405AEC64A15AC021C802D63445A3BB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach(HexagonalBlock item in gridManager.gridCells)
		HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF * L_0 = __this->get_gridManager_16();
		NullCheck(L_0);
		List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * L_1 = L_0->get_gridCells_15();
		NullCheck(L_1);
		Enumerator_t46B753E212405AEC64A15AC021C802D63445A3BB  L_2 = List_1_GetEnumerator_m6A7E6B48CFEF309A2F13AC78FFEA7EEE92908FEA(L_1, /*hidden argument*/List_1_GetEnumerator_m6A7E6B48CFEF309A2F13AC78FFEA7EEE92908FEA_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0030;
		}

IL_0013:
		{
			// foreach(HexagonalBlock item in gridManager.gridCells)
			HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * L_3 = Enumerator_get_Current_mB2BD36D116535B3FD78BD644C1A9D64B77D78908_inline((Enumerator_t46B753E212405AEC64A15AC021C802D63445A3BB *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB2BD36D116535B3FD78BD644C1A9D64B77D78908_RuntimeMethod_var);
			V_1 = L_3;
			// if(item.Type == HexagonType.SpawnPoint)
			HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * L_4 = V_1;
			NullCheck(L_4);
			int32_t L_5 = HexagonalBlock_get_Type_m713A78597C82D3CDD1087965AAADD7310AB17B17_inline(L_4, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_5) == ((uint32_t)5))))
			{
				goto IL_0030;
			}
		}

IL_0024:
		{
			// spawnPoints.Add(item);
			List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * L_6 = __this->get_spawnPoints_15();
			HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * L_7 = V_1;
			NullCheck(L_6);
			List_1_Add_mEF74AAEA759F8E3425CF1B087CC096D016CC2C10(L_6, L_7, /*hidden argument*/List_1_Add_mEF74AAEA759F8E3425CF1B087CC096D016CC2C10_RuntimeMethod_var);
		}

IL_0030:
		{
			// foreach(HexagonalBlock item in gridManager.gridCells)
			bool L_8 = Enumerator_MoveNext_m2F098739DB5189DB8882D85812DDC945FDC4381E((Enumerator_t46B753E212405AEC64A15AC021C802D63445A3BB *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m2F098739DB5189DB8882D85812DDC945FDC4381E_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0013;
			}
		}

IL_0039:
		{
			IL2CPP_LEAVE(0x49, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2813644ACEECB35DAC617DA72E03AA151ADEBC1C((Enumerator_t46B753E212405AEC64A15AC021C802D63445A3BB *)(&V_0), /*hidden argument*/Enumerator_Dispose_m2813644ACEECB35DAC617DA72E03AA151ADEBC1C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x49, IL_0049)
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void SerenityGarden.WaveManager::SpawnEnemy(UnityEngine.GameObject,SerenityGarden.HexagonalBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveManager_SpawnEnemy_mDF86640AA87C3672926F0A8975D08F5A70F36706 (WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___enemyPrefab0, HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * ___spawnBlock1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveManager_SpawnEnemy_mDF86640AA87C3672926F0A8975D08F5A70F36706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (PhotonNetwork.IsConnected && !PhotonNetwork.IsMasterClient)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		bool L_0 = PhotonNetwork_get_IsConnected_m7F52EFE2E055CF8CA5A2CA8E62BA62E0D8760B7D(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		bool L_1 = PhotonNetwork_get_IsMasterClient_m73F928D3329A213C33AEF0ABC56D1940024363C6(/*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// PhotonObj photonObj = PhotonObj.Bullet;
		V_0 = 3;
		// EnemyBase enemy = enemyPrefab.GetComponent<EnemyMelee>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ___enemyPrefab0;
		NullCheck(L_2);
		EnemyMelee_t2481A9E094840C4F79E9A7FD0F7FCD493A2DA012 * L_3 = GameObject_GetComponent_TisEnemyMelee_t2481A9E094840C4F79E9A7FD0F7FCD493A2DA012_m8B35CC903DDC9BF51F9B736FAB552D3AFA6F1AFB(L_2, /*hidden argument*/GameObject_GetComponent_TisEnemyMelee_t2481A9E094840C4F79E9A7FD0F7FCD493A2DA012_m8B35CC903DDC9BF51F9B736FAB552D3AFA6F1AFB_RuntimeMethod_var);
		// if (enemy != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		// photonObj = PhotonObj.EnemyMelee;
		V_0 = ((int32_t)12);
	}

IL_0022:
	{
		// enemy = enemyPrefab.GetComponent<EnemyRanged>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = ___enemyPrefab0;
		NullCheck(L_5);
		EnemyRanged_t55401E0A01EBBDF001EFAC55C30255FD83E810ED * L_6 = GameObject_GetComponent_TisEnemyRanged_t55401E0A01EBBDF001EFAC55C30255FD83E810ED_m5DDC5082CBBB1C8B001FCBF65C21F5361E93A63C(L_5, /*hidden argument*/GameObject_GetComponent_TisEnemyRanged_t55401E0A01EBBDF001EFAC55C30255FD83E810ED_m5DDC5082CBBB1C8B001FCBF65C21F5361E93A63C_RuntimeMethod_var);
		// if (enemy != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		// photonObj = PhotonObj.EnemyRanged;
		V_0 = ((int32_t)13);
	}

IL_0033:
	{
		// enemy = enemyPrefab.GetComponent<EnemyAmbusher>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = ___enemyPrefab0;
		NullCheck(L_8);
		EnemyAmbusher_t9182D45D5CED1FC31D7BE1FDC49E6A42D37E9567 * L_9 = GameObject_GetComponent_TisEnemyAmbusher_t9182D45D5CED1FC31D7BE1FDC49E6A42D37E9567_mADE479D57DB58A56D036850B5BDCBFDD85F28D1C(L_8, /*hidden argument*/GameObject_GetComponent_TisEnemyAmbusher_t9182D45D5CED1FC31D7BE1FDC49E6A42D37E9567_mADE479D57DB58A56D036850B5BDCBFDD85F28D1C_RuntimeMethod_var);
		// if (enemy != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0044;
		}
	}
	{
		// photonObj = PhotonObj.EnemyAmbusher;
		V_0 = ((int32_t)10);
	}

IL_0044:
	{
		// enemy = enemyPrefab.GetComponent<EnemyFlying>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = ___enemyPrefab0;
		NullCheck(L_11);
		EnemyFlying_tAA8D6943B40B4DDD10EDE48626EAC94BF965463C * L_12 = GameObject_GetComponent_TisEnemyFlying_tAA8D6943B40B4DDD10EDE48626EAC94BF965463C_mA8E7F91CD72C927CC9429CDD5B00B67E584E12BE(L_11, /*hidden argument*/GameObject_GetComponent_TisEnemyFlying_tAA8D6943B40B4DDD10EDE48626EAC94BF965463C_mA8E7F91CD72C927CC9429CDD5B00B67E584E12BE_RuntimeMethod_var);
		// if (enemy != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_12, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0055;
		}
	}
	{
		// photonObj = PhotonObj.EnemyFlying;
		V_0 = ((int32_t)11);
	}

IL_0055:
	{
		// Vector3 spawnPosition = spawnBlock.transform.position;
		HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * L_14 = ___spawnBlock1;
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		// EnemyBase clone = InstantiationManager.instance.InstantiateWithCheck(enemyPrefab, spawnPosition, Quaternion.identity, photonObj).GetComponent<EnemyBase>();
		InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D * L_17 = ((InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D_StaticFields*)il2cpp_codegen_static_fields_for(InstantiationManager_tAA01F9399854E697DFCAE1C668565846A9A0778D_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = ___enemyPrefab0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		int32_t L_21 = V_0;
		NullCheck(L_17);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = InstantiationManager_InstantiateWithCheck_mDE2A12B9A41A47A3EFD58C01BE8477F4E7AFC426(L_17, L_18, L_19, L_20, L_21, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL, /*hidden argument*/NULL);
		NullCheck(L_22);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_23 = GameObject_GetComponent_TisEnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F_m185C70C01C6A98844C6DA396B9FF9205EC35C205(L_22, /*hidden argument*/GameObject_GetComponent_TisEnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F_m185C70C01C6A98844C6DA396B9FF9205EC35C205_RuntimeMethod_var);
		// clone.SetStartBlock(spawnBlock);
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_24 = L_23;
		HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * L_25 = ___spawnBlock1;
		NullCheck(L_24);
		EnemyBase_SetStartBlock_m8BDC709B6BA370077FF945E79072868A7C96F8E2(L_24, L_25, /*hidden argument*/NULL);
		// clone.transform.position += Vector3.up * 0.5f;
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_26 = L_24;
		NullCheck(L_26);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_26, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = L_27;
		NullCheck(L_28);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_30, (0.5f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_29, L_31, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_28, L_32, /*hidden argument*/NULL);
		// clone.name = clone.name.Replace("Clone", enemyIndex.ToString());
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_33 = L_26;
		NullCheck(L_33);
		String_t* L_34 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_33, /*hidden argument*/NULL);
		int32_t* L_35 = __this->get_address_of_enemyIndex_22();
		String_t* L_36 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		String_t* L_37 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_34, _stringLiteralD8CDB573350DE78596E4852BC9CACFC94E8D17ED, L_36, /*hidden argument*/NULL);
		NullCheck(L_33);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_33, L_37, /*hidden argument*/NULL);
		// enemyIndex++;
		int32_t L_38 = __this->get_enemyIndex_22();
		__this->set_enemyIndex_22(((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1)));
		// }
		return;
	}
}
// System.Void SerenityGarden.WaveManager::_StartStage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveManager__StartStage_m15D239920726B05A983FA66967633157EBCB2753 (WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * __this, const RuntimeMethod* method)
{
	{
		// spawnWaves = true;
		__this->set_spawnWaves_21((bool)1);
		// startedWave = true;
		__this->set_startedWave_13((bool)1);
		// stageStartButton.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_stageStartButton_8();
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)0, /*hidden argument*/NULL);
		// StartCoroutine(WaveSpawner(selectedStage.waves[currentWaveIndex]));
		StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 * L_1 = __this->get_selectedStage_14();
		NullCheck(L_1);
		WaveScriptableU5BU5D_t6A3A20CA18EE7F4286348D3DEF3FBC3358EE3D83* L_2 = L_1->get_waves_7();
		int32_t L_3 = __this->get_currentWaveIndex_20();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		RuntimeObject* L_6 = WaveManager_WaveSpawner_m555E275C062BA1B5C2835386259EDBD316E105B5(__this, L_5, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SerenityGarden.WaveManager::_SkipWaveDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveManager__SkipWaveDelay_m1C108A36609B9AAF573ACBAB406DF13A9F1B0196 (WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float timeDiff = waveDelay - (Time.time - lastWaveEndTime);
		float L_0 = __this->get_waveDelay_11();
		float L_1 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_2 = __this->get_lastWaveEndTime_12();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_0, (float)((float)il2cpp_codegen_subtract((float)L_1, (float)L_2))));
		// buildManager.Money += (int)(timeDiff * moneyPerSecondSkip);
		TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * L_3 = __this->get_buildManager_17();
		TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5 = TurretBuildManager_get_Money_mBA08EAACDFA345614CACDE3CC8B1EFEA02BE2EA9_inline(L_4, /*hidden argument*/NULL);
		float L_6 = V_0;
		float L_7 = __this->get_moneyPerSecondSkip_9();
		NullCheck(L_4);
		TurretBuildManager_set_Money_mCE514B684D28E883848FA914C34F2501AEC5FAEA(L_4, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7))))))), /*hidden argument*/NULL);
		// startedWave = true;
		__this->set_startedWave_13((bool)1);
		// currentWaveIndex++;
		int32_t L_8 = __this->get_currentWaveIndex_20();
		__this->set_currentWaveIndex_20(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		// StartCoroutine(WaveSpawner(selectedStage.waves[currentWaveIndex]));
		StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 * L_9 = __this->get_selectedStage_14();
		NullCheck(L_9);
		WaveScriptableU5BU5D_t6A3A20CA18EE7F4286348D3DEF3FBC3358EE3D83* L_10 = L_9->get_waves_7();
		int32_t L_11 = __this->get_currentWaveIndex_20();
		NullCheck(L_10);
		int32_t L_12 = L_11;
		WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		RuntimeObject* L_14 = WaveManager_WaveSpawner_m555E275C062BA1B5C2835386259EDBD316E105B5(__this, L_13, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean SerenityGarden.WaveManager::HasAllDependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaveManager_HasAllDependencies_mB09584D50309CFF16641806FA7445C16011F0B45 (WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * __this, const RuntimeMethod* method)
{
	{
		// return gridManager.isInitialized;
		HexagonalGrid_tCB8663F509A45CFC115036A4EF6E9773887145DF * L_0 = __this->get_gridManager_16();
		NullCheck(L_0);
		bool L_1 = ((LogicProcessBase_t0BA44484532560F6B824BAA719C44898468A1540 *)L_0)->get_isInitialized_5();
		return L_1;
	}
}
// System.Void SerenityGarden.WaveManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveManager__ctor_mC64A0B13114349EF1B51090A813C5D4F90D2FBC8 (WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * __this, const RuntimeMethod* method)
{
	{
		// public float moneyPerSecondSkip = 3;    //If you choose to skip the wave ddelay, you will receive money based on this
		__this->set_moneyPerSecondSkip_9((3.0f));
		// public float enemySpawnDelay = 1f;      //The delay between each enemy gets spawned
		__this->set_enemySpawnDelay_10((1.0f));
		// public float waveDelay = 30.0f;         //The delay between waves
		__this->set_waveDelay_11((30.0f));
		LogicProcessBase__ctor_m2942607900A82E69BB4B689A7C1480A4800BE8B1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SerenityGarden.WaveManager/<WaveSpawner>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaveSpawnerU3Ed__21__ctor_mB0737FC49189F9C6B569A4927C114038AE1D5542 (U3CWaveSpawnerU3Ed__21_t2CE338B394097B889D892CB0C000CC35E9AB5A25 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SerenityGarden.WaveManager/<WaveSpawner>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaveSpawnerU3Ed__21_System_IDisposable_Dispose_m097E8DB6FCB6201AAE35D578678F4AC1CA8C8B36 (U3CWaveSpawnerU3Ed__21_t2CE338B394097B889D892CB0C000CC35E9AB5A25 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SerenityGarden.WaveManager/<WaveSpawner>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaveSpawnerU3Ed__21_MoveNext_mE06FDE8C7A82234D71F7A6DAB36653EDF7374E24 (U3CWaveSpawnerU3Ed__21_t2CE338B394097B889D892CB0C000CC35E9AB5A25 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaveSpawnerU3Ed__21_MoveNext_mE06FDE8C7A82234D71F7A6DAB36653EDF7374E24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * V_4 = NULL;
	int32_t V_5 = 0;
	EnemySpawnU5BU5D_t8B90BAE714E41597260C23FFE5A27D99876D982E* V_6 = NULL;
	EnemySpawn_tAD5AE60DDE30CB98B3287B4BA0AAA09873B53251 * V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * V_10 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0147;
			}
			case 2:
			{
				goto IL_0168;
			}
			case 3:
			{
				goto IL_0293;
			}
			case 4:
			{
				goto IL_02b4;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// waveSkipButton.SetActive(false);
		WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * L_3 = V_1;
		NullCheck(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = L_3->get_waveSkipButton_7();
		NullCheck(L_4);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_4, (bool)0, /*hidden argument*/NULL);
		// List<HexagonalBlock> targetSpawnPoints = new List<HexagonalBlock>();
		List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * L_5 = (List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 *)il2cpp_codegen_object_new(List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644_il2cpp_TypeInfo_var);
		List_1__ctor_m26EC8457AE25886A5FBF1408B6BD0125004330F5(L_5, /*hidden argument*/List_1__ctor_m26EC8457AE25886A5FBF1408B6BD0125004330F5_RuntimeMethod_var);
		__this->set_U3CtargetSpawnPointsU3E5__2_4(L_5);
		// for (int index = 0; index < spawnPoints.Count; index++)
		V_2 = 0;
		goto IL_0093;
	}

IL_004c:
	{
		// if (wave.spawnPointsID == SpawnPointsID.All || spawnPoints[index].spawnPointsID == wave.spawnPointsID)
		WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC * L_6 = __this->get_wave_3();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_spawnPointsID_5();
		if ((((int32_t)L_7) == ((int32_t)4)))
		{
			goto IL_0078;
		}
	}
	{
		WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * L_8 = V_1;
		NullCheck(L_8);
		List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * L_9 = L_8->get_spawnPoints_15();
		int32_t L_10 = V_2;
		NullCheck(L_9);
		HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * L_11 = List_1_get_Item_m6F172C4530A046588461DFCDEC1BF0BBD463F5C1_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_m6F172C4530A046588461DFCDEC1BF0BBD463F5C1_RuntimeMethod_var);
		NullCheck(L_11);
		int32_t L_12 = L_11->get_spawnPointsID_7();
		WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC * L_13 = __this->get_wave_3();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_spawnPointsID_5();
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_008f;
		}
	}

IL_0078:
	{
		// targetSpawnPoints.Add(spawnPoints[index]);
		List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * L_15 = __this->get_U3CtargetSpawnPointsU3E5__2_4();
		WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * L_16 = V_1;
		NullCheck(L_16);
		List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * L_17 = L_16->get_spawnPoints_15();
		int32_t L_18 = V_2;
		NullCheck(L_17);
		HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * L_19 = List_1_get_Item_m6F172C4530A046588461DFCDEC1BF0BBD463F5C1_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_m6F172C4530A046588461DFCDEC1BF0BBD463F5C1_RuntimeMethod_var);
		NullCheck(L_15);
		List_1_Add_mEF74AAEA759F8E3425CF1B087CC096D016CC2C10(L_15, L_19, /*hidden argument*/List_1_Add_mEF74AAEA759F8E3425CF1B087CC096D016CC2C10_RuntimeMethod_var);
	}

IL_008f:
	{
		// for (int index = 0; index < spawnPoints.Count; index++)
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0093:
	{
		// for (int index = 0; index < spawnPoints.Count; index++)
		int32_t L_21 = V_2;
		WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * L_22 = V_1;
		NullCheck(L_22);
		List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * L_23 = L_22->get_spawnPoints_15();
		NullCheck(L_23);
		int32_t L_24 = List_1_get_Count_m7145EDAA2AF16164459A6546A42805AD13260A9F_inline(L_23, /*hidden argument*/List_1_get_Count_m7145EDAA2AF16164459A6546A42805AD13260A9F_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_24)))
		{
			goto IL_004c;
		}
	}
	{
		// targetSpawnPoints.Shuffle();
		List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * L_25 = __this->get_U3CtargetSpawnPointsU3E5__2_4();
		IL2CPP_RUNTIME_CLASS_INIT(HelperMethods_tF794A64CE21A4C293EF6848144CEA37A7D926AE4_il2cpp_TypeInfo_var);
		HelperMethods_Shuffle_TisHexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580_m181E9906675504BC65C9D2A8E0B671EADD01B66C(L_25, /*hidden argument*/HelperMethods_Shuffle_TisHexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580_m181E9906675504BC65C9D2A8E0B671EADD01B66C_RuntimeMethod_var);
		// if (wave.spawnRandomly == false)
		WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC * L_26 = __this->get_wave_3();
		NullCheck(L_26);
		bool L_27 = L_26->get_spawnRandomly_6();
		if (L_27)
		{
			goto IL_01cb;
		}
	}
	{
		// foreach (EnemySpawn item in wave.waveEnemies)
		WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC * L_28 = __this->get_wave_3();
		NullCheck(L_28);
		EnemySpawnU5BU5D_t8B90BAE714E41597260C23FFE5A27D99876D982E* L_29 = L_28->get_waveEnemies_4();
		__this->set_U3CU3E7__wrap2_5(L_29);
		__this->set_U3CU3E7__wrap3_6(0);
		goto IL_01ac;
	}

IL_00d9:
	{
		// foreach (EnemySpawn item in wave.waveEnemies)
		EnemySpawnU5BU5D_t8B90BAE714E41597260C23FFE5A27D99876D982E* L_30 = __this->get_U3CU3E7__wrap2_5();
		int32_t L_31 = __this->get_U3CU3E7__wrap3_6();
		NullCheck(L_30);
		int32_t L_32 = L_31;
		EnemySpawn_tAD5AE60DDE30CB98B3287B4BA0AAA09873B53251 * L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		__this->set_U3CitemU3E5__5_7(L_33);
		// for (int index = 0; index < item.count; index++)
		__this->set_U3CindexU3E5__6_8(0);
		goto IL_0181;
	}

IL_00f8:
	{
		// int randIndex = Random.Range(0, targetSpawnPoints.Count);
		List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * L_34 = __this->get_U3CtargetSpawnPointsU3E5__2_4();
		NullCheck(L_34);
		int32_t L_35 = List_1_get_Count_m7145EDAA2AF16164459A6546A42805AD13260A9F_inline(L_34, /*hidden argument*/List_1_get_Count_m7145EDAA2AF16164459A6546A42805AD13260A9F_RuntimeMethod_var);
		int32_t L_36 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, L_35, /*hidden argument*/NULL);
		V_3 = L_36;
		// HexagonalBlock block = targetSpawnPoints[randIndex];
		List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * L_37 = __this->get_U3CtargetSpawnPointsU3E5__2_4();
		int32_t L_38 = V_3;
		NullCheck(L_37);
		HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * L_39 = List_1_get_Item_m6F172C4530A046588461DFCDEC1BF0BBD463F5C1_inline(L_37, L_38, /*hidden argument*/List_1_get_Item_m6F172C4530A046588461DFCDEC1BF0BBD463F5C1_RuntimeMethod_var);
		V_4 = L_39;
		// SpawnEnemy(item.enemy, block);
		WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * L_40 = V_1;
		EnemySpawn_tAD5AE60DDE30CB98B3287B4BA0AAA09873B53251 * L_41 = __this->get_U3CitemU3E5__5_7();
		NullCheck(L_41);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_42 = L_41->get_enemy_0();
		HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * L_43 = V_4;
		NullCheck(L_40);
		WaveManager_SpawnEnemy_mDF86640AA87C3672926F0A8975D08F5A70F36706(L_40, L_42, L_43, /*hidden argument*/NULL);
		// if (GamePauseManager.instance.GamePaused)
		GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284 * L_44 = ((GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_StaticFields*)il2cpp_codegen_static_fields_for(GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_il2cpp_TypeInfo_var))->get_instance_5();
		NullCheck(L_44);
		bool L_45 = GamePauseManager_get_GamePaused_m7B1A9569EA4C87E4B9762AE427894DD8C58C9372_inline(L_44, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_014e;
		}
	}
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0147:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_014e:
	{
		// yield return new WaitForSeconds(enemySpawnDelay);
		WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * L_46 = V_1;
		NullCheck(L_46);
		float L_47 = L_46->get_enemySpawnDelay_10();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_48 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_48, L_47, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_48);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0168:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int index = 0; index < item.count; index++)
		int32_t L_49 = __this->get_U3CindexU3E5__6_8();
		V_5 = L_49;
		int32_t L_50 = V_5;
		__this->set_U3CindexU3E5__6_8(((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1)));
	}

IL_0181:
	{
		// for (int index = 0; index < item.count; index++)
		int32_t L_51 = __this->get_U3CindexU3E5__6_8();
		EnemySpawn_tAD5AE60DDE30CB98B3287B4BA0AAA09873B53251 * L_52 = __this->get_U3CitemU3E5__5_7();
		NullCheck(L_52);
		int32_t L_53 = L_52->get_count_1();
		if ((((int32_t)L_51) < ((int32_t)L_53)))
		{
			goto IL_00f8;
		}
	}
	{
		// }
		__this->set_U3CitemU3E5__5_7((EnemySpawn_tAD5AE60DDE30CB98B3287B4BA0AAA09873B53251 *)NULL);
		int32_t L_54 = __this->get_U3CU3E7__wrap3_6();
		__this->set_U3CU3E7__wrap3_6(((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1)));
	}

IL_01ac:
	{
		// foreach (EnemySpawn item in wave.waveEnemies)
		int32_t L_55 = __this->get_U3CU3E7__wrap3_6();
		EnemySpawnU5BU5D_t8B90BAE714E41597260C23FFE5A27D99876D982E* L_56 = __this->get_U3CU3E7__wrap2_5();
		NullCheck(L_56);
		if ((((int32_t)L_55) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length)))))))
		{
			goto IL_00d9;
		}
	}
	{
		__this->set_U3CU3E7__wrap2_5((EnemySpawnU5BU5D_t8B90BAE714E41597260C23FFE5A27D99876D982E*)NULL);
		// }
		goto IL_02d2;
	}

IL_01cb:
	{
		// List<GameObject> enemyToSpawn = new List<GameObject>();
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_57 = (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *)il2cpp_codegen_object_new(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_il2cpp_TypeInfo_var);
		List_1__ctor_m23BDA1112566B2E9149D885E4061EA3063EEDA60(L_57, /*hidden argument*/List_1__ctor_m23BDA1112566B2E9149D885E4061EA3063EEDA60_RuntimeMethod_var);
		__this->set_U3CenemyToSpawnU3E5__7_9(L_57);
		// foreach (EnemySpawn item in wave.waveEnemies)
		WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC * L_58 = __this->get_wave_3();
		NullCheck(L_58);
		EnemySpawnU5BU5D_t8B90BAE714E41597260C23FFE5A27D99876D982E* L_59 = L_58->get_waveEnemies_4();
		V_6 = L_59;
		V_5 = 0;
		goto IL_021d;
	}

IL_01e8:
	{
		// foreach (EnemySpawn item in wave.waveEnemies)
		EnemySpawnU5BU5D_t8B90BAE714E41597260C23FFE5A27D99876D982E* L_60 = V_6;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		EnemySpawn_tAD5AE60DDE30CB98B3287B4BA0AAA09873B53251 * L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_7 = L_63;
		// for (int index = 0; index < item.count; index++)
		V_8 = 0;
		goto IL_020c;
	}

IL_01f4:
	{
		// enemyToSpawn.Add(item.enemy);
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_64 = __this->get_U3CenemyToSpawnU3E5__7_9();
		EnemySpawn_tAD5AE60DDE30CB98B3287B4BA0AAA09873B53251 * L_65 = V_7;
		NullCheck(L_65);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_66 = L_65->get_enemy_0();
		NullCheck(L_64);
		List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687(L_64, L_66, /*hidden argument*/List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687_RuntimeMethod_var);
		// for (int index = 0; index < item.count; index++)
		int32_t L_67 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
	}

IL_020c:
	{
		// for (int index = 0; index < item.count; index++)
		int32_t L_68 = V_8;
		EnemySpawn_tAD5AE60DDE30CB98B3287B4BA0AAA09873B53251 * L_69 = V_7;
		NullCheck(L_69);
		int32_t L_70 = L_69->get_count_1();
		if ((((int32_t)L_68) < ((int32_t)L_70)))
		{
			goto IL_01f4;
		}
	}
	{
		int32_t L_71 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1));
	}

IL_021d:
	{
		// foreach (EnemySpawn item in wave.waveEnemies)
		int32_t L_72 = V_5;
		EnemySpawnU5BU5D_t8B90BAE714E41597260C23FFE5A27D99876D982E* L_73 = V_6;
		NullCheck(L_73);
		if ((((int32_t)L_72) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_73)->max_length)))))))
		{
			goto IL_01e8;
		}
	}
	{
		// enemyToSpawn.Shuffle();
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_74 = __this->get_U3CenemyToSpawnU3E5__7_9();
		IL2CPP_RUNTIME_CLASS_INIT(HelperMethods_tF794A64CE21A4C293EF6848144CEA37A7D926AE4_il2cpp_TypeInfo_var);
		HelperMethods_Shuffle_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mAD11E41C30D5AED71DF7F7BB7340CC7C163EB01F(L_74, /*hidden argument*/HelperMethods_Shuffle_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mAD11E41C30D5AED71DF7F7BB7340CC7C163EB01F_RuntimeMethod_var);
		goto IL_02bb;
	}

IL_0235:
	{
		// int randIndex = Random.Range(0, targetSpawnPoints.Count);
		List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * L_75 = __this->get_U3CtargetSpawnPointsU3E5__2_4();
		NullCheck(L_75);
		int32_t L_76 = List_1_get_Count_m7145EDAA2AF16164459A6546A42805AD13260A9F_inline(L_75, /*hidden argument*/List_1_get_Count_m7145EDAA2AF16164459A6546A42805AD13260A9F_RuntimeMethod_var);
		int32_t L_77 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, L_76, /*hidden argument*/NULL);
		V_9 = L_77;
		// HexagonalBlock block = targetSpawnPoints[randIndex];
		List_1_tDA9F4376C2AF0C4E0FF860B96466F4397A045644 * L_78 = __this->get_U3CtargetSpawnPointsU3E5__2_4();
		int32_t L_79 = V_9;
		NullCheck(L_78);
		HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * L_80 = List_1_get_Item_m6F172C4530A046588461DFCDEC1BF0BBD463F5C1_inline(L_78, L_79, /*hidden argument*/List_1_get_Item_m6F172C4530A046588461DFCDEC1BF0BBD463F5C1_RuntimeMethod_var);
		V_10 = L_80;
		// SpawnEnemy(enemyToSpawn[0], block);
		WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * L_81 = V_1;
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_82 = __this->get_U3CenemyToSpawnU3E5__7_9();
		NullCheck(L_82);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_83 = List_1_get_Item_mB59D528B0017953D5CB28B8B9BE96CD8EB324FB7_inline(L_82, 0, /*hidden argument*/List_1_get_Item_mB59D528B0017953D5CB28B8B9BE96CD8EB324FB7_RuntimeMethod_var);
		HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * L_84 = V_10;
		NullCheck(L_81);
		WaveManager_SpawnEnemy_mDF86640AA87C3672926F0A8975D08F5A70F36706(L_81, L_83, L_84, /*hidden argument*/NULL);
		// enemyToSpawn.RemoveAt(0);
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_85 = __this->get_U3CenemyToSpawnU3E5__7_9();
		NullCheck(L_85);
		List_1_RemoveAt_m5CC4AD52FC4DFB350A9097AAF59BDE15076E035D(L_85, 0, /*hidden argument*/List_1_RemoveAt_m5CC4AD52FC4DFB350A9097AAF59BDE15076E035D_RuntimeMethod_var);
		// if (GamePauseManager.instance.GamePaused)
		GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284 * L_86 = ((GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_StaticFields*)il2cpp_codegen_static_fields_for(GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284_il2cpp_TypeInfo_var))->get_instance_5();
		NullCheck(L_86);
		bool L_87 = GamePauseManager_get_GamePaused_m7B1A9569EA4C87E4B9762AE427894DD8C58C9372_inline(L_86, /*hidden argument*/NULL);
		if (!L_87)
		{
			goto IL_029a;
		}
	}
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_0293:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_029a:
	{
		// yield return new WaitForSeconds(enemySpawnDelay);
		WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * L_88 = V_1;
		NullCheck(L_88);
		float L_89 = L_88->get_enemySpawnDelay_10();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_90 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_90, L_89, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_90);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_02b4:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_02bb:
	{
		// while(enemyToSpawn.Count != 0)
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_91 = __this->get_U3CenemyToSpawnU3E5__7_9();
		NullCheck(L_91);
		int32_t L_92 = List_1_get_Count_m9C1B1A3A565196DE22D197A9BC1F33552B7348EE_inline(L_91, /*hidden argument*/List_1_get_Count_m9C1B1A3A565196DE22D197A9BC1F33552B7348EE_RuntimeMethod_var);
		if (L_92)
		{
			goto IL_0235;
		}
	}
	{
		// }
		__this->set_U3CenemyToSpawnU3E5__7_9((List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *)NULL);
	}

IL_02d2:
	{
		// if(currentWaveIndex != selectedStage.waves.Length - 1)
		WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * L_93 = V_1;
		NullCheck(L_93);
		int32_t L_94 = L_93->get_currentWaveIndex_20();
		WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * L_95 = V_1;
		NullCheck(L_95);
		StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 * L_96 = L_95->get_selectedStage_14();
		NullCheck(L_96);
		WaveScriptableU5BU5D_t6A3A20CA18EE7F4286348D3DEF3FBC3358EE3D83* L_97 = L_96->get_waves_7();
		NullCheck(L_97);
		if ((((int32_t)L_94) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_97)->max_length)))), (int32_t)1)))))
		{
			goto IL_0316;
		}
	}
	{
		// waveSkipButton.SetActive(true);
		WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * L_98 = V_1;
		NullCheck(L_98);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_99 = L_98->get_waveSkipButton_7();
		NullCheck(L_99);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_99, (bool)1, /*hidden argument*/NULL);
		// if (PhotonNetwork.IsConnected && !PhotonNetwork.IsMasterClient)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		bool L_100 = PhotonNetwork_get_IsConnected_m7F52EFE2E055CF8CA5A2CA8E62BA62E0D8760B7D(/*hidden argument*/NULL);
		if (!L_100)
		{
			goto IL_0321;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tDB10770C2795BD94850C3BE2AA04AE3ED559EB5A_il2cpp_TypeInfo_var);
		bool L_101 = PhotonNetwork_get_IsMasterClient_m73F928D3329A213C33AEF0ABC56D1940024363C6(/*hidden argument*/NULL);
		if (L_101)
		{
			goto IL_0321;
		}
	}
	{
		// waveSkipButton.GetComponent<Button>().interactable = false;
		WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * L_102 = V_1;
		NullCheck(L_102);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_103 = L_102->get_waveSkipButton_7();
		NullCheck(L_103);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_104 = GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80(L_103, /*hidden argument*/GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80_RuntimeMethod_var);
		NullCheck(L_104);
		Selectable_set_interactable_m91B2707F7B4F46F851C3100A65BEFAA557DCDFDE(L_104, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_0321;
	}

IL_0316:
	{
		// stageManager.SpawnedAllEnemies();
		WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * L_105 = V_1;
		NullCheck(L_105);
		BattleStageStateManager_t641BF1E17CF4C0BC4EDF0C4B9E8BEFDE0DEEEE3E * L_106 = L_105->get_stageManager_18();
		NullCheck(L_106);
		BattleStageStateManager_SpawnedAllEnemies_mFB8CDCBDB00143C55848C0FAEE3C93C1C5379535(L_106, /*hidden argument*/NULL);
	}

IL_0321:
	{
		// startedWave = false;
		WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * L_107 = V_1;
		NullCheck(L_107);
		L_107->set_startedWave_13((bool)0);
		// lastWaveEndTime = Time.time;
		WaveManager_t645D82B089F761B44A333B266F462A50B71B17A6 * L_108 = V_1;
		float L_109 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		NullCheck(L_108);
		L_108->set_lastWaveEndTime_12(L_109);
		// }
		return (bool)0;
	}
}
// System.Object SerenityGarden.WaveManager/<WaveSpawner>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaveSpawnerU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6B931F11FD3507CCD8B15F6735CA1F33DF67109D (U3CWaveSpawnerU3Ed__21_t2CE338B394097B889D892CB0C000CC35E9AB5A25 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SerenityGarden.WaveManager/<WaveSpawner>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaveSpawnerU3Ed__21_System_Collections_IEnumerator_Reset_m07514378B7FF493863D653BC51D8E75CDFE3246B (U3CWaveSpawnerU3Ed__21_t2CE338B394097B889D892CB0C000CC35E9AB5A25 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaveSpawnerU3Ed__21_System_Collections_IEnumerator_Reset_m07514378B7FF493863D653BC51D8E75CDFE3246B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CWaveSpawnerU3Ed__21_System_Collections_IEnumerator_Reset_m07514378B7FF493863D653BC51D8E75CDFE3246B_RuntimeMethod_var);
	}
}
// System.Object SerenityGarden.WaveManager/<WaveSpawner>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaveSpawnerU3Ed__21_System_Collections_IEnumerator_get_Current_m83DB0E0DA019F418C22153851F50A6CB3A0E4026 (U3CWaveSpawnerU3Ed__21_t2CE338B394097B889D892CB0C000CC35E9AB5A25 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SerenityGarden.WaveScriptable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveScriptable__ctor_m7EF5A266B903A1A646D10557F1AF9D4936E0DFF4 (WaveScriptable_tDC4456B6DAB75A17F19BF8B08E7A894C4CF3FFFC * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool GamePauseManager_get_GamePaused_m7B1A9569EA4C87E4B9762AE427894DD8C58C9372_inline (GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284 * __this, const RuntimeMethod* method)
{
	{
		// public bool GamePaused { get { return gamePaused; } }
		bool L_0 = __this->get_gamePaused_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TurretBase_get_DestroyReward_mD4E91EE5E147BF7A39CB6369682A671444101E30_inline (TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * __this, const RuntimeMethod* method)
{
	{
		// public int DestroyReward { get; set; }
		int32_t L_0 = __this->get_U3CDestroyRewardU3Ek__BackingField_25();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BuildableTurret_get_HasCommander_m5E2ED31DB76EE61A58CEA5A660DD6A9F9686938E_inline (BuildableTurret_t0629D22C35287CA972065221293A8A07CAB8CC98 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasCommander; }
		bool L_0 = __this->get_hasCommander_32();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t HexagonalBlock_get_Type_m713A78597C82D3CDD1087965AAADD7310AB17B17_inline (HexagonalBlock_t49B714FA664062972031BDF331CD56FC1E573580 * __this, const RuntimeMethod* method)
{
	{
		// get { return type; }
		int32_t L_0 = __this->get_type_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TurretBuildManager_get_Money_mBA08EAACDFA345614CACDE3CC8B1EFEA02BE2EA9_inline (TurretBuildManager_t3E6A9FA5DF9FD7A08C12BE0A016C5CB4F14F3AD7 * __this, const RuntimeMethod* method)
{
	{
		// get { return money; }
		int32_t L_0 = __this->get_money_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * TurretBase_get_Target_m79F6FB8FB7A4BC5386110C436A950317E0C466D3_inline (TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * __this, const RuntimeMethod* method)
{
	{
		// get { return foundTarget; }
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_0 = __this->get_foundTarget_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float EnemyBase_get_Health_m8CF1A98319D063DB68265C7D717501430F53C219_inline (EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * __this, const RuntimeMethod* method)
{
	{
		// get { return health; }
		float L_0 = __this->get_health_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TurretBase_get_Damage_mEE7B3381C758C77C36D007C86AE25B75F761BAAF_inline (TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * __this, const RuntimeMethod* method)
{
	{
		// get { return damage; }
		float L_0 = __this->get_damage_21();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TurretBase_set_LastAttackTime_m77B277C99B3D6B4986C14A903E27A9AC245DDFF3_inline (TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { lastAttackTime = value; }
		float L_0 = ___value0;
		__this->set_lastAttackTime_18(L_0);
		// set { lastAttackTime = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TurretBase_get_Range_m04A266B69890546C41E5AE5BCDEB761CA7CA93E4_inline (TurretBase_t1C4930A6B51308F86380A1EE19FFE03937D93441 * __this, const RuntimeMethod* method)
{
	{
		// get { return range; }
		float L_0 = __this->get_range_22();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t EnemyBase_get_EnemyType_m9E6660DF9416C496D4EFE0AB71423B617EE33062_inline (EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * __this, const RuntimeMethod* method)
{
	{
		// public EnemyType EnemyType { get; set; }
		int32_t L_0 = __this->get_U3CEnemyTypeU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * LockOnManager_get_SelectedEnemy_m7369E961F04C315C52362153FE0651F323BA2E0B_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LockOnManager_get_SelectedEnemy_m7369E961F04C315C52362153FE0651F323BA2E0BAssemblyU2DCSharp1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return selectedEnemy; }
		EnemyBase_t615278FCC53B8F19A07345D220D683344BA6A40F * L_0 = ((LockOnManager_tC44F3665659845C6B4B74C0044FB68513D1D2CAC_StaticFields*)il2cpp_codegen_static_fields_for(LockOnManager_tC44F3665659845C6B4B74C0044FB68513D1D2CAC_il2cpp_TypeInfo_var))->get_selectedEnemy_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BulletMovement_SetTarget_mAFC14CB0B4BC5B7AB2B25207E78FF3FA71E9C0E1_inline (BulletMovement_t3218732848692BE95E52BBCC47D61A22B09AC4F5 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ____target0, const RuntimeMethod* method)
{
	{
		// target = _target;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ____target0;
		__this->set_target_6(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 * SceneDataRetainer_GetStage_mCAF4598A6F617211C5C2A798C8BCFD48605C6FDA_inline (SceneDataRetainer_tDC5BF2B9D42AA0F469B4B9312A2CEA24F1F4A8C2 * __this, const RuntimeMethod* method)
{
	{
		// return selectedStage;
		StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 * L_0 = __this->get_selectedStage_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float GamePauseManager_get_PausedTime_mA7FCB365F4BC7E23C3A8D72CB862647B33E5BB97_inline (GamePauseManager_t00398B97DE057A7DC644791258B0E7DCC6789284 * __this, const RuntimeMethod* method)
{
	{
		// public float PausedTime { get { return pausedTime; } }
		float L_0 = __this->get_pausedTime_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
