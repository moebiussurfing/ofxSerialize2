#pragma once

#include "ofxSerialize2/Gui.h"
#include "ofxSerialize2/Serializer.h"

#define PARAM_DECLARE(NAME, ...) bool paramDeclareConstructor \
{ [this] { this->setName(NAME), this->add(__VA_ARGS__); return true; }() };
