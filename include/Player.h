//
// Created by Tousif Zaman on 6/17/2020.
//
#pragma once

#ifndef IGLSYNTH_CMAKE_PLAYER_H
#define IGLSYNTH_CMAKE_PLAYER_H

#include <iostream>
#include <string>

class IPlayer{
public:
    // destructor; keep virtual for avoiding memory leak due to derived objects
    virtual ~IPlayer(){};
    // public methods
    virtual void setHealth(unsigned int health) = 0;
    virtual unsigned int getHealth() = 0;
//    virtual unsigned int getResource() = 0;
};

class Player1: public IPlayer{
protected:
    unsigned int m_health = 100;
    std::string m_name = "Random P1 dude";

public:
    Player1();
    Player1(unsigned int health, std::string name);
    ~Player1();
//    virtual ~Player1();
    void setHealth(unsigned int health) override;
    unsigned int getHealth() override;
    void setName(std::string name);
    std::string getName();
};

class Player2: public IPlayer{
protected:
    unsigned int m_health = 100;
    std::string m_name = "Random P2 guy";

public:
    Player2();
    Player2(unsigned int health, std::string name);
    virtual ~Player2();
    virtual void setHealth(unsigned int health);
    virtual unsigned int getHealth();
    virtual void setName(std::string name);
    virtual std::string getName();
};

#endif //IGLSYNTH_CMAKE_PLAYER_H
