#include "SaveGameFacade.hpp"
#include "GameState.hpp"

int	main(void)
{
	SaveGameFacade save;
	save.save(GameState{3, 27}, "save.dat");
}
