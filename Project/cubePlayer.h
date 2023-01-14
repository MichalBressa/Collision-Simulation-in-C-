#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <glm/glm.hpp>
#include "GameObject.h"
#include "Collider.h"
#include "AABB.h"
	class cubePlayer : public GameObject
	{
	public:
		//float speed;
		void Draw();
		void Update(float deltaTime);
		glm::vec3 GetPosition();
		float GetRadius();



		~cubePlayer();
		cubePlayer(float _mass, glm::vec3 _position) : GameObject(_mass, _position)
		{
			colliderPtr = new AABB(glm::vec3(particlePtr->position.x, particlePtr->position.y, particlePtr->position.z), glm::vec3(radius, radius, radius));
			// no need to add it to vector or other thing
			// in gameengine go through all objects, check if it has collider if so continue
		}

		//Constructor(that takes a mass, a speed and position value)
		//- this should call the GameObject constructor, filling those bits of data too

	private:
		float radius = 1.f;


	};

