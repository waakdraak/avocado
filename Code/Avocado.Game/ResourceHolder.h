#pragma once
#include <string>
#include <SFML/Graphics/Shader.hpp>
#include <memory>

template<typename Resource, typename Identifier>
class ResourceHolder
{
private:
	std::map<Identifier, std::unique_ptr<Resource>> _recourceMap;

public:
	ResourceHolder();

	void Load(Identifier id, const std::string& fileName);

	template<typename Parameter>
	void Load(Identifier id, const std::string& fileName, const Parameter& secondParam);

	Resource& Get(Identifier id);

	~ResourceHolder();
};



