#pragma once
#include <array>
#include <cstdint>
#include "../../memory/il2cpp.hpp"
#include "../classes.hpp"
#include "../rust.hpp"
#include "Windows.h"

namespace gui222
{
	class Color {
	public:
		float r;
		float g;
		float b;
		float a;

		Color()
		{
			r = 0;
			g = 0;
			b = 0;
			a = 0;
		}

		Color(float r, float g, float b, float a)
		{
			this->r = r;
			this->g = g;
			this->b = b;
			this->a = a;
		}

		Color GetUnityColor()
		{
			return Color(r / 255.0f, g / 255.0f, b / 255.0f, a / 255.0f);
		}
	};

}

namespace esp {
	uintptr_t client_entities;
	VMatrix matrix;

	struct bounds_t {
		float left, right, top, bottom;
	};

	struct rust_str
	{
		char zpad[128];
	};

	bool out_w2s(const Vector& position, vector2& screen_pos) {
		if (!matrix.m) {
			return false;
		}

		vector2 out;
		const auto temp = matrix.transpose();

		auto translation_vector = Vector{ temp[3][0], temp[3][1], temp[3][2] };
		auto up = Vector{ temp[1][0], temp[1][1], temp[1][2] };
		auto right = Vector{ temp[0][0], temp[0][1], temp[0][2] };

		float w = translation_vector.Dot(position) + temp[3][3];

		if (w < 0.098f) {
			return false;
		}

		float x = up.Dot(position) + temp._24;
		float y = right.Dot(position) + temp._14;

		out.x = (static_cast<float>(unity::get_width()) / 2) * (1 + y / w);
		out.y = (static_cast<float>(unity::get_height()) / 2) * (1 - x / w);

		screen_pos = out;

		return true;
	}

	void ESPLoop() 
	{
		local_player = mem::read<base_player*>(mem::read<uintptr_t>(mem::read<uintptr_t>(mem::game_assembly_base + 0x364A070) + 0xB8) + 0x0);

		uintptr_t ClientEntities = il2cpp::value(_("BaseNetworkable"), _("clientEntities"), false); //get with gameassembly pointer
		if (!ClientEntities) return;
		uintptr_t ClientEntities_list = mem::read<uintptr_t>(ClientEntities + 0x10);
		if (!ClientEntities_list) return;
		uintptr_t ClientEntities_values = mem::read<uintptr_t>(ClientEntities_list + 0x28);
		if (!ClientEntities_values) return;

		int EntityCount = mem::read<int>(ClientEntities_values + 0x10);
		if (!EntityCount) return;

		uintptr_t EntityBuffer = mem::read<uintptr_t>(ClientEntities_values + 0x18);
		if (!EntityBuffer) return;

		for (int i = 0; i < EntityCount; i++)
		{
			uintptr_t Entity = mem::read<uintptr_t>(EntityBuffer + 0x20 + (i * 0x8)); if (Entity <= 100000) continue;
			uintptr_t Object = mem::read<uintptr_t>(Entity + 0x10); if (Object <= 100000) continue;
			uintptr_t ObjectClass = mem::read<uintptr_t>(Object + 0x30); if (ObjectClass <= 100000) continue;
			pUncStr name = mem::read<pUncStr>(ObjectClass + 0x60); if (!name) continue;
			char* buff = name->stub;
			WORD tag = *reinterpret_cast<WORD*>(ObjectClass + 0x54);
		}
		return;
	}
}


