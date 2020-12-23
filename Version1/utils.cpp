//
//  utils.cpp
//  handout
//
//  Created by Jean-Yves Hervé on 2020-12-01.
//

#include "dataTypes.h"

std::string dirStr(const Direction& dir)
{
	std::string outStr;
	switch (dir)
	{
		case NORTH:
		outStr = "north";
		break;
		
		case WEST:
		outStr = "west";
		break;
		
		case SOUTH:
		outStr = "south";
		break;
		
		case EAST:
		outStr = "east";
		break;
		
		default:
		outStr = "";
		break;
	}
	return outStr;
}


std::string typeStr(const SquareType& type)
{
	std::string outStr;
	switch (type)
	{
		case FREE_SQUARE:
		outStr = "free square";
		break;
		
		case EXIT:
		outStr = "exit";
		break;
		
		case WALL:
		outStr = "wall";
		break;
		
		case VERTICAL_PARTITION:
		outStr = "vertical partition";
		break;
		
		case HORIZONTAL_PARTITION:
		outStr = "horizontal partition";
		break;
		
		case TRAVELER:
		outStr = "traveler";
		break;
		
		default:
		outStr = "";
	}
	return outStr;
}

