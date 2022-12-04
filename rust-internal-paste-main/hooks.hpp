#pragma once
#include "memory/il2cpp.hpp"
#include "offsets.h"
#include <math.h>
#include "Keybind.h"
#include <Windows.h>
#include "rust/classes.hpp"
#include "gui/OnGUI.hpp"
#include "projectile.hpp"

namespace hooks
{
	namespace orig
	{
		static auto baseprojectile_launchprojectile = reinterpret_cast<void(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BaseProjectile"), _("LaunchProjectile"), 0, _(""), _(""))));
		static auto baseplayer_client_input = reinterpret_cast<void (*)(base_player*, input_state*)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BasePlayer"), _("ClientInput"), -1, _(""), _(""))));
		static auto BaseProjectile_OnSignal = reinterpret_cast<void (*)(base_projectile*, int, rust::classes::string)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BaseProjectile"), _("OnSignal"), 2, _(""), _(""))));
		static auto playerwalkmovement_client_input = reinterpret_cast<void (*)(playerwalkmovement*, uintptr_t, modelstate*)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("PlayerWalkMovement"), _("ClientInput"), -1, _(""), _(""))));
		static auto VisUpdateUsingCulling = reinterpret_cast<void (*)(void*, float, bool)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BasePlayer"), _("VisUpdateUsingCulling"), 1, _(""), _(""))));
		static auto DoFixedUpdate = reinterpret_cast<void (*)(playerwalkmovement*, modelstate*)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("PlayerWalkMovement"), _("DoFixedUpdate"), -1, _(""), _(""))));
		static auto blocksprint = reinterpret_cast<void (*)(base_player*, float)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BasePlayer"), _("BlockSprint"), 1, _(""), _(""))));
		static auto OnNetworkMessage = reinterpret_cast<void (*)(uintptr_t, uintptr_t)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Client"), _("OnNetworkMessage"), 1, _(""), _(""))));
		static auto CheckCapsule = reinterpret_cast<bool(*)(Vector, Vector, float, int, rust::classes::QueryTriggerInteraction)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Physics"), _("CheckCapsule"), 0, _(""), _("UnityEngine"))));
		static auto Run = reinterpret_cast<rust::classes::string(*)(uintptr_t, uintptr_t, rust::classes::string, uintptr_t)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("ConsoleSystem"), _("Run"), 3, _(""), _(""))));

		uintptr_t projectile_shoot_ptr;
		uintptr_t projectile_attack_ptr;
		uintptr_t player_walk_movement_ptr;
	}

	static auto set_sprinting = reinterpret_cast<void (*)(modelstate*, bool value)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("ModelState"), _("set_sprinting"), -1, _(""), _(""))));
	static auto draw_get = reinterpret_cast<void (*)()>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("DDraw"), _("Get"), 0, _(""), _("UnityEngine"))));
	static auto set_flying = reinterpret_cast<void (*)(modelstate * model_state, bool value)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("ModelState"), _("set_flying"), 1, _(""), _(""))));
	static auto GetSpeed = reinterpret_cast<float (*)(base_player * baseplayer, float running, float ducking)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BasePlayer"), _("GetSpeed"), 2, _(""), _(""))));
	static auto get_ducked = reinterpret_cast<bool (*)(modelstate*)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("ModelState"), _("get_ducked"), 0, _(""), _(""))));
	static auto IsSwimming = reinterpret_cast<bool (*)(base_player*)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BasePlayer"), _("IsSwimming"), 0, _(""), _(""))));
	static auto ServerRPC = reinterpret_cast<void (*)(uintptr_t, rust::classes::string funcName)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BaseEntity"), _("ServerRPC"), 1, _("funcName"), _(""), 1)));
	static auto OnLand = reinterpret_cast<void (*)(base_player*, float fVelocity)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BasePlayer"), _("OnLand"), 1, _("fVelocity"), _(""), 1)));
	static auto DoHit = reinterpret_cast<bool (*)(base_projectile*, HitTest*, Vector, Vector)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Projectile"), _("DoHit"), 4, _(""), _(""))));
	static auto Update = reinterpret_cast<void (*)(void* instance)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("PerformanceUI"), _("Update"), 0, _(""), _("Facepunch"))));
	static auto CheckCapsule = reinterpret_cast<bool(*)(Vector, Vector, float, int, rust::classes::QueryTriggerInteraction)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Physics"), _("CheckCapsule"), 0, _(""), _("UnityEngine"))));
	static auto getFixedTime = reinterpret_cast<float(*)()>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Time"), _("get_fixedTime"), 0, _(""), _("UnityEngine"))));
	static auto get_realtimeSinceStartup = reinterpret_cast<float(*)()>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Time"), _("get_realtimeSinceStartup"), 0, _(""), _("UnityEngine"))));

	void init_hooks() 
	{
		orig::baseprojectile_launchprojectile = reinterpret_cast<void(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BaseProjectile"), _("LaunchProjectile"), 0, _(""), _(""))));
		orig::OnNetworkMessage = reinterpret_cast<void (*)(uintptr_t, uintptr_t)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Client"), _("OnNetworkMessage"), 1, _(""), _(""))));
		orig::BaseProjectile_OnSignal = reinterpret_cast<void (*)(base_projectile*, int, rust::classes::string)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BaseProjectile"), _("OnSignal"), 2, _(""), _(""))));
		orig::baseplayer_client_input = reinterpret_cast<void (*)(base_player*, input_state*)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BasePlayer"), _("ClientInput"), -1, _(""), _(""))));
		orig::playerwalkmovement_client_input = reinterpret_cast<void (*)(playerwalkmovement*, uintptr_t, modelstate*)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("PlayerWalkMovement"), _("ClientInput"), -1, _(""), _(""))));
		orig::VisUpdateUsingCulling = reinterpret_cast<void (*)(void*, float, bool)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BasePlayer"), _("VisUpdateUsingCulling"), -1, _(""), _(""))));
		orig::DoFixedUpdate = reinterpret_cast<void (*)(playerwalkmovement*, modelstate*)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("PlayerWalkMovement"), _("DoFixedUpdate"), -1, _(""), _(""))));
		orig::blocksprint = reinterpret_cast<void (*)(base_player*, float)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BasePlayer"), _("BlockSprint"), 1, _(""), _(""))));

		get_realtimeSinceStartup = reinterpret_cast<float(*)()>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Time"), _("get_realtimeSinceStartup"), 0, _(""), _("UnityEngine"))));
		getFixedTime = reinterpret_cast<float(*)()>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Time"), _("get_fixedTime"), 0, _(""), _("UnityEngine"))));
		Update = reinterpret_cast<void (*)(void* instance)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("PerformanceUI"), _("Update"), 0, _(""), _("Facepunch"))));
		set_sprinting = reinterpret_cast<void (*)(modelstate*, bool value)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("ModelState"), _("set_sprinting"), -1, _(""), _(""))));
		draw_get = reinterpret_cast<void (*)()>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("DDraw"), _("Get"), 0, _(""), _("UnityEngine"))));
		set_flying = reinterpret_cast<void (*)(modelstate * model_state, bool value)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("ModelState"), _("set_flying"), 1, _(""), _(""))));
		GetSpeed = reinterpret_cast<float (*)(base_player * baseplayer, float running, float ducking)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BasePlayer"), _("GetSpeed"), 2, _(""), _(""))));
		get_ducked = reinterpret_cast<bool (*)(modelstate*)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("ModelState"), _("get_ducked"), 0, _(""), _(""))));
		IsSwimming = reinterpret_cast<bool (*)(base_player*)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BasePlayer"), _("IsSwimming"), 0, _(""), _(""))));
		ServerRPC = ServerRPC = reinterpret_cast<void (*)(uintptr_t, rust::classes::string funcName)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BaseEntity"), _("ServerRPC"), 1, _("funcName"), _(""), 1)));
		OnLand = reinterpret_cast<void (*)(base_player*, float fVelocity)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BasePlayer"), _("OnLand"), 1, _("fVelocity"), _(""), 1)));
		DoHit = reinterpret_cast<bool (*)(base_projectile*, HitTest*, Vector, Vector)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Projectile"), _("DoHit"), 4, _(""), _(""))));
		CheckCapsule = reinterpret_cast<bool(*)(Vector, Vector, float, int, rust::classes::QueryTriggerInteraction)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Physics"), _("CheckCapsule"), 0, _(""), _("UnityEngine"))));
	}

	static bool wakeup{ true };
	uintptr_t game_object;
	void hk_performance_ui_update(void* instance)
	{
		if (wakeup)
		{
			game_object = il2cpp::methods::object_new(il2cpp::init_class(_("GameObject"), _("UnityEngine")));
			gui::methods::create(game_object, _(L""));
			gui::methods::add_component(game_object, il2cpp::type_object(_(""), _("DevControls")));
			gui::methods::dont_destroy_on_load(game_object);
			wakeup = false;
		}
		Update(instance);
	}

	void __fastcall clientinput(base_player* baseplayer, input_state* state)
	{	
		if (baseplayer)
		{

		}

		draw_get();
		orig::baseplayer_client_input(baseplayer, state);
	}
}

