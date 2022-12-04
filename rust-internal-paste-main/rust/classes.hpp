#pragma once
#include "unity.hpp"
#include "../utils/xor_float.hpp"
#include "Windows.h"

typedef struct _UncStr {
	char stub[0x10];
	int len;
	wchar_t str[1];
}*pUncStr;


enum BoneList : int
{

	helli = -742865266,
	l_hip = 1,
	l_knee,
	l_foot,
	l_toe,
	l_ankle_scale,
	pelvis,
	penis,
	GenitalCensor,
	GenitalCensor_LOD0,
	Inner_LOD0,
	GenitalCensor_LOD1,
	GenitalCensor_LOD2,
	r_hip,
	engine_col,
	patrol_helicopter,
	r_knee,
	r_foot,
	r_toe,
	r_ankle_scale,
	spine1,
	spine1_scale,
	spine2,
	spine3,
	spine4,
	l_clavicle,
	l_upperarm,
	l_forearm,
	l_hand,
	l_index1,
	l_index2,
	l_index3,
	l_little1,
	l_little2,
	l_little3,
	l_middle1,
	l_middle2,
	l_middle3,
	l_prop,
	l_ring1,
	l_ring2,
	l_ring3,
	l_thumb1,
	l_thumb2,
	l_thumb3,
	IKtarget_righthand_min,
	IKtarget_righthand_max,
	l_ulna,
	neck,
	head,
	jaw,
	eyeTranform,
	l_eye,
	l_Eyelid,
	r_eye,
	r_Eyelid,
	r_clavicle,
	r_upperarm,
	r_forearm,
	r_hand,
	r_index1,
	r_index2,
	r_index3,
	r_little1,
	r_little2,
	r_little3,
	r_middle1,
	r_middle2,
	r_middle3,
	r_prop,
	r_ring1,
	r_ring2,
	r_ring3,
	r_thumb1,
	r_thumb2,
	r_thumb3,
	IKtarget_lefthand_min,
	IKtarget_lefthand_max,
	r_ulna,
	l_breast,
	r_breast,
	BoobCensor,
	BreastCensor_LOD0,
	BreastCensor_LOD1,
	BreastCensor_LOD2,
	collision,
	displacement
};

class col {
public:
	float r;
	float g;
	float b;
	float a;

	col()
	{
		r = 0;
		g = 0;
		b = 0;
		a = 0;
	}

	col(float r, float g, float b, float a)
	{
		this->r = r;
		this->g = g;
		this->b = b;
		this->a = a;
	}

	col GetUnityColor()
	{
		return col(r / 255.0f, g / 255.0f, b / 255.0f, a / 255.0f);
	}
};

uintptr_t DidClientSideAttack = il2cpp::value(_("BaseProjectile"), _("DidAttackClientside"));
uintptr_t UpdateAmmoDisplay = il2cpp::value(_("BaseProjectile"), _("UpdateAmmoDisplay"));
uintptr_t ShotsFired = il2cpp::value(_("BaseProjectile"), _("ShotFired"));

uintptr_t _displayName = il2cpp::value(_("BasePlayer"), _("_displayName"));
uintptr_t woundedlol = il2cpp::value(_("BasePlayer"), _("Wounded"));
uintptr_t movement = il2cpp::value(_("BasePlayer"), _("movement"));
uintptr_t player_inventory = il2cpp::value(_("BasePlayer"), _("inventory"));
uintptr_t clActiveItem = il2cpp::value(_("BasePlayer"), _("clActiveItem"));
uintptr_t playerModel = il2cpp::value(_("BasePlayer"), _("playerModel"));
uintptr_t clientTeam = il2cpp::value(_("BasePlayer"), _("clientTeam"));
uintptr_t playerFlags = il2cpp::value(_("BasePlayer"), _("playerFlags"));
uintptr_t clientTickInterval = il2cpp::value(_("BasePlayer"), _("clientTickInterval"));
uintptr_t eyes = il2cpp::value(_("BasePlayer"), _("eyes"));
uintptr_t lastSentTickTime = il2cpp::value(_("BasePlayer"), _("lastSentTickTime"));
uintptr_t modelState = il2cpp::value(_("BasePlayer"), _("modelState"));
uintptr_t input = il2cpp::value(_("BasePlayer"), _("input"));
uintptr_t containerBelt = il2cpp::value(_("PlayerInventory"), _("containerBelt"));
uintptr_t containerWear = il2cpp::value(_("PlayerInventory"), _("containerWear"));
uintptr_t itemList = il2cpp::value(_("ItemContainer"), _("itemList"));
uintptr_t userID = il2cpp::value(_("BasePlayer"), _("userID"));
uintptr_t mounted = il2cpp::value(_("BasePlayer"), _("mounted"));

uintptr_t newVelocity = il2cpp::value(_("PlayerModel"), _("newVelocity"));
uintptr_t isLocalPlayer = il2cpp::value(_("PlayerModel"), _("isLocalPlayer"));

uintptr_t _health = il2cpp::value(_("BaseCombatEntity"), _("_health"));
uintptr_t _maxHealth = il2cpp::value(_("BaseCombatEntity"), _("_maxHealth"));
uintptr_t lifestate = il2cpp::value(_("BaseCombatEntity"), _("lifestate"));

uintptr_t net = il2cpp::value(_("BaseNetworkable"), _("net"));

uintptr_t heldEntity = il2cpp::value(_("Item"), _("heldEntity"));

uintptr_t canWieldItems = il2cpp::value(_("BaseMountable"), _("canWieldItems"));

uintptr_t automatic = il2cpp::value(_("BaseProjectile"), _("automatic"));

uintptr_t aimSway = il2cpp::value(_("BaseProjectile"), _("aimSway"));
uintptr_t aimSwaySpeed = il2cpp::value(_("BaseProjectile"), _("aimSwaySpeed"));
uintptr_t primaryMagazine = il2cpp::value(_("BaseProjectile"), _("primaryMagazine"));

uintptr_t aimCone = il2cpp::value(_("BaseProjectile"), _("aimCone"));
uintptr_t hipAimCone = il2cpp::value(_("BaseProjectile"), _("hipAimCone"));
uintptr_t aimConePenaltyMax = il2cpp::value(_("BaseProjectile"), _("aimConePenaltyMax"));
uintptr_t aimconePenaltyPerShot = il2cpp::value(_("BaseProjectile"), _("aimconePenaltyPerShot"));
uintptr_t stancePenaltyScale = il2cpp::value(_("BaseProjectile"), _("stancePenaltyScale"));

uintptr_t successFraction = il2cpp::value(_("FlintStrikeWeapon"), _("successFraction"));
uintptr_t didSparkThisFrame = il2cpp::value(_("FlintStrikeWeapon"), _("_didSparkThisFrame"));
uintptr_t initialVelocity = il2cpp::value(_("Projectile"), _("initialVelocity"));
uintptr_t currentVelocity = il2cpp::value(_("Projectile"), _("currentVelocity"));
uintptr_t currentPosition = il2cpp::value(_("Projectile"), _("currentPosition"));
uintptr_t thickness_addr = il2cpp::value(_("Projectile"), _("thickness"));
uintptr_t ricochet_addr = il2cpp::value(_("Projectile"), _("ricochetChance"));
uintptr_t projectileVelocityScale_addr = il2cpp::value(_("BaseProjectile"), _("projectileVelocityScale"));
uintptr_t mod = il2cpp::value(_("Projectile"), _("mod"));
uintptr_t hitTest = il2cpp::value(_("Projectile"), _("hitTest"));

uintptr_t damageProperties = il2cpp::value(_("BaseMelee"), _("damageProperties"));

uintptr_t weakspots = il2cpp::value(_("BaseHelicopter"), _("weakspots"));

uintptr_t info = il2cpp::value(_("Item"), _("info"));

uintptr_t iconSprite = il2cpp::value(_("ItemDefinition"), _("iconSprite"));
uintptr_t steamItem = il2cpp::value(_("ItemDefinition"), _("steamItem"));

uintptr_t category = il2cpp::value(_("ItemDefinition"), _("category"));
uintptr_t itemid = il2cpp::value(_("ItemDefinition"), _("itemid"));
uintptr_t displayName = il2cpp::value(_("ItemDefinition"), _("displayName"));

uintptr_t viewOffset = il2cpp::value(_("PlayerEyes"), _("viewOffset"));

uintptr_t swimming = il2cpp::value(_("PlayerWalkMovement"), _("swimming"));

uintptr_t lastHitTime = il2cpp::value(_("Chainsaw"), _("lastHitTime"));
uintptr_t lastHitMaterial = il2cpp::value(_("Chainsaw"), _("lastHitMaterial"));
uintptr_t gathering = il2cpp::value(_("BaseMelee"), _("gathering"));

uintptr_t nextAttackTime = il2cpp::value(_("AttackEntity"), _("nextAttackTime"));
uintptr_t timeSinceDeploy = il2cpp::value(_("AttackEntity"), _("timeSinceDeploy"));
uintptr_t deployDelay = il2cpp::value(_("AttackEntity"), _("deployDelay"));
uintptr_t repeatDelay = il2cpp::value(_("AttackEntity"), _("repeatDelay"));
uintptr_t integrity = il2cpp::value(_("Projectile"), _("integrity"));

uintptr_t groundAngleNew = il2cpp::value(_("PlayerWalkMovement"), _("groundAngleNew"));
uintptr_t landTime = il2cpp::value(_("PlayerWalkMovement"), _("landTime"));
uintptr_t jumpTime = il2cpp::value(_("PlayerWalkMovement"), _("jumpTime"));
uintptr_t groundTime = il2cpp::value(_("PlayerWalkMovement"), _("groundTime"));
uintptr_t gravityMultiplier = il2cpp::value(_("PlayerWalkMovement"), _("gravityMultiplier"));
uintptr_t flying = il2cpp::value(_("PlayerWalkMovement"), _("flying"));

uintptr_t model = il2cpp::value(_("BaseEntity"), _("model"));
class base_projectile;

class transform;

class base_player;

class HitTest;
class modelstate;

typedef struct Str
{
	char stub[0x10];
	int len;
	wchar_t str[1];
} *str;

class weapon;

static auto Text = reinterpret_cast<void (*)(rust::classes::string, Vector, col, float)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("DDraw"), _("Text"), 4, _(""), _("UnityEngine"))));

static auto Sphere = reinterpret_cast<void (*)(Vector, float, col, float, float)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("DDraw"), _("Sphere"), 5, _(""), _("UnityEngine"))));

static auto Line = reinterpret_cast<void (*)(Vector, Vector, col, float, bool, bool)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("DDraw"), _("Line"), 6, _(""), _("UnityEngine"))));

static auto GetIndex = reinterpret_cast<int(*)(uintptr_t SkinSetCollection, float)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("SkinSetCollection"), _("GetIndex"), 1, _(""), _(""))));

static auto set_onLadder = reinterpret_cast<void(*)(modelstate*, bool)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("ModelState"), _("set_onLadder"), 1, _(""), _(""))));

static auto GetWorldVelocity = reinterpret_cast<Vector(*)(base_player* base_entity)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BaseEntity"), _("GetWorldVelocity"), 0, _(""), _(""))));

static auto HasPlayerFlag = reinterpret_cast<bool(*)(base_player*, rust::classes::PlayerFlags)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BasePlayer"), _("HasPlayerFlag"), 1, _(""), _(""))));

static auto get_game_object_transform = reinterpret_cast<transform * (*)(uintptr_t game_object)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("GameObject"), _("get_transform"), 0, _(""), _("UnityEngine"))));

static auto get_iconSprite = reinterpret_cast<uintptr_t(*)(weapon* Item)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Item"), _("get_iconSprite"), 0, _(""), _(""))));

static auto get_texture = reinterpret_cast<uintptr_t(*)(uintptr_t sprite)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Sprite"), _("get_texture"), 0, _(""), _("UnityEngine"))));

static auto get_rect = reinterpret_cast<rust::classes::Rect(*)(uintptr_t sprite)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Sprite"), _("get_rect"), 0, _(""), _("UnityEngine"))));

static auto StringPool_Get = reinterpret_cast<unsigned int(*)(rust::classes::string)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("StringPool"), _("Get"), 1, _("str"), _(""))));

static auto set_timeScale = reinterpret_cast<void(*)(float)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Time"), _("set_timeScale"), 1, _(""), _("UnityEngine"))));

static auto get_timeScale = reinterpret_cast<float(*)()>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Time"), _("get_timeScale"), 0, _(""), _("UnityEngine"))));

static auto FindBone = reinterpret_cast<transform * (*)(base_player*, rust::classes::string)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BaseEntity"), _("FindBone"), 1, _(""), _(""))));

static auto get_mousePosition = reinterpret_cast<Vector (*)()>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Input"), _("GetMouseButton"), 0, _(""), _("UnityEngine"))));

static auto GetMouseButton = reinterpret_cast<bool(*)(int(*))>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Input"), _("get_mousePosition"), 0, _(""), _("UnityEngine"))));


static auto Max = reinterpret_cast<float (*)(float, float)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Mathf"), _("Max"), 2, _(""), _("UnityEngine"))));

static auto FloorToInt = reinterpret_cast<int (*)(float)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Mathf"), _("FloorToInt"), 1, _(""), _("UnityEngine"))));

static auto get_gravity = reinterpret_cast<Vector (*)()>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Physics"), _("get_gravity"), 1, _(""), _("UnityEngine"))));

static auto get_isAlive = reinterpret_cast<bool (*)(base_projectile*)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Projectile"), _("get_isAlive"), 0, _(""), _(""))));

static auto get_position = reinterpret_cast<Vector(*)(uintptr_t transform)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Transform"), _("get_position"), 0, _(""), _("UnityEngine"))));

static auto Find = reinterpret_cast<uintptr_t(*)(rust::classes::string)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Shader"), _("Find"), 1, _(""), _("UnityEngine"))));

static auto set_hideFlags = reinterpret_cast<void(*)(uintptr_t material, int value)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Object"), _("set_hideFlags"), 1, _(""), _("UnityEngine"))));

static auto set_name = reinterpret_cast<void(*)(uintptr_t, rust::classes::string)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Object"), _("set_name"), 1, _(""), _("UnityEngine"))));

static auto SetInt = reinterpret_cast<void(*)(uintptr_t material, rust::classes::string name, int value)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Material"), _("SetInt"), 1, _(""), _("UnityEngine"))));

static auto get_deltaTime = reinterpret_cast<float(*)()>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Time"), _("get_deltaTime"), 0, _(""), _("UnityEngine"))));

static auto get_IsNpc = reinterpret_cast<bool(*)(uintptr_t player_model)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("PlayerModel"), _("get_IsNpc"), -1, _(""), _(""))));

static auto Abs_fn = reinterpret_cast<float(*)(float)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Mathf"), _("Abs"), 1, _(""), _("UnityEngine"))));

static auto get_time = reinterpret_cast<float(*)()>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Time"), _("get_time"), 0, _(""), _("UnityEngine"))));

static auto ClosestPoint = reinterpret_cast<Vector(*)(base_player*, Vector)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BaseEntity"), _("ClosestPoint"), 1, _("position"), _(""), 1)));

static auto InverseTransformPoint = reinterpret_cast<Vector(*)(transform*, Vector)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Transform"), _("InverseTransformPoint"), 1, _(""), _("UnityEngine"))));

static auto InverseTransformDirection = reinterpret_cast<Vector(*)(transform*, Vector)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Transform"), _("InverseTransformDirection"), 1, _(""), _("UnityEngine"))));

static auto get_transform = reinterpret_cast<transform*(*)(base_player*)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Component"), _("get_transform"), 0, _(""), _("UnityEngine"))));

static auto get_gameObject = reinterpret_cast<uintptr_t(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Component"), _("get_gameObject"), 0, _(""), _("UnityEngine"))));

static auto set_position = reinterpret_cast<void(*)(transform*, Vector value)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Transform"), _("set_position"), 1, _(""), _("UnityEngine"))));

static auto GetMaxSpeed = reinterpret_cast<float(*)()>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BasePlayer"), _("GetMaxSpeed"), 1, _(""), _(""))));

static auto LookRotation = reinterpret_cast<vector4(*)(Vector, Vector value)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Quaternion"), _("LookRotation"), 2, _(""), _("UnityEngine"))));

static auto set_rotation = reinterpret_cast<void(*)(transform*, vector4 value)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Transform"), _("set_rotation"), 1, _(""), _("UnityEngine"))));

static auto StartAttackCooldown = reinterpret_cast<void(*)(base_projectile*, float)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("AttackEntity"), _("StartAttackCooldown"), 1, _(""), _(""))));

static auto ProcessAttack = reinterpret_cast<void(*)(base_projectile*, HitTest*)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BaseMelee"), _("ProcessAttack"), 1, _(""), _(""))));

static auto GetProjectileVelocityScale = reinterpret_cast<float(*)(base_projectile*, bool max)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BaseProjectile"), _("GetProjectileVelocityScale"), 1, _("getMax"), _(""), 1)));

static auto get_Renderers = reinterpret_cast<rust::list<uintptr_t>*(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("SkinnedMultiMesh"), _("get_Renderers"), 0, _(""), _(""))));

static auto get_material = reinterpret_cast<uintptr_t(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Renderer"), _("get_material"), 0, _(""), _("UnityEngine"))));

static auto SetColor = reinterpret_cast<void(*)(uintptr_t material, rust::classes::string name, col value)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Material"), _("SetColor"), 2, _("name"), _("UnityEngine"), 1)));

static auto set_mat = reinterpret_cast<void(*)(uintptr_t shader, uintptr_t material)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Renderer"), _("set_material"), 2, _(""), _("UnityEngine"))));

static auto get_trasform_fn = reinterpret_cast<transform * (*)(void*)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Component"), _("get_transform"), -1, _(""), _("UnityEngine"))));

static auto getmodifiedaimcone = reinterpret_cast<Vector(*)(float, Vector, bool)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("AimConeUtil"), _("GetModifiedAimConeDirection"), 0, _(""), _(""))));
static auto set_localScale = reinterpret_cast<uintptr_t(*)(transform*, Vector)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Transform"), _("set_localScale"), 2, _(""), _("UnityEngine"))));
float current_time;

static auto DoMov_ = reinterpret_cast<void (*)(base_projectile*, float)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Projectile"), _("DoMovement"), 0, _(""), _(""))));

static auto console_msg = reinterpret_cast<void(*)(uintptr_t, rust::classes::string)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BasePlayer"), _("ConsoleMessage"), 1, _(""), _(""))));

void init_bp()
{
	console_msg = reinterpret_cast<void(*)(uintptr_t, rust::classes::string)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BasePlayer"), _("ConsoleMessage"), 1, _(""), _(""))));
	DoMov_ = reinterpret_cast<void (*)(base_projectile*, float)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Projectile"), _("DoMovement"), 0, _(""), _(""))));
	Max = reinterpret_cast<float (*)(float, float)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Mathf"), _("Max"), 2, _(""), _("UnityEngine"))));
	Text = reinterpret_cast<void (*)(rust::classes::string, Vector, col, float)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("DDraw"), _("Text"), 4, _(""), _("UnityEngine"))));
	Sphere = reinterpret_cast<void (*)(Vector, float, col, float, float)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("DDraw"), _("Sphere"), 5, _(""), _("UnityEngine"))));
	Line = reinterpret_cast<void (*)(Vector, Vector, col, float, bool, bool)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("DDraw"), _("Line"), 6, _(""), _("UnityEngine"))));
	set_onLadder = reinterpret_cast<void(*)(modelstate*, bool)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("ModelState"), _("set_onLadder"), 1, _(""), _(""))));
	GetWorldVelocity = reinterpret_cast<Vector(*)(base_player * base_entity)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BaseEntity"), _("GetWorldVelocity"), 0, _(""), _(""))));
	HasPlayerFlag = reinterpret_cast<bool(*)(base_player*, rust::classes::PlayerFlags)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BasePlayer"), _("HasPlayerFlag"), 1, _(""), _(""))));
	get_game_object_transform = reinterpret_cast<transform * (*)(uintptr_t game_object)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("GameObject"), _("get_transform"), 0, _(""), _("UnityEngine"))));
	get_rect = reinterpret_cast<rust::classes::Rect(*)(uintptr_t sprite)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Sprite"), _("get_rect"), 0, _(""), _("UnityEngine"))));
	get_iconSprite = reinterpret_cast<uintptr_t(*)(weapon * Item)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Item"), _("get_iconSprite"), 0, _(""), _(""))));
	steamItem = il2cpp::value(_("ItemDefinition"), _("steamItem"));
	iconSprite = il2cpp::value(_("ItemDefinition"), _("iconSprite"));
	get_texture = reinterpret_cast<uintptr_t(*)(uintptr_t sprite)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Sprite"), _("get_texture"), 0, _(""), _("UnityEngine"))));
	set_name = reinterpret_cast<void(*)(uintptr_t, rust::classes::string)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Object"), _("set_name"), 1, _(""), _("UnityEngine"))));;
	get_gameObject = reinterpret_cast<uintptr_t(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Component"), _("get_gameObject"), 0, _(""), _("UnityEngine"))));
	InverseTransformDirection = reinterpret_cast<Vector(*)(transform*, Vector)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Transform"), _("InverseTransformDirection"), 1, _(""), _("UnityEngine"))));
	LookRotation = reinterpret_cast<vector4(*)(Vector, Vector value)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Quaternion"), _("LookRotation"), 2, _(""), _("UnityEngine"))));
	set_rotation = reinterpret_cast<void(*)(transform*, vector4 value)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Transform"), _("set_rotation"), 1, _(""), _("UnityEngine"))));
	set_position = reinterpret_cast<void(*)(transform*, Vector value)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Transform"), _("set_position"), 1, _(""), _("UnityEngine"))));
	SetInt = reinterpret_cast<void(*)(uintptr_t material, rust::classes::string name, int value)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Material"), _("SetInt"), 1, _(""), _("UnityEngine"))));
	set_hideFlags = reinterpret_cast<void(*)(uintptr_t material, int value)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Object"), _("set_hideFlags"), 1, _(""), _("UnityEngine"))));
	Find = reinterpret_cast<uintptr_t(*)(rust::classes::string)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Shader"), _("Find"), 1, _(""), _("UnityEngine"))));
	SetColor = reinterpret_cast<void(*)(uintptr_t, rust::classes::string name, col value)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Material"), _("SetColor"), 2, _("name"), _("UnityEngine"), 1)));
	get_Renderers = reinterpret_cast<rust::list<uintptr_t> *(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("SkinnedMultiMesh"), _("get_Renderers"), 0, _(""), _(""))));
	get_material = reinterpret_cast<uintptr_t(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Renderer"), _("get_material"), 0, _(""), _("UnityEngine"))));
	StringPool_Get = reinterpret_cast<unsigned int(*)(rust::classes::string)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("StringPool"), _("Get"), 1, _("str"), _(""))));
	set_timeScale = reinterpret_cast<void(*)(float)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Time"), _("set_timeScale"), 1, _(""), _("UnityEngine"))));
	get_timeScale = reinterpret_cast<float(*)()>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Time"), _("get_timeScale"), 0, _(""), _("UnityEngine"))));
	GetIndex = reinterpret_cast<int(*)(uintptr_t SkinSetCollection, float)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("SkinSetCollection"), _("GetIndex"), 1, _(""), _(""))));
	FloorToInt = reinterpret_cast<int (*)(float)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Mathf"), _("FloorToInt"), 1, _(""), _("UnityEngine"))));
	get_gravity = reinterpret_cast<Vector(*)()>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Physics"), _("get_gravity"), 1, _(""), _("UnityEngine"))));
	FindBone = reinterpret_cast<transform * (*)(base_player*, rust::classes::string)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BaseEntity"), _("FindBone"), 1, _(""), _(""))));
	get_isAlive = reinterpret_cast<bool (*)(base_projectile*)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Projectile"), _("get_isAlive"), 0, _(""), _(""))));
	GetMouseButton = reinterpret_cast<bool(*)(int(*))>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Input"), _("GetMouseButton"), 0, _(""), _("UnityEngine"))));
	get_mousePosition = reinterpret_cast<Vector(*)()>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Input"), _("get_mousePosition"), 0, _(""), _("UnityEngine"))));
	GetMaxSpeed = reinterpret_cast<float(*)()>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BasePlayer"), _("GetMaxSpeed"), 1, _(""), _(""))));

	DidClientSideAttack = il2cpp::value(_("BaseProjectile"), _("DidAttackClientside"));
	UpdateAmmoDisplay = il2cpp::value(_("BaseProjectile"), _("UpdateAmmoDisplay"));
	ShotsFired = il2cpp::value(_("BaseProjectile"), _("ShotFired"));

	containerWear = il2cpp::value(_("PlayerInventory"), _("containerWear"));
	canWieldItems = il2cpp::value(_("BaseMountable"), _("canWieldItems"));
	mounted = il2cpp::value(_("BasePlayer"), _("mounted"));
	containerBelt = il2cpp::value(_("PlayerInventory"), _("containerBelt"));
	itemList = il2cpp::value(_("ItemContainer"), _("itemList"));
	integrity = il2cpp::value(_("Projectile"), _("integrity"));
	weakspots = il2cpp::value(_("BaseHelicopter"), _("weakspots"));

	model = il2cpp::value(_("BaseEntity"), _("model"));
	gathering = il2cpp::value(_("BaseMelee"), _("gathering"));

	lastHitTime = il2cpp::value(_("Chainsaw"), _("lastHitTime"));
	lastHitMaterial = il2cpp::value(_("Chainsaw"), _("lastHitMaterial"));
	landTime = il2cpp::value(_("PlayerWalkMovement"), _("landTime"));
	jumpTime = il2cpp::value(_("PlayerWalkMovement"), _("jumpTime"));
	groundTime = il2cpp::value(_("PlayerWalkMovement"), _("groundTime"));
	gravityMultiplier = il2cpp::value(_("PlayerWalkMovement"), _("gravityMultiplier"));

	damageProperties = il2cpp::value(_("BaseMelee"), _("damageProperties"));
	movement = il2cpp::value(_("BasePlayer"), _("movement"));
	_displayName = il2cpp::value(_("BasePlayer"), _("_displayName"));
	player_inventory = il2cpp::value(_("BasePlayer"), _("inventory"));
	clActiveItem = il2cpp::value(_("BasePlayer"), _("clActiveItem"));
	playerModel = il2cpp::value(_("BasePlayer"), _("playerModel"));
	clientTeam = il2cpp::value(_("BasePlayer"), _("clientTeam"));
	playerFlags = il2cpp::value(_("BasePlayer"), _("playerFlags"));
	clientTickInterval = il2cpp::value(_("BasePlayer"), _("clientTickInterval"));
	eyes = il2cpp::value(_("BasePlayer"), _("eyes"));
	lastSentTickTime = il2cpp::value(_("BasePlayer"), _("lastSentTickTime"));
	modelState = il2cpp::value(_("BasePlayer"), _("modelState"));
	input = il2cpp::value(_("BasePlayer"), _("input"));
	userID = il2cpp::value(_("BasePlayer"), _("userID"));

	newVelocity = il2cpp::value(_("PlayerModel"), _("newVelocity"));
	isLocalPlayer = il2cpp::value(_("PlayerModel"), _("isLocalPlayer"));
	initialVelocity = il2cpp::value(_("Projectile"), _("initialVelocity"));
	nextAttackTime = il2cpp::value(_("AttackEntity"), _("nextAttackTime"));
	timeSinceDeploy = il2cpp::value(_("AttackEntity"), _("timeSinceDeploy"));
	deployDelay = il2cpp::value(_("AttackEntity"), _("deployDelay"));
	repeatDelay = il2cpp::value(_("AttackEntity"), _("repeatDelay"));

	_health = il2cpp::value(_("BaseCombatEntity"), _("_health"));
	_maxHealth = il2cpp::value(_("BaseCombatEntity"), _("_maxHealth"));
	lifestate = il2cpp::value(_("BaseCombatEntity"), _("lifestate"));

	net = il2cpp::value(_("BaseNetworkable"), _("net"));

	heldEntity = il2cpp::value(_("Item"), _("heldEntity"));

	automatic = il2cpp::value(_("BaseProjectile"), _("automatic"));

	aimSway = il2cpp::value(_("BaseProjectile"), _("aimSway"));
	aimSwaySpeed = il2cpp::value(_("BaseProjectile"), _("aimSwaySpeed"));
	primaryMagazine = il2cpp::value(_("BaseProjectile"), _("primaryMagazine"));

	aimCone = il2cpp::value(_("BaseProjectile"), _("aimCone"));
	hipAimCone = il2cpp::value(_("BaseProjectile"), _("hipAimCone"));
	aimConePenaltyMax = il2cpp::value(_("BaseProjectile"), _("aimConePenaltyMax"));
	aimconePenaltyPerShot = il2cpp::value(_("BaseProjectile"), _("aimconePenaltyPerShot"));
	stancePenaltyScale = il2cpp::value(_("BaseProjectile"), _("stancePenaltyScale"));

	currentVelocity = il2cpp::value(_("Projectile"), _("currentVelocity"));
	currentPosition = il2cpp::value(_("Projectile"), _("currentPosition"));
	thickness_addr = il2cpp::value(_("Projectile"), _("thickness"));
	mod = il2cpp::value(_("Projectile"), _("mod"));
	hitTest = il2cpp::value(_("Projectile"), _("hitTest"));

	info = il2cpp::value(_("Item"), _("info"));

	category = il2cpp::value(_("ItemDefinition"), _("category"));
	itemid = il2cpp::value(_("ItemDefinition"), _("itemid"));
	displayName = il2cpp::value(_("ItemDefinition"), _("displayName"));

	viewOffset = il2cpp::value(_("PlayerEyes"), _("viewOffset"));

	swimming = il2cpp::value(_("PlayerWalkMovement"), _("swimming"));
	groundAngleNew = il2cpp::value(_("PlayerWalkMovement"), _("groundAngleNew"));
	flying = il2cpp::value(_("PlayerWalkMovement"), _("flying"));

	get_position = reinterpret_cast<Vector(*)(uintptr_t transform)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Transform"), _("get_position"), 0, _(""), _("UnityEngine"))));

	get_deltaTime = reinterpret_cast<float(*)()>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Time"), _("get_deltaTime"), 0, _(""), _("UnityEngine"))));

	get_IsNpc = reinterpret_cast<bool(*)(uintptr_t player_model)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("PlayerModel"), _("get_IsNpc"), -1, _(""), _(""))));

	Abs_fn = reinterpret_cast<float(*)(float)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Mathf"), _("Abs"), 1, _(""), _("UnityEngine"))));

	get_time = reinterpret_cast<float(*)()>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Time"), _("get_time"), 0, _(""), _("UnityEngine"))));

	GetProjectileVelocityScale = reinterpret_cast<float(*)(base_projectile*, bool max)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BaseProjectile"), _("GetProjectileVelocityScale"), 1, _("getMax"), _(""), 1)));

	ClosestPoint = reinterpret_cast<Vector(*)(base_player*, Vector)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BaseEntity"), _("ClosestPoint"), 1, _("position"), _(""), 1)));

	StartAttackCooldown = reinterpret_cast<void(*)(base_projectile*, float)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("AttackEntity"), _("StartAttackCooldown"), 1, _(""), _(""))));

	get_transform = reinterpret_cast<transform * (*)(base_player*)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Component"), _("get_transform"), 0, _(""), _("UnityEngine"))));

	InverseTransformPoint = reinterpret_cast<Vector(*)(transform*, Vector)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Transform"), _("InverseTransformPoint"), 1, _(""), _("UnityEngine"))));

	ProcessAttack = reinterpret_cast<void(*)(base_projectile*, HitTest*)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BaseMelee"), _("ProcessAttack"), 1, _(""), _(""))));

	get_trasform_fn = reinterpret_cast<transform * (*)(void*)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Component"), _("get_transform"), -1, _(""), _("UnityEngine"))));

	set_localScale = reinterpret_cast<uintptr_t(*)(transform*, Vector)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Transform"), _("set_localScale"), 2, _(""), _("UnityEngine"))));
	set_mat = reinterpret_cast<void(*)(uintptr_t shader, uintptr_t material)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Renderer"), _("set_material"), 2, _(""), _("UnityEngine"))));
	getmodifiedaimcone = reinterpret_cast<Vector(*)(float, Vector, bool)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("AimConeUtil"), _("GetModifiedAimConeDirection"), 0, _(""), _(""))));
}

class transform {
public:
	void setlocalscale(Vector scale)
	{
		set_localScale(this, scale);
	}

	void set_bone_position2(Vector d) {

		if (!(uintptr_t)this)
			return;

		return set_position(this, d);
	}

	Vector get_object_position()
	{
		if (!(uintptr_t)this)
			return {};

		const auto visual_state = *reinterpret_cast<uintptr_t*>((uintptr_t)this + 0x38);
		if (!visual_state)
			return {};

		return mem::read<Vector>(visual_state + 0x90);
	}

	Vector* get_position_ptr()
	{
		if (!(uintptr_t)this)
			return {};

		const auto visual_state = mem::read<uintptr_t>(reinterpret_cast<uintptr_t>(this) + 0x38);
		if (!visual_state)
			return {};

		return reinterpret_cast<Vector*>(visual_state + 0x90);
	}
};

class mono_behaviour {
public:
	transform* get_transform()
	{
		// const auto unk = *reinterpret_cast< uintptr_t* >( this + 0x30 );

		return mem::read<transform*>(reinterpret_cast<uintptr_t>(this) + 0x8);
	}
};

class item_mod_projectile {
public:
	float get_projectile_velocity() {
		return mem::read<float>(reinterpret_cast<uintptr_t>(this) + 0x34);
	}

	void projectileSpread(float val) {
	     mem::write<float>(reinterpret_cast<uintptr_t>(this) + 0x30, val);
	}
	
	void projectileVelocitySpread(float val) {
		 mem::write<float>(reinterpret_cast<uintptr_t>(this) + 0x38, val);
	}
};

class base_player;

struct Ray {
	Vector origin;
	Vector dir;
	Ray(Vector o, Vector d) {
		origin = o;
		dir = d;
	}
};

class HitTest {
public:
	Vector getHitNormalWorld() {
		return mem::read<Vector>(reinterpret_cast<uintptr_t>(this) + O::HitTest::HitNormalWorld);
	}

	uintptr_t game_object() {
		return mem::read<uintptr_t>(reinterpret_cast<uintptr_t>(this) + 0x70);
	}

	rust::classes::game_object* get_gameobject()
	{
		auto gameObject = game_object();
		if (!gameObject)
			return nullptr;

		return mem::read<rust::classes::game_object*>(reinterpret_cast<uintptr_t>(this) + 0x10);
	}

	void set_hit_transform(transform* hit_transform) {
		mem::write<transform*>(reinterpret_cast<uintptr_t>(this) + 0xB0, hit_transform);
	}	
	
	void set_hit_type(rust::classes::HitTestType hit_type) {
		mem::write<int>(reinterpret_cast<uintptr_t>(this) + 0x10, (int)hit_type);
	}

	void set_ignore_entity(base_player* entity_to_ignore) {
		mem::write<base_player*>(reinterpret_cast<uintptr_t>(this) + 0x80, entity_to_ignore);
	}

	void set_radius(float radius) {
		mem::write<float>(reinterpret_cast<uintptr_t>(this) + 0x2C, radius);
	}

	void set_did_hit(bool did_hit) {
		mem::write<bool>(reinterpret_cast<uintptr_t>(this) + 0x66, did_hit);
	}

	bool get_did_hit() 
	{
		return mem::read<bool>(reinterpret_cast<uintptr_t>(this) + 0x66);
	}

	void set_attack_ray(Ray ray) {
		mem::write<Ray>(reinterpret_cast<uintptr_t>(this) + 0x14, ray);
	}

	void set_best_hit(bool best_hit) {
		mem::write<bool>(reinterpret_cast<uintptr_t>(this) + 0x65, best_hit);
	}

	void set_max_distance(float max_dist) {
		mem::write<float>(reinterpret_cast<uintptr_t>(this) + 0x34, max_dist);
	}

	void set_hit_entity(base_player* entity) {
		mem::write<base_player*>(reinterpret_cast<uintptr_t>(this) + 0x88, entity);
	}

	base_player* get_hit_entity() {
		return mem::read<base_player*>(reinterpret_cast<uintptr_t>(this) + 0x88);
	}

	void set_hit_point(Vector hit_point) {
		mem::write<Vector>(reinterpret_cast<uintptr_t>(this) + 0x90, hit_point);
	}

	void set_hit_normal(Vector hit_nromal) {
		mem::write<Vector>(reinterpret_cast<uintptr_t>(this) + 0x9C, hit_nromal);
	}
	void set_damage_properties(uintptr_t damage_properties) {
		mem::write<uintptr_t>(reinterpret_cast<uintptr_t>(this) + 0x68, damage_properties);
	}

	HitTest* BuildAttackMessage()
	{
		return mem::read<HitTest*>(reinterpret_cast<uintptr_t>(this) + O::HitTest::BuildAttackMessage);
	}

	HitTest* HitMaterialID()
	{
		return mem::read<HitTest*>(reinterpret_cast<uintptr_t>(this) + O::HitTest::HitMaterial);
	}
};

class GatherPropertyEntry {
public:
	float& gatherDamage() {
		return *reinterpret_cast<float*>((uintptr_t)this + 0x10);
	}
	
	float& destroyFraction() {
		return *reinterpret_cast<float*>((uintptr_t)this + 0x14);
	}
	
	float& conditionLost() {
		return *reinterpret_cast<float*>((uintptr_t)this + 0x18);
	}
};

class GatherProperties {
public:
	GatherPropertyEntry*& tree() {
		return *reinterpret_cast<GatherPropertyEntry**>((uintptr_t)this + 0x10);
	}

	GatherPropertyEntry*& ore() {
		return *reinterpret_cast<GatherPropertyEntry**>((uintptr_t)this + 0x18);
	}
};

class base_projectile {
public:
	transform* get_transform_m()
	{
		if (!this) return nullptr;
		return get_trasform_fn(this);
	}

	void updateProj()
	{
		if (!this)
			return;

		return reinterpret_cast<void(__fastcall*)(base_projectile*)>(mem::game_assembly_base + O::Projectile::Update)(this);
	}

	float projectilevel_scale = projectileVelocityScale();
	bool first = false;
	float thickness = 1.5;

	base_projectile* getPrimaryMag()
	{
		return mem::read<base_projectile*>(reinterpret_cast<uintptr_t>(this) + O::BaseProjectile::primaryMagazine);
	}
	void set_current_position(Vector position)
	{
		mem::write<Vector>((uintptr_t)this + currentPosition, position); //currentPosition
	}

	void set_previous_position(Vector position)
	{
		mem::write<Vector>((uintptr_t)this + O::Projectile::previousPosition, position); //currentPosition
	}

	float getReloadTime()
	{
		return mem::read<float>(reinterpret_cast<uintptr_t>(this) + O::BaseProjectile::reloadTime);
	}

	bool isReloading()
	{
		return mem::read<bool>(reinterpret_cast<uintptr_t>(this) + O::BaseProjectile::isReloading);
	}

	void LaunchProjectile()
	{
		if (!this)
			return;
		return reinterpret_cast<void(__fastcall*)(base_projectile*)>(mem::game_assembly_base + O::BaseProjectile::LaunchProjectile)(this);
	}

	void doAttack()
	{
		if (!this)
			return;

		return reinterpret_cast<void(__fastcall*)(base_projectile*)>(mem::game_assembly_base + DidClientSideAttack)(this);
	}

	void shotsFired()
	{
		if (!this)
			return;
		return reinterpret_cast<void(__fastcall*)(base_projectile*)>(mem::game_assembly_base + ShotsFired)(this);
	}

	void updateAmmoDisplay()
	{
		if (!this)
			return;
		return reinterpret_cast<void(__fastcall*)(base_projectile*)>(mem::game_assembly_base + UpdateAmmoDisplay)(this);
	}

	bool isOwner(base_player* local)
	{
		auto List = mem::read<DWORD64>(reinterpret_cast<uintptr_t>(this) + 0x370);
		int size = mem::read<int>(List + 0x18);
		uintptr_t contents = mem::read<uintptr_t>(List + 0x10);

		for (int i = 0; i < size; i++)
		{
			uintptr_t item = mem::read<uintptr_t>(contents + 0x20 + (i * 0x8)); //0x48
			base_player* owner = mem::read<base_player*>(item + 0xd0);

			if (owner == local)
			{
				return true;
			}
		}
		return false;
	}

	Vector bulletEndPos()
	{
		auto List = mem::read<DWORD64>(reinterpret_cast<uintptr_t>(this) + 0x370);
		int size = mem::read<int>(List + 0x18);
		uintptr_t contents = mem::read<uintptr_t>(List + 0x10);

		for (int i = 0; i < size; i++)
		{
			uintptr_t item = mem::read<uintptr_t>(contents + 0x20 + (i * 0x8)); //0x48
			Vector sentPos = mem::read<Vector>(item + 0x13c);
			return sentPos;
		}
	}

	float CalculateCooldownTime(float nextTime, float cooldown) {
		auto time = get_time();
		float num = time;
		float num2 = 0.f;

		float ret = nextTime;

		if (ret < 0.f) {
			ret = min(0.f, num + cooldown - num2);
		}
		else if (num - ret <= num2) {
			ret = max(ret + cooldown, num + cooldown);
		}
		else {
			ret = min(ret + cooldown, num + cooldown - num2);
		}
		return ret;
	}

	GatherProperties*& Gathering() {
		return *reinterpret_cast<GatherProperties**>((uintptr_t)this + gathering);
	}

	void set_last_hit_time(float time) {
		mem::write<float>(reinterpret_cast<uintptr_t>(this) + lastHitTime, time);
	}

	void set_last_hit_material(rust::classes::string material) {
		mem::write<rust::classes::string>(reinterpret_cast<uintptr_t>(this) + lastHitMaterial, material);
	}

	float get_next_attack_time() {
		return mem::read<float>(reinterpret_cast<uintptr_t>(this) + nextAttackTime);
	}

	float get_time_since_deploy() {
		return mem::read<float>(reinterpret_cast<uintptr_t>(this) + timeSinceDeploy);
	}

	float get_deploy_delay() {
		return mem::read<float>(reinterpret_cast<uintptr_t>(this) + deployDelay);
	}

	float get_repeat_delay() {
		return mem::read<float>(reinterpret_cast<uintptr_t>(this) + repeatDelay);
	}

	char* get_class_name() {
		auto bp = *reinterpret_cast<uintptr_t*>(this);
		return (char*)*reinterpret_cast<uintptr_t*>(bp + 0x10);
	}

	uintptr_t get_damage_properties() {
		return mem::read<uintptr_t>(reinterpret_cast<uintptr_t>(this) + damageProperties);
	}

	uintptr_t get_hit_test() {
		return mem::read<uintptr_t>(reinterpret_cast<uintptr_t>(this) + hitTest);
	}

	void set_integrity(float to_set) {
		mem::write<float>(reinterpret_cast<uintptr_t>(this) + integrity, to_set);
	}

	item_mod_projectile* get_item_mod_projectile() {
		return *reinterpret_cast<item_mod_projectile**>((uintptr_t)this + mod);
	}

	void set_projectile_thickness(float thickness)
	{
		*reinterpret_cast<float*>((uintptr_t)this + thickness_addr) = thickness;
	}
	
	void set_ricochet_chance(float chance)
	{
		*reinterpret_cast<float*>((uintptr_t)this + ricochet_addr) = chance;
	}

	float get_projectile_thickness()
	{
		return *reinterpret_cast<float*>((uintptr_t)this + thickness_addr);
	}

	float& projectileVelocityScale()
	{
		return *reinterpret_cast<float*>((uintptr_t)this + projectileVelocityScale_addr);
	}

	void set_current_velocity(Vector position)
	{
		*reinterpret_cast<Vector*>((uintptr_t)this + currentVelocity) = position;
	}

	void set_Initial_Velocity(Vector pos)
	{
		*reinterpret_cast<Vector*>((uintptr_t)this + initialVelocity) = pos;
	}

	void set_Initial_Distance(Vector pos)
	{
		*reinterpret_cast<Vector*>((uintptr_t)this + O::Projectile::initialDistance) = pos;
	}
	
	uint32_t get_size() { return *reinterpret_cast<uint32_t*>((uintptr_t)this + 0x18); }

	void set_recoil() 
	{
		auto recoil_properties = *reinterpret_cast<uintptr_t*>((uintptr_t)this + 0x2e0);
		*(float*)(recoil_properties + 0x18) = 0;
		*(float*)(recoil_properties + 0x1C) = 0;
		*(float*)(recoil_properties + 0x20) = 0;
		*(float*)(recoil_properties + 0x24) = 0;

		auto newRecoilOverride = *(uintptr_t*)(recoil_properties + 0x78);
		*(float*)(newRecoilOverride + 0x18) = 0;
		*(float*)(newRecoilOverride + 0x1C) = 0;
		*(float*)(newRecoilOverride + 0x20) = 0;
		*(float*)(newRecoilOverride + 0x24) = 0;
	}

	void set_no_sway() {
		*reinterpret_cast<float*>((uintptr_t)this + aimSway) = 0;
		*reinterpret_cast<float*>((uintptr_t)this + aimSwaySpeed) = 0;
	}

	bool& is_automatic() {
		return *reinterpret_cast<bool*>((uintptr_t)this + automatic);
	}

	void setNoAnims() {
		auto viewModel = *reinterpret_cast<uintptr_t*>((uintptr_t)this + 0x1a0);
		auto baseViewModel = *(uintptr_t*)(viewModel + 0x28);
		*(uintptr_t*)(baseViewModel + 0x58) = NULL;
	}

	void setNoBob() {
		auto viewModel = *reinterpret_cast<uintptr_t*>((uintptr_t)this + 0x1a0);
		auto baseViewModel = *(uintptr_t*)(viewModel + 0x28);
		auto bob = *(uintptr_t*)(baseViewModel + 0x80);
		*(float*)(bob + 0x20) = 0.f;
		*(float*)(bob + 0x24) = 0.f;
		*(float*)(bob + 0x28) = 0.f;
		*(float*)(bob + 0x2c) = 0.f;
		*(float*)(bob + 0x30) = 0.f;
	}

	void setNoLower() {
		auto viewModel = *reinterpret_cast<uintptr_t*>((uintptr_t)this + 0x1a0);
		auto baseViewModel = *(uintptr_t*)(viewModel + 0x28);
		auto lower = *(uintptr_t*)(baseViewModel + 0x78);
		*(float*)(lower + 0x1c) = 0.f;
	}

	void set_no_spread() {
		*reinterpret_cast<float*>((uintptr_t)this + 0x338) = 0; //hip aimcone scale
		*reinterpret_cast<float*>((uintptr_t)this + 0x330) = 0; //sight aimcone scale
	}

	void set_success_fraction() {
		*reinterpret_cast<float*>((uintptr_t)this + successFraction) = 1.f;
	}

	void set_did_spark_this_frame(bool state) {
		*reinterpret_cast<bool*>((uintptr_t)this + didSparkThisFrame) = state;
	}

	Vector get_bone_position() {
		if (!(uintptr_t)this)
			return {};

		return get_position((uintptr_t)this);
	}

	Vector get_current_position() {
		return *reinterpret_cast<Vector*>((uintptr_t)this + currentPosition);
	}
};

class PlayerNameID {
public:
	wchar_t* get_username() {
		auto username = (str)(*reinterpret_cast<uintptr_t*>((uintptr_t)this + 0x18));

		return username->str;
	}

	unsigned long get_user_id()
	{
		return *reinterpret_cast<unsigned long*>((uintptr_t)this + 0x20);
	}
};

class weapon {
public:
	uintptr_t entity() {
		return mem::read<uintptr_t>((uintptr_t)this + 0x98);
	}
	uintptr_t get_icon_sprite() {
		const auto     item_definition = mem::read<uintptr_t>((uintptr_t)this + info);
		if (!item_definition)
			return 0;

		return *reinterpret_cast<uintptr_t*>(item_definition + iconSprite);
	}

	char* ClassName() {
		return (char*)safe_read(safe_read(safe_read(this + O::Item::heldEntity, DWORD64), DWORD64) + 0x10, DWORD64);
	}
	
	uintptr_t get_steam_icon_sprite() {
		const auto     item_definition = mem::read<uintptr_t>((uintptr_t)this + info);
		if (!item_definition)
			return 0;

		auto SteamInventoryItem = *reinterpret_cast<uintptr_t*>(item_definition + steamItem);
		if (!SteamInventoryItem)
			return 0;

		return *reinterpret_cast<uintptr_t*>(SteamInventoryItem + 0x20);
	}

	int GetAmount()
	{
		return *reinterpret_cast<int*>(this + 0x30);
	}

	wchar_t* get_weapon_name()
	{
		auto held = mem::read<uintptr_t>(reinterpret_cast<uintptr_t>(this) + 0xa0);
		held = mem::read<uintptr_t>(held);
		auto weapon_name = (str)(*reinterpret_cast<uintptr_t*>(held + 0x158));
		return weapon_name->str;
	}

	bool is_weapon() {
		const auto     item_definition = mem::read<uintptr_t>((uintptr_t)this + info);
		if (!item_definition)
			return false;

		return mem::read<uint32_t>(item_definition + category) == 0;
	}

	int32_t get_item_definition_id()
	{
		const auto     item_definition = *reinterpret_cast<uintptr_t*>((uintptr_t)this + info);
		if (!item_definition)
			return 0;

		return *reinterpret_cast<int32_t*>(item_definition + itemid);
	}

	base_projectile* get_base_projetile() {
		return *reinterpret_cast<base_projectile**>((uintptr_t)this + heldEntity);
	}




	int GetID()
	{
		const auto Info = mem::read<uintptr_t>(reinterpret_cast<uintptr_t>(this) + 0x20);
		const int ID = mem::read<int>(Info + 0x18);
		return ID;
	}

	int LoadedAmmo()
	{
		const auto Held = mem::read<DWORD64>(reinterpret_cast<uintptr_t>(this) + 0xa0);
		if (Held <= 0)
			return 0;
		const auto Magazine = mem::read<DWORD64>(Held + primaryMagazine);
		if (Magazine <= 0 || Magazine == 0x3F000000)
		{
			return 0;
		}
		const auto ammoType = mem::read<DWORD64>(Magazine + 0x20);
		if (ammoType <= 0 || ammoType == 0x3F000000)
		{
			return 0;
		}
		const int ammo = mem::read<int>(ammoType + 0x18);
		return ammo;
	}
};

class modelstate {
public:
	void set_water_level(float water_level) {
		*reinterpret_cast<float*>((uintptr_t)this + 0x14) = water_level;
	}

	void remove_flag(rust::classes::ModelState_Flag flag) {
		int flags = *reinterpret_cast<int*>((uintptr_t)this + 0x24);
		flags &= ~(int)flag;

		*reinterpret_cast<int*>((uintptr_t)this + 0x24) = flags;
	}
	
	void set_flag(rust::classes::ModelState_Flag flag) {
		int flags = *reinterpret_cast<int*>((uintptr_t)this + 0x24);

		*reinterpret_cast<int*>((uintptr_t)this + 0x24) = flags |= (int)flag;
	}

	bool has_flag(rust::classes::ModelState_Flag f)
	{
		int& flags = *reinterpret_cast<int*>((uintptr_t)this + 0x24);

		return (flags & (int)f) == (int)f;
	}
};

class playerwalkmovement {
public:
	void TargetMovementk__BackingField(Vector d) {
		*reinterpret_cast<Vector*>((uintptr_t)this + O::BaseMovement::TargetMovementk__BackingField) = d;
	}

	void groundAngleNew228(Vector d) {
		*reinterpret_cast<Vector*>((uintptr_t)this + O::PlayerWalkMovement::groundAngleNew) = d;
	}

	void groundAngle(Vector d) {
		*reinterpret_cast<Vector*>((uintptr_t)this + O::PlayerWalkMovement::groundAngle) = d;
	}

	void set_swimming(bool flag) {
		*reinterpret_cast<bool*>((uintptr_t)this + swimming) = flag;
	}

	bool get_admin_cheat() {
		return *reinterpret_cast<bool*>((uintptr_t)this + 0x18);
	}

	void set_admin_cheat(bool admin_cheat) {
		*reinterpret_cast<bool*>((uintptr_t)this + 0x18) = admin_cheat;
	}

	bool get_flying() {
		return *reinterpret_cast<bool*>((uintptr_t)this + flying);
	}

	void set_flying(bool fly) {
		*reinterpret_cast<bool*>((uintptr_t)this + flying) = fly;
	}

	void set_ground_angles_new(float angle) {
		*reinterpret_cast<float*>((uintptr_t)this + groundAngleNew) = angle;
	}

	void set_land_time(float time) {
		*reinterpret_cast<float*>((uintptr_t)this + landTime) = time;
	}

	void set_jump_time(float time) {
		*reinterpret_cast<float*>((uintptr_t)this + jumpTime) = time;
	}

	void set_ground_time(float time) {
		*reinterpret_cast<float*>((uintptr_t)this + groundTime) = time;
	}

	void set_gravity_multiplier(float multiplier) {
		*reinterpret_cast<float*>((uintptr_t)this + gravityMultiplier) = multiplier;
	}
};

auto cliententities = il2cpp::value(_("BaseNetworkable"), _("clientEntities"), false);

class networkable {
public:
	unsigned int get_id() {
		return *reinterpret_cast<unsigned int*>((uintptr_t)this + 0x10);
	}
};

class aim_target 
{
public:
};

float get_2d_dist(const vector2& Src, const Vector& Dst) {
	return my_sqrt( powFFFFFFFFFFFFFFFFFFFFFF(Src.x - Dst.x) + powFFFFFFFFFFFFFFFFFFFFFF(Src.y - Dst.y));
}

class playereyes {
public:
	void set_view_offset(Vector offset) {
		mem::write<Vector>(reinterpret_cast<uintptr_t>(this) + viewOffset, offset);
	}

	Vector get_view_offset() {
		return mem::read<Vector>(reinterpret_cast<uintptr_t>(this) + viewOffset);
	}


};

class input_state {
public:
	void set_aim_angles(Vector aim_angle) {
		auto current = mem::read<uintptr_t>((uintptr_t)this + 0x10);

		*reinterpret_cast<Vector*>(current + 0x18) = aim_angle;
	}
};

class basemountable {
public:
	bool& canwielditem() {
		return *reinterpret_cast<bool*>((uintptr_t)this + canWieldItems);
	}
};

class PlayerTick {
public:
	Vector position() {
		Vector th = mem::read<Vector>((uintptr_t)this + 0x20);
		if (!th.is_empty()) {
			return th;
		}
		else { return Vector(0.f, 0.f, 0.f); }
	}
};

class Player_Model {
public:
	Vector position() {
		return mem::read<Vector>((uintptr_t)this + O::PlayerModel::position);
	}
};



class PlayerEyes {
public:
	Quaternion get_rotation() {
		typedef Quaternion(__stdcall* get_rotation)(PlayerEyes*);
		Quaternion result = ((get_rotation)(mem::game_assembly_base + O::PlayerEyes::get_rotation))(this);
		return result;
	}
	//movementForward'
};

class base_player;
base_player* local_player = 0;

class base_player 
{
public:

	playereyes* get_player_eyes() {
		return *reinterpret_cast<playereyes**>((uintptr_t)this + eyes);
	}

	float get_client_tick_interval() {
		return mem::read<float>(reinterpret_cast<uintptr_t>(this) + clientTickInterval);
	}

	int get_player_flag()
	{
		return mem::read<int>(reinterpret_cast<uintptr_t>(this) + O::BasePlayer::playerFlags);
	}

	bool IsValid()
	{
		if (!this)
			return false;

		const auto Valid = mem::read<uintptr_t>(mem::game_assembly_base + 0x498AD0);
		return Valid;
	}
	bool IsNpc() {
		DWORD64 PlayerModel = mem::read<uintptr_t>((uintptr_t)this + O::BasePlayer::playerModel); //	public PlayerModel playerModel;
		return mem::read<bool>(PlayerModel + 0x320);//private bool <IsNpc>k__BackingField;
	}

	DWORD64 GetSteamID() {
		return safe_read(this + 0x6C0, DWORD64);
	}



	bool IsDead() {
		if (!this) return true;
		return mem::read<bool>((uintptr_t)this + 0x21C);
	}

	float GetHealth() {
		return mem::read<float>((uintptr_t)this + _health);
	}

	

	bool HasFlags(int Flg) {
		return (mem::read<int>((uintptr_t)this + playerFlags) & Flg);
	}
	PlayerEyes* Radar_eyes() { return mem::read<PlayerEyes*>((uintptr_t)this + 0x680); }

	float GetJumpHeight()
	{
		return 1.5f;
	}

	PlayerTick* lastSentTick() {
		return (PlayerTick*)mem::read<DWORD64*>((uintptr_t)this + O::BasePlayer::lastSentTick);
	}

	Player_Model* get_player_model2() {
		return (Player_Model*)mem::read<DWORD64*>((uintptr_t)this + playerModel);
	}

	float GetHeight(bool ducked)
	{
		if (ducked)
		{
			return 1.1f;
		}
		return 1.8f;
	}

	bool Has_modelstate_flags(int Flg) {
		DWORD64 mstate = mem::read<DWORD64>((uintptr_t)this + modelState);

		return (mem::read<int>(mstate + 0x24) & Flg);
	}

	float GetHeight()
	{
		return this->GetHeight(this->Has_modelstate_flags(1));
	}

	float GetRadius()
	{
		return 0.5f;
	}

	float Time() {
		return safe_read(this + O::BasePlayer::lastSentTickTime, float);
	}

	Vector GetBoneByID(BoneList BoneID) {
		return GetPosition(GetTransform(BoneID));
	}

	Vector bodyAngles()
	{
		auto plr_input = *reinterpret_cast<uintptr_t*>(this + input);
		if (!plr_input)
			return {};

		constexpr auto bodyAngles = 0x3C; //private Vector bodyAngles; 
		return *reinterpret_cast<Vector*>(plr_input + bodyAngles);

	}

	void SpiderMan() {
		*reinterpret_cast<float*>(this + 0xb0) = 0.f;
	}

	float MaxVelocity() {
		if (!this) return 0.f;

		if (mounted)
			return GetMaxSpeed() * 4;

		return GetMaxSpeed();
	}

	basemountable* get_mountable() {
		return mem::read<basemountable*>((uintptr_t)this + mounted);
	}

	wchar_t* get_player_name() {
		auto player_name = (str)mem::read<uintptr_t>(reinterpret_cast<uintptr_t>(this) + _displayName);
		return player_name->str;
	}

	uintptr_t get_weakspots() {
		return mem::read<uintptr_t>(reinterpret_cast<uintptr_t>(this) + weakspots);
	}

	Vector get_new_velocity() {
		auto player_model = mem::read<uintptr_t>(reinterpret_cast<uintptr_t>(this) + playerModel);

		return mem::read<Vector>(player_model + newVelocity);
	}

	modelstate* get_model_state() {
		return mem::read<modelstate*>(reinterpret_cast<uintptr_t>(this) + modelState);
	}

	void set_client_tick_interval(float tick) {
		if (!this)
			return;

		mem::write<float>(reinterpret_cast<uintptr_t>(this) + clientTickInterval, tick);
	}

	void set_admin_flag(rust::classes::PlayerFlags flag) {
		int PlayerFlag = *reinterpret_cast<int*>((uintptr_t)this + playerFlags);

		mem::write<int>(reinterpret_cast<uintptr_t>(this) + playerFlags, PlayerFlag |= (int)flag);
	}

	unsigned long get_steam_id() {
		if (!this)
			return 0;

		if (!get_player_model())
			return 0;

		return mem::read<unsigned long>(reinterpret_cast<uintptr_t>(this) + userID);
	}

	bool is_teammate(base_player* local_player) {
		auto team = mem::read<uintptr_t>((uintptr_t)local_player + clientTeam);

		auto member = mem::read<uintptr_t>(team + 0x30);

		auto size = mem::read<int>(member + 0x18);

		auto list = mem::read<uintptr_t>(member + 0x10);

		auto steam_id = get_steam_id();

		for (int i = 0; i < size; i++) {
			auto player = mem::read<uintptr_t>(list + 0x20 + i * 0x8);

			auto id = mem::read<unsigned long>(player + 0x20);

			if (id == steam_id)
				return true;
		}
		return false;
	}

	auto get_last_sent_ticket_time() {
		return mem::read<float>(reinterpret_cast<uintptr_t>(this) + O::BasePlayer::lastSentTickTime);
	}

	transform* get_bone_transform( int bone_id) {
		uintptr_t entity_model = *reinterpret_cast<uintptr_t*>((uintptr_t)this + 0x130); //public Model model; // 
		uintptr_t bone_dict = *reinterpret_cast<uintptr_t*>(entity_model + 0x48);
		transform* BoneValue = *reinterpret_cast<transform**>(bone_dict + 0x20 + bone_id * 0x8);

		return BoneValue;
	}

	Vector Position()
	{
		return GetPosition(GetTransform(15)).midPoint(GetPosition(GetTransform(3)));
	}

	DWORD64 GetTransform(int bone)
	{
		uintptr_t player_model = mem::read<uintptr_t>((uintptr_t)this + 0x130);// public Model model;_public class BaseEntity : BaseNetworkable, IProvider, ILerpTarget, IPrefabPreProcess // TypeDefIndex: 8714
		uintptr_t boneTransforms = mem::read<uintptr_t>(player_model + 0x48);//public Transform[] boneTransforms;
		uintptr_t BoneValue = mem::read<uintptr_t>((boneTransforms + (0x20 + (bone * 0x8))));
		return BoneValue;
	}

	typedef Vector(__stdcall* Transform)(UINT64);
	Vector GetPosition(ULONG_PTR pTransform)
	{
		if (!pTransform) return Vector();
		Transform original = (Transform)(mem::game_assembly_base + O::UnityEngine_Transform::get_position);
		Vector res = original(pTransform);
		return res;
	}

	bool is_sleeping()
	{
		auto Flags = mem::read<int>(reinterpret_cast<uintptr_t>(this) + playerFlags);

		return Flags & 16;
	}

	Vector GetVelocity()
	{
		const auto PlayerModel = mem::read<uintptr_t>(reinterpret_cast<uintptr_t>(this) + playerModel);
		return mem::read<Vector>(PlayerModel + 0x23C);
	}

	vector2 GetRA()
	{
	    const auto Input = mem::read<uintptr_t>(reinterpret_cast<uintptr_t>(this) + 0x4E0);
		return mem::read<vector2>(Input + 0x64);//public Vector 
	}

	vector2 GetVA()
	{
		const auto Input = mem::read<uintptr_t>(reinterpret_cast<uintptr_t>(this) + 0x4E0);
		return mem::read<vector2>(Input + 0x3C);
	}

	void SetVA(const vector2& VA)
	{
		const auto Input = mem::read<uintptr_t>(reinterpret_cast<uintptr_t>(this) + 0x4E0);
		mem::write<vector2>(Input + 0x3C, VA);
	}

	weapon* get_active_weapon()
	{
		unsigned int ActUID = mem::read<unsigned int>((uintptr_t)this + clActiveItem);

		if (!ActUID)
			return 0;

		weapon* ActWeapon;

		uint64_t Inventory = mem::read<uint64_t>((uintptr_t)this + player_inventory);
		if (!Inventory)
			return 0;

		uint64_t Belt = mem::read<uint64_t>(Inventory + 0x28);
		if (!Belt)
			return 0;

		uint64_t ItemList = mem::read<uint64_t>(Belt + 0x38);
		if (!ItemList)
			return 0;

		auto items = mem::read<uint64_t>(ItemList + 0x10);
		if (!items)
			return 0;

		for (int i = 0; i < 6; i++) //For each slot	
		{
			weapon* WeaponInfo = mem::read<weapon*>(items + 0x20 + (i * 0x8));;

			if (!WeaponInfo)
				return 0;

			unsigned int WeaponUID = mem::read<unsigned int>((uintptr_t)WeaponInfo + 0x28);
			if (!WeaponUID)
				return 0;

			if (ActUID == WeaponUID)
			{
				ActWeapon = WeaponInfo;
				return ActWeapon;
			}
		}
		return 0;
	}

	uintptr_t get_player_model() {
		return mem::read<uintptr_t>(reinterpret_cast<uintptr_t>(this) + playerModel);
	}

	uintptr_t get_model() {
		return mem::read<uintptr_t>(reinterpret_cast<uintptr_t>(this) + model);
	}

	networkable* get_networkable() {
		return mem::read<networkable*>(reinterpret_cast<uintptr_t>(this) + 0x58);
	}
	
	playerwalkmovement* get_movement() {
		return mem::read<playerwalkmovement*>(reinterpret_cast<uintptr_t>(this) + movement);
	}

	playerwalkmovement* get_movement2() {
		return mem::read<playerwalkmovement*>(reinterpret_cast<uintptr_t>(this) + O::BasePlayer::movement);
	}

	float get_health() {
		return mem::read<float>(reinterpret_cast<uintptr_t>(this) + _health);
	}

	float get_max_health() {
		return mem::read<float>(reinterpret_cast<uintptr_t>(this) + _maxHealth);
	}

	bool is_local_player(){
		if (!this)
			return false;

		auto player_model = get_player_model();
		if (!player_model)
			return false;

		auto is_local = mem::read<bool>(player_model + isLocalPlayer);
\
		return is_local;
	}

	bool is_alive() {
		if (!this)
			return 0;
		const auto life_state = mem::read<uint32_t>(reinterpret_cast<uintptr_t>(this) + lifestate);

		return life_state == 0;
	}

	rust::classes::game_object* get_game_object()
	{
		if (!(uintptr_t)this)
			return nullptr;

		const auto unk0 = mem::read<uintptr_t>(reinterpret_cast<uintptr_t>(this) + 0x10);
		if (!unk0)
			return nullptr;

		const auto unk1 = mem::read<rust::classes::game_object*>(reinterpret_cast<uintptr_t>(this) + 0x30);
		if (!unk1)
			return nullptr;

		return unk1;
	}

	void setViewAngles(vector2 viewangles)
	{
		uintptr_t playerinput = mem::read<uintptr_t>(reinterpret_cast<uintptr_t>(this) + 0x4f0);
		mem::write<vector2>(playerinput + 0x3c, viewangles);
	}

	vector2 getViewAngles()
	{
		uintptr_t playerinput = mem::read<uintptr_t>(reinterpret_cast<uintptr_t>(this) + 0x4f0);
		return mem::read<vector2>(playerinput + 0x3c);
	}
};

Vector WorldToScreen(Vector position)
{
	auto matrix = unity::get_view_matrix();

	if (!matrix.m) {
		return { 0,0,0 };
	}
	Vector out;
	const auto temp = matrix.transpose();

	auto translation_vector = Vector{ temp[3][0], temp[3][1], temp[3][2] };
	auto up = Vector{ temp[1][0], temp[1][1], temp[1][2] };
	auto right = Vector{ temp[0][0], temp[0][1], temp[0][2] };

	float w = translation_vector.Dot(position) + temp[3][3];

	if (w < 0.098f) {
		return Vector(0, 0, 0);
	}

	float x = up.Dot(position) + temp._24;
	float y = right.Dot(position) + temp._14;

	out.x = (static_cast<float>(unity::get_width()) / 2) * (1 + y / w);
	out.y = (static_cast<float>(unity::get_height()) / 2) * (1 - x / w);
	out.z = w;

	return out;
}




namespace utils {
	Vector GetEntityPosition(uint64_t entity) {
		if (!entity) return Vector::Zero();

		uintptr_t plyVis = safe_read(entity + 0x8, uintptr_t);
		if (!plyVis) return Vector::Zero();

		uintptr_t visualState = safe_read(plyVis + 0x38, uintptr_t);
		if (!visualState) return Vector::Zero();

		Vector ret = safe_read(visualState + 0x90, Vector);
		return ret;
	}


	Vector ClosestPoint(base_player* player, Vector vec) {
		typedef Vector(__stdcall* CPoint)(base_player*, Vector);
		Vector result = ((CPoint)(mem::game_assembly_base + O::BaseEntity::ClosestPoint))(player, vec);
		return result;
	}
};

class AimResult
{
public:
};

struct Ray_2 {
	Vector origin;
	Vector dir;
	Ray_2(Vector o, Vector d) {
		origin = o;
		dir = d;
	}
	Ray_2() {}
};
