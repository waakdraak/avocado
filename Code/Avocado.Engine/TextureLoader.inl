#pragma once
#include "TextureLoader.h"

namespace  Graphics {
	template <typename T>
	TextureLoader<T>::TextureLoader(T texture) : _texture(texture)
	{
	}

	template <typename T>
	void TextureLoader<T>::LoadFromFile(const std::string& fileName)
	{
		_texture.LoadFromFile(fileName);
	}

	template <typename T>
	TextureLoader<T>::~TextureLoader()
	{
	}
}
