#include "pch.h"
#include "Game.h"
#include "Engine.h"

void Game::Init(const WindowInfo& info)
{
	GEngine->init(info);
}

void Game::Update()
{
	GEngine->Render();
}
