#include "RandGen.h"
#include <random>

static std::mt19937 mersenneTwisterRand(std::mt19937::default_seed);

int RandGen::RandInt(){ return mersenneTwisterRand(); }

float RandGen::RandFloat(){ return static_cast<float>(mersenneTwisterRand()) / static_cast<float>(0xFFFFFFFF); }