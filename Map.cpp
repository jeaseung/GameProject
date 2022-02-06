
#include "Map.h"

Map::Map()
{
}

Map::~Map()
{
}

void Map::DrawMap()
{
	for (int i = 0; i < Row*Column; i++)
	{
		if ((i / Row == 0)||(i/Row==Column-1)||(i%Row==0)||(i%Row==Row-1))
		{
			ActorList.push_back(wall);
		}
		else
		{
			ActorList.push_back(floor);
		}

	}



	for (int i = 0; i < ActorList.size(); i++)
	{
		cout << ActorList[i]->GetShape();

		if (i % Row == Row-1)
		{
			cout << endl;
		}
	}
		
		/*for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (map[i][j] == "Wall")
				{
					cout << wall->GetShape();
				}
				else if (map[i][j] == "Floor")
				{
					cout << floor->GetShape();
				}
			
			}
			cout << endl;
		}*/

	
}
