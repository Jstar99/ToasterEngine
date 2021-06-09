#pragma once
#ifndef ENGINE_H
#define ENGINE_H

//We want the engine class to be a SINGLETON(only one instance of this class)
class Engine
{
public:

	static Engine* GetIinstance()
	{
		
		return s_Instance = (s_Instance != nullptr) ? s_Instance : new Engine(); //this ensures we have only one instance of this class
	}

	void Update(float deltaTime);
	void Render();
	void Events();
	void Quit();

	bool Init();
	bool Clean();

	inline bool isRunning();




private:
	Engine();

	bool m_IsRunning;
	static Engine* s_Instance;

};


#endif // !ENGINE_H


