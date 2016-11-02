#pragma once
#include <string>

namespace  Graphics {

	template<typename T>
	class TextureLoader
	{
	private:
		T _texture;

	public:
		TextureLoader(T texture);

		virtual void LoadFromFile(const std::string& fileName);

		~TextureLoader();
	};


}
