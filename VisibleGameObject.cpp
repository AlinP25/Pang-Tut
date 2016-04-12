#include "VisibleGameObject.h"


VisibleGameObject::VisibleGameObject() : _isLoaded(true){
    _isLoaded = true;
}


VisibleGameObject::~VisibleGameObject() {
}

void VisibleGameObject::Load(std::string filename) {
    if (_texture.loadFromFile(filename) == false) {
        _filename = "";
        _isLoaded = false;
    }
    else {
        _filename = filename;
        _sprite.setTexture(_texture);
        _isLoaded = true;
    }
}

void VisibleGameObject::Draw(sf::RenderWindow& window) {
    if (_isLoaded) 
        window.draw(_sprite);
}

void VisibleGameObject::SetPosition(float x, float y) {
    _sprite.setPosition(x, y);
}