#include "GameBoard.h"

#include "GameEngine/GameEngineMain.h"


using namespace Game;

GameBoard::GameBoard()
{
	CreatePlayer();
}


GameBoard::~GameBoard()
{

}


void GameBoard::Update()
{	
	
}

void GameBoard::CreatePlayer()
{
    m_player = new GameEngine::Entity();                            // <-- Create new entity
    GameEngine::GameEngineMain::GetInstance()->AddEntity(m_player); // <-- Add the entity to the engine
}


class GameBoard
{
    public:
	GameBoard();
	virtual ~GameBoard();

	void Update();		
	bool IsGameOver() { return false; }

    private:
	void CreatePlayer();          // <-- Added Function
	GameEngine::Entity* m_player; // <-- Added Member
};