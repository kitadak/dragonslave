#pragma once

#include "geometry_manager.hpp"
#include "material_manager.hpp"
#include "model_manager.hpp"

#include "model_loader.hpp"

namespace dragonslave {


class AssetManager 
{
public:
    GeometryManager geometry;
    MaterialManager material;
    ModelManager model;

    ImageManager image;

    AssetManager();
    virtual ~AssetManager();

    void initiate(Graphics* graphics);
    void terminate();

private:
    ImageLoader image_loader_;
    ModelLoader model_loader_;
};


}