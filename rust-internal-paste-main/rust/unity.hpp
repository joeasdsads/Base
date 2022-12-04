#pragma once

#include "../memory/il2cpp.hpp"
#include "rust.hpp"

namespace unity 
{
	uintptr_t bundle;
	uintptr_t materialbundle;

	static auto set_lockstate = reinterpret_cast<void(*)(rust::classes::CursorLockMode)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Cursor"), _("set_lockState"), 1, _("value"), _("UnityEngine"))));

	static auto get_width = reinterpret_cast<int (*)()>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Screen"), _("get_width"), 0, _(""), _("UnityEngine"))));

	static auto get_height = reinterpret_cast<int (*)()>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Screen"), _("get_height"), 0, _(""), _("UnityEngine"))));

	static auto get_main_camera = reinterpret_cast<uintptr_t(*)()>(il2cpp::methods::resolve_icall(_("UnityEngine.Camera::get_main()")));

	static auto IgnoreLayerCollision = reinterpret_cast<void(*)(rust::classes::layer, rust::classes::layer, bool)>(il2cpp::methods::resolve_icall(_("UnityEngine.Physics::IgnoreLayerCollision()")));

	static auto get_keyCode = reinterpret_cast<rust::classes::KeyCode(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Event"), _("get_keyCode"), 0, _(""), _("UnityEngine"))));

	static auto GetKeyNum = reinterpret_cast<bool(*)(int)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Input"), _("GetKeyInt"), 1, _(""), _("UnityEngine"))));

	static auto GetKey = reinterpret_cast<bool(*)(rust::classes::KeyCode)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Input"), _("GetKeyInt"), 1, _(""), _("UnityEngine"))));

	static auto set_visible = reinterpret_cast<void(*)(bool)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Cursor"), _("set_visible"), 1, _("value"), _("UnityEngine"))));

	static auto get_activemodel = reinterpret_cast<uintptr_t(*)()>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BaseViewModel"), _("get_ActiveModel"), 0, _(""), _(""))));

	static auto GetComponent = reinterpret_cast<rust::list<uintptr_t>*(*)(uintptr_t self, uintptr_t type)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Component"), _("GetComponent"), 0, _(""), _("UnityEngine"))));

	static auto GetGameObjectComponent = reinterpret_cast<rust::list<uintptr_t>*(*)(uintptr_t self, uintptr_t type)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Component"), _("GetComponent"), 0, _(""), _("UnityEngine"))));

	static auto GetComponentsInChildren = reinterpret_cast<rust::list<uintptr_t>*(*)(uintptr_t self, uintptr_t type)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Component"), _("GetComponentsInChildren"), 0, _(""), _("UnityEngine"))));
	

	void init_unity() 
	{

		GetComponent = reinterpret_cast<rust::list<uintptr_t>*(*)(uintptr_t self, uintptr_t type)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Component"), _("GetComponent"), 0, _(""), _("UnityEngine"))));
				
		GetComponentsInChildren = reinterpret_cast<rust::list<uintptr_t>*(*)(uintptr_t self, uintptr_t type)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Component"), _("GetComponentsInChildren"), 0, _(""), _("UnityEngine"))));

		get_activemodel = reinterpret_cast<uintptr_t(*)()>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("BaseViewModel"), _("get_ActiveModel"), 0, _(""), _(""))));

		set_lockstate = reinterpret_cast<void(*)(rust::classes::CursorLockMode)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Cursor"), _("set_lockState"), 1, _("value"), _("UnityEngine"))));

		set_visible = reinterpret_cast<void(*)(bool)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Cursor"), _("set_visible"), 1, _("value"), _("UnityEngine"))));

		get_width = reinterpret_cast<int (*)()>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Screen"), _("get_width"), 0, _(""), _("UnityEngine"))));

		get_height = reinterpret_cast<int (*)()>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Screen"), _("get_height"), 0, _(""), _("UnityEngine"))));

		get_main_camera = reinterpret_cast<uintptr_t(*)()>(il2cpp::methods::resolve_icall(_("UnityEngine.Camera::get_main()")));

		IgnoreLayerCollision = reinterpret_cast<void(*)(rust::classes::layer, rust::classes::layer, bool)>(il2cpp::methods::resolve_icall(_("UnityEngine.Physics::IgnoreLayerCollision()")));

		get_keyCode = reinterpret_cast<rust::classes::KeyCode(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Event"), _("get_keyCode"), 0, _(""), _("UnityEngine"))));

		GetKeyNum = reinterpret_cast<bool(*)(int)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Input"), _("GetKeyInt"), 1, _(""), _("UnityEngine"))));
		GetKey = reinterpret_cast<bool(*)(rust::classes::KeyCode)>(*reinterpret_cast<uintptr_t*>(il2cpp::method(_("Input"), _("GetKeyInt"), 1, _(""), _("UnityEngine"))));
	}

	uintptr_t GetType(const char* space, const char* name) {
		return il2cpp::type_object(space, name);
	}

	auto camera = unity::get_main_camera();

	VMatrix get_view_matrix() {
		if (!camera) {
			camera = unity::get_main_camera();
		}

		auto camera_ = mem::read<uintptr_t>(camera + 0x10);
		if (!camera_) {
			camera = unity::get_main_camera();
			return {};
		}

		auto matrix = mem::read<VMatrix>(camera_ + 0x2E4);
		if (!matrix.m) {
			camera = unity::get_main_camera();
			return {};
		}

		return matrix;
	}

	Vector get_camera_pos() {
		if (!camera) {
			camera = unity::get_main_camera();
		}

		auto camera_ = mem::read<uintptr_t>(camera + 0x10);
		if (!camera_) {
			camera = unity::get_main_camera();
			return {};
		}	

		auto matrix = mem::read<Vector>(camera_ + 0x42C);
		if (!matrix.x || !matrix.y) {
			camera = unity::get_main_camera();
			return {};
		}


		return matrix;
	}
	float get_fov(Vector Pos);
}