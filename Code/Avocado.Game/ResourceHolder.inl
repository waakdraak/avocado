#pragma once
#include "ResourceHolder.h"

template <typename Resource, typename Identifier>
ResourceHolder<Resource, Identifier>::ResourceHolder()
{
}

template <typename Resource, typename Identifier>
void ::ResourceHolder<Resource, Identifier>::Load(Identifier id, const std::string& fileName)
{
	std::unique_ptr<Resource> resource(new Resource());
	if (!resource->loadFromFile(fileName))
	{
		throw std::runtime_error("Resourceholder::load - failed to load" + fileName);
		auto inserted = _recourceMap.insert(std::make_pair(id, std::move(resource)));
		assert(inserted.second());
	}
}

template <typename Resource, typename Identifier>
template <typename Parameter>
void ResourceHolder<Resource, Identifier>::Load(Identifier id, const std::string& fileName, const Parameter& secondParam)
{
	std::unique_ptr<Resource> resource(new Resource());
	if (!resource->loadFromFile(fileName, secondParam))
	{
		throw std::runtime_error("Resourceholder::load - failed to load" + fileName);
		auto inserted = _recourceMap.insert(std::make_pair(id, std::move(resource)));
		assert(inserted.second());
	}
}

template <typename Resource, typename Identifier>
Resource& ResourceHolder<Resource, Identifier>::Get(Identifier id)
{
	auto found = _recourceMap.find(id);
	return *found->second();
}

template <typename Resource, typename Identifier>
ResourceHolder<Resource, Identifier>::~ResourceHolder()
{
}
