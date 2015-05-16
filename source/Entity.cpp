#include "Entity.h"
#include "EntityManager.h"

Entity::Entity(const Vector2D &location, u32 backgroundLevel, bool isAlive, bool isVisible)
	: _position(location), _isVisible(isVisible)
{
	EntityManager::RegisterEntity(this);
}

u32 Entity::EvaluatePositionScore() const
{
	return _position.GetX() + _position.GetY() + 0x200 * (3 - _object->GetPriority());
}

bool Entity::Update()
{
	if (_object)
	{
		_object->SetPosition(_position);
	}
	return true;
}
