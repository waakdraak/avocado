#pragma once

enum TileColour
{
	Black,
	White
};

class Tile
{

private:
	int horizontalStartPosition;
	int verticalStartPosition;
	int width;
	int height;

public:
	Tile(int horizontalStartPosition, int verticalStartPosition, int width, int height);



	~Tile();
};

