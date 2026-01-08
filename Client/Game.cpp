#include "pch.h"
#include "Game.h"
#include "Engine.h"
#include "SceneManager.h"

void Game::Init(const WindowInfo& info)
{
	GEngine->init(info);

	GET_SINGLE(SceneManager)->LoadScene(L"TestScene");
}

void Game::Update()
{
	GEngine->Update();
}
