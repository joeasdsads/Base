#pragma once

#include "rust/features/esp.hpp"
#include "rust/classes.hpp"

#include <windows.h>
#include "offsets.h"

class Projectile
{
public:
	Vector swimScale()
	{
		return mem::read<Vector>(reinterpret_cast<uintptr_t>(this) + 0xb4);
	}

	Vector tumbleAxis()
	{
		return mem::read<Vector>(reinterpret_cast<uintptr_t>(this) + 0xa8);
	}

	float tumbleSpeed()
	{
		return mem::read<float>(reinterpret_cast<uintptr_t>(this) + 0xa4);
	}

	float closeFlybyDistance()
	{
		return mem::read<float>(reinterpret_cast<uintptr_t>(this) + 0xa0);
	}

	void initialVelocity(Vector d) { safe_write(this + O::Projectile::initialVelocity, d, Vector); }
	Vector initialVelocity() { return safe_read(this + O::Projectile::initialVelocity, Vector); }

	Vector sentPosition() { return safe_read(this + O::Projectile::sentPosition, Vector); }
	void sentPosition(Vector d) { safe_write(this + O::Projectile::sentPosition, d, Vector); }

	void currentVelocity(Vector d) { safe_write(this + O::Projectile::currentVelocity, d, Vector); }
	Vector currentVelocity() { return safe_read(this + O::Projectile::currentVelocity, Vector); }

	float drag() { return safe_read(this + O::Projectile::drag, float); }

	float previoustraveledTime() { return safe_read(this + O::Projectile::previousTraveledTime, float); }
	void previoustraveledTime(float d) { safe_write(this + O::Projectile::previousTraveledTime, d, float); }

	float gravityModifier() { return safe_read(this + O::Projectile::gravityModifier, float); }
	void integrity(float f) { safe_write(this + O::Projectile::integrity, f, float); }
	float integrity() { return safe_read(this + O::Projectile::integrity, float); }
	float maxDistance() { return safe_read(this + O::Projectile::maxDistance, float); }
	Vector currentPosition() { return safe_read(this + O::Projectile::currentPosition, Vector); }
	void currentPosition(Vector d) { safe_write(this + O::Projectile::currentPosition, d, Vector); }

	void partialTime(float f) { safe_write(this + O::Projectile::tumbleSpeed, f, float); }
	float partialTime() { return safe_read(this + O::Projectile::tumbleSpeed, float); }
	Vector prevSentVelocity() { return safe_read(this + O::Projectile::tumbleAxis, Vector); }
	void prevSentVelocity(Vector d) { safe_write(this + O::Projectile::tumbleAxis, d, Vector); }
	float sentTraveledTime() { return safe_read(this + O::Projectile::closeFlybyDistance, float); }
	void sentTraveledTime(float d) { safe_write(this + O::Projectile::closeFlybyDistance, d, float); }
	float lastUpdateTime() { return safe_read(this + O::Projectile::ricochetChance, float); }
	void lastUpdateTime(float d) { safe_write(this + O::Projectile::ricochetChance, d, float); }
	Vector prevSentPosition() { return safe_read(this + O::Projectile::swimScale, Vector); }
	void prevSentPosition(Vector d) { safe_write(this + O::Projectile::swimScale, d, Vector); }
	bool needsLOS() { return safe_read(this + O::Projectile::createDecals, bool); }
	void needsLOS(bool d) { safe_write(this + O::Projectile::createDecals, d, bool); }

	float traveledDistance() { return safe_read(this + O::Projectile::traveledDistance, float); }
	void traveledDistance(float d) { safe_write(this + O::Projectile::traveledDistance, d, float); }

	float initialDistance() { return safe_read(this + O::Projectile::initialDistance, float); }

	float traveledTime() { return safe_read(this + O::Projectile::traveledTime, float); }
	void traveledTime(float d) { safe_write(this + O::Projectile::traveledTime, d, float); }

	Vector previousPosition() { return safe_read(this + O::Projectile::previousPosition, Vector); }
	void previousPosition(Vector d) { safe_write(this + O::Projectile::previousPosition, d, Vector); }

	void hitTest(DWORD64 d) { safe_write(this + O::Projectile::hitTest, d, DWORD64); }
	DWORD64 hitTest() { return safe_read(this + O::Projectile::hitTest, DWORD64); }
	DWORD64 damageProperties() { return safe_read(this + O::Projectile::damageProperties, DWORD64); }

	int projectileID() { return safe_read(this + O::Projectile::projectileID, int); }

	base_player* owner() { return (base_player*)safe_read(this + O::Projectile::owner, DWORD64); }
	DWORD64 sourceWeaponPrefab() { return safe_read(this + O::Projectile::sourceWeaponPrefab, DWORD64); }

	DWORD64 damageDistances() { return safe_read(this + O::Projectile::damageDistances, DWORD64); }

	bool invisible() { return safe_read(this + O::Projectile::invisible, bool); }

	float launchTime() { return safe_read(this + O::Projectile::launchTime, float); }
	void launchTime(float d) { safe_write(this + O::Projectile::launchTime, d, float); }

	bool IsAlive() {
		return (this->integrity() > 0.001f && this->traveledDistance() < this->maxDistance() && this->traveledTime() < 8);
	}

	struct TraceInfo {

		bool valid; // 0x10
		float distance; // 0x14
		DWORD64 entity; // 0x18   //BasePlayer
		Vector point; // 0x20
		Vector normal; // 0x2C
		DWORD64/*Transform*/ bone; // 0x38
		DWORD64 material; // 0x40
		unsigned int partID; // 0x48
		DWORD64 collider; // 0x50
	};

};